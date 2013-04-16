#ifndef BITMAP_H
#define BITMAP_H

typedef struct {
	Pixel* pixels;
} Bitmap;

Bitmap BitmapNew(char*);

#endif // BITMAP_H
