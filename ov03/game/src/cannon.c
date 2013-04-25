#include "cannon.h"

static void paint ( Shape *shape, Screen *screen ) {

	Cannon *cannon = (Cannon*)shape;

	if (cannon->angle == 0) {
		cannon->image->paint( cannon->image, screen );
	} else if (cannon->angle == 30) {
		cannon->image->paint( cannon->image, screen );
	} else if (cannon->angle == 45) {
		cannon->image->paint( cannon->image, screen );
	} else if (cannon->angle == 60) {
		cannon->image->paint( cannon->image, screen );
	} else if (cannon->angle == 90) {
		cannon->image->paint( cannon->image, screen );
	}

	cannon->aim_image->x = cannon->aimx * 20;
	cannon->aim_image->y = cannon->aimy * 20;

	cannon->aim_image->paint( cannon->aim_image, screen );

}

Cannon CannonNew( int x, int y ) {

	Cannon cannon = {
		.parent = NULL,
		.paint = &paint,
		.image = ImageNew( cannon_filename, x*20, y*20 ),
		.aim_image = ImageNew( cannonaim_filename, 20, 20),
		.x = x,
		.y = y,
		.aimx = x-1,
		.aimy = y+1,
		.health = 4,
		.angle = 45
	};

	return cannon;

}

void CannonOnGameStart( Cannon *cannon ) {
	cannon->aimx = cannon->x;
	cannon->aimy = cannon->y;
}

void CannonAim( Cannon *cannon, int dx, int dy ) {

	cannon->aimx += dx;
	cannon->aimy += dy;

	if ( cannon->aimx == 0 ) {
		cannon->angle = 0;
	} else if ( cannon->y == 15 ) {
		cannon->angle = 90;
	} else {
		cannon->angle = 45;
	}

}

bool CannonIsOn( Cannon *cannon, int x, int y ) {

	return cannon->x == x && cannon->y == y;

}
