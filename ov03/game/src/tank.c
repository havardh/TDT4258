#include "tank.h"

static void paint ( Shape *shape, Screen *screen ) {

	Tank *tank = (Tank*)shape;
	tank->image->x = tank->x * 20;
	tank->image->y = tank->y * 20;
	tank->image->paint( tank->image, screen );

}

Tank TankNew( int x, int y ) {

	Tank tank = {
		.parent = NULL,
		.paint = &paint,
		.image = ImageNew(tank_filename, x * 20, y * 20),
		.startx = x,
		.starty = y,

		.health = 100
	};

	TankOnGameStart( &tank );

	return tank;

}

void TankOnGameStart( Tank *tank ) {
	tank->x = tank->startx;
	tank->y = tank->starty;
}

bool TankMove( Tank *tank, int dx, int dy ) {

	tank->x += dx;
	tank->y += dy;

	return true;
}

bool TankIsOn( Tank *tank, int x, int y ) {

	return x == tank->x && y == tank->y;

}
