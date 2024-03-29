#include "cannon.h"

static void paint ( Shape *shape, Screen *screen ) {

	Cannon *cannon = (Cannon*)shape;

	if (cannon->angle == 0) {
		cannon->image_0->paint( cannon->image_0, screen );
	} else if (cannon->angle == 30) {
		cannon->image_30->paint( cannon->image_30, screen );
	} else if (cannon->angle == 45) {
		cannon->image_45->paint( cannon->image_45, screen );
	} else if (cannon->angle == 60) {
		cannon->image_60->paint( cannon->image_60, screen );
	} else if (cannon->angle == 90) {
		cannon->image_90->paint( cannon->image_90, screen );
	}

	cannon->aim_image->x = cannon->aimx * 20;
	cannon->aim_image->y = cannon->aimy * 20;

	cannon->aim_image->paint( cannon->aim_image, screen );

}

Cannon CannonNew( int x, int y ) {

	Cannon cannon = {
		.parent = NULL,
		.paint = &paint,

		.image_0 = ImageNew( cannon_0_filename, x*20, y*20 ),
		.image_30 = ImageNew( cannon_30_filename, x*20, y*20 ),
		.image_45 = ImageNew( cannon_45_filename, x*20, y*20 ),
		.image_60 = ImageNew( cannon_60_filename, x*20, y*20 ),
		.image_90 = ImageNew( cannon_90_filename, x*20, y*20 ),

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
	double rad = 1.0*cannon->aimx / cannon->aimy;

	printf( "%f", rad );

	if ( rad < 0.26 ) { // ~0-15 degrees
		cannon->angle = 0;
	} else if ( rad < 0.64 ) { // ~15-37 degrees
		cannon->angle = 30;
	} else if ( rad < 0.9 ) { // ~37-52 degrees
		cannon->angle = 45;
	} else if ( rad < 1.3 ) { // ~52-75 degrees
		cannon->angle = 60;
	} else {
		cannon->angle = 90;
	}

}

bool CannonIsOn( Cannon *cannon, int x, int y ) {

	if (cannon->x == x || cannon->x-1 == x) {
		if (cannon->y == y || cannon->y-1 == y) {
			return true;
		}
	}

	return false;
}
