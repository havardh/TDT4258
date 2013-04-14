#ifndef SCREEN_H
#define SCREEN_H

#include <stdint.h>
#include <stddef.h>

typedef struct {
	int width;
	int height;
	uint16_t *frame_buffer;
} Screen;

Screen ScreenNew( int width, int height );

#endif // SCREEN_H
