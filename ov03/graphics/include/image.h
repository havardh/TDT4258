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
	ImageFormat format;
	void *image;
} Image;

Image ImageNew( char* );

#endif // IMAGE_H
