#include "line.h"

static void paint ( void *shape, Screen *screen) {
	Line *line = (Line*)shape;

	int x = ((Shape*)line->parent)->x;
	int y = ((Shape*)line->parent)->y;
	int dx = line->dx;
	int dy = line->dy;

	for (int y=10; y<100; y++) {
		for (int x=10; x<100; x++) {
			int i = y * screen->height + x;
			screen->frame_buffer[i] = 0;
		}
	}
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
