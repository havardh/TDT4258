#include "line.h"
#include <assert.h>

static void paint ( void*, Screen* );

Line LineNew (int x, int y, int dx, int dy) {
	//Shape shape = ShapeNew(x, y);
	//Shape *sp = malloc(sizeof(Shape));
	//memcpy(&shape, sp, sizeof(Shape));

	Line line = {
		.parent = NULL,
		.paint = &paint,
		.x = x,
		.y = y,
		.dx = dx,
		.dy = dy,
		.child = NULL
	};
	return line;
}

static void paint ( void *shape, Screen *screen) {

	Line *line = (Line*)shape;
	Pixel pixel = PixelNew(0, 0, 0);

	int x0 = line->x;
	int y0 = line->y;
	int x1 = line->x + line->dx;
	int y1 = line->y + line->dy;
	int dx = line->dx;
	int dy = line->dy;

	int sx = (x0 < x1) ? 1 : -1;
	int sy = (y0 < y1) ? 1 : -1;

	int err = dx - dy;

	while (1) {
		ScreenDrawPixel(screen, x0, y0, &pixel);
		if (x0 == x1 && y0 == y1) {
			break;
		}

		int e2 = 2*err;
		if (e2 > -dy) {
			err = err - dy;
			x0 = x0 + sx;
		}
		if (e2 < dy) {
			err = err + dx;
			y0 = y0 + sy;
		}
	}


	/*Line *line = (Line*)shape;

	int x = line->x;
	int y = line->y;
	int dx = line->dx;
	int dy = line->dy;
	printf("Paining a line(%d, %d, %d, %d)\n", x, y, dx, dy);


	Pixel pixel = PixelNew(0, 0, 0);




	for (int i = x; i < x + dx; i++) {<
		int j = y + dy * (i - x) / dx;
		ScreenDrawPixel(screen, i, j, &pixel);
		}*/
}
