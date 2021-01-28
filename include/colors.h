// MIT License

// Copyright (c) 2020 phonght32

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#ifndef _COLORS_H_
#define _COLORS_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
	uint32_t hue;
	uint32_t sat;
	uint32_t val;
} color_hsv_t;

void rgb_2_hsv(uint32_t rgb, color_hsv_t *hsv);
void hsv_2_rgb(color_hsv_t hsv, uint32_t *rgb);

void rgb_2_color565(uint32_t rgb, uint16_t *color565);
void color565_2_rgb(uint16_t color565, uint32_t *rgb);

void rgb_2_swap565(uint32_t rgb, uint16_t *swap565);
void swap565_2_rgb(uint16_t swap565, uint32_t *rgb);

#define COLOR_MAROON							0x800000
#define COLOR_DARK_RED							0x8B0000
#define COLOR_BROWN								0xA52A2A
#define COLOR_FIREBRICK							0xB22222
#define COLOR_CRIMSON							0xDC143C
#define COLOR_RED								0xFF0000
#define COLOR_TOMATO							0xFF6347
#define COLOR_CORAL								0xFF7F50
#define COLOR_INDIAN_RED						0xCD5C5C
#define COLOR_LIGHT_CORAL						0xF08080
#define COLOR_DARK_SALMON						0xE9967A
#define COLOR_SALMON							0xFA8072
#define COLOR_LIGHT_SALMON						0xFFA07A
#define COLOR_ORANGE_RED						0xFF4500
#define COLOR_DARK_ORANGE						0xFF8C00
#define COLOR_ORANGE							0xFFA500
#define COLOR_GOLD 								0xFFD700
#define COLOR_DARK_GOLDEN_ROD					0xB8860B
#define COLOR_GOLDEN_ROD 						0xDAA520
#define COLOR_PALE_GOLDEN_ROD					0xEEE8AA
#define COLOR_DARK_KHAKI						0xBDB76B
#define COLOR_KHAKI 							0xF0E68C
#define COLOR_OLIVE								0x808000
#define COLOR_YELLOW							0xFFFF00
#define COLOR_YELLOW_GREEN						0x9ACD32
#define COLOR_DARK_OLIVE_GREEN					0x556B2F
#define COLOR_OLIVE_DRAB						0x6B8E23
#define COLOR_LAWN_GREEN						0x7CFC00
#define COLOR_CHART_REUSE						0x7FFF00
#define COLOR_GREEN_YELLOW						0xADFF2F
#define COLOR_DARK_GREEN 						0x006400
#define COLOR_GREEN								0x008000
#define COLOR_FOREST_GREEN						0x228B22
#define COLOR_LIME								0x00FF00
#define COLOR_LIME_GREEN						0x32CD32
#define COLOR_LIGHT_GREEN						0x90EE90
#define COLOR_PALE_GREEN						0x98FB98
#define COLOR_DARK_SEA_GREEN					0x8FBC8F
#define COLOR_MEDIUM_SPRING_GREEN				0x00FA9A
#define COLOR_SPRING_GREEN 						0x00FF7F
#define COLOR_SEA_GREEN 						0x2E8B57
#define COLOR_MEDIUM_AQUA_MARINE 				0x66CDAA
#define COLOR_MEDIUM_SEA_GREEN					0x3CB371
#define COLOR_LIGHT_SEA_GREEN					0x20B2AA
#define COLOR_DARK_SLATE_GRAY					0x2F4F4F
#define COLOR_TEAL								0x008080
#define COLOR_DARK_CYAN							0x008B8B
#define COLOR_AQUA 								0x00FFFF
#define COLOR_CYAN 								0x00FFFF
#define COLOR_LIGHT_CYAN 						0xE0FFFF
#define COLOR_DARK_TURQUOISE 					0x00CED1
#define COLOR_TURQUOISE 						0x40E0D0
#define COLOR_MEDIUM_TURQUOISE					0x48D1CC
#define COLOR_PALE_TURQUOISE					0xAFEEEE
#define COLOR_AQUA_MARINE 						0x7FFFD4
#define COLOR_POWDER_BLUE 						0xB0E0E6
#define COLOR_CADET_BLUE						0x5F9EA0
#define COLOR_STEEL_BLUE						0x4682B4
#define COLOR_CORN_FLOWER_BLUE					0x6495ED
#define COLOR_DEEP_SKY_BLUE						0x00BFFF
#define COLOR_DODGER_BLUE						0x1E90FF
#define COLOR_LIGHT_BLUE						0xADD8E6
#define COLOR_SKY_BLUE 							0x87CEEB
#define COLOR_LIGHT_SKY_BLUE					0x87CEFA
#define COLOR_MIDNIGHT_BLUE						0x191970
#define COLOR_NAVY								0x000080
#define COLOR_DARK_BLUE							0x00008B
#define COLOR_MEDIUM_BLUE						0x0000CD
#define COLOR_BLUE 								0x0000FF
#define COLOR_ROYAL_BLUE						0x4169E1
#define COLOR_BLUE_VIOLET 						0x8A2BE2
#define COLOR_INDIGO							0x4B0082
#define COLOR_DARK_SLATE_BLUE					0x483D8B
#define COLOR_SLATE_BLUE 						0x6A5ACD
#define COLOR_MEDIUM_SLATE_BLUE 				0x7B68EE
#define COLOR_MEDIUM_PURPLE						0x9370DB
#define COLOR_DARK_MAGENTA						0x8B008B
#define COLOR_DARK_VIOLET						0x9400D3
#define COLOR_DARK_ORCHID						0x9932CC
#define COLOR_MEDIUM_ORCHID						0xBA55D3
#define COLOR_PURPLE 							0x800080
#define COLOR_THISTLE							0xD8BFD8
#define COLOR_PLUM								0xDDA0DD
#define COLOR_VIOLET							0xEE82EE
#define COLOR_MAGENTA 							0xFF00FF
#define COLOR_ORCHID 							0xDA70D6
#define COLOR_MEDIUM_VIOLET_RED					0xC71585
#define COLOR_PALE_VIOLET_RED					0xDB7093
#define COLOR_DEEP_PINK							0xFF1493
#define COLOR_HOT_PINK							0xFF69B4
#define COLOR_LIGHT_PINK						0xFFB6C1
#define COLOR_PINK 								0xFFC0CB
#define COLOR_ANTIQUE_WHITE						0xFAEBD7
#define COLOR_BEIGE								0xF5F5DC
#define COLOR_BISQUE							0xFFE4C4
#define COLOR_BLANCHED_ALMOND					0xFFEBCD
#define COLOR_WHEAT								0xF5DEB3
#define COLOR_CORM_SILK							0xFFF8DC
#define COLOR_LEMON_CHIFFON						0xFFFACD
#define COLOR_LIGHT_GOLDEN_ROD_YELLOW			0xFAFAD2
#define COLOR_LIGHT_YELLOW 						0xFFFFE0
#define COLOR_SADDLE_BROWN						0x8B4513
#define COLOR_SIENNA 							0xA0522D
#define COLOR_CHOCOLATE							0xD2691E
#define COLOR_PERU 								0xCD853F
#define COLOR_SANDY_BROWN						0xF4A460
#define COLOR_BURLY_WOOD						0xDEB887
#define COLOR_TAN 								0xD2B48C
#define COLOR_ROSY_BROWN						0xBC8F8F
#define COLOR_MOCCASIN							0xFFE4B5
#define COLOR_NAVAJO_WHITE						0xFFDEAD
#define COLOR_PEACH_PUFF						0xFFDAB9
#define COLOR_MISTY_ROSE						0xFFE4E1
#define COLOR_LAVENDER_BLUSH					0xFFF0F5
#define COLOR_LINEN								0xFAF0E6
#define COLOR_OLD_LACE							0xFDF5E6
#define COLOR_PAPAYA_WHIP						0xFFEFD5
#define COLOR_SEA_SHELL							0xFFF5EE
#define COLOR_MINT_CREAM						0xF5FFFA
#define COLOR_SLATE_GRAY 						0x708090
#define COLOR_LIGHT_SLATE_GRAY					0x778899
#define COLOR_LIGHT_STEEL_BLUE					0xB0C4DE
#define COLOR_LAVENDER 							0xE6E6FA
#define COLOR_FLORAL_WHITE						0xFFFAF0
#define COLOR_ALICE_BLUE 						0xF0F8FF
#define COLOR_GHOST_WHITE 						0xF8F8FF
#define COLOR_HONEYDEW 							0xF0FFF0
#define COLOR_IVORY								0xFFFFF0
#define COLOR_AZURE 							0xF0FFFF
#define COLOR_SNOW 								0xFFFAFA
#define COLOR_BLACK 							0x000000
#define COLOR_DIM_GRAY							0x696969
#define COLOR_GRAY 								0x808080
#define COLOR_DARK_GRAY 						0xA9A9A9
#define COLOR_SILVER							0xC0C0C0
#define COLOR_LIGHT_GRAY 						0xD3D3D3
#define COLOR_GAINSBORO							0xDCDCDC
#define COLOR_WHITE_SMOKE 						0xF5F5F5
#define COLOR_WHITE 							0xFFFFFF

#ifdef __cplusplus
}
#endif

#endif /* _COLORS_H_ */
