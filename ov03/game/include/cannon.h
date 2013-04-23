#ifndef _CANNON_H_
#define _CANNON_H_

#include "shape.h"
#include "screen.h"
#include "image.h"

static char* cannon_filename = "./data/cannon.bmp";
static char* cannonaim_filename = "./data/cannonaim.bmp";

typedef struct {

	void* parent;
	void (*paint) ( Shape*, Screen* );
	Image *image;
	Image *aim_image;

	int x;
	int y;
	int aimx;
	int aimy;

	int health;
	int angle;

} Cannon;

Cannon CannonNew( int, int);

void CannonAim( Cannon*, int, int );

#endif // _CANNON_H_
