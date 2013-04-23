#include <stdio.h>
#include "controller.h"
#include "screen.h"
#include "canvas.h"



int main ( void ) {

	printf("Game!\n");

	Screen screen = ScreenNew(320, 240);
	Canvas canvas = CanvasNew( &screen );
	Controller ctrl = ControllerNew( &canvas );

	onGameInit( &ctrl );

	onTankMove( &ctrl, 1, 1 );
	for(int i=0; i<1000; i++) ;

	//onCannonFire( &ctrl );

	onGameExit( &ctrl );

	ScreenDestroy( &screen );

	return 0;
}
