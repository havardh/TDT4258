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

void CanvasAdd(Canvas *canvas, Shape *shape) {
	canvas->shapes[canvas->top++] = shape;
}

void CanvasRemove(Canvas *canvas, Shape *shape) {}

void CanvasPaint (Canvas *canvas) {

	for (int i=0; i<canvas->top; i++) {
		(*canvas->shapes[i]->paint)( canvas->shapes[i], canvas->screen );
	}

}
