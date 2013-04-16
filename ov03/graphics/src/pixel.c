#include "pixel.h"

Pixel PixelNew(int8_t r, int8_t g, int8_t b) {

	Pixel pixel;
	pixel.red = r;
	pixel.green = g;
	pixel.blue = b;

	return pixel;
}
