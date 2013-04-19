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
	printf("%s\n", "Adding a shape");
	canvas->shapes[canvas->top++] = shape;
}

void CanvasRemove(Canvas *canvas, int i) {}

void CanvasPaint (Canvas *canvas) {

	Screen *screen = canvas->screen;

	Pixel pixel = PixelNew (255, 255, 255);
	for (int y=0; y<240; y++) {
		for (int x=0; x<320; x++) {
			ScreenDrawPixel( screen, x, y, &pixel );

		}
	}

	for (int i=0; i<canvas->top; i++) {
		Shape *shape = (Shape*)canvas->shapes[i];
		(*((Shape*)shape)->paint)( canvas->shapes[i], screen );
	}

	ScreenFlush( screen );

}
