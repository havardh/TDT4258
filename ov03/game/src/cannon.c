#include "cannon.h"

static void paint ( Shape *shape, Screen *screen ) {
  
  printf("drawing\n");
	Cannon *cannon = (Cannon*)shape;
	cannon->image->paint( cannon->image, screen );

}

Cannon CannonNew( int x, int y ) {

	Cannon cannon = {
		.parent = NULL,
		.paint = &paint,
		.image = ImageNew( cannon_filename, x*20, y*20 ),
		.x = x,
		.y = y,

		.health = 100,
		.angle = 0
	};

	return cannon;

}
