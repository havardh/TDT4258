#include "screen.h"

Screen ScreenNew (int width, int height) {
	Screen screen;
	screen.width = width;
	screen.height = height;
	screen.frame_buffer = (uint16_t*) malloc((size_t)(sizeof(uint16_t) * width * height));
	return screen;
}
