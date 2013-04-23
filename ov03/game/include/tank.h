#ifndef _TANK_H_
#define _TANK_H_

#include "shape.h"
#include "screen.h"
#include "image.h"
#include <stdbool.h>

static char* tank_filename = "./data/tank.bmp";

typedef struct {
	void *parent;
	void (*paint) ( Shape*, Screen* );
	Image *image;

	int startx;
	int starty;

	int x;
	int y;

	int health;

} Tank;

Tank TankNew( int, int );

void TankOnGameStart( Tank* );

bool TankMove( Tank*, int, int );
bool TankIsOn( Tank*, int, int );


#endif // _TANK_H_
