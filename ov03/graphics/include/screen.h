#ifndef SCREEN_H
#define SCREEN_H

#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct {
	int _fd;
	int width;
	int height;
	uint8_t *frame_buffer;
} Screen;

Screen ScreenNew( int width, int height );
void ScreenDestroy( Screen* );

#endif // SCREEN_H
