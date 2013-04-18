#include "line.h"

static void paint ( void *shape, Screen *screen) {
	Line *line = (Line*)shape;

	int x = ((Shape*)line->parent)->x;
	int y = ((Shape*)line->parent)->y;
	int dx = line->dx;
	int dy = line->dy;
       
        for (int i = x; i < x + dx; i++) {
          int j = y + dy * (i - x) / dx;
          int coordinate = j * screen->width * 3 + i;
          screen->frame_buffer[coordinate] = 0;
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
