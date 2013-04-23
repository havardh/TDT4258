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
		.x = x,
		.y = y,

		.health = 100
	};

	return tank;

}

void TankMove( Tank *tank, int dx, int dy ) {

	tank->x += dx;
	tank->y += dy;

}
