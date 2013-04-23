#include <stdio.h>
#include "controller.h"
#include "screen.h"
#include "canvas.h"
#include <stdbool.h>
#include "led.h"
#include "button.h"

static void wait(int wait) {

	for(int i=0; i<wait; i++) ;
}

static void RegisterCallbacks( Controller *ctrl ) {



}

bool running = 1;

int main ( void ) {

	printf("Game!\n");

	// Init devices
	ButtonInit();
	LedInit();
	Screen screen = ScreenNew(320, 240);
	Canvas canvas = CanvasNew( &screen );

	// Init game
	Controller ctrl = ControllerNew( &canvas );
	RegisterCallbacks( &ctrl );

	onGameInit( &ctrl );

	while(running) {

		ButtonPoll()

	}

	onGameExit( &ctrl );

	ScreenDestroy( &screen );

	return 0;
}
