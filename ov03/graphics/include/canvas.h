#ifndef CANVAS_H
#define CANVAS_H

#include <stdlib.h>
#include "shape.h"
#include "screen.h"

typedef struct {
	Screen *screen;
	int size;
	int top;
	Shape** shapes;
} Canvas;

Canvas CanvasNew(Screen*);
void CanvasAdd(Canvas*, void*);
void CanvasRemove(Canvas*, int);

void CanvasPaint(Canvas*);

#endif // CANVAS_H
