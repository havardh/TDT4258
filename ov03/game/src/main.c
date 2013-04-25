#include <stdio.h>
#include "controller.h"
#include "screen.h"
#include "canvas.h"
#include <stdbool.h>
//#include "led.h"
#include "button.h"

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
	Controller ctrl = ControllerNew( &canvas, NULL );
	RegisterCallbacks( &ctrl );

	showSplashScreen( &canvas );


	onGameInit( &ctrl );

	//Play( &audio, "./data/test_sound.wav" );

	static tick_delay = 0;
	while(running) {

		if ( tick_delay++ == 10000 ) {
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
