#include "pixel.h"

Pixel PixelNew(uint8_t r, uint8_t g, uint8_t b) {

	Pixel pixel;
	pixel.red = r;
	pixel.green = g;
	pixel.blue = b;

	return pixel;
}
