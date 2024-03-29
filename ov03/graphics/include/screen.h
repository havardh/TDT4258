#ifndef SCREEN_H
#define SCREEN_H

#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <stdio.h>
#include "pixel.h"

#define SCREEN_SIZE 230400

typedef struct {
	int _fd;
	int width;
	int height;
	uint8_t *internal_buffer;
	uint8_t *frame_buffer;
} Screen;

Screen ScreenNew( int width, int height );
void ScreenDestroy( Screen* );
void ScreenDrawPixel( Screen*, int, int, Pixel*);
void ScreenFlush( Screen* );

#endif // SCREEN_H
