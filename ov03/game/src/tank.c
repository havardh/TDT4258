#include "tank.h"

static void paint ( Shape *shape, Screen *screen ) {

	Tank *tank = (Tank*)shape;
	tank->image->paint( tank->image, screen );

}

Tank TankNew( int x, int y ) {

	Tank tank = {
		.parent = NULL,
		.paint = &paint,
		.x = x,
		.y = y,

		.health = 100
	};

	return tank;

}
