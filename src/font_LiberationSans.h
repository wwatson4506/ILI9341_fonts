#ifndef _ILI9341_t3_font_LiberationSans_
#define _ILI9341_t3_font_LiberationSans_

#if __has_include(<RA8875.h>)
	#include "RA8875.h"
#elif __has_include(<ILI9488_t3.h>)
	#include "ILI9488_t3.h"
#elif __has_include(<ILI9341_t3n.h>)
	#include "ILI9341_t3n.h"
#elif __has_include(<ILI9341_t3.h>)
	#include "ILI9341_t3.h"
#elif __has_include(<ST7735_t3.h>)
	#include "ST7735_t3.h"
#elif __has_include(<HX8357_t3n.h>)
	#include "HX8357_t3n.h"
#elif __has_include(<GC9A01A_t3n.h>)
	#include "GC9A01A_t3n.h"
#elif __has_include(<ILI9341_GIGA_n.h>)
	#include "ILI9341_GIGA_n.h"
#else
	#include "def_ili9341_fonts.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern const ILI9341_t3_font_t LiberationSans_8;
extern const ILI9341_t3_font_t LiberationSans_9;
extern const ILI9341_t3_font_t LiberationSans_10;
extern const ILI9341_t3_font_t LiberationSans_11;
extern const ILI9341_t3_font_t LiberationSans_12;
extern const ILI9341_t3_font_t LiberationSans_13;
extern const ILI9341_t3_font_t LiberationSans_14;
extern const ILI9341_t3_font_t LiberationSans_16;
extern const ILI9341_t3_font_t LiberationSans_18;
extern const ILI9341_t3_font_t LiberationSans_20;
extern const ILI9341_t3_font_t LiberationSans_24;
extern const ILI9341_t3_font_t LiberationSans_28;
extern const ILI9341_t3_font_t LiberationSans_32;
extern const ILI9341_t3_font_t LiberationSans_40;
extern const ILI9341_t3_font_t LiberationSans_48;
extern const ILI9341_t3_font_t LiberationSans_60;
extern const ILI9341_t3_font_t LiberationSans_72;
extern const ILI9341_t3_font_t LiberationSans_96;

#ifdef __cplusplus
} // extern "C"
#endif

#endif
