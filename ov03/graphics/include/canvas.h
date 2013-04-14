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
void CanvasAdd(Canvas*, Shape*);
void CanvasRemove(Canvas*, Shape*);

void CanvasPaint(Canvas*);

#endif // CANVAS_H
