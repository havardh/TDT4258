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

	onTankHit( &ctrl );

	onGameExit( &ctrl );

	ScreenDestroy( &screen );

	return 0;
}
