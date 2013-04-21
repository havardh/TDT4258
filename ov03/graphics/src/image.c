#include "image.h"

static void paint (void *shape, Screen *screen) {

	Image *image = (Image*) shape;
	Shape *actual_image = (Shape*)image->image;

	actual_image->paint(actual_image, screen);

}

Image ImageNew( char* filename, int x, int y ) {

	Bitmap *bmp = BitmapNew( filename );

	Image image = {
		.parent = NULL,
		.paint = &paint,
		.x = x,
		.y = y,
		.format = BMP,
		.image = bmp
	};
	bmp->parent = &image;

	return image;

}
