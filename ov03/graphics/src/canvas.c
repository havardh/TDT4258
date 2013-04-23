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

void CanvasRemove(Canvas *canvas, void *shape) {

	for (int i=0; i<canvas->top; i++) {

		if (canvas->shapes[i] == shape) {
			printf("Removeing a shape\n");
			canvas->shapes[i] = NULL;
			return;
		}

	}

}

void CanvasPaint (Canvas *canvas) {

	Screen *screen = canvas->screen;

	Pixel pixel = PixelNew (255, 255, 255);
	for (int y=0; y<240; y++) {
		for (int x=0; x<320; x++) {
			ScreenDrawPixel( screen, x, y, &pixel );

		}
	}
	printf("Items: %d\n", canvas->top);

	for (int i=0; i<canvas->top; i++) {
		if (canvas->shapes[i]) {
			Shape *shape = (Shape*)canvas->shapes[i];

			(*((Shape*)shape)->paint)( canvas->shapes[i], screen );
		}
	}


	ScreenFlush( screen );

}
