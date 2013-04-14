#include "shape.h"

void paint ( void *shape, Screen *screen ) {
	printf("(%d, %d)\n", ((Shape*)shape)->x, ((Shape*)shape)->y );
}


Shape ShapeNew(int x, int y) {
	Shape shape = {
		.parent = NULL,
		.paint = &paint,
		.x = x,
		.y = y
	};
	shape.paint = &paint;
	return shape;
}
