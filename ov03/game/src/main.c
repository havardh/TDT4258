#include <stdio.h>
#include "controller.h"
#include "screen.h"
#include "canvas.h"
#include <stdbool.h>
//#include "led.h"
#include "button.h"
#include "audio.h"

static bool running = 1;

int main ( void ) {

	printf("Game!\n");

	// Init devices
	ButtonInit();
	LedInit();

	Screen screen = ScreenNew(320, 240);
	Canvas canvas = CanvasNew( &screen );
	//Audio audio = AudioNew();

	// Init game
	Controller ctrl = ControllerNew( &canvas );
	RegisterCallbacks( &ctrl );

	showSplashScreen( &canvas );

	onGameInit( &ctrl );

	static tick_delay = 0;
	while(running) {

		if ( tick_delay++ == 20000 ) {
			tick_delay = 0;
			onTick( &ctrl );
		}

		ButtonPoll();

	}

	onGameExit( &ctrl );

	ButtonDestroy();
	LedDestroy();
	ScreenDestroy( &screen );

	return 0;
}
