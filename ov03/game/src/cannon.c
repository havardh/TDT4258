#include "cannon.h"

static void paint ( Shape *shape, Screen *screen ) {

	Cannon *cannon = (Cannon*)shape;
	//cannon->image->x = cannon->x * 20;
	//cannon->image->y = cannon->y * 20;
	cannon->image->paint( cannon->image, screen );

	cannon->aim_image->x = cannon->aimx * 20;
	cannon->aim_image->y = cannon->aimy * 20;

	cannon->aim_image->paint( cannon->aim_image, screen );

}

Cannon CannonNew( int x, int y ) {

	Cannon cannon = {
		.parent = NULL,
		.paint = &paint,
		.image = ImageNew( cannon_filename, x*20, y*20 ),
		.aim_image = ImageNew( cannonaim_filename, x*20,y*20),
		.x = x,
		.y = y,
		.aimx = x,
		.aimy = y,
		.health = 100,
		.angle = 0
	};

	return cannon;

}

void CannonAim( Cannon *cannon, int dx, int dy ) {

	cannon->aimx += dx;
	cannon->aimy += dy;

}
