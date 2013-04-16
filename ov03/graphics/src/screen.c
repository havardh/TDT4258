#include "screen.h"
//#include <linux/fb.h>
#include <fcntl.h>
#include <sys/mman.h>
//#include <sys/stat.h>
//#include <sys/ioctl.h>
#include <stdio.h>

static uint16_t* mmap_frame_buffer ( void ) {

	int fdScreen = open( "/dev/fb0", O_RDWR );
	int screen_size = 320 * 240;
	return (uint16_t*)mmap( 0, screen_size, PROT_READ | PROT_WRITE, MAP_SHARED, fdScreen, 0 );
}

Screen ScreenNew (int width, int height) {
	Screen screen;
	screen.width = width;
	screen.height = height;
	screen.frame_buffer = mmap_frame_buffer(); //(uint16_t*) malloc((size_t)(sizeof(uint16_t) * width * height));
	return screen;
}
