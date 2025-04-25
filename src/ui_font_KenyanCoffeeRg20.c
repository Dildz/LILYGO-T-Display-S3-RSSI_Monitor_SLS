/*******************************************************************************
 * Size: 20 px
 * Bpp: 1
 * Opts: --bpp 1 --size 20 --font C:/Users/Dildz/Documents/PlatformIO/LILYGO-T-Display-S3/LILYGO-T-Display-S3-RSSI_Monitor_SLS/sls_files/project/assets/Kenyan Coffee Rg.otf -o C:/Users/Dildz/Documents/PlatformIO/LILYGO-T-Display-S3/LILYGO-T-Display-S3-RSSI_Monitor_SLS/sls_files/project/assets\ui_font_KenyanCoffeeRg20.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_KENYANCOFFEERG20
#define UI_FONT_KENYANCOFFEERG20 1
#endif

#if UI_FONT_KENYANCOFFEERG20

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xff, 0xf,

    /* U+0022 "\"" */
    0xde, 0xf7, 0xbd, 0x80,

    /* U+0023 "#" */
    0x13, 0x12, 0x12, 0x12, 0x32, 0x7f, 0x7f, 0x36,
    0x26, 0x26, 0x7f, 0x7f, 0x24, 0x64, 0x64, 0x6c,

    /* U+0024 "$" */
    0x33, 0xef, 0xf3, 0xcf, 0x3c, 0x38, 0x78, 0x70,
    0xf3, 0xcf, 0x3c, 0xff, 0x78, 0xc0,

    /* U+0025 "%" */
    0xf8, 0xcd, 0x88, 0xd9, 0x8d, 0x98, 0xd9, 0xd,
    0xb0, 0xda, 0xf, 0xff, 0xff, 0xf0, 0x5b, 0xd,
    0xb0, 0x9b, 0x19, 0xb1, 0x9b, 0x11, 0xb3, 0x1f,

    /* U+0026 "&" */
    0x61, 0xc3, 0x6, 0xc, 0xd9, 0x9f, 0xff, 0xcd,
    0x9b, 0x36, 0x6c, 0xd9, 0xbf, 0x3e,

    /* U+0027 "'" */
    0xff, 0xc0,

    /* U+0028 "(" */
    0x7f, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc,
    0xcc, 0xcc, 0xf7,

    /* U+0029 ")" */
    0xef, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x33, 0x33, 0xfe,

    /* U+002A "*" */
    0x10, 0x22, 0x5b, 0xe3, 0x9b, 0xe4, 0x88, 0x0,

    /* U+002B "+" */
    0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18,

    /* U+002C "," */
    0xf7,

    /* U+002D "-" */
    0xfc,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x8, 0xc6, 0x31, 0x88, 0x46, 0x31, 0x88, 0x46,
    0x31, 0x88, 0x46, 0x30,

    /* U+0030 "0" */
    0x7b, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xf3, 0xcf, 0x3f, 0xde,

    /* U+0031 "1" */
    0xff, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,

    /* U+0032 "2" */
    0x7b, 0xfc, 0xf3, 0xcc, 0x31, 0xde, 0xf3, 0xc,
    0xf3, 0xcf, 0x3f, 0xff,

    /* U+0033 "3" */
    0x7b, 0xfc, 0xf3, 0xcc, 0x33, 0xcf, 0xf, 0x3c,
    0xf3, 0xcf, 0x3f, 0xde,

    /* U+0034 "4" */
    0xc1, 0x83, 0x6, 0x6c, 0xd9, 0xb3, 0x66, 0xcd,
    0x9b, 0xff, 0xf0, 0xc1, 0x83, 0x6,

    /* U+0035 "5" */
    0xff, 0xfc, 0xf3, 0xcf, 0xf, 0xbf, 0xc, 0x3c,
    0xf3, 0xcf, 0x3f, 0xde,

    /* U+0036 "6" */
    0x7b, 0xfc, 0xf3, 0xc3, 0xf, 0xbf, 0xcf, 0x3c,
    0xf3, 0xcf, 0x3f, 0xde,

    /* U+0037 "7" */
    0xff, 0xf1, 0xc7, 0x18, 0x63, 0x8e, 0x30, 0xc7,
    0x1c, 0x71, 0x86, 0x38,

    /* U+0038 "8" */
    0x7b, 0xfc, 0xf3, 0xcf, 0x3f, 0xde, 0xcf, 0x3c,
    0xf3, 0xcf, 0x3f, 0xde,

    /* U+0039 "9" */
    0x7b, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0xfd, 0xf0,
    0xc3, 0xcf, 0x3f, 0xde,

    /* U+003A ":" */
    0xf0, 0x0, 0xf0,

    /* U+003B ";" */
    0xf0, 0x0, 0xf7,

    /* U+003C "<" */
    0x1, 0xf, 0x3c, 0xf0, 0xe0, 0x78, 0x1f, 0x3,

    /* U+003D "=" */
    0xff, 0xff, 0x0, 0x0, 0xff, 0xff,

    /* U+003E ">" */
    0x80, 0xf0, 0x3c, 0xf, 0x7, 0x1e, 0xf8, 0xc0,

    /* U+003F "?" */
    0x7b, 0xfc, 0xf3, 0xcc, 0x30, 0xc7, 0x18, 0xe3,
    0xc, 0x30, 0x3, 0xc,

    /* U+0040 "@" */
    0x7d, 0xff, 0x1e, 0x3c, 0x7b, 0xf7, 0xef, 0xdf,
    0xbf, 0x7e, 0xc, 0x78, 0xff, 0xbe,

    /* U+0041 "A" */
    0x7b, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xff, 0xff, 0x3c, 0xf3,

    /* U+0042 "B" */
    0xfb, 0xfc, 0xf3, 0xcf, 0x3f, 0xbf, 0xcf, 0x3c,
    0xf3, 0xcf, 0x3f, 0xfe,

    /* U+0043 "C" */
    0x7b, 0xfc, 0xf3, 0xcf, 0x3c, 0xf0, 0xc3, 0x3c,
    0xf3, 0xcf, 0x3f, 0xde,

    /* U+0044 "D" */
    0xfb, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xf3, 0xcf, 0x3f, 0xfe,

    /* U+0045 "E" */
    0xff, 0xf1, 0x8f, 0xff, 0x18, 0xc6, 0x31, 0x8c,
    0x63, 0xff,

    /* U+0046 "F" */
    0xff, 0xf1, 0x8f, 0xff, 0x18, 0xc6, 0x31, 0x8c,
    0x63, 0x18,

    /* U+0047 "G" */
    0x7b, 0xfc, 0xf3, 0xcf, 0xc, 0x33, 0xcf, 0x3c,
    0xf3, 0xcf, 0x3f, 0xdf,

    /* U+0048 "H" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3f, 0xff, 0xcf, 0x3c,
    0xf3, 0xcf, 0x3c, 0xf3,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff,

    /* U+004A "J" */
    0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xf, 0x3c,
    0xf3, 0xcf, 0x3f, 0xde,

    /* U+004B "K" */
    0xcd, 0xbb, 0x76, 0xcd, 0x9e, 0x3c, 0x78, 0xf9,
    0xb3, 0x66, 0xcd, 0xd9, 0xb3, 0x67,

    /* U+004C "L" */
    0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8c,
    0x63, 0xff,

    /* U+004D "M" */
    0xe3, 0xf1, 0xfd, 0xfe, 0xff, 0x7f, 0xbf, 0xdf,
    0xef, 0xd7, 0xea, 0xf5, 0x7b, 0xbd, 0xde, 0xef,
    0x77, 0xbb,

    /* U+004E "N" */
    0xe7, 0xcf, 0x9f, 0x3f, 0x7e, 0xfd, 0xfb, 0xdf,
    0xbf, 0x7e, 0xfc, 0xf9, 0xf3, 0xe7,

    /* U+004F "O" */
    0x7b, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xf3, 0xcf, 0x3f, 0xde,

    /* U+0050 "P" */
    0xfb, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0xff, 0xec,
    0x30, 0xc3, 0xc, 0x30,

    /* U+0051 "Q" */
    0x7b, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xf3, 0xcf, 0x3f, 0xde, 0x8, 0x30,

    /* U+0052 "R" */
    0xfb, 0xfc, 0xf3, 0xcf, 0x3f, 0xff, 0xcf, 0x3c,
    0xf3, 0xcf, 0x3c, 0xf3,

    /* U+0053 "S" */
    0x7b, 0xfc, 0xf3, 0xcf, 0xe, 0x1e, 0x1c, 0x3c,
    0xf3, 0xcf, 0x3f, 0xde,

    /* U+0054 "T" */
    0xff, 0xf3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0xc, 0x30, 0xc3, 0xc,

    /* U+0055 "U" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xf3, 0xcf, 0x3f, 0xde,

    /* U+0056 "V" */
    0xe7, 0xcf, 0x9b, 0x36, 0x6d, 0xdb, 0x36, 0x6c,
    0xd9, 0xb3, 0xe3, 0xc7, 0x8e, 0x1c,

    /* U+0057 "W" */
    0xef, 0x7e, 0xf7, 0x6f, 0x66, 0xf6, 0x6f, 0x66,
    0xf6, 0x6f, 0x66, 0xf6, 0x7f, 0x67, 0xbe, 0x79,
    0xe7, 0x9c, 0x79, 0xc3, 0x9c, 0x39, 0xc3, 0x9c,

    /* U+0058 "X" */
    0xe6, 0xcd, 0x9b, 0x67, 0xcf, 0x8f, 0x1e, 0x3c,
    0x79, 0xb3, 0x66, 0xec, 0xf9, 0xf3,

    /* U+0059 "Y" */
    0xcf, 0x3c, 0xfb, 0x79, 0xe7, 0x9e, 0x30, 0xc3,
    0xc, 0x30, 0xc3, 0xc,

    /* U+005A "Z" */
    0xff, 0xc6, 0x73, 0x18, 0xc6, 0x63, 0x18, 0xcc,
    0x63, 0xff,

    /* U+005B "[" */
    0xff, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc,
    0xcc, 0xcc, 0xff,

    /* U+005C "\\" */
    0xc6, 0x30, 0x86, 0x31, 0x8c, 0x21, 0x8c, 0x63,
    0x8, 0x63, 0x18, 0xc2,

    /* U+005D "]" */
    0xff, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x33, 0x33, 0xff,

    /* U+005E "^" */
    0x38, 0x38, 0x28, 0x6c, 0x6c, 0x44, 0xc6, 0xc6,
    0x82,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0060 "`" */
    0x66, 0x30,

    /* U+0061 "a" */
    0xfb, 0xfc, 0xf3, 0xf, 0xff, 0xf3, 0xcf, 0x3f,
    0xff,

    /* U+0062 "b" */
    0xc3, 0xc, 0x30, 0xff, 0xfc, 0xf3, 0xcf, 0x3c,
    0xf3, 0xcf, 0x3f, 0xff,

    /* U+0063 "c" */
    0x7f, 0xfc, 0xf3, 0xcf, 0xc, 0xf3, 0xcf, 0x3f,
    0xde,

    /* U+0064 "d" */
    0xc, 0x30, 0xc3, 0xff, 0xfc, 0xf3, 0xcf, 0x3c,
    0xf3, 0xcf, 0x3f, 0xff,

    /* U+0065 "e" */
    0xfb, 0xfc, 0xf3, 0xcf, 0xff, 0xf0, 0xcf, 0x3f,
    0xff,

    /* U+0066 "f" */
    0x37, 0x66, 0xff, 0x66, 0x66, 0x66, 0x66, 0x66,

    /* U+0067 "g" */
    0xff, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3f,
    0xff, 0xf, 0xff, 0x80,

    /* U+0068 "h" */
    0xc3, 0xc, 0x30, 0xff, 0xfc, 0xf3, 0xcf, 0x3c,
    0xf3, 0xcf, 0x3c, 0xf3,

    /* U+0069 "i" */
    0xf0, 0xff, 0xff, 0xff,

    /* U+006A "j" */
    0x33, 0x0, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x3f, 0xe0,

    /* U+006B "k" */
    0xc3, 0xc, 0x30, 0xcf, 0x6d, 0xbc, 0xf3, 0xcf,
    0x36, 0xdb, 0x6d, 0xf3,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xff,

    /* U+006D "m" */
    0xfb, 0xff, 0xfc, 0xcf, 0x33, 0xcc, 0xf3, 0x3c,
    0xcf, 0x33, 0xcc, 0xf3, 0x3c, 0xcf, 0x33,

    /* U+006E "n" */
    0xff, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xf3,

    /* U+006F "o" */
    0xfb, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3f,
    0xfe,

    /* U+0070 "p" */
    0xff, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3f,
    0xff, 0xc3, 0xc, 0x0,

    /* U+0071 "q" */
    0xff, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3f,
    0xff, 0xc, 0x30, 0xc0,

    /* U+0072 "r" */
    0xff, 0xfc, 0xf3, 0xcf, 0xc, 0x30, 0xc3, 0xc,
    0x30,

    /* U+0073 "s" */
    0xfb, 0xfc, 0xf3, 0xc1, 0xe1, 0xc3, 0xcf, 0x3f,
    0xdf,

    /* U+0074 "t" */
    0x66, 0x66, 0xff, 0x66, 0x66, 0x66, 0x66, 0x73,

    /* U+0075 "u" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3f,
    0xff,

    /* U+0076 "v" */
    0xcf, 0x3e, 0xdb, 0x6d, 0xb6, 0x9e, 0x79, 0xe7,
    0x9e,

    /* U+0077 "w" */
    0xce, 0xf9, 0xdb, 0x3b, 0x77, 0x67, 0xec, 0xf5,
    0x9e, 0xb3, 0xd6, 0x7b, 0x8f, 0x71, 0xce, 0x39,
    0xc0,

    /* U+0078 "x" */
    0xcc, 0xd9, 0xb3, 0x47, 0x87, 0xe, 0x3c, 0x6c,
    0xd9, 0xb6, 0x70,

    /* U+0079 "y" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3f,
    0xff, 0xf, 0xff, 0x80,

    /* U+007A "z" */
    0xff, 0xc6, 0x63, 0x19, 0x8c, 0x46, 0x3f, 0xf0,

    /* U+007B "{" */
    0x1c, 0xf3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xcf,
    0x3c, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x3c,
    0x70,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xe7, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8e, 0x73,
    0x18, 0xc6, 0x31, 0x8c, 0x6f, 0x70,

    /* U+007E "~" */
    0xf1, 0xff, 0x8f
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 54, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 57, .box_w = 2, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 93, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 9, .adv_w = 139, .box_w = 8, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 128, .box_w = 6, .box_h = 18, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 39, .adv_w = 193, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 126, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 48, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 79, .adv_w = 82, .box_w = 4, .box_h = 22, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 90, .adv_w = 82, .box_w = 4, .box_h = 22, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 101, .adv_w = 140, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 109, .adv_w = 158, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 117, .adv_w = 61, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 118, .adv_w = 66, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 119, .adv_w = 61, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 87, .box_w = 5, .box_h = 19, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 132, .adv_w = 128, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 78, .box_w = 4, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 132, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 164, .adv_w = 125, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 134, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 129, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 128, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 105, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 128, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 128, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 250, .adv_w = 61, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 253, .adv_w = 61, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 256, .adv_w = 158, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 264, .adv_w = 158, .box_w = 8, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 270, .adv_w = 158, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 278, .adv_w = 123, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 135, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 304, .adv_w = 128, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 130, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 126, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 130, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 352, .adv_w = 94, .box_w = 5, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 92, .box_w = 5, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 127, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 384, .adv_w = 133, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 396, .adv_w = 66, .box_w = 2, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 400, .adv_w = 119, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 412, .adv_w = 129, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 426, .adv_w = 92, .box_w = 5, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 436, .adv_w = 170, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 454, .adv_w = 138, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 468, .adv_w = 128, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 480, .adv_w = 126, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 128, .box_w = 6, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 506, .adv_w = 131, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 518, .adv_w = 126, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 530, .adv_w = 100, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 542, .adv_w = 129, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 554, .adv_w = 119, .box_w = 7, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 568, .adv_w = 184, .box_w = 12, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 592, .adv_w = 120, .box_w = 7, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 606, .adv_w = 113, .box_w = 6, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 618, .adv_w = 100, .box_w = 5, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 628, .adv_w = 82, .box_w = 4, .box_h = 22, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 639, .adv_w = 87, .box_w = 5, .box_h = 19, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 651, .adv_w = 82, .box_w = 4, .box_h = 22, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 662, .adv_w = 145, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 671, .adv_w = 129, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 673, .adv_w = 64, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 13},
    {.bitmap_index = 675, .adv_w = 113, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 684, .adv_w = 117, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 111, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 705, .adv_w = 117, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 717, .adv_w = 112, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 726, .adv_w = 77, .box_w = 4, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 734, .adv_w = 117, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 746, .adv_w = 120, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 758, .adv_w = 61, .box_w = 2, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 762, .adv_w = 61, .box_w = 4, .box_h = 19, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 772, .adv_w = 116, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 784, .adv_w = 60, .box_w = 2, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 788, .adv_w = 183, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 803, .adv_w = 121, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 812, .adv_w = 115, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 821, .adv_w = 117, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 833, .adv_w = 117, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 845, .adv_w = 108, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 854, .adv_w = 113, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 863, .adv_w = 77, .box_w = 4, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 871, .adv_w = 120, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 880, .adv_w = 104, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 889, .adv_w = 170, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 906, .adv_w = 108, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 917, .adv_w = 121, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 929, .adv_w = 96, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 937, .adv_w = 85, .box_w = 6, .box_h = 22, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 954, .adv_w = 72, .box_w = 2, .box_h = 22, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 960, .adv_w = 85, .box_w = 5, .box_h = 22, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 974, .adv_w = 163, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = 6}
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
    24, 0, 0, 0, -6, -35, 0, 0,
    0, 0, 0, 0, -16, 0, 0, 0,
    0, 0, 0, -5, -20, 0, -4, 0,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -6, 0,
    0, 0, 0, 0, 0, 0, -5, -4,
    -3, -4, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -15,
    -4, 0, 0, -9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 16, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, -2, 0,
    0, 0, -13, 0, -16, -2, 0, 0,
    0, -15, -8, -7, 0, -16, 0, -1,
    -2, 0, -3, 0, 0, -1, -6, -3,
    -5, -5, 0, -3, 0, -6, 0, 0,
    0, 0, -10, -13, 0, 0, 0, -13,
    0, 0, -16, -5, -3, -9, -17, -8,
    -2, 0, -4, 0, 0, 0, 0, -2,
    0, 0, 0, -13, 0, -17, 0, -6,
    -6, 0, -16, 0, 0, -6, 0, 0,
    0, 0, -19, 0, 0, 0, 0, 0,
    0, -16, -17, -6, -17, 0, -13, -14,
    0, -11, -6, 0, -4, -6, -13, 0,
    0, 0, -2, 0, -6, 0, 0, 0,
    0, 0, 0, 0, -5, -4, -3, -3,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, -5, -5, -5,
    -2, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, 0, 0, 0, 0, 0, -11,
    0, 0, 0, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, -6,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, -3, 0, 0, -5, -31, -15,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -13, -21, -19, 0, 0, 0, 0, 0,
    0, -16, 0, 3, 3, 0, 4, 0,
    -2, -3, 0, -4, 0, -3, 0, 0,
    -3, 0, 0, 0, -2, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, -3, -3, 0, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, -6, 0, -15, 0, 0, 0, 0,
    -4, 0, -9, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, -4, 0, 0,
    -2, 0, -3, -5, 0, 0, 0, 0,
    -12, 0, -1, 0, -21, 0, 0, 0,
    0, -5, 0, -15, 0, -11, -11, -9,
    0, -14, 0, -4, -1, 0, -5, 0,
    0, 0, 0, -5, -6, -6, 0, -1,
    0, 0, 0, 0, -29, 0, -20, 0,
    0, 0, 0, 0, 0, -5, 0, -2,
    -1, -4, -3, -7, -3, -3, 0, -2,
    0, -2, 0, 0, -2, 0, 0, 0,
    -2, 0, 0, -4, -5, -15, -16, 0,
    0, -5, 0, 0, 0, 0, -11, 3,
    0, 0, 0, 0, 0, -10, -10, 0,
    -5, 0, -8, -11, -3, -8, -3, 0,
    -6, -8, -6, 0, -3, -4, -8, -5,
    -17, 0, -7, 0, 0, 0, 0, -9,
    0, 3, 0, 0, 5, 0, -5, -6,
    0, -6, 0, -5, -6, 0, -5, 0,
    0, 0, -4, -5, 0, -3, -3, -13,
    -4, -15, 0, -5, 0, 0, 0, 0,
    -10, 0, 0, 0, 0, 3, 0, -7,
    -8, 0, -7, 0, -6, -4, 0, -6,
    0, 0, 0, 0, -7, 0, -5, -3,
    0, -9, 0, 0, 0, 0, 0, 0,
    -6, 0, 0, -2, 0, 0, 0, 0,
    -2, -2, 0, -2, 0, 0, -4, 0,
    -2, 0, 0, 0, -2, 0, 0, -3,
    -5, -16, -17, -24, 0, -8, 0, 0,
    0, 0, -20, 0, 5, 4, 2, 4,
    0, -12, -13, 0, -13, 0, -10, -11,
    0, -10, -4, 0, 0, -10, -10, 0,
    0, 0, 0, -19, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, -5, 0, -3,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, -2, -1, -2, -2, 0, 0, 0,
    0, -7, 0, 0, -5, 0, -6, 0,
    0, 0, 0, 0, -6, 0, -10, -2,
    -2, -2, -10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, -12, -14,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    3, 0, 0, 0, 0, 4, 0, 0,
    0, 0, 0, -4, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, -3, 0, 0, -8, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, -7, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, -18, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, -2, 0, -3, 0, 0,
    -3, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, -22, 0, -16, 0, 0,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 2, 0, 1, 0, 0, 0,
    0, -7, 0, 0, -1, -7, -6, 0,
    0, 0, 0, 0, -6, 0, 0, -2,
    0, 0, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, -3,
    0, 0, 0, 0, 0, 0, -17, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 2, 0, 0, 0,
    0, 0, -1, 0, 0, 0, -5, 0,
    -10, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, 0, -2, -2,
    0, -2, 0, 0, 0, 3, 0, 5,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    -2, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, -12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, -3, 0, -3, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -13, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    3, 0, 0, 0, 0, 0, 0
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
const lv_font_t ui_font_KenyanCoffeeRg20 = {
#else
lv_font_t ui_font_KenyanCoffeeRg20 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 22,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_KENYANCOFFEERG20*/

