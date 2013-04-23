#include <stdio.h>
#include "controller.h"
#include "screen.h"
#include "canvas.h"



int main ( void ) {

	printf("Game!\n");

	Screen screen = ScreenNew(320, 240);
	Canvas canvas = CanvasNew( &screen );
	Controller ctrl = ControllerNew( &canvas );
        //Image *image = ImageNew("../graphics/data/box.bmp", 10, 10); // "./data/field.bmp"
        
        //CanvasAdd( &canvas, image );
        //CanvasPaint( &canvas );
 
	onGameInit( &ctrl );
	onGameExit( &ctrl );

	ScreenDestroy( &screen );

	return 0;
}
