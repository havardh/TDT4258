#include "tank.h"

static void paint ( Shape *shape, Screen *screen ) {

	Tank *tank = (Tank*)shape;
	switch (tank->direction) {
	case E:
		tank->image_e->x = tank->x * 20;
		tank->image_e->y = tank->y * 20;
		tank->image_e->paint( tank->image, screen );
		break;
	case N:
		tank->image_n->x = tank->x * 20;
		tank->image_n->y = tank->y * 20;
		tank->image_n->paint( tank->image, screen );
		break;
	case W:
		tank->image_w->x = tank->x * 20;
		tank->image_w->y = tank->y * 20;
		tank->image_w->paint( tank->image, screen );
		break;
	case S:
		tank->image_s->x = tank->x * 20;
		tank->image_s->y = tank->y * 20;
		tank->image_s->paint( tank->image, screen );
		break;
	}

}

Tank TankNew( int x, int y ) {

	Tank tank = {
		.parent = NULL,
		.paint = &paint,
		.image_e = ImageNew(tank_e_filename, x * 20, y * 20),
		.image_n = ImageNew(tank_n_filename, x * 20, y * 20),
		.image_w = ImageNew(tank_w_filename, x * 20, y * 20),
		.image_s = ImageNew(tank_s_filename, x * 20, y * 20),

		.direction = N,

		.startx = x,
		.starty = y,

		.health = 4
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

	printf("%d, %d\n", tank->x, tank->y);

	return true;
}

bool TankIsOn( Tank *tank, int x, int y ) {

	return x == tank->x && y == tank->y;

}
