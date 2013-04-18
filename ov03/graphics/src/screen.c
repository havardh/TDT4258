#include "screen.h"

static uint16_t* mmap_frame_buffer ( Screen *screen ) {

	int fd = screen->_fd = open( "/dev/fb0", O_RDWR | O_CREAT | O_TRUNC );
	int screen_size = 24 / 8 * 240 * 320;
	screen->frame_buffer =	(uint8_t*)mmap( 0, screen_size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0 );

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

void ScreenDrawPixel( Screen *screen, int x, int y, Pixel *pixel ) {
	if (x >= 0 && x < screen->width	 && y >= 0 && y < screen->height) {
		int coordinate = y * screen->width * 3 + x * 3;
		*((Pixel*)&screen->frame_buffer[coordinate]) = *pixel;
	}

}
