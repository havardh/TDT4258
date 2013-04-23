#ifndef _CANNON_H_
#define _CANNON_H_

#include "shape.h"
#include "screen.h"
#include "image.h"

static char* cannon_filename = "cannon.bmp";

typedef struct {

	void (*paint) ( Shape*, Screen* );
	Image *image;

	int x;
	int y;

	int health;
	int angle;

} Cannon;

Cannon CannonNew( void );

#endif // _CANNON_H_
