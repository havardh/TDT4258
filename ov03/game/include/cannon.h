#ifndef _CANNON_H_
#define _CANNON_H_

#include "shape.h"
#include "screen.h"
#include "image.h"
#include <stdbool.h>

static char* cannon_0_filename = "./data/cannon_0.bmp";
static char* cannon_30_filename = "./data/cannon_30.bmp";
static char* cannon_45_filename = "./data/cannon_45.bmp";
static char* cannon_60_filename = "./data/cannon_60.bmp";
static char* cannon_90_filename = "./data/cannon_90.bmp";
static char* cannonaim_filename = "./data/crosshair.bmp";

typedef struct {

	void* parent;
	void (*paint) ( Shape*, Screen* );

	Image *image_0;
	Image *image_30;
	Image *image_45;
	Image *image_60;
	Image *image_90;

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
