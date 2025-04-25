/*************************************************************
******************* INCLUDES & DEFINITIONS *******************
**************************************************************/

#include <Arduino.h>
#include <TFT_eSPI.h>
#include <WiFiManager.h>
#include <ESP32Ping.h>

#include "LV_Helper.h"
#include "ui.h"
#include "pins.h"

// Initialize TFT display
TFT_eSPI lcd = TFT_eSPI();

// IP address strings
String macString = "";
String ipString = "";
String gwString = "";

// Frame rate control
const unsigned long frameInterval = 33; // ~30 FPS (1000ms/30 = 33.33ms per frame)
unsigned long lastFrameTime = 0;

// Ping tracking variables
static unsigned long pingTotal = 0;
static unsigned int pingCount = 0;
static unsigned long pingAverage = 0;

// Stored CIDR
static byte lastCIDR = 0;


/*************************************************************
********************** HELPER FUNCTIONS **********************
**************************************************************/

// Function to convert subnet mask to CIDR notation
byte calculateCIDR(IPAddress subnet) {
  byte cidr = 0;
  
  // Process each octet of the subnet mask (4 total)
  for (byte i = 0; i < 4; i++) {
    // Check if this octet is all 1s (255 in decimal)
    if (subnet[i] == 0xFF) {
      cidr += 8; // add 8 network bits for a full octet
    }
    // For partial octets, we need to count the leading 1s
    else {
      byte mask = subnet[i]; // get the current octet
      
      // Check each bit from left to right (MSB first)
      while (mask & 0x80) { // 0x80 = 10000000 in binary (checks leftmost bit)
        cidr++;             // increment count for each set bit
        mask <<= 1;         // shift left to check the next bit
      }
      // Once we hit a 0 bit, we're done (subnet masks are contiguous 1s)
      break;
    }
  }
  // Return the total count of network bits
  return cidr;
}

// Function to check for a configuration portal trigger (both buttons held for 5 seconds)
bool configPortalTrigger() {
  static unsigned long pressStartTime = 0;
  static bool bothPressed = false;
  
  bool bootBtnPressed = (digitalRead(PIN_BUTTON_1) == LOW);
  bool keyBtnPressed = (digitalRead(PIN_BUTTON_2) == LOW);
  
  if (bootBtnPressed && keyBtnPressed) {
    if (!bothPressed) {
      // First detection of both buttons pressed
      bothPressed = true;
      pressStartTime = millis();
    }
    else if (millis() - pressStartTime >= 5000) {
      // Both buttons held for 5 seconds
      bothPressed = false;
      return true;
    }
  }
  else {
    bothPressed = false;
  }
  return false;
}

// Function to start WiFiManager configuration portal
void startConfigPortal() {
  // Clear the screen and display instructions
  lcd.fillScreen(TFT_BLACK);
  lcd.setTextColor(0x7BCF, TFT_BLACK); // converted from #787878
  lcd.setCursor(0, 0);
  
  lcd.println("Entered Wi-Fi Configuration Mode\n\n");
  lcd.println("A Wi-Fi network has been created:\n");
  lcd.println("SSID:     T-Display-S3\n");
  lcd.println("Password: 123456789\n\n");
  lcd.println("Connect and navigate to: 192.168.4.1\n");
  lcd.println("in a browser to setup your Wi-Fi.\n\n");

  // Create WiFiManager instance with custom parameters
  WiFiManager wifiManager;
  
  wifiManager.setConnectTimeout(30);
  wifiManager.setConfigPortalTimeout(0);
  
  if (!wifiManager.startConfigPortal("T-Display-S3", "123456789")) {
    lcd.println("Failed to connect, rebooting...\n");
    delay(3000);
  }
  else {
    lcd.println("Configuration saved, rebooting...");
    delay(2000);
    ESP.restart();
  }
}

// Function to check and maintain Wi-Fi connection
void checkWiFiStatus() {
  // Wi-Fi tracking variables
  static unsigned long lastWiFiUpdate = 0;
  static unsigned long lastFlashTime = 0;
  static bool flashState = false;
  const unsigned long wifiUpdateInterval = 1000;
  const unsigned long flashInterval = 1000;

  // RSSI tracking variables
  static int rssiMin = 0;
  static int rssiMax = -100;
  static int rssiReadings[5] = {0};
  static int rssiIndex = 0;
  static bool readingsFilled = false;
  static int rssiAverage = 0;
  static unsigned long lastRssiUpdate = 0;
  const unsigned long rssiUpdateInterval = 1000;
  
  // Check Wi-Fi status
  if (millis() - lastWiFiUpdate >= wifiUpdateInterval) {
    if (WiFi.status() == WL_CONNECTED) {
      int rssi = WiFi.RSSI();

      // RSSI tracking logic - every second
      if (millis() - lastRssiUpdate >= rssiUpdateInterval) {
        // Store current reading in circular buffer
        rssiReadings[rssiIndex] = rssi;
        rssiIndex = (rssiIndex + 1) % 5;
        
        // Mark buffer as filled after first complete cycle
        if (!readingsFilled && rssiIndex == 0) {
          readingsFilled = true;
        }
        
        // Calculate average of available readings
        int sum = 0;
        int count = readingsFilled ? 5 : rssiIndex;
        for (int i = 0; i < count; i++) {
          sum += rssiReadings[i];
        }
        rssiAverage = sum / count;
        
        // Update min/max (only when we have full readings)
        if (readingsFilled) {
          if (rssi < rssiMin) {
            rssiMin = rssi;
            char minStr[10];
            snprintf(minStr, sizeof(minStr), "%02d dBm", rssiMin);
            lv_label_set_text(ui_RSSImin, minStr);
          }
          
          if (rssi > rssiMax) {
            rssiMax = rssi;
            char maxStr[10];
            snprintf(maxStr, sizeof(maxStr), "%02d dBm", rssiMax);
            lv_label_set_text(ui_RSSImax, maxStr);
          }
        }
        
        // Update average label
        char avgStr[10];
        snprintf(avgStr, sizeof(avgStr), "%02d dBm", rssiAverage);
        lv_label_set_text(ui_RSSIave, avgStr);
        
        lastRssiUpdate = millis();
      }

      // Set status
      lv_label_set_text(ui_connected, "CONNECTED");
      
      // Update RSSI dBm value
      char rssiStr[10];
      snprintf(rssiStr, sizeof(rssiStr), "%d", rssi);
      lv_label_set_text(ui_RSSIval, rssiStr);

      // Update MAC address label
      macString = WiFi.macAddress();
      lv_label_set_text(ui_MACadd, macString.c_str());

      // Update IP address label
      ipString = WiFi.localIP().toString();
      IPAddress subnet = WiFi.subnetMask();
      byte currentCIDR = calculateCIDR(subnet);

      // Update if CIDR changed or we don't have an IP string yet
      if (currentCIDR != lastCIDR || ipString.length() == 0) {
        ipString += "/";
        ipString += String(currentCIDR);
        lv_label_set_text(ui_IPadd, ipString.c_str());
        lastCIDR = currentCIDR;
      }

      // Update Gateway address label
      gwString = WiFi.gatewayIP().toString();
      lv_label_set_text(ui_GWadd, gwString.c_str());

      // Determine position for red bar based on signal strength
      lv_coord_t yPos = 0;
      bool shouldFlash = false;
      
      if (rssi >= -50) {
        yPos = -22; // Best
      } 
      else if (rssi >= -60) {
        yPos = -4; // Good
      }
      else if (rssi >= -70) {
        yPos = 14; // Fair
      }
      else if (rssi >= -80) {
        yPos = 32; // Weak
      }
      else if (rssi >= -90) {
        yPos = 50; // Poor
      }
      else {
        yPos = 68; // Bad
        shouldFlash = true;
      }

      // Handle flashing for bad signal
      if (shouldFlash) {
        if (millis() - lastFlashTime >= flashInterval) {
          flashState = !flashState;
          lastFlashTime = millis();
        }
        // Hide the bar when flashState is false
        if (!flashState) {
          lv_obj_add_flag(ui_RSSIBar, LV_OBJ_FLAG_HIDDEN);
        }
        else {
          lv_obj_clear_flag(ui_RSSIBar, LV_OBJ_FLAG_HIDDEN);
        }
      }
      else {
        // Ensure bar is visible for non-bad signals
        lv_obj_clear_flag(ui_RSSIBar, LV_OBJ_FLAG_HIDDEN);
        flashState = false;
      }

      // Only update position if not in flashing state or if flashing is active
      if (!shouldFlash || flashState) {
        lv_obj_set_pos(ui_RSSIBar, -13, yPos);
      }
    }
    // Wi-Fi disconnected
    else {
      // Reset RSSI variables
      memset(rssiReadings, 0, sizeof(rssiReadings));
      rssiIndex = 0;
      readingsFilled = false;
      rssiAverage = 0;
      rssiMin = 0;
      rssiMax = -100;
      
      // Reset ping variables
      pingTotal = 0;
      pingCount = 0;
      pingAverage = 0;

      // Update all labels
      lv_label_set_text(ui_RSSIave, "-00 dBm");
      lv_label_set_text(ui_RSSImax, "-00 dBm");
      lv_label_set_text(ui_RSSImin, "-00 dBm");
      lv_label_set_text(ui_connected, "DISCONNECTED");
      lv_label_set_text(ui_RSSIval, "-00");
      lv_obj_add_flag(ui_RSSIBar, LV_OBJ_FLAG_HIDDEN);
      lv_label_set_text(ui_PingTime, "---- ms");
      
      // Attempt reconnect every 10 seconds
      static unsigned long lastReconnectAttempt = 0;
      if (millis() - lastReconnectAttempt >= 10000) {
        lastReconnectAttempt = millis();
        WiFi.reconnect();
      }
    }
    lastWiFiUpdate = millis();
  }
}

// Function to check ping time
void checkPingTime() {
  static unsigned long lastPingUpdate = 0;
  const unsigned long pingUpdateInterval = 1000;
  const char* pingTarget = "www.google.com";
  
  // Update the display every second
  if (millis() - lastPingUpdate >= pingUpdateInterval) {
    lastPingUpdate = millis();
    
    if (WiFi.status() == WL_CONNECTED) {
      // Perform a single ping and get the average
      bool success = Ping.ping(pingTarget, 1); // 1 ping attempt
      
      if (success) {
        unsigned long pingTime = Ping.averageTime();
        char pingStr[10];
        snprintf(pingStr, sizeof(pingStr), "%lu ms", pingTime);
        lv_label_set_text(ui_PingTime, pingStr);
      }
      else {
        lv_label_set_text(ui_PingTime, "timeout"); // ping timeout
      }
    }
    else {
      lv_label_set_text(ui_PingTime, "---- ms");
    }
  }
}


/*************************************************************
*********************** MAIN FUNCTIONS ***********************
**************************************************************/

// SETUP
void setup() {
  // Initialize hardware
  pinMode(PIN_BUTTON_1, INPUT_PULLUP); // BOOT button
  pinMode(PIN_BUTTON_2, INPUT_PULLUP); // KEY button
  pinMode(PIN_POWER_ON, OUTPUT);       // display power pin
  digitalWrite(PIN_POWER_ON, HIGH);    // turn on display

  // Initialize display
  lcd.init();
  lcd.setRotation(1);                  // landscape
  ledcSetup(0, 10000, 8);              // 10kHz PWM, 8-bit resolution
  analogWrite(PIN_LCD_BL, LOW);        // start with backlight OFF
  lcd.fillScreen(TFT_BLACK);           // clear screen
  lcd.setTextColor(0x7BCF, TFT_BLACK); // converted from #787878
  analogWrite(PIN_LCD_BL, 175);        // display brightness (175/255)

  // Display initial message
  lcd.println("\nConnecting to Wi-Fi - please wait...(up to 30s)\n");

  // Initialize WiFiManager with parameters
  WiFiManager wifiManager;
  wifiManager.setHostname("LILYGO-T-Display-S3");
  wifiManager.setConnectTimeout(10);
  wifiManager.setConnectRetries(3);
  wifiManager.setConfigPortalTimeout(0);
  
  // Callback for config portal
  wifiManager.setAPCallback([](WiFiManager *wm) {
    lcd.fillScreen(TFT_BLACK);
    lcd.setCursor(0, 0);
    lcd.println("AP unreachable or not yet configured.\n\n");
    lcd.println("A Wi-Fi network has been created:\n");
    lcd.println("SSID:     T-Display-S3\n");
    lcd.println("Password: 123456789\n\n");
    lcd.println("Connect and navigate to: 192.168.4.1\n");
    lcd.println("in a browser to setup your Wi-Fi.\n\n");
  });

  // Callback for a saved config
  wifiManager.setSaveConfigCallback([]() {
    lcd.println("Configuration saved, rebooting...");
    delay(2000);
    ESP.restart();
  });

  // This will block until connected to saved network or after config
  wifiManager.autoConnect("T-Display-S3", "123456789");

  // Wi-Fi connected :)
  lcd.println("WiFi Connected! :)\n");
  lcd.print("SSID: ");
  lcd.println(WiFi.SSID());
  lcd.print("IP: ");
  lcd.println(WiFi.localIP());
  ipString = (WiFi.localIP().toString()); // update IP address string
  delay(1000);

  lcd.println("\nStarting main display...");
  delay(2000);

  // Initialize lvgl UI
  lv_helper();
  ui_init();

  // Update IP address label
  ipString = WiFi.localIP().toString();
  IPAddress subnet = WiFi.subnetMask();
  byte currentCIDR = calculateCIDR(subnet);

  // Update if CIDR changed or we don't have an IP string yet
  if (currentCIDR != lastCIDR || ipString.length() == 0) {
    ipString += "/";
    ipString += String(currentCIDR);
    lv_label_set_text(ui_IPadd, ipString.c_str());
    lastCIDR = currentCIDR;
  }

  // Update FPS label (fixed value since we limit the FPS to 30 in main loop)
  lv_label_set_text(ui_FPS, "30");
}

// MAIN LOOP
void loop() {
  // Frame rate limiter
  unsigned long currentTime = millis();
  unsigned long elapsed = currentTime - lastFrameTime;
  
  // Calculate how much time we need to delay to maintain 30 FPS
  if (elapsed < frameInterval) {
    unsigned long waitTime = frameInterval - elapsed;
    delay(waitTime);
  }
  lastFrameTime = millis();

  // Check for simultaneous button press (config portal trigger)
  if (configPortalTrigger()) {
    startConfigPortal();
  }
  
  lv_task_handler();
  checkWiFiStatus();
  checkPingTime();

  lv_refr_now(NULL);
  delay(5);
}
