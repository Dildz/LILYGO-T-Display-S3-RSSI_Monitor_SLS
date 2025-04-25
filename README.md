# LILYGO T-Display-S3 RSSI (Wi-Fi Strength) Monitor Project with SquareLine Studio UI

## Description:
This code implements a Wi-Fi network monitor with a modern UI created in SquareLine Studio, displaying current/min/max/ave RSSI values, ping time to google.com & IP information on the LilyGO T-Display-S3's built-in screen.

## How it works:
- **Modern UI Interface**:
  - Designed with SquareLine Studio
  - Animated Wi-Fi quality indicator
  - Visual indicators for connection status & Wi-Fi strength in dBm

- **Core Functionality**:
  - Wi-Fi connection management using WiFiManager
  - Configuration portal mode via 5sec press of both buttons
  - Ping google.com (instead of an IP) which doubles as a name resolution test

- **Displayed Information**:
  - Wi-Fi connection status
  - Wi-Fi signal (RSSI) strength (in dBm) with min/max/ave values
  - Wi-Fi quality level indicator
  - Device MAC, IP (including subnet CIDR notation) & Gateway address
  - FPS (locked at 30)

## Notes:
1. **LVGL config**:
  - PlatformIO will automatically download the libraries listed in the **platformio.ini** file when the project is opened for the 1st time
  - In the **'.pio\libdeps\lilygo-t-display-s3\lvgl'** folder - find & copy **'lv_conf_template.h'** to **'.pio\libdeps\lilygo-t-display-s3'**
  - Rename **'.pio\libdeps\lilygo-t-display-s3\lv_conf_template.h'** to **'.pio\libdeps\lilygo-t-display-s3\lv_conf.h'**
  - Open **'.pio\libdeps\lilygo-t-display-s3\lv_conf.h'** & modify these lines:
    - Line 15: **#if 0 /*Set it to "1" to enable content*/** >> as the comment says - **set it to 1**
    - Line 30: **#define LV_COLOR_16_SWAP 0** >> **set to 1**
    - Line 364, 365, 366: **#define LV_FONT_MONTSERRAT_8  0** >> **set font sizes 8, 10 & 12 to 1**
    - If any additional MONTSERRAT font sizes are used if you modify the SLS project then you will need to set them to 1 as well

2. **TFT_eSPI config**:
  - In the **'.pio\libdeps\lilygo-t-display-s3\TFT_eSPI'** folder - find **'User_Setup_Select.h'** & modify these lines:
    - Line 27: **#include <User_Setup.h>** >> comment out this line (**//#include <User_Setup.h>** )
    - Line 133: **//#include <User_Setups/Setup206_LilyGo_T_Display_S3.h>** >> uncomment this line (**#include <User_Setups/Setup206_LilyGo_T_Display_S3.h>** )
  
2. **First Run**:
  - Device will start Wi-Fi configuration portal if no known networks are available
  - Connect to **"T-Display-S3"** AP with password: **123456789**
  - Configure Wi-Fi through web interface at **192.168.4.1**
    - Enter your Wi-Fi AP & password (device will reboot when saved)

3. **Normal Operation**:
  - Every second, connection status & strength is quried & google.com is pinged, with the results updated on screen
  - To change the Wi-Fi configuration, start the configuration portal by:
    - pressing both left & right buttons together for 5seconds
    - connect to **"T-Display-S3"** AP with password: **123456789**
    - renter your Wi-Fi AP info & save to reboot.

4. **SLS Project Files**:
  - This repository includes the SquareLine Studio project files in: **'.\LILYGO-T-Display-S3-RSSI_Monitor_SLS\sls_files'**
  - In the **'sls_files'** folder, there are 2 subfolders: **'export'** & **'project'**
  - Open SquareLine_Project in the **'project'** folder with Squareline Studio to make changes to the UI.
  - You may need to update the SLS project settings **Project Export Root** & **UI Files Export Path** locations to reflect where you have saved the PlaformIO project **before exporting**.
  - Export project files to the **'export'** folder & copy all, then replace all files in the **'src'** folder.
  - **Do not export into the 'src' folder as SLS will erase the folder contents before exporting!**
  - Clean the PlatformIO project (PlatfomIO: Clean).
  - Build to check for errors & upload (TFT_eSPI warnings about TOUCH_CS pin etc can be ignored - this is a non-touch display).
  - **NB!!** Every time a change is made in SLS, & the UI files have been replaced in PlatformIO **'src'** folder - you **must first clean the project before building/uploading** otherwise your changes will not take effect.

## Credits:
This project is inspired by [Volos Projects - rssiMonitor](https://github.com/VolosR/rssiMonitor) modified for the T-Display-S3