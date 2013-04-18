#ifndef LINE_H
#define LINE_H

#include "shape.h"
#include "screen.h"
#include "pixel.h"
#include <stdlib.h>
#include <string.h>

typedef struct {
	void *parent;
	void (*paint) ( void*, Screen*);
	int x;
	int y;
	int dx;
	int dy;
	void *child;
} Line;

Line LineNew (int x, int y, int dx, int dy);

#endif // LINE_H
