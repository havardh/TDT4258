#include <stdio.h>
#include "controller.h"
#include "screen.h"
#include "canvas.h"
#include <stdbool.h>
//#include "led.h"
#include "button.h"

static Controller ctrl;
static bool running = 1;

static void wait(int wait) {

	for(int i=0; i<wait; i++) ;
}

static int tankmode = 0;
static int cannonmode = 0;

static void noop( void ) {}

static void tr( void ) { if (tankmode) { onTankMove( &ctrl, 1, 0 ); } else { onTankMove( &ctrl, -1, 0 ); } }
static void td( void ) { if (tankmode) { onTankMove( &ctrl,  0,-1 ); } else { onTankMove( &ctrl,  0, 1 ); } }
static void tu( void ) { tankmode = (tankmode) ? 0 : 1; }

static void cr( void ) { if (cannonmode) { onTankCannonMove( &ctrl, 1, 0 ); } else { onTankCannonMove( &ctrl, -1, 0 ); } }
static void cd( void ) { if (cannonmode) { onTankCannonMove( &ctrl,  0,-1 ); } else { onTankCannonMove( &ctrl,	0, 1 ); } }
static void cu( void ) { cannonmode = (cannonmode) ? 0 : 1; }

static void cannon_fire( void ) { onCannonFire( &ctrl); }

static void RegisterCallbacks( void ) {

	ButtonAddCallback( 0, &tr );
	ButtonAddCallback( 1, &td );
	ButtonAddCallback( 2, &tu );
	//ButtonAddCallback( 3, &tl );

	ButtonAddCallback( 4, &cannon_fire );
	ButtonAddCallback( 5, &cr );
	ButtonAddCallback( 6, &cd );
	ButtonAddCallback( 7, &cu );
}

int main ( void ) {

	printf("Game!\n");

	// Init devices
	ButtonInit();
	LedInit();

	Screen screen = ScreenNew(320, 240);
	Canvas canvas = CanvasNew( &screen );
	//Audio audio = AudioNew();

	// Init game
	ctrl = ControllerNew( &canvas, NULL );
	RegisterCallbacks();

	onGameInit( &ctrl );

	//Play( &audio, "./data/test_sound.wav" );

	while(running) {

	  ButtonPoll();

	}

	onGameExit( &ctrl );

	ButtonDestroy();
	LedDestroy();
	ScreenDestroy( &screen );

	return 0;
}
