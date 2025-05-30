// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.1
// LVGL version: 8.3.6
// Project name: LILYGO-T-Display-S3-RSSI_Monitor

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////

// SCREEN: ui_MainScreen
void ui_MainScreen_screen_init(void);
lv_obj_t * ui_MainScreen;
lv_obj_t * ui_wifiPNGPanel;
lv_obj_t * ui_devNameLabel;
lv_obj_t * ui_WiFiTestLabel;
lv_obj_t * ui_RSSILabel;
lv_obj_t * ui_RSSItextLabel;
lv_obj_t * ui_HLine1;
lv_obj_t * ui_RSSIBar;
lv_obj_t * ui_RSSILevelsLabel;
lv_obj_t * ui_RSSIval;
lv_obj_t * ui_dbmValuesLabel;
lv_obj_t * ui_RSSIave;
lv_obj_t * ui_RSSImax;
lv_obj_t * ui_RSSImin;
lv_obj_t * ui_dBmLabel;
lv_obj_t * ui_FPSLabel;
lv_obj_t * ui_FPS;
lv_obj_t * ui_VLine;
lv_obj_t * ui_statusLabel;
lv_obj_t * ui_PingLabel;
lv_obj_t * ui_PingTime;
lv_obj_t * ui_connected;
lv_obj_t * ui_disconnected;
lv_obj_t * ui_HLine2;
lv_obj_t * ui_MACLabel;
lv_obj_t * ui_MACadd;
lv_obj_t * ui_IPLabel;
lv_obj_t * ui_IPadd;
lv_obj_t * ui_GWLabel;
lv_obj_t * ui_GWadd;
// CUSTOM VARIABLES

// EVENTS
lv_obj_t * ui____initial_actions0;

// IMAGES AND IMAGE SETS

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=1
    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_MainScreen_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_MainScreen);
}
