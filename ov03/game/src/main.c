#include <stdio.h>
#include "controller.h"
#include "screen.h"
#include "canvas.h"
#include <stdbool.h>
//#include "led.h"
#include "button.h"

static Controller ctrl;
static bool running = 1;

static int tankmode = 1;

/* Tank player button actions */
static void tr( void ) { if (tankmode) { onTankMove( &ctrl, 1, 0 ); } else { onTankMove( &ctrl, -1, 0 ); } }
static void td( void ) { if (tankmode) { onTankMove( &ctrl,  0,-1 ); } else { onTankMove( &ctrl,  0, 1 ); } }
static void tu( void ) { tankmode = (tankmode) ? 0 : 1; }

/* Cannon player button actions */
static void cr( void ) { onCannonAim( &ctrl,  1, 0 ); }
static void cl( void ) { onCannonAim( &ctrl, -1, 0 ); }
static void cu( void ) { onCannonAim( &ctrl,  0,-1 ); }
static void cd( void ) { onCannonAim( &ctrl,  0, 1 ); }
static void cannon_fire( void ) { onCannonFire( &ctrl); }

/* Register callback on button module */
static void RegisterCallbacks( void ) {

	ButtonAddCallback( 0, &tr );
	ButtonAddCallback( 1, &td );
	ButtonAddCallback( 2, &tu );

	ButtonAddCallback( 3, &cannon_fire );
	ButtonAddCallback( 4, &cr );
	ButtonAddCallback( 5, &cu );
	ButtonAddCallback( 6, &cd );
	ButtonAddCallback( 7, &cl );
}

void showSplashScreen( Canvas *canvas ) {

	Image *splash0 = ImageNew( "./data/splash_0.bmp", 0, 0 );
	CanvasAdd( canvas, splash0 );
	CanvasPaint( canvas );
	sleep( 1 );
	CanvasRemove( canvas, splash0 );
	Image *splash1 = ImageNew( "./data/splash_1.bmp", 0, 0 );
	CanvasAdd( canvas, splash1 );
	CanvasPaint( canvas );
	sleep( 1 );
	CanvasRemove( canvas, splash1 );
	Image *splash2 = ImageNew( "./data/splash_2.bmp", 0, 0 );
	CanvasAdd( canvas, splash2 );
	CanvasPaint( canvas );
	sleep( 1 );
	CanvasRemove( canvas, splash2 );
	Image *splash3 = ImageNew( "./data/splash_3.bmp", 0, 0 );
	CanvasAdd( canvas, splash3 );
	CanvasPaint( canvas );
	sleep( 1 );
	CanvasRemove( canvas, splash3 );
	Image *splash4 = ImageNew( "./data/splash_4.bmp", 0, 0 );
	CanvasAdd( canvas, splash4 );
	CanvasPaint( canvas );
	sleep( 1 );
	CanvasRemove( canvas, splash4 );
	Image *splash5 = ImageNew( "./data/splash_5.bmp", 0, 0 );
	CanvasAdd( canvas, splash5 );
	CanvasPaint( canvas );
	sleep( 1 );
	CanvasRemove( canvas, splash5 );
	Image *splash6 = ImageNew( "./data/splash_6.bmp", 0, 0 );
	CanvasAdd( canvas, splash6 );
	CanvasPaint( canvas );
	sleep( 1 );
	CanvasRemove( canvas, splash6 );

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
