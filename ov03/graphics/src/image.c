#include "image.h"

static void paint (void *shape, Screen *screen) {

	Image *image = (Image*) shape;
	Shape *actual_image = (Shape*)image->image;

	actual_image->paint(actual_image, screen);

}

Image *ImageNew( char* filename, int x, int y ) {

        Image *image = malloc(sizeof(Image));
        Bitmap *bmp = BitmapNew( filename );

        image->parent = NULL;
	image->paint = &paint;
	image->x = x;
	image->y = y;
        image->format = BMP;
        image->image = bmp;

        bmp->parent = mimage;

	return image;
}
