/*******************************************************************************
 * Size: 17 px
 * Bpp: 1
 * Opts: --bpp 1 --size 17 --font C:/Users/Dildz/Documents/PlatformIO/LILYGO-T-Display-S3/LILYGO-T-Display-S3-RSSI_Monitor_SLS/sls_files/project/assets/Kenyan Coffee Rg.otf -o C:/Users/Dildz/Documents/PlatformIO/LILYGO-T-Display-S3/LILYGO-T-Display-S3-RSSI_Monitor_SLS/sls_files/project/assets\ui_font_KenyanCoffeeRg17.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_KENYANCOFFEERG17
#define UI_FONT_KENYANCOFFEERG17 1
#endif

#if UI_FONT_KENYANCOFFEERG17

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xf0, 0xc0,

    /* U+0022 "\"" */
    0xdd, 0xdd,

    /* U+0023 "#" */
    0x34, 0x68, 0x91, 0x27, 0xe4, 0x8b, 0x16, 0xfe,
    0xd1, 0x22, 0x44, 0x80,

    /* U+0024 "$" */
    0xff, 0x3c, 0xf3, 0xe3, 0xe7, 0xc7, 0xcf, 0x3c,
    0xf3, 0xfc,

    /* U+0025 "%" */
    0xf1, 0x3c, 0x8f, 0x23, 0xc8, 0xf4, 0x3d, 0xf,
    0xbc, 0x2f, 0x13, 0xc4, 0xf1, 0x3c, 0x8f, 0x23,
    0xc0,

    /* U+0026 "&" */
    0xe3, 0xc, 0x36, 0xd9, 0xfd, 0xb6, 0xdb, 0x6d,
    0xb6, 0xf8,

    /* U+0027 "'" */
    0xff,

    /* U+0028 "(" */
    0x7b, 0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xcc,

    /* U+0029 ")" */
    0xcd, 0xb6, 0xdb, 0x6d, 0xb6, 0xdb, 0x78,

    /* U+002A "*" */
    0x22, 0x8f, 0x8c, 0xec, 0x82, 0x0,

    /* U+002B "+" */
    0x30, 0x63, 0xf9, 0x83, 0x6, 0x0,

    /* U+002C "," */
    0xdc,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x18, 0x84, 0x23, 0x18, 0x84, 0x23, 0x18, 0x84,
    0x23, 0x18,

    /* U+0030 "0" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xf3, 0x78,

    /* U+0031 "1" */
    0xed, 0xb6, 0xdb, 0x6d, 0xb6,

    /* U+0032 "2" */
    0xfb, 0x3c, 0xf3, 0x1c, 0xff, 0xb8, 0xcf, 0x3c,
    0xf3, 0xfc,

    /* U+0033 "3" */
    0xfe, 0xf7, 0xb1, 0x98, 0x7b, 0xde, 0xf7, 0xbf,
    0x80,

    /* U+0034 "4" */
    0xc3, 0xd, 0xb6, 0xdb, 0x6d, 0xb6, 0xfc, 0x61,
    0x86, 0x18,

    /* U+0035 "5" */
    0xfe, 0xf7, 0xbc, 0x7c, 0x63, 0xde, 0xf7, 0xbf,
    0x80,

    /* U+0036 "6" */
    0x7f, 0x3c, 0xf0, 0xc3, 0xec, 0xf3, 0xcf, 0x3c,
    0xf3, 0x78,

    /* U+0037 "7" */
    0xf8, 0xc6, 0x63, 0x18, 0xce, 0x63, 0x19, 0xcc,
    0x0,

    /* U+0038 "8" */
    0xff, 0x3c, 0xf3, 0xcd, 0xec, 0xf3, 0xcf, 0x3c,
    0xf3, 0x78,

    /* U+0039 "9" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x3c, 0xdf, 0xc, 0x3c,
    0xf3, 0xf8,

    /* U+003A ":" */
    0xc0, 0x3,

    /* U+003B ";" */
    0xc0, 0x3, 0x70,

    /* U+003C "<" */
    0x6, 0x3f, 0xc6, 0x7, 0x83, 0xc0, 0x80,

    /* U+003D "=" */
    0xfe, 0x0, 0x0, 0xf, 0xe0,

    /* U+003E ">" */
    0x81, 0xe0, 0x78, 0x33, 0xde, 0x20, 0x0,

    /* U+003F "?" */
    0x7b, 0x3c, 0xf3, 0xc, 0x31, 0xce, 0x30, 0xc3,
    0x0, 0x30,

    /* U+0040 "@" */
    0x7a, 0x18, 0x61, 0x9e, 0x59, 0x65, 0x9e, 0x8,
    0x61, 0x78,

    /* U+0041 "A" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0xfc,
    0xf3, 0xcc,

    /* U+0042 "B" */
    0xfb, 0x3c, 0xf3, 0xcf, 0xec, 0xf3, 0xcf, 0x3c,
    0xf3, 0xf8,

    /* U+0043 "C" */
    0x7b, 0x3c, 0xf3, 0xcf, 0xc, 0x33, 0xcf, 0x3c,
    0xf3, 0x78,

    /* U+0044 "D" */
    0xfb, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xf3, 0xf8,

    /* U+0045 "E" */
    0xfc, 0xcf, 0xcc, 0xcc, 0xcc, 0xcc, 0xf0,

    /* U+0046 "F" */
    0xfc, 0xcf, 0xcc, 0xcc, 0xcc, 0xcc, 0xc0,

    /* U+0047 "G" */
    0x7b, 0x3c, 0xf0, 0xc3, 0x3c, 0xf3, 0xcf, 0x3c,
    0xf3, 0x7c,

    /* U+0048 "H" */
    0xcf, 0x3c, 0xf3, 0xcf, 0xfc, 0xf3, 0xcf, 0x3c,
    0xf3, 0xcc,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xc0,

    /* U+004A "J" */
    0x18, 0xc6, 0x31, 0x8c, 0x63, 0xde, 0xf7, 0xbf,
    0x80,

    /* U+004B "K" */
    0xcf, 0x6d, 0xbc, 0xf3, 0xcf, 0x3c, 0xdb, 0x6d,
    0xb7, 0xcc,

    /* U+004C "L" */
    0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xf0,

    /* U+004D "M" */
    0xe7, 0xe7, 0xe7, 0xe7, 0xf7, 0xff, 0xff, 0xdf,
    0xdb, 0xdb, 0xdb, 0xdb, 0xdb,

    /* U+004E "N" */
    0xef, 0xbe, 0xfb, 0xef, 0xbf, 0xf7, 0xdf, 0x7d,
    0xf7, 0xcc,

    /* U+004F "O" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xf3, 0x78,

    /* U+0050 "P" */
    0xfb, 0x3c, 0xf3, 0xcf, 0x3c, 0xfe, 0xc3, 0xc,
    0x30, 0xc0,

    /* U+0051 "Q" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xf3, 0xfc, 0x20, 0xc0,

    /* U+0052 "R" */
    0xfb, 0x3c, 0xf3, 0xcf, 0xec, 0xf3, 0xcf, 0x3c,
    0xf3, 0xcc,

    /* U+0053 "S" */
    0x7b, 0x3c, 0xf3, 0xe3, 0xe7, 0xc7, 0xcf, 0x3c,
    0xf3, 0x78,

    /* U+0054 "T" */
    0xfb, 0x18, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc6,
    0x0,

    /* U+0055 "U" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xf3, 0x78,

    /* U+0056 "V" */
    0xcf, 0x3c, 0xd3, 0x6d, 0xa6, 0x9e, 0x79, 0xe7,
    0x9e, 0x38,

    /* U+0057 "W" */
    0xdd, 0xee, 0xf7, 0x7a, 0xbd, 0x5e, 0xaf, 0xdf,
    0xee, 0x77, 0x3b, 0x9d, 0xce, 0xe7, 0x70,

    /* U+0058 "X" */
    0xcd, 0xb6, 0xda, 0x79, 0xe3, 0x9e, 0x79, 0xa6,
    0xf3, 0xcc,

    /* U+0059 "Y" */
    0xcf, 0x34, 0x9e, 0x79, 0xe3, 0xc, 0x30, 0xc3,
    0xc, 0x30,

    /* U+005A "Z" */
    0xf3, 0x32, 0x66, 0x66, 0x44, 0xcc, 0xf0,

    /* U+005B "[" */
    0xfb, 0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xdc,

    /* U+005C "\\" */
    0xc6, 0x30, 0x84, 0x31, 0x8c, 0x21, 0xc, 0x63,
    0x8, 0x42,

    /* U+005D "]" */
    0xed, 0xb6, 0xdb, 0x6d, 0xb6, 0xdb, 0x7c,

    /* U+005E "^" */
    0x18, 0x30, 0xe1, 0x62, 0x4c, 0x91, 0xa1,

    /* U+005F "_" */
    0xfe,

    /* U+0060 "`" */
    0x60,

    /* U+0061 "a" */
    0xfe, 0xf6, 0x3f, 0xef, 0x7b, 0xdf, 0xc0,

    /* U+0062 "b" */
    0xc6, 0x31, 0xfd, 0xef, 0x7b, 0xde, 0xf7, 0xbf,
    0x80,

    /* U+0063 "c" */
    0xfe, 0xf7, 0xbc, 0x6f, 0x7b, 0xdf, 0xc0,

    /* U+0064 "d" */
    0x18, 0xc7, 0xfd, 0xef, 0x7b, 0xde, 0xf7, 0xbf,
    0x80,

    /* U+0065 "e" */
    0xfe, 0xf7, 0xbf, 0xe3, 0x7b, 0xdf, 0xc0,

    /* U+0066 "f" */
    0x7c, 0xcf, 0xcc, 0xcc, 0xcc, 0xcc, 0xc0,

    /* U+0067 "g" */
    0xfe, 0xf7, 0xbd, 0xef, 0x7b, 0xdf, 0xc6, 0x3f,
    0x0,

    /* U+0068 "h" */
    0xc6, 0x31, 0xfd, 0xef, 0x7b, 0xde, 0xf7, 0xbd,
    0x80,

    /* U+0069 "i" */
    0xc3, 0xff, 0xff, 0xc0,

    /* U+006A "j" */
    0x30, 0x3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3e,

    /* U+006B "k" */
    0xc3, 0xc, 0x36, 0xdb, 0xcf, 0x3c, 0xf3, 0x4d,
    0xb6, 0xd8,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xc0,

    /* U+006D "m" */
    0xff, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb,
    0xdb, 0xdb,

    /* U+006E "n" */
    0xfe, 0xf7, 0xbd, 0xef, 0x7b, 0xde, 0xc0,

    /* U+006F "o" */
    0xfe, 0xf7, 0xbd, 0xef, 0x7b, 0xdf, 0xc0,

    /* U+0070 "p" */
    0xfe, 0xf7, 0xbd, 0xef, 0x7b, 0xdf, 0xf1, 0x8c,
    0x0,

    /* U+0071 "q" */
    0xfe, 0xf7, 0xbd, 0xef, 0x7b, 0xdf, 0xc6, 0x31,
    0x80,

    /* U+0072 "r" */
    0xfe, 0xf7, 0xbc, 0x63, 0x18, 0xc6, 0x0,

    /* U+0073 "s" */
    0xfe, 0xf7, 0xcf, 0x3c, 0x7b, 0xdf, 0xc0,

    /* U+0074 "t" */
    0xcc, 0xcf, 0xcc, 0xcc, 0xcc, 0xcc, 0x70,

    /* U+0075 "u" */
    0xde, 0xf7, 0xbd, 0xef, 0x7b, 0xdf, 0xc0,

    /* U+0076 "v" */
    0xce, 0xf6, 0xb5, 0xad, 0xee, 0x73, 0x80,

    /* U+0077 "w" */
    0xdd, 0xee, 0xf5, 0x7a, 0xb5, 0x52, 0xa9, 0x54,
    0xee, 0x77, 0x3b, 0x80,

    /* U+0078 "x" */
    0xc9, 0x67, 0x9e, 0x71, 0xc7, 0x96, 0x5b, 0x20,

    /* U+0079 "y" */
    0xde, 0xf7, 0xbd, 0xef, 0x7b, 0xdf, 0xc6, 0x3f,
    0x0,

    /* U+007A "z" */
    0xf3, 0x22, 0x66, 0x4c, 0xcf,

    /* U+007B "{" */
    0x36, 0x66, 0x66, 0x66, 0xc6, 0x66, 0x66, 0x66,
    0x63,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xc6, 0x66, 0x66, 0x66, 0x36, 0x66, 0x66, 0x66,
    0x6c,

    /* U+007E "~" */
    0xf0, 0x3c
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 46, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 48, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 79, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 7, .adv_w = 118, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 109, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 29, .adv_w = 164, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 107, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 41, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 57, .adv_w = 70, .box_w = 3, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 64, .adv_w = 70, .box_w = 3, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 71, .adv_w = 119, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 77, .adv_w = 134, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 83, .adv_w = 52, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 84, .adv_w = 56, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 85, .adv_w = 52, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 86, .adv_w = 74, .box_w = 5, .box_h = 16, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 96, .adv_w = 109, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 67, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 112, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 106, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 114, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 110, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 109, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 89, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 109, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 178, .adv_w = 109, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 52, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 52, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 193, .adv_w = 134, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 200, .adv_w = 134, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 205, .adv_w = 134, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 212, .adv_w = 105, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 115, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 232, .adv_w = 109, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 242, .adv_w = 110, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 107, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 111, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 272, .adv_w = 80, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 279, .adv_w = 78, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 108, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 113, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 306, .adv_w = 56, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 101, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 319, .adv_w = 110, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 79, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 336, .adv_w = 144, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 118, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 359, .adv_w = 109, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 369, .adv_w = 107, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 379, .adv_w = 109, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 391, .adv_w = 111, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 401, .adv_w = 107, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 411, .adv_w = 85, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 420, .adv_w = 110, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 101, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 156, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 102, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 465, .adv_w = 96, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 475, .adv_w = 85, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 482, .adv_w = 70, .box_w = 3, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 489, .adv_w = 74, .box_w = 5, .box_h = 16, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 499, .adv_w = 70, .box_w = 3, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 506, .adv_w = 123, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 513, .adv_w = 109, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 514, .adv_w = 55, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 11},
    {.bitmap_index = 515, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 522, .adv_w = 100, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 531, .adv_w = 94, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 538, .adv_w = 100, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 547, .adv_w = 95, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 554, .adv_w = 66, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 561, .adv_w = 100, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 570, .adv_w = 102, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 579, .adv_w = 52, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 52, .box_w = 4, .box_h = 16, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 591, .adv_w = 99, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 601, .adv_w = 51, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 605, .adv_w = 156, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 615, .adv_w = 103, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 622, .adv_w = 97, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 629, .adv_w = 100, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 638, .adv_w = 100, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 647, .adv_w = 92, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 654, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 661, .adv_w = 65, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 668, .adv_w = 102, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 675, .adv_w = 88, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 682, .adv_w = 145, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 694, .adv_w = 92, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 702, .adv_w = 103, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 711, .adv_w = 81, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 716, .adv_w = 72, .box_w = 4, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 725, .adv_w = 61, .box_w = 2, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 730, .adv_w = 72, .box_w = 4, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 739, .adv_w = 138, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 6}
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
    20, 0, 0, 0, -5, -30, 0, 0,
    0, 0, 0, 0, -14, 0, 0, 0,
    0, 0, 0, -4, -17, 0, -3, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    0, 0, 0, 0, 0, 0, -4, -3,
    -2, -4, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    -4, 0, 0, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, -2, 0,
    0, 0, -11, 0, -13, -2, 0, 0,
    0, -13, -7, -6, 0, -14, 0, -1,
    -2, 0, -2, 0, 0, -1, -5, -2,
    -5, -4, 0, -2, 0, -5, 0, 0,
    0, 0, -8, -11, 0, 0, 0, -11,
    0, 0, -14, -5, -3, -8, -14, -7,
    -2, 0, -3, 0, 0, 0, 0, -2,
    0, 0, 0, -11, 0, -15, 0, -5,
    -5, 0, -14, 0, 0, -5, 0, 0,
    0, 0, -16, 0, 0, 0, 0, 0,
    0, -14, -14, -5, -14, 0, -11, -12,
    0, -10, -5, 0, -3, -5, -11, 0,
    0, 0, -2, 0, -5, 0, 0, 0,
    0, 0, 0, 0, -4, -3, -2, -2,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, -4, -4, -4,
    -2, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, 0, 0, 0, 0, -9,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, -5,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, -2, 0, 0, -5, -27, -13,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -11, -18, -16, 0, 0, 0, 0, 0,
    0, -14, 0, 3, 3, 0, 3, 0,
    -2, -3, 0, -3, 0, -2, 0, 0,
    -2, 0, 0, 0, -2, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, -3, -2, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, -5, 0, -13, 0, 0, 0, 0,
    -4, 0, -8, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, -3, 0, 0,
    -2, 0, -2, -5, 0, 0, 0, 0,
    -10, 0, -1, 0, -18, 0, 0, 0,
    0, -4, 0, -13, 0, -10, -9, -7,
    0, -12, 0, -3, -1, 0, -5, 0,
    0, 0, 0, -4, -5, -5, 0, -1,
    0, 0, 0, 0, -25, 0, -17, 0,
    0, 0, 0, 0, 0, -4, 0, -1,
    -1, -3, -2, -6, -3, -3, 0, -2,
    0, -2, 0, 0, -2, 0, 0, 0,
    -2, 0, 0, -3, -4, -13, -14, 0,
    0, -4, 0, 0, 0, 0, -9, 3,
    0, 0, 0, 0, 0, -8, -8, 0,
    -4, 0, -7, -9, -3, -7, -3, 0,
    -5, -7, -5, 0, -3, -3, -7, -5,
    -14, 0, -6, 0, 0, 0, 0, -8,
    0, 3, 0, 0, 4, 0, -4, -5,
    0, -5, 0, -4, -5, 0, -4, 0,
    0, 0, -4, -5, 0, -3, -3, -11,
    -3, -13, 0, -4, 0, 0, 0, 0,
    -8, 0, 0, 0, 0, 2, 0, -6,
    -7, 0, -6, 0, -5, -4, 0, -5,
    0, 0, 0, 0, -6, 0, -5, -3,
    0, -8, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, -2, 0, 0, 0, 0,
    -2, -2, 0, -2, 0, 0, -3, 0,
    -2, 0, 0, 0, -2, 0, 0, -3,
    -4, -14, -14, -20, 0, -7, 0, 0,
    0, 0, -17, 0, 4, 3, 1, 4,
    0, -10, -11, 0, -11, 0, -8, -9,
    0, -8, -3, 0, 0, -8, -8, 0,
    0, 0, 0, -16, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 0, -4, 0, -3,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, -1, -1, -1, -2, 0, 0, 0,
    0, -6, 0, 0, -4, 0, -5, 0,
    0, 0, 0, 0, -5, 0, -8, -1,
    -1, -1, -8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, -11, -12,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    2, 0, 0, 0, 0, 3, 0, 0,
    0, 0, 0, -3, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, -3, 0, 0, -7, 0, 0,
    0, 0, 0, 6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, -6, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, -15, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -1, 0, -3, 0, 0,
    -3, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, -19, 0, -13, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 1, 0, 0, 0,
    0, -6, 0, 0, -1, -6, -5, 0,
    0, 0, 0, 0, -5, 0, 0, -2,
    0, 0, -5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, -3,
    0, 0, 0, 0, 0, 0, -14, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, -1, 0, 0, 0, -5, 0,
    -8, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, 0, -2, -1,
    0, -1, 0, 0, 0, 3, 0, 4,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    -2, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, -10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, -2, 0, -3, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -11, 0, 0, 0, 0, 0,
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
const lv_font_t ui_font_KenyanCoffeeRg17 = {
#else
lv_font_t ui_font_KenyanCoffeeRg17 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_KENYANCOFFEERG17*/

