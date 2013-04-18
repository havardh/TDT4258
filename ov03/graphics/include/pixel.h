#ifndef PIXEL_H
#define PIXEL_H

#include <stdint.h>

typedef struct __attribute__((__packed__)) {
	uint8_t blue;
	uint8_t green;
	uint8_t red;
} Pixel;

Pixel PixelNew(uint8_t, uint8_t, uint8_t);

void PixelPrint(Pixel *);

#endif // PIXEL_H
