#include "screen.h"
#include "shape.h"
#include "canvas.h"
#include "line.h"
#include "image.h"

void canvas() {
	Screen screen = ScreenNew(320, 240);
	Canvas canvas = CanvasNew(&screen);

	//Shape s1 = ShapeNew(10, 10);
	//Shape s2 = ShapeNew(2, 50);
	//Shape s3 = ShapeNew(100, 10);

	Line l1 = LineNew(20, 40, 150, 150);

	//CanvasAdd(&canvas, &s1);
	//CanvasAdd(&canvas, &s2);
	//CanvasAdd(&canvas, &s3);
	CanvasAdd(&canvas, &l1);

	CanvasPaint(&canvas);
	exit(0);

	ScreenDestroy(&screen);

}

void image() {

	Image image = ImageNew("./data/picture.bmp");

}

int main(void) {

	image();

	return 0;
}
