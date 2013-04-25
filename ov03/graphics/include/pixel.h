#ifndef PIXEL_H
#define PIXEL_H

#include <stdint.h>
#include <stdbool.h>

#define RT 55
#define GT 122
#define BT 46

typedef struct __attribute__((__packed__)) {
	uint8_t blue;
	uint8_t green;
	uint8_t red;
} Pixel;

Pixel PixelNew(uint8_t, uint8_t, uint8_t);

bool PixelNotTransparant(Pixel *pixel);

void PixelPrint(Pixel *);

#endif // PIXEL_H
