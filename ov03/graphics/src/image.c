#include "image.h"

Image ImageNew( char* filename ) {

	Bitmap bmp = BitmapNew( filename );
	Image image = {
		.format = BMP,
		image = &bmp
	};

	return image;

}
