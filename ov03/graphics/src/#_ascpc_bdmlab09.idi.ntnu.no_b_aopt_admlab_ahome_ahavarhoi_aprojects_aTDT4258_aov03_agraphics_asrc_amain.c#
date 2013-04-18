#include "screen.h"
#include "shape.h"
#include "canvas.h"
#include "line.h"
#include "rectangle.h"

int main(void) {

	Screen screen = ScreenNew(320, 240);
	Canvas canvas = CanvasNew(&screen);

	Rectangle r1 = RectangleNew( 40, 40, 100, 30 );
	Rectangle r2 = RectangleNew( 30, 3al0, 20, 200 );
	CanvasAdd( &canvas, &r1 );
	CanvasAdd( &canvas, &r2 );

	CanvasPaint(&canvas);
	exit(0);

	ScreenDestroy(&screen);

	return 0;
}
