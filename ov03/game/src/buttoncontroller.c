#include "buttoncontroller.h"



static Controller *ctrl;
static int tankmode = 1;

/* Tank player button actions */
static void tr( void ) { if (tankmode) { onTankMove( ctrl, 1, 0 ); } else { onTankMove( ctrl, -1, 0 ); } }
static void td( void ) { if (tankmode) { onTankMove( ctrl,  0,-1 ); } else { onTankMove( ctrl,	0, 1 ); } }
static void tu( void ) { tankmode = (tankmode) ? 0 : 1; }

/* Cannon player button actions */
static void cr( void ) { onCannonAim( ctrl,  1, 0 ); }
static void cl( void ) { onCannonAim( ctrl, -1, 0 ); }
static void cu( void ) { onCannonAim( ctrl,  0,-1 ); }
static void cd( void ) { onCannonAim( ctrl,  0, 1 ); }
static void cannon_fire( void ) { onCannonFire( ctrl ); }


/* Register callback on button module */
void RegisterCallbacks( Controller *controller ) {

	ctrl = controller;

	ButtonAddCallback( 0, &tr );
	ButtonAddCallback( 1, &td );
	ButtonAddCallback( 2, &tu );

	ButtonAddCallback( 3, &cannon_fire );
	ButtonAddCallback( 4, &cr );
	ButtonAddCallback( 5, &cu );
	ButtonAddCallback( 6, &cd );
	ButtonAddCallback( 7, &cl );
}
