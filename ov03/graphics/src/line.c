#include "line.h"

static void paint ( void *shape, Screen *screen) {
	Line *line = (Line*)shape;

	int x = ((Shape*)line->parent)->x;
	int y = ((Shape*)line->parent)->y;
	int dx = line->dx;
	int dy = line->dy;

	printf ("line (%d, %d) - (%d, %d)\n", x, y, dx, dy);
}

Line LineNew (int x, int y, int dx, int dy) {
	Shape shape = ShapeNew(x, y);
	Shape *sp = malloc(sizeof(Shape));
	memcpy(&shape, sp, sizeof(Shape));

	Line line = {
		.parent = sp,
		.dx = dx,
		.dy = dy
	};
	sp->paint = &paint;
	sp->child = &line;

	return line;
}
