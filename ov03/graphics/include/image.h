#ifndef IMAGE_H
#define IMAGE_H

typedef enum {
	BMP
} ImageFormat;

typedef struct {
	ImageFormat format;
	void *image;
} Image;

#endif // IMAGE_H
