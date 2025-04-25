/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --font C:/Users/Dildz/Documents/PlatformIO/LILYGO-T-Display-S3/LILYGO-T-Display-S3-RSSI_Monitor_SLS/sls_files/project/assets/Kenyan Coffee Rg.otf -o C:/Users/Dildz/Documents/PlatformIO/LILYGO-T-Display-S3/LILYGO-T-Display-S3-RSSI_Monitor_SLS/sls_files/project/assets\ui_font_KenyanCoffeeRg12.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_KENYANCOFFEERG12
#define UI_FONT_KENYANCOFFEERG12 1
#endif

#if UI_FONT_KENYANCOFFEERG12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfe, 0x80,

    /* U+0022 "\"" */
    0xb6, 0x80,

    /* U+0023 "#" */
    0x2a, 0x94, 0xf5, 0x7d, 0x4a, 0x60,

    /* U+0024 "$" */
    0x6f, 0x99, 0xc7, 0x19, 0x9f, 0x60,

    /* U+0025 "%" */
    0xe5, 0x52, 0xa5, 0xcf, 0xe7, 0x4a, 0x95, 0x4e,

    /* U+0026 "&" */
    0xc8, 0x97, 0x99, 0x99, 0xf0,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0xea, 0xaa, 0xaa, 0xc0,

    /* U+0029 ")" */
    0xd5, 0x55, 0x55, 0xc0,

    /* U+002A "*" */
    0x4f, 0xe4, 0x40,

    /* U+002B "+" */
    0x27, 0xc8, 0x40,

    /* U+002C "," */
    0xc0,

    /* U+002D "-" */
    0xc0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x24, 0x94, 0x92, 0x52, 0x0,

    /* U+0030 "0" */
    0xf9, 0x99, 0x99, 0x99, 0xf0,

    /* U+0031 "1" */
    0xd5, 0x55, 0x40,

    /* U+0032 "2" */
    0xf9, 0x93, 0xe8, 0x99, 0xf0,

    /* U+0033 "3" */
    0xf9, 0x16, 0x19, 0x99, 0xf0,

    /* U+0034 "4" */
    0x84, 0x25, 0x29, 0x7c, 0x42, 0x10,

    /* U+0035 "5" */
    0xf9, 0x8f, 0x19, 0x99, 0xf0,

    /* U+0036 "6" */
    0xf9, 0x98, 0xf9, 0x99, 0xf0,

    /* U+0037 "7" */
    0xe5, 0xa4, 0x96, 0x80,

    /* U+0038 "8" */
    0xf9, 0x96, 0x99, 0x99, 0xf0,

    /* U+0039 "9" */
    0xf9, 0x99, 0xf1, 0x99, 0xf0,

    /* U+003A ":" */
    0x84,

    /* U+003B ";" */
    0x86,

    /* U+003C "<" */
    0xb, 0xa0, 0xe0, 0x80,

    /* U+003D "=" */
    0xf8, 0x1, 0xf0,

    /* U+003E ">" */
    0x83, 0x82, 0xe8, 0x0,

    /* U+003F "?" */
    0xf9, 0x91, 0x26, 0x40, 0x40,

    /* U+0040 "@" */
    0xfc, 0x6f, 0x5a, 0xde, 0x11, 0xf8,

    /* U+0041 "A" */
    0xf9, 0x99, 0x99, 0xf9, 0x90,

    /* U+0042 "B" */
    0xf9, 0x9f, 0x99, 0x99, 0xf0,

    /* U+0043 "C" */
    0xf9, 0x99, 0x89, 0x99, 0xf0,

    /* U+0044 "D" */
    0xf9, 0x99, 0x99, 0x99, 0xf0,

    /* U+0045 "E" */
    0xee, 0xaa, 0xc0,

    /* U+0046 "F" */
    0xee, 0xaa, 0x80,

    /* U+0047 "G" */
    0xf9, 0x98, 0x99, 0x99, 0xf0,

    /* U+0048 "H" */
    0x99, 0x9f, 0x99, 0x99, 0x90,

    /* U+0049 "I" */
    0xff, 0x80,

    /* U+004A "J" */
    0x11, 0x11, 0x19, 0x99, 0xf0,

    /* U+004B "K" */
    0xaa, 0xec, 0xce, 0xaa, 0xb0,

    /* U+004C "L" */
    0xaa, 0xaa, 0xc0,

    /* U+004D "M" */
    0xde, 0xf7, 0xbd, 0xee, 0xb5, 0xa8,

    /* U+004E "N" */
    0xdd, 0xdd, 0xfb, 0xbb, 0x90,

    /* U+004F "O" */
    0xf9, 0x99, 0x99, 0x99, 0xf0,

    /* U+0050 "P" */
    0xf9, 0x99, 0x9f, 0x88, 0x80,

    /* U+0051 "Q" */
    0xf9, 0x99, 0x99, 0x99, 0xf1,

    /* U+0052 "R" */
    0xf9, 0x9e, 0x99, 0x99, 0x90,

    /* U+0053 "S" */
    0xf9, 0x9c, 0x79, 0x99, 0xf0,

    /* U+0054 "T" */
    0xe9, 0x24, 0x92, 0x40,

    /* U+0055 "U" */
    0x99, 0x99, 0x99, 0x99, 0xf0,

    /* U+0056 "V" */
    0xdd, 0xdd, 0x57, 0x76, 0x60,

    /* U+0057 "W" */
    0xde, 0xbd, 0x7b, 0xf6, 0xed, 0x9b, 0x36, 0x6c,

    /* U+0058 "X" */
    0xdd, 0x56, 0x67, 0x5d, 0xd0,

    /* U+0059 "Y" */
    0xb6, 0xd4, 0x92, 0x40,

    /* U+005A "Z" */
    0xe5, 0xa4, 0xb4, 0xe0,

    /* U+005B "[" */
    0xea, 0xaa, 0xaa, 0xc0,

    /* U+005C "\\" */
    0x91, 0x24, 0x93, 0x24, 0x80,

    /* U+005D "]" */
    0xd5, 0x55, 0x55, 0xc0,

    /* U+005E "^" */
    0x21, 0x94, 0x9c, 0x80,

    /* U+005F "_" */
    0xf8,

    /* U+0060 "`" */
    0xd0,

    /* U+0061 "a" */
    0xf4, 0xfb, 0x78,

    /* U+0062 "b" */
    0x93, 0xdb, 0x6d, 0xe0,

    /* U+0063 "c" */
    0xf6, 0xcb, 0x78,

    /* U+0064 "d" */
    0x27, 0xdb, 0x6d, 0xe0,

    /* U+0065 "e" */
    0xf6, 0xf9, 0x78,

    /* U+0066 "f" */
    0xee, 0xaa, 0x80,

    /* U+0067 "g" */
    0xf6, 0xdb, 0x79, 0xe0,

    /* U+0068 "h" */
    0x93, 0xdb, 0x6d, 0xa0,

    /* U+0069 "i" */
    0xbf, 0x80,

    /* U+006A "j" */
    0x45, 0x55, 0x5c,

    /* U+006B "k" */
    0x88, 0xae, 0xcc, 0xea, 0xa0,

    /* U+006C "l" */
    0xff, 0x80,

    /* U+006D "m" */
    0xfd, 0x6b, 0x5a, 0xd6, 0xa0,

    /* U+006E "n" */
    0xf6, 0xdb, 0x68,

    /* U+006F "o" */
    0xf6, 0xdb, 0x78,

    /* U+0070 "p" */
    0xf6, 0xdb, 0x7c, 0x80,

    /* U+0071 "q" */
    0xf6, 0xdb, 0x79, 0x20,

    /* U+0072 "r" */
    0xf6, 0xc9, 0x20,

    /* U+0073 "s" */
    0xf6, 0x33, 0x78,

    /* U+0074 "t" */
    0xae, 0xaa, 0xc0,

    /* U+0075 "u" */
    0xb6, 0xdb, 0x78,

    /* U+0076 "v" */
    0xbf, 0xee, 0x66, 0x60,

    /* U+0077 "w" */
    0xb6, 0xdf, 0x7d, 0x75, 0xb6, 0x80,

    /* U+0078 "x" */
    0xd6, 0x66, 0x6f, 0x90,

    /* U+0079 "y" */
    0xb6, 0xdb, 0x79, 0xe0,

    /* U+007A "z" */
    0xe5, 0x25, 0x38,

    /* U+007B "{" */
    0x69, 0x24, 0xb2, 0x49, 0x26,

    /* U+007C "|" */
    0xff, 0xf8,

    /* U+007D "}" */
    0xc9, 0x24, 0x9a, 0x49, 0x2c,

    /* U+007E "~" */
    0xe1, 0xc0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 32, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 34, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 56, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5, .adv_w = 83, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 11, .adv_w = 77, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 17, .adv_w = 116, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 76, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 29, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 31, .adv_w = 49, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 35, .adv_w = 49, .box_w = 2, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 39, .adv_w = 84, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 42, .adv_w = 95, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 45, .adv_w = 37, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 46, .adv_w = 39, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 47, .adv_w = 37, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 48, .adv_w = 52, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 53, .adv_w = 77, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 47, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 79, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 75, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 80, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 77, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 77, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 63, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 77, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 77, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 37, .box_w = 1, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 37, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 103, .adv_w = 95, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 107, .adv_w = 95, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 110, .adv_w = 95, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 114, .adv_w = 74, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 81, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 125, .adv_w = 77, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 78, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 135, .adv_w = 76, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 78, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 145, .adv_w = 56, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 55, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 151, .adv_w = 76, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 80, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 39, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 71, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 78, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 55, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 102, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 83, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 77, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 192, .adv_w = 76, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 77, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 202, .adv_w = 79, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 207, .adv_w = 76, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 60, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 77, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 71, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 110, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 72, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 68, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 60, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 49, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 251, .adv_w = 52, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 256, .adv_w = 49, .box_w = 2, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 260, .adv_w = 87, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 264, .adv_w = 77, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 265, .adv_w = 39, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 266, .adv_w = 68, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 269, .adv_w = 70, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 273, .adv_w = 67, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 276, .adv_w = 70, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 280, .adv_w = 67, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 283, .adv_w = 46, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 70, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 290, .adv_w = 72, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 294, .adv_w = 37, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 37, .box_w = 2, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 299, .adv_w = 70, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 36, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 306, .adv_w = 110, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 311, .adv_w = 73, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 314, .adv_w = 69, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 317, .adv_w = 70, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 321, .adv_w = 70, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 325, .adv_w = 65, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 68, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 331, .adv_w = 46, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 334, .adv_w = 72, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 337, .adv_w = 62, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 341, .adv_w = 102, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 65, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 73, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 355, .adv_w = 57, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 51, .box_w = 3, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 363, .adv_w = 43, .box_w = 1, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 365, .adv_w = 51, .box_w = 3, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 370, .adv_w = 98, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 4}
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
    14, 0, 0, 0, -4, -21, 0, 0,
    0, 0, 0, 0, -10, 0, 0, 0,
    0, 0, 0, -3, -12, 0, -2, 0,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, 0, 0, 0, 0, 0, -3, -2,
    -2, -2, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -9,
    -3, 0, 0, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, -1, 0,
    0, 0, -8, 0, -9, -1, 0, 0,
    0, -9, -5, -4, 0, -10, 0, -1,
    -1, 0, -2, 0, 0, -1, -3, -2,
    -3, -3, 0, -2, 0, -4, 0, 0,
    0, 0, -6, -8, 0, 0, 0, -8,
    0, 0, -10, -3, -2, -6, -10, -5,
    -1, 0, -2, 0, 0, 0, 0, -1,
    0, 0, 0, -8, 0, -10, 0, -4,
    -4, 0, -10, 0, 0, -4, 0, 0,
    0, 0, -11, 0, 0, 0, 0, 0,
    0, -10, -10, -4, -10, 0, -8, -9,
    0, -7, -4, 0, -2, -4, -8, 0,
    0, 0, -1, 0, -4, 0, 0, 0,
    0, 0, 0, 0, -3, -2, -2, -2,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, -3, -3, -3,
    -1, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, -7,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, -4,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, -2, 0, 0, -3, -19, -9,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -8, -13, -11, 0, 0, 0, 0, 0,
    0, -10, 0, 2, 2, 0, 2, 0,
    -1, -2, 0, -2, 0, -2, 0, 0,
    -2, 0, 0, 0, -1, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, -2, -2, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, -3, 0, -9, 0, 0, 0, 0,
    -3, 0, -6, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, -2, 0, 0,
    -1, 0, -2, -3, 0, 0, 0, 0,
    -7, 0, -1, 0, -12, 0, 0, 0,
    0, -3, 0, -9, 0, -7, -6, -5,
    0, -9, 0, -2, -1, 0, -3, 0,
    0, 0, 0, -3, -4, -4, 0, -1,
    0, 0, 0, 0, -17, 0, -12, 0,
    0, 0, 0, 0, 0, -3, 0, -1,
    -1, -2, -2, -4, -2, -2, 0, -1,
    0, -1, 0, 0, -1, 0, 0, 0,
    -1, 0, 0, -2, -3, -9, -10, 0,
    0, -3, 0, 0, 0, 0, -6, 2,
    0, 0, 0, 0, 0, -6, -6, 0,
    -3, 0, -5, -6, -2, -5, -2, 0,
    -4, -5, -4, 0, -2, -2, -5, -3,
    -10, 0, -4, 0, 0, 0, 0, -6,
    0, 2, 0, 0, 3, 0, -3, -4,
    0, -4, 0, -3, -4, 0, -3, 0,
    0, 0, -2, -3, 0, -2, -2, -8,
    -2, -9, 0, -3, 0, 0, 0, 0,
    -6, 0, 0, 0, 0, 2, 0, -4,
    -5, 0, -4, 0, -4, -3, 0, -4,
    0, 0, 0, 0, -4, 0, -3, -2,
    0, -6, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, -1, 0, 0, 0, 0,
    -1, -1, 0, -1, 0, 0, -2, 0,
    -1, 0, 0, 0, -1, 0, 0, -2,
    -3, -10, -10, -14, 0, -5, 0, 0,
    0, 0, -12, 0, 3, 2, 1, 3,
    0, -7, -8, 0, -8, 0, -6, -7,
    0, -6, -2, 0, 0, -6, -6, 0,
    0, 0, 0, -11, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, -3, 0, -2,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, -1, -1, -1, -1, 0, 0, 0,
    0, -4, 0, 0, -3, 0, -4, 0,
    0, 0, 0, 0, -4, 0, -6, -1,
    -1, -1, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, -7, -8,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    2, 0, 0, 0, 0, 2, 0, 0,
    0, 0, 0, -2, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, -2, 0, 0, -5, 0, 0,
    0, 0, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, -4, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, -11, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -1, 0, -2, 0, 0,
    -2, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, -13, 0, -9, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 1, 0, 0, 0,
    0, -4, 0, 0, 0, -4, -4, 0,
    0, 0, 0, 0, -4, 0, 0, -1,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, -2,
    0, 0, 0, 0, 0, 0, -10, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    -6, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, -1, -1,
    0, -1, 0, 0, 0, 2, 0, 3,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    -1, 0, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, -2, 0, -2, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -8, 0, 0, 0, 0, 0,
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
const lv_font_t ui_font_KenyanCoffeeRg12 = {
#else
lv_font_t ui_font_KenyanCoffeeRg12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 13,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if UI_FONT_KENYANCOFFEERG12*/

