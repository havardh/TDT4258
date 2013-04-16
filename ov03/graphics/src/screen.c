#include "screen.h"
#include <linux/fb.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <sys/mman.h>

static uint16_t* mmap_frame_buffer ( void ) {

	int fdScreen = open( "/dev/fb0", O_RDWR );
	fb_var_screeninfo varInfo;
	ioctl( fdScreen, FBIOGET_VSCREENINFO, &varInfo );

	printf("%d - %d\n", varInfo.xres, varInfo.yres);

	//set resolution/dpi/color depth/.. in varInfo, then write it back
	ioctl( fdScreen, FBIOPUT_VSCREENINFO, &varInfo );

	long int nScreenSize = varInfo.xres * varInfo.yres * varInfo.bits_per_pixel / 8;

	//get writable screen memory; unsigned short here for 16bit color
	return (uint16_t*)mmap( 0, nScreenSize, PROT_READ | PROT_WRITE, MAP_SHARED, fdScreen, 0 );
}

Screen ScreenNew (int width, int height) {
	Screen screen;
	screen.width = width;
	screen.height = height;
	screen.frame_buffer = mmap_frame_buffer(); //(uint16_t*) malloc((size_t)(sizeof(uint16_t) * width * height));
	return screen;
}
