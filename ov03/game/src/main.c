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

static void bt1( void ) { onTankMove( &ctrl, 1, 0 ); }
static void bt2( void ) { onTankMove( &ctrl, -1,0  ); }
static void bt3( void ) { onTankMove( &ctrl, 0, 1 ); }
static void bt4( void ) { onTankMove( &ctrl, 0, -1 ); }
static void bt5( void ) { printf("5\n"); }
static void bt6( void ) { printf("6\n"); }
static void bt7( void ) { printf("7\n"); }
static void bt8( void ) { printf("8\n"); }

static void RegisterCallbacks( void ) {

	ButtonAddCallback( 0, &bt1 );
	ButtonAddCallback( 1, &bt2 );
	ButtonAddCallback( 2, &bt3 );
	ButtonAddCallback( 3, &bt4 );
	ButtonAddCallback( 4, &bt5 );
	ButtonAddCallback( 5, &bt6 );
	ButtonAddCallback( 6, &bt7 );
	ButtonAddCallback( 7, &bt8 );

}

int main ( void ) {

	printf("Game!\n");

	// Init devices
	ButtonInit();
        //	LedInit();
	Screen screen = ScreenNew(320, 240);
	Canvas canvas = CanvasNew( &screen );

	// Init game
	ctrl = ControllerNew( &canvas );
	RegisterCallbacks();

	onGameInit( &ctrl );

	while(running) {

          ButtonPoll();

	}

	onGameExit( &ctrl );

	ScreenDestroy( &screen );

	return 0;
}
