#ifndef BITMAP_H
#define BITMAP_H

#include "shape.h"
#include "pixel.h"

#define WIDTH 320
#define HEIGHT 240
#define BUFFER_SIZE 1024

typedef struct __attribute__((__packed__)) {
	uint16_t signature;
	uint32_t size;
	uint16_t reserved1;
	uint16_t reserved2;
	uint32_t offset;
} BMPHeader;

typedef struct __attribute__((__packed__)) {
	uint32_t size;
	uint32_t width;
	uint32_t height;
} DIBHeader;

typedef struct {
	void *parent;
	void (*paint) ( void*, Screen* );
	int width;
	int height;
	Pixel *pixels;
} Bitmap;

Bitmap *BitmapNew(char*);

#endif // BITMAP_H
