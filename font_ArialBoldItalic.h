#ifndef _ILI9341_t3_font_ArialBoldItalic_
#define _ILI9341_t3_font_ArialBoldItalic_

#if __has_include(<RA8875.h>)
	#include "RA8875.h"
#elif __has_include(<ILI9488.h>)
	#include "ili9488.h"
#elif __has_include(<ILI9341_t3n.h>)
	#include "ILI9341_t3n.h"
#elif __has_include(<ILI9341.h>)
	#include "ili9341.h"
#elif __has_include(<ST7735_t3.h>)
	#include "ST7735_t3.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern const ILI9341_t3_font_t Arial_8_Bold_Italic;
extern const ILI9341_t3_font_t Arial_9_Bold_Italic;
extern const ILI9341_t3_font_t Arial_10_Bold_Italic;
extern const ILI9341_t3_font_t Arial_11_Bold_Italic;
extern const ILI9341_t3_font_t Arial_12_Bold_Italic;
extern const ILI9341_t3_font_t Arial_13_Bold_Italic;
extern const ILI9341_t3_font_t Arial_14_Bold_Italic;
extern const ILI9341_t3_font_t Arial_16_Bold_Italic;
extern const ILI9341_t3_font_t Arial_18_Bold_Italic;
extern const ILI9341_t3_font_t Arial_20_Bold_Italic;
extern const ILI9341_t3_font_t Arial_24_Bold_Italic;
extern const ILI9341_t3_font_t Arial_28_Bold_Italic;
extern const ILI9341_t3_font_t Arial_32_Bold_Italic;
extern const ILI9341_t3_font_t Arial_40_Bold_Italic;
extern const ILI9341_t3_font_t Arial_48_Bold_Italic;
extern const ILI9341_t3_font_t Arial_60_Bold_Italic;
extern const ILI9341_t3_font_t Arial_72_Bold_Italic;
extern const ILI9341_t3_font_t Arial_96_Bold_Italic;

#ifdef __cplusplus
} // extern "C"
#endif

#endif