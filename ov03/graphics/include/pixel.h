#ifndef PIXEL_H
#define PIXEL_H

#include <stdint.h>

typedef struct {
	unsigned int32_t blue : 8;
	unsigned int32_t green : 8;
	unsigned int32_t red : 8;
	unsigned int32_t NA : 8;
} Pixel;

Pixel PixelNew(int8_t, int8_t, int8_t);

#endif // PIXEL_H
