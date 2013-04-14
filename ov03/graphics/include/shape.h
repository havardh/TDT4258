#ifndef SHAPE_H
#define SHAPE_H
#include <stdio.h>
#include "screen.h"

typedef struct {
	void *parent;
	void (*paint) ( void*, Screen* );
	int x;
	int y;
	void *child;
} Shape;

Shape ShapeNew (int x, int y);

#endif // SHAPE_H
