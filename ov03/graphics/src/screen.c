#include "screen.h"

static uint16_t* mmap_frame_buffer ( Screen *screen ) {

	int fd = screen->_fd = open( "/dev/fb0", O_RDWR | O_CREAT | O_TRUNC );
	int screen_size = 24 / 8 * 240 * 320;
	screen->_frame_buffer =	(uint8_t*)mmap( 0, screen_size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0 );
        
        screen->internal_buffer = (Pixel*)malloc(320 * 240 * sizeof(Pixel));

}

Screen ScreenNew (int width, int height) {
	Screen screen;
	screen.width = width;
	screen.height = height;
	mmap_frame_buffer(&screen);
	return screen;
}

void ScreenDestroy ( Screen *screen ) {
        free( screen->internal_buffer );
	close( screen->_fd );
}

void ScreenDrawPixel( Screen *screen, int x, int y, Pixel *pixel ) {
	if (x >= 0 && x < screen->width	 && y >= 0 && y < screen->height) {

                int coordinate = y * screen->width + x;
		screen->internal_buffer[coordinate] = *pixel;
	}

}

void ScreenFlush( Screen *screen ) {
  int size = screen->width * screen->height * 3;
  
  char *p = screen->internal_buffer;

  for (int i=0; i<240*320*3; i++) {
    screen->_frame_buffer[i] = p[i];
  }
}
