#ifndef _TANK_H_
#define _TANK_H_

#include "shape.h"
#include "screen.h"
#include "image.h"
#include <stdbool.h>

static char* tank_e_filename = "./data/tank_e.bmp";
static char* tank_n_filename = "./data/tank_n.bmp";
static char* tank_w_filename = "./data/tank_w.bmp";
static char* tank_s_filename = "./data/tank_s.bmp";

typedef enum {
E, N, W, S
} Direction;

typedef struct {
	void *parent;
	void (*paint) ( Shape*, Screen* );

	Image *image_e;
	Image *image_n;
	Image *image_w;
	Image *image_s;

	int startx;
	int starty;

	Direction direction;

	int x;
	int y;

	int health;

} Tank;

Tank TankNew( int, int );

void TankOnGameStart( Tank* );

bool TankMove( Tank*, int, int );
bool TankIsOn( Tank*, int, int );


#endif // _TANK_H_
