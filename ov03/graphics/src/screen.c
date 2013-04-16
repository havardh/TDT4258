#include "screen.h"
#include <fcntl.h>
#include <sys/mman.h>
#include <stdio.h>
#include <stdlib.h>

static uint16_t* mmap_frame_buffer ( Screen *screen ) {

	int fd = screen->_fd = open( "/dev/fb0", O_RDWR | O_CREAT | O_TRUNC );
	int screen_size = screen->width * screen->height;
	screen->frame_buffer =	(uint16_t*)mmap( 0, screen_size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0 );

}

Screen ScreenNew (int width, int height) {
	Screen screen;
	screen.width = width;
	screen.height = height;
	mmap_frame_buffer(&screen); //(uint16_t*) malloc((size_t)(sizeof(uint16_t) * width * height));
	return screen;
}

void ScreenDestroy ( Screen *screen ) {
	close( screen->_fd );
}
