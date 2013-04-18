#ifndef PIXEL_H
#define PIXEL_H

#include <stdint.h>

typedef struct {
	uint8_t blue;
	uint8_t green;
	uint8_t red;
} Pixel;

Pixel PixelNew(uint8_t, uint8_t, uint8_t);

#endif // PIXEL_H
