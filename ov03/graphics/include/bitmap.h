#ifndef BITMAP_H
#define BITMAP_H

#include "pixel.h"

typedef struct {
	Pixel *pixels;
} Bitmap;

Bitmap BitmapNew(char*);

#endif // BITMAP_H
