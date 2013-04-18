#include "canvas.h"

Canvas CanvasNew(Screen *screen) {
	Canvas canvas = {
		.screen = screen,
		.size = 8,
		.top = 0,
		.shapes = calloc(sizeof(Shape*), 8)
	};
	return canvas;
}

void CanvasAdd(Canvas *canvas, void *shape) {
	canvas->shapes[canvas->top++] = shape;
}

void CanvasRemove(Canvas *canvas, int i) {}

void CanvasPaint (Canvas *canvas) {

	Screen *screen = canvas->screen;

	for (int y=0; y<240; y++) {
		for (int x=0; x<320 * 3; x++) {
			int i = y * screen->width * 3 + x;
			screen->frame_buffer[i] = 255;
		}
	}


	for (int i=0; i<canvas->top; i++) {
		Shape *shape = (Shape*)canvas->shapes[i];
		while (shape->parent != NULL) {
			shape = (Shape*)shape->parent;
		}

		(*((Shape*)shape)->paint)( canvas->shapes[i], screen );
	}

}
