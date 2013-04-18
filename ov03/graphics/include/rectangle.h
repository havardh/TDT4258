#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"
#include "screen.h"
#include "line.h"
#include "pixel.h"
#include <stdlib.h>

typedef struct {

	void *parent;
	void (*paint) ( void*, Screen* );
	int x;
	int y;
	int dx;
	int dy;
	void *child;

} Rectangle;

Rectangle RectangleNew (int x, int y, int dx, int dy);

#endif // RECTANGLE_H
