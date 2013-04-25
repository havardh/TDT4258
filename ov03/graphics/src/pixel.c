#include "pixel.h"

Pixel PixelNew(uint8_t r, uint8_t g, uint8_t b) {

	Pixel pixel;
	pixel.red = r;
	pixel.green = g;
	pixel.blue = b;

	return pixel;
}

bool PixelNotTransparant( Pixel *pixel ) {
	if ( pixel->red == RT
	     && pixel->green == GT
	     && pixel->blue == BT) {
		return false;
	}
	return true;
}

void PixelPrint(Pixel *pixel) {

	printf("(r=%d,g=%d,b=%d)\n", pixel->red, pixel->green, pixel->blue);

}
