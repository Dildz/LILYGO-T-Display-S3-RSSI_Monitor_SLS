/*******************************************************************************
 * Size: 15 px
 * Bpp: 1
 * Opts: --bpp 1 --size 15 --font C:/Users/Dildz/Documents/PlatformIO/LILYGO-T-Display-S3/LILYGO-T-Display-S3-RSSI_Monitor_SLS/sls_files/project/assets/Kenyan Coffee Rg.otf -o C:/Users/Dildz/Documents/PlatformIO/LILYGO-T-Display-S3/LILYGO-T-Display-S3-RSSI_Monitor_SLS/sls_files/project/assets\ui_font_KenyanCoffeeRg15.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_KENYANCOFFEERG15
#define UI_FONT_KENYANCOFFEERG15 1
#endif

#if UI_FONT_KENYANCOFFEERG15

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xb0,

    /* U+0022 "\"" */
    0xb6, 0xd0,

    /* U+0023 "#" */
    0x24, 0xb2, 0x8a, 0x7c, 0xa6, 0xbf, 0x49, 0x65,
    0x14,

    /* U+0024 "$" */
    0x77, 0xe3, 0x18, 0xe3, 0xc7, 0xc, 0x63, 0x1f,
    0xb8,

    /* U+0025 "%" */
    0xe3, 0x53, 0x29, 0x95, 0x8a, 0xc5, 0x7f, 0xf2,
    0x29, 0x34, 0x92, 0x49, 0x2c, 0xf0,

    /* U+0026 "&" */
    0xc4, 0x21, 0x29, 0x3e, 0x52, 0x94, 0xa5, 0xe0,

    /* U+0027 "'" */
    0xf0,

    /* U+0028 "(" */
    0x6a, 0xaa, 0xaa, 0xa9,

    /* U+0029 ")" */
    0x95, 0x55, 0x55, 0x57,

    /* U+002A "*" */
    0x21, 0x3e, 0xcb, 0x90,

    /* U+002B "+" */
    0x10, 0x4f, 0xc4, 0x10, 0x40,

    /* U+002C "," */
    0xf0,

    /* U+002D "-" */
    0xc0,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x13, 0x32, 0x22, 0x26, 0x44, 0x44, 0xc8,

    /* U+0030 "0" */
    0xfc, 0x63, 0x18, 0xc6, 0x31, 0x8c, 0x63, 0xf0,

    /* U+0031 "1" */
    0xd5, 0x55, 0x55,

    /* U+0032 "2" */
    0xfc, 0xe7, 0x33, 0xbf, 0x90, 0x9c, 0xe7, 0xf0,

    /* U+0033 "3" */
    0xfc, 0xe7, 0x31, 0xb8, 0x73, 0x9c, 0xe7, 0xf0,

    /* U+0034 "4" */
    0x82, 0x9, 0xa6, 0x9a, 0x69, 0xbf, 0x18, 0x61,
    0x86,

    /* U+0035 "5" */
    0xf9, 0x99, 0x8f, 0x11, 0x99, 0x9f,

    /* U+0036 "6" */
    0xfc, 0xe7, 0x8, 0x7e, 0x73, 0x9c, 0xe7, 0xf0,

    /* U+0037 "7" */
    0xf3, 0x33, 0x26, 0x66, 0x64, 0xcc,

    /* U+0038 "8" */
    0xfc, 0x63, 0x18, 0xba, 0x31, 0x8c, 0x63, 0xf0,

    /* U+0039 "9" */
    0xfc, 0x63, 0x18, 0xc7, 0xe1, 0xc, 0x63, 0xf0,

    /* U+003A ":" */
    0xc3,

    /* U+003B ";" */
    0xc3, 0xc0,

    /* U+003C "<" */
    0x4, 0xfe, 0x30, 0x38, 0x30,

    /* U+003D "=" */
    0xfc, 0x0, 0x3f,

    /* U+003E ">" */
    0x83, 0xc1, 0xc7, 0x73, 0x0,

    /* U+003F "?" */
    0xfe, 0xf7, 0xb1, 0x98, 0xc4, 0x20, 0x8, 0x40,

    /* U+0040 "@" */
    0xfc, 0x63, 0x7a, 0xd6, 0xb7, 0x84, 0x63, 0xf0,

    /* U+0041 "A" */
    0xfc, 0x63, 0x18, 0xc6, 0x31, 0xfc, 0x63, 0x10,

    /* U+0042 "B" */
    0xfc, 0x63, 0x18, 0xfe, 0x31, 0x8c, 0x63, 0xf0,

    /* U+0043 "C" */
    0xfc, 0x63, 0x18, 0xc2, 0x11, 0x8c, 0x63, 0xf0,

    /* U+0044 "D" */
    0xfc, 0x63, 0x18, 0xc6, 0x31, 0x8c, 0x63, 0xf0,

    /* U+0045 "E" */
    0xf2, 0x79, 0x24, 0x92, 0x70,

    /* U+0046 "F" */
    0xf2, 0x79, 0x24, 0x92, 0x40,

    /* U+0047 "G" */
    0xfc, 0x63, 0x8, 0x46, 0x31, 0x8c, 0x63, 0xf0,

    /* U+0048 "H" */
    0x8c, 0x63, 0x1f, 0xc6, 0x31, 0x8c, 0x63, 0x10,

    /* U+0049 "I" */
    0xff, 0xf0,

    /* U+004A "J" */
    0x18, 0xc6, 0x31, 0x8c, 0x73, 0x9c, 0xe7, 0xf0,

    /* U+004B "K" */
    0xdb, 0x6d, 0x3c, 0xf3, 0xcf, 0x34, 0xdb, 0x6d,
    0xb2,

    /* U+004C "L" */
    0x92, 0x49, 0x24, 0x92, 0x70,

    /* U+004D "M" */
    0xcf, 0x3c, 0xf3, 0xff, 0xff, 0xed, 0xb6, 0xdb,
    0x6d,

    /* U+004E "N" */
    0xce, 0x73, 0xde, 0xf6, 0xf7, 0xbc, 0xe7, 0x30,

    /* U+004F "O" */
    0xfc, 0x63, 0x18, 0xc6, 0x31, 0x8c, 0x63, 0xf0,

    /* U+0050 "P" */
    0xfc, 0x63, 0x18, 0xc7, 0xf0, 0x84, 0x21, 0x0,

    /* U+0051 "Q" */
    0xfc, 0x63, 0x18, 0xc6, 0x31, 0x8c, 0x63, 0xf1,
    0x84,

    /* U+0052 "R" */
    0xfc, 0x63, 0x18, 0xfa, 0x31, 0x8c, 0x63, 0x10,

    /* U+0053 "S" */
    0xfc, 0x63, 0x1c, 0x38, 0xf1, 0x8c, 0x63, 0xf0,

    /* U+0054 "T" */
    0xf2, 0x22, 0x22, 0x22, 0x22, 0x22,

    /* U+0055 "U" */
    0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8c, 0x63, 0xf0,

    /* U+0056 "V" */
    0xce, 0x76, 0xb5, 0xad, 0x6f, 0x73, 0x9c, 0xe0,

    /* U+0057 "W" */
    0xdb, 0xef, 0xb7, 0xdb, 0xed, 0xf3, 0xf9, 0xdc,
    0xee, 0x77, 0x3b, 0x1d, 0x8c, 0xc0,

    /* U+0058 "X" */
    0xcb, 0x65, 0x9e, 0x71, 0xc7, 0x1e, 0x59, 0x6d,
    0xb2,

    /* U+0059 "Y" */
    0xda, 0x94, 0xa5, 0x38, 0x84, 0x21, 0x8, 0x40,

    /* U+005A "Z" */
    0xf3, 0x32, 0x66, 0x64, 0x4c, 0xcf,

    /* U+005B "[" */
    0xea, 0xaa, 0xaa, 0xab,

    /* U+005C "\\" */
    0x8c, 0x44, 0x44, 0x66, 0x22, 0x23, 0x31,

    /* U+005D "]" */
    0xd5, 0x55, 0x55, 0x57,

    /* U+005E "^" */
    0x10, 0xc2, 0x8a, 0x6d, 0x14, 0x40,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0x4c,

    /* U+0061 "a" */
    0xf9, 0x91, 0xf9, 0x99, 0xf0,

    /* U+0062 "b" */
    0x88, 0x8f, 0x99, 0x99, 0x99, 0x9f,

    /* U+0063 "c" */
    0xf9, 0x98, 0x89, 0x99, 0xf0,

    /* U+0064 "d" */
    0x11, 0x1f, 0x99, 0x99, 0x99, 0x9f,

    /* U+0065 "e" */
    0xf9, 0x99, 0xf8, 0x99, 0xf0,

    /* U+0066 "f" */
    0x69, 0x74, 0x92, 0x49, 0x20,

    /* U+0067 "g" */
    0xf9, 0x99, 0x99, 0x9f, 0x11, 0xf0,

    /* U+0068 "h" */
    0x88, 0x8f, 0x99, 0x99, 0x99, 0x99,

    /* U+0069 "i" */
    0x9f, 0xf0,

    /* U+006A "j" */
    0x41, 0x55, 0x55, 0x70,

    /* U+006B "k" */
    0x88, 0x8b, 0xae, 0xce, 0xea, 0xbb,

    /* U+006C "l" */
    0xff, 0xf0,

    /* U+006D "m" */
    0xff, 0x26, 0x4c, 0x99, 0x32, 0x64, 0xc9, 0x92,

    /* U+006E "n" */
    0xf9, 0x99, 0x99, 0x99, 0x90,

    /* U+006F "o" */
    0xf9, 0x99, 0x99, 0x99, 0xf0,

    /* U+0070 "p" */
    0xf9, 0x99, 0x99, 0x99, 0xf8, 0x80,

    /* U+0071 "q" */
    0xf9, 0x99, 0x99, 0x99, 0xf1, 0x10,

    /* U+0072 "r" */
    0xf9, 0x99, 0x88, 0x88, 0x80,

    /* U+0073 "s" */
    0xf9, 0x8c, 0x71, 0x99, 0xf0,

    /* U+0074 "t" */
    0x49, 0x74, 0x92, 0x49, 0x30,

    /* U+0075 "u" */
    0x99, 0x99, 0x99, 0x99, 0xf0,

    /* U+0076 "v" */
    0xde, 0xf4, 0xa5, 0x29, 0xce, 0x70,

    /* U+0077 "w" */
    0xdb, 0xdb, 0xdb, 0xda, 0x7a, 0x7e, 0x6e, 0x6e,
    0x66,

    /* U+0078 "x" */
    0xda, 0x94, 0xe7, 0x29, 0x5b, 0xd8,

    /* U+0079 "y" */
    0x99, 0x99, 0x99, 0x9f, 0x11, 0xf0,

    /* U+007A "z" */
    0xf3, 0x22, 0x64, 0x4c, 0xf0,

    /* U+007B "{" */
    0x69, 0x24, 0x92, 0xc9, 0x24, 0x92, 0x60,

    /* U+007C "|" */
    0xff, 0xff, 0x80,

    /* U+007D "}" */
    0xc9, 0x24, 0x92, 0x69, 0x24, 0x92, 0xc0,

    /* U+007E "~" */
    0xe0, 0x70
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 41, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 43, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 70, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 5, .adv_w = 104, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 96, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 23, .adv_w = 145, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 37, .adv_w = 95, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 36, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 46, .adv_w = 61, .box_w = 2, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 50, .adv_w = 61, .box_w = 2, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 54, .adv_w = 105, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 58, .adv_w = 118, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 63, .adv_w = 46, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 64, .adv_w = 49, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 65, .adv_w = 46, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 65, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 73, .adv_w = 96, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 59, .box_w = 2, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 99, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 94, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 100, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 97, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 96, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 123, .adv_w = 79, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 96, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 96, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 145, .adv_w = 46, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 146, .adv_w = 46, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 148, .adv_w = 118, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 153, .adv_w = 118, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 156, .adv_w = 118, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 161, .adv_w = 92, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 101, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 177, .adv_w = 96, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 97, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 193, .adv_w = 95, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 98, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 70, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 69, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 219, .adv_w = 96, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 100, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 235, .adv_w = 49, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 237, .adv_w = 89, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 245, .adv_w = 97, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 254, .adv_w = 69, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 127, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 104, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 276, .adv_w = 96, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 284, .adv_w = 95, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 96, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 301, .adv_w = 98, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 309, .adv_w = 95, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 317, .adv_w = 75, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 323, .adv_w = 97, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 331, .adv_w = 89, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 339, .adv_w = 138, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 353, .adv_w = 90, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 84, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 370, .adv_w = 75, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 376, .adv_w = 61, .box_w = 2, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 380, .adv_w = 65, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 387, .adv_w = 61, .box_w = 2, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 391, .adv_w = 108, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 397, .adv_w = 96, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 398, .adv_w = 48, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 399, .adv_w = 85, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 88, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 410, .adv_w = 83, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 415, .adv_w = 88, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 84, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 426, .adv_w = 58, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 431, .adv_w = 88, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 437, .adv_w = 90, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 443, .adv_w = 46, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 445, .adv_w = 46, .box_w = 2, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 449, .adv_w = 87, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 45, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 457, .adv_w = 137, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 465, .adv_w = 91, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 470, .adv_w = 86, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 475, .adv_w = 88, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 481, .adv_w = 88, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 487, .adv_w = 81, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 85, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 497, .adv_w = 58, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 502, .adv_w = 90, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 507, .adv_w = 78, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 513, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 522, .adv_w = 81, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 528, .adv_w = 91, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 534, .adv_w = 72, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 539, .adv_w = 64, .box_w = 3, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 546, .adv_w = 54, .box_w = 1, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 549, .adv_w = 64, .box_w = 3, .box_h = 17, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 556, .adv_w = 122, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 5}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 1, 0, 2, 0, 3,
    1, 4, 0, 0, 0, 5, 6, 5,
    7, 8, 0, 9, 8, 10, 11, 8,
    12, 8, 8, 0, 0, 0, 0, 0,
    0, 13, 9, 8, 8, 8, 0, 14,
    15, 0, 0, 11, 16, 17, 0, 0,
    8, 18, 8, 9, 2, 19, 11, 20,
    21, 22, 23, 24, 4, 0, 0, 0,
    0, 0, 25, 26, 26, 27, 26, 28,
    29, 30, 0, 31, 32, 0, 30, 30,
    26, 26, 29, 33, 34, 35, 29, 36,
    37, 38, 29, 39, 4, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 1, 0, 2, 0, 3,
    1, 0, 0, 0, 0, 4, 5, 4,
    6, 3, 7, 8, 3, 9, 10, 3,
    11, 3, 3, 0, 0, 0, 0, 0,
    12, 0, 8, 0, 3, 0, 0, 0,
    3, 0, 0, 13, 0, 0, 0, 0,
    3, 0, 3, 0, 2, 14, 10, 15,
    16, 17, 18, 19, 0, 0, 0, 0,
    0, 0, 20, 0, 21, 21, 21, 22,
    23, 0, 0, 24, 0, 0, 25, 25,
    21, 25, 21, 25, 26, 27, 28, 29,
    30, 31, 32, 33, 0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    18, 0, 0, 0, -5, -26, 0, 0,
    0, 0, 0, 0, -12, 0, 0, 0,
    0, 0, 0, -4, -15, 0, -3, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    0, 0, 0, 0, 0, 0, -4, -3,
    -2, -3, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -12,
    -3, 0, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, -1, 0,
    0, 0, -10, 0, -12, -1, 0, 0,
    0, -11, -6, -6, 0, -12, 0, -1,
    -2, 0, -2, 0, 0, -1, -4, -2,
    -4, -4, 0, -2, 0, -5, 0, 0,
    0, 0, -7, -10, 0, 0, 0, -10,
    0, 0, -12, -4, -2, -7, -12, -6,
    -1, 0, -3, 0, 0, 0, 0, -2,
    0, 0, 0, -10, 0, -13, 0, -5,
    -5, 0, -12, 0, 0, -5, 0, 0,
    0, 0, -14, 0, 0, 0, 0, 0,
    0, -12, -12, -5, -12, 0, -10, -11,
    0, -8, -5, 0, -3, -5, -10, 0,
    0, 0, -1, 0, -5, 0, 0, 0,
    0, 0, 0, 0, -4, -3, -2, -2,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, -4, -4, -4,
    -2, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, 0, 0, 0, 0, 0, -8,
    0, 0, 0, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, -5,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, -2, 0, 0, -4, -24, -12,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -10, -16, -14, 0, 0, 0, 0, 0,
    0, -12, 0, 2, 2, 0, 3, 0,
    -2, -2, 0, -3, 0, -2, 0, 0,
    -2, 0, 0, 0, -1, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, -2, -2, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, -4, 0, -11, 0, 0, 0, 0,
    -3, 0, -7, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, -3, 0, 0,
    -1, 0, -2, -4, 0, 0, 0, 0,
    -9, 0, -1, 0, -16, 0, 0, 0,
    0, -4, 0, -11, 0, -8, -8, -6,
    0, -11, 0, -3, -1, 0, -4, 0,
    0, 0, 0, -4, -5, -5, 0, -1,
    0, 0, 0, 0, -22, 0, -15, 0,
    0, 0, 0, 0, 0, -4, 0, -1,
    -1, -3, -2, -5, -2, -2, 0, -1,
    0, -1, 0, 0, -1, 0, 0, 0,
    -1, 0, 0, -3, -4, -11, -12, 0,
    0, -4, 0, 0, 0, 0, -8, 2,
    0, 0, 0, 0, 0, -7, -7, 0,
    -4, 0, -6, -8, -2, -6, -2, 0,
    -5, -6, -5, 0, -2, -3, -6, -4,
    -13, 0, -5, 0, 0, 0, 0, -7,
    0, 2, 0, 0, 4, 0, -4, -5,
    0, -5, 0, -4, -5, 0, -4, 0,
    0, 0, -3, -4, 0, -2, -2, -10,
    -3, -12, 0, -4, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, 2, 0, -5,
    -6, 0, -5, 0, -5, -3, 0, -5,
    0, 0, 0, 0, -5, 0, -4, -2,
    0, -7, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, -1, 0, 0, 0, 0,
    -1, -1, 0, -1, 0, 0, -3, 0,
    -1, 0, 0, 0, -1, 0, 0, -2,
    -4, -12, -12, -18, 0, -6, 0, 0,
    0, 0, -15, 0, 4, 3, 1, 3,
    0, -9, -10, 0, -10, 0, -7, -8,
    0, -7, -3, 0, 0, -7, -7, 0,
    0, 0, 0, -14, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 0, -4, 0, -2,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, -1, -1, -1, -1, 0, 0, 0,
    0, -5, 0, 0, -4, 0, -5, 0,
    0, 0, 0, 0, -5, 0, -7, -1,
    -1, -1, -7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, -9, -10,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    2, 0, 0, 0, 0, 3, 0, 0,
    0, 0, 0, -3, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, -2, 0, 0, -6, 0, 0,
    0, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, -5, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, -13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -1, 0, -2, 0, 0,
    -2, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, -17, 0, -12, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 1, 0, 0, 0,
    0, -5, 0, 0, 0, -5, -5, 0,
    0, 0, 0, 0, -5, 0, 0, -1,
    0, 0, -5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, -2,
    0, 0, 0, 0, 0, 0, -13, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    -7, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, -2, -1,
    0, -1, 0, 0, 0, 2, 0, 4,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    -1, 0, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, -9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, -2, 0, -2, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 0, 0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 39,
    .right_class_cnt     = 33,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_KenyanCoffeeRg15 = {
#else
lv_font_t ui_font_KenyanCoffeeRg15 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_KENYANCOFFEERG15*/

