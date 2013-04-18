#ifndef IMAGE_H
#define IMAGE_H

#include "bitmap.h"

typedef enum {
	BMP
} ImageFormat;

typedef struct {
	ImageFormat format;
	void *image;
} Image;

Image ImageNew( char* );

#endif // IMAGE_H
