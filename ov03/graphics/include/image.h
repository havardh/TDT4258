#ifndef IMAGE_H
#define IMAGE_H

#include "shape.h"
#include "bitmap.h"
#include "pixel.h"

typedef enum {
	BMP
} ImageFormat;

typedef struct {
	void *parent;
	void (*paint) ( void*, Screen*);
	int x;
	int y;
	ImageFormat format;
	void *image;
} Image;

Image ImageNew( char*, int, int );

#endif // IMAGE_H
