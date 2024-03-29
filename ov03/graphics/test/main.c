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

	ScreenDestroy(&screen);

}

void image() {

  Screen screen = ScreenNew(320, 240);
  Canvas canvas = CanvasNew( &screen );

  printf("Loading picture\n");
  Image *i1 = ImageNew("./data/box.bmp", 50, 100);
  Image *i2 = ImageNew("./data/box.bmp", 100, 100);
  printf("Picture loaded\n");

  printf("Adding picture to canvas\n");
  CanvasAdd( &canvas, i1 );
  CanvasAdd( &canvas, i2 );
  printf("Picture added\n");

  for (int i=0; i<320; i++) {
    i1->x = i;
    CanvasPaint( &canvas );
  }

  printf("Painting canvas\n");
  CanvasPaint( &canvas );
  printf("Canvas painted\n");

  ScreenDestroy( &screen );

}

int main(void) {
  canvas();
  sleep(2);
  image();

	return 0;
}
