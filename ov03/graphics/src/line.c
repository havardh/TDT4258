#include "line.h"

static void paint ( void *shape, Screen *screen) {
	Line *line = (Line*)shape;

	int x = ((Shape*)line->parent)->x;
	int y = ((Shape*)line->parent)->y;
	int dx = line->dx;
	int dy = line->dy;

	for (int i=0; i<screen->width; i++) {
		screen->frame_buffer[i + 30 * screen->height] = 4160749567;
	}

	/*
	for (int y=0; y<screen->height; y++) {
		for (int x=0; x<screen->width; x++) {
			int i = y * screen->height + x;
			screen->frame_buffer[i] = 0;
		}
	}
	*/
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
