#include <stdio.h>
#include "controller.h"
#include "screen.h"
#include "canvas.h"

static void wait(int wait) {

	for(int i=0; i<wait; i++) ;
}

int main ( void ) {

	printf("Game!\n");

	Screen screen = ScreenNew(320, 240);
	Canvas canvas = CanvasNew( &screen );
	Controller ctrl = ControllerNew( &canvas );

	onGameInit( &ctrl );

	onTankMove( &ctrl, 1, -1 );
	wait(1000);

	onCannonAim( &ctrl, -1, 1 );
	wait(1000);

	onCannonFire( &ctrl );
	wait(1000);
	onCannonAim( &ctrl, -1, 1 );
	wait(1000);

	onGameExit( &ctrl );

	ScreenDestroy( &screen );

	return 0;
}
