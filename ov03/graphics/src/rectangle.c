#include "rectangle.h"

static void paint ( void*, Screen* );

Rectangle RectangleNew (int x, int y, int dx, int dy) {

	Rectangle rect = {
		.parent = NULL,
		.paint = &paint,
		.x = x,
		.y = y,
		.dx = dx,
		.dy = dy,
		.child = NULL
	};

	return rect;
}

static void paint ( void *shape, Screen *screen ) {

	Rectangle *rect = (Rectangle*)shape;

	int x = rect->x;
	int y = rect->y;
	int dx = rect->dx;
	int dy = rect->dy;

	Line l1 = LineNew(x, y, dx, 0);
	l1.paint( &l1, screen );

	Line l2 = LineNew(x, y+dy, dx, 0);
	l2.paint( &l2, screen );

	Line l3 = LineNew(x, y, 0, dy);
	l3.paint( &l3, screen );

	Line l4 = LineNew(x+dx, y, 0, dy);
	l4.paint( &l4, screen );
}
