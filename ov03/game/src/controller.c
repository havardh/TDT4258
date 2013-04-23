#include "controller.h"


static bool CheckBounds( Controller *, int, int, int, int);

Controller ControllerNew( Canvas *canvas ) {

	Controller ctrl = {

		.canvas = canvas,
		.field = FieldNew(16, 12),
		.cannon = CannonNew(15, 0),
		.tank = TankNew(0, 11),

	};

	return ctrl;

}


void onGameInit( Controller *ctrl ) {

	Canvas *canvas = ctrl->canvas;

	CanvasAdd( canvas, &ctrl->field );
	CanvasAdd( canvas, &ctrl->cannon );
	CanvasAdd( canvas, &ctrl->tank );

	CanvasPaint( canvas );
}

void onGameExit ( Controller *ctrl ) {

}

void onGameStart ( Controller *ctrl ) {
	ctrl->winner = 0;

	FieldOnGameStart( &ctrl->field );
	CannonOnGameStart( &ctrl->cannon );
	TankOnGameStart( &ctrl->tank );
}
/*
static void handler (int sig, siginfo_t *si, void *uc) {

}

static void makeTimer() {

	timer_t timerid;
	struct sigevent sevp;
	struct itimerspec its;
	int secs;
	sigset_t mask;
	struct sigaction sa;

	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = handler;
	sigemptyset( &sa.sa_mask );
	if (sigaction(SIG, &sa, NULL) == -1) {
		printf("sigaction\n");
	}

	sigemptyset( &mask );
	sigaddset( &mask, SIG );
	if (sigprocmaks( SIG_SETMASK, &mask, NULL) == -1) {
		printf("sigprocmask\n")
	}

	sevp.sigev_notify = SIGEV_SIGNAL;
	sevp.sigev_signo = SIG;
	sevp.sigev_value.sival_ptr = &timerid;
	if (timer_create( CLOCKID, &sevp, &timerid ) == -1) {
		printf("timer_create\n");
	}

	secs = 4;
	its.it_value.tv_sec = secs;
	its.it_value.tv_nsec = 0;
	its.it_interval.tv_sec = its.it_value.tv_sec;
	its.it_interval.tv_nsec = its.it_value.tv_nsec;

	if (timer_settime(timerid, 0, &its, NULL) == -1) {
		printf("timer_settime\n");
	}
}
*/

void onGameOver ( Controller *ctrl ) {

	Image *img;
	if (ctrl->winner == A) {
		img = ImageNew("./data/playerawin.bmp", 0, 0);
	} else if (ctrl->winner == B) {
		img = ImageNew("./data/playerbwin.bmp", 0, 0);
	} else {
		assert(false);
	}
	CanvasAdd( ctrl->canvas, img );
	CanvasPaint( ctrl->canvas );
	sleep( 4 );

	CanvasRemove( ctrl->canvas, img);
	CanvasPaint( ctrl->canvas );

}

void onTick ( Controller *ctrl ) {

}

bool onTankMove ( Controller *ctrl, int dx, int dy ) {

	if ( CheckBounds( ctrl, ctrl->tank.x, ctrl->tank.y, dx, dy ) ) {

		TankMove(&ctrl->tank, dx, dy);
		CanvasPaint( ctrl->canvas);

		if ( CannonIsOn( &ctrl->cannon, ctrl->tank.x, ctrl->tank.y ) ) {
			onCannonHit( ctrl );
		}

		return true;
	}
	return false;
}

void onTankFire ( Controller *ctrl ) {

}

void onTankHit ( Controller *ctrl ) {

	ctrl->winner = B;
	onGameOver( ctrl );

}

bool onCannonAim ( Controller *ctrl, int dx, int dy ) {

	if ( CheckBounds( ctrl, ctrl->cannon.aimx, ctrl->cannon.aimy, dx, dy ) ) {
		CannonAim( &ctrl->cannon, dx, dy );
		CanvasPaint( ctrl->canvas );
		return true;
	}
	return false;
}

void onCannonFire ( Controller *ctrl ) {

	int x = ctrl->cannon.aimx;
	int y = ctrl->cannon.aimy;

	FieldHit(&ctrl->field, x, y);
	CanvasPaint( ctrl->canvas);

	if (TankIsOn( &ctrl->tank, x, y )) {
		onTankHit( ctrl );
	}

}

void onCannonHit ( Controller *ctrl ) {

	ctrl->winner = B;
	onGameOver( ctrl );

}

static bool CheckBounds( Controller *ctrl, int x, int y, int dx, int dy ) {

	x += dx;
	y += dy;

	if ( x < 0 || x >= ctrl->field.width
	     ||	  y < 0 || y >= ctrl->field.height ) {
	  return false;
	}

	return true;

}
