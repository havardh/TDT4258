#include "screen.h"
#include "shape.h"
#include "canvas.h"
#include "line.h"
#include "image.h"
#include "rectangle.h"

void canvas() {
	Screen screen = ScreenNew(320, 240);
	Canvas canvas = CanvasNew(&screen);

	Rectangle r1 = RectangleNew( 40, 40, 100, 30 );
	Rectangle r2 = RectangleNew( 30, 30, 20, 200 );
	CanvasAdd( &canvas, &r1 );
	CanvasAdd( &canvas, &r2 );

	CanvasPaint(&canvas);
	exit(0);

	ScreenDestroy(&screen);

}

void image() {

  Screen screen = ScreenNew(320, 240);
  Canvas canvas = CanvasNew( &screen );

  Image image = ImageNew("./data/small.bmp");

  CanvasAdd( &canvas, &image );
  CanvasPaint( &canvas );

  ScreenDestroy( &screen );

}

int main(void) {

	image();

	return 0;
}
