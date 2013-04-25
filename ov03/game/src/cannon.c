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

	if ( cannon->aimy == 11 ) {
		cannon->angle = 0;
	} else if ( cannon->aimx == 15 ) {
		cannon->angle = 90;
	} else {
		cannon->angle = 45;
	}

}

bool CannonIsOn( Cannon *cannon, int x, int y ) {

	return cannon->x == x && cannon->y == y;

}
