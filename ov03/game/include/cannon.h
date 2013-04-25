#ifndef _CANNON_H_
#define _CANNON_H_

#include "shape.h"
#include "screen.h"
#include "image.h"
#include <stdbool.h>

static char* cannon_filename = "./data/cannon_45.bmp";
static char* cannonaim_filename = "./data/crosshair.bmp";

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

Cannon CannonNew( int, int );

void CannonOnGameStart( Cannon* );

void CannonAim( Cannon*, int, int );
bool CannonIsOn( Cannon*, int, int );

#endif // _CANNON_H_
