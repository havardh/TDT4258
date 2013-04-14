#ifndef LINE_H
#define LINE_H

#include "shape.h"
#include <stdlib.h>
#include <string.h>

typedef struct {
	void *parent;
	int dx;
	int dy;
} Line;

Line LineNew (int x, int y, int dx, int dy);

#endif // LINE_H
