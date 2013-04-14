#include "screen.h"
#include "shape.h"
#include "canvas.h"

int main(void) {

	Screen screen = ScreenNew(100, 100);
	Canvas canvas = CanvasNew(&screen);

	Shape s1 = ShapeNew(10, 10);
	Shape s2 = ShapeNew(2, 50);
	Shape s3 = ShapeNew(100, 10);

	CanvasAdd(&canvas, &s1);
	CanvasAdd(&canvas, &s2);
	CanvasAdd(&canvas, &s3);

	CanvasPaint(&canvas);

	return 0;
}
