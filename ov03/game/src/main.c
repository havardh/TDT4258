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

static void tr( void ) { onTankMove( &ctrl,  1, 0 ); }
static void td( void ) { onTankMove( &ctrl,  0,-1 ); }
static void tu( void ) { onTankMove( &ctrl,  0, 1 ); }
static void tl( void ) { onTankMove( &ctrl, -1, 0 ); }


static void cannon_fire( void ) { onCannonFire( &ctrl); }
static void cr( void ) { onCannonAim( &ctrl, 1, 0);  }
static void cd( void ) { onCannonAim( &ctrl, 0,-1);  }
static void cu( void ) { onCannonAim( &ctrl, 0, 1);  }
static void cl( void ) { onCannonAim( &ctrl,-1, 0);  }

static void RegisterCallbacks( void ) {

	ButtonAddCallback( 0, &tr );
	ButtonAddCallback( 1, &td );
	ButtonAddCallback( 2, &tu );
	//ButtonAddCallback( 3, &tl );

	ButtonAddCallback( 3, &cannon_fire );
	ButtonAddCallback( 4, &cr );
	ButtonAddCallback( 5, &cd );
	ButtonAddCallback( 6, &cu );
	ButtonAddCallback( 7, &cl );
}

int main ( void ) {

	printf("Game!\n");

	// Init devices
	ButtonInit();
	LedInit();

	LedWrite( 1 );

	Screen screen = ScreenNew(320, 240);
	Canvas canvas = CanvasNew( &screen );
	Audio audio = AudioNew();

	// Init game
	ctrl = ControllerNew( &canvas, &audio );
	RegisterCallbacks();

	onGameInit( &ctrl );

	Play( &audio, "./data/test_sound.wav" );

	while(running) {

	  ButtonPoll();

	}

	onGameExit( &ctrl );

	ButtonDestroy();
	LedDestroy();
	ScreenDestroy( &screen );

	return 0;
}
