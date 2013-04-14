#include "shape.h"

Shape ShapeNew(int x, int y) {
	Shape shape = {
		.paint = &paint,
		.x = x,
		.y = y,
	};
	shape.paint = &paint;
	return shape;
}

void paint ( void *shape, Screen *screen ) {
	printf("(%d, %d)\n", ((Shape*)shape)->x, ((Shape*)shape)->y );
}
