#include "controller.h"


static bool CheckBounds( Controller*, int, int, int, int);
static bool canMove( Controller* , int, int, int, int);

Controller ControllerNew( Canvas *canvas, Audio *audio) {

	Controller ctrl = {

		.audio = audio,
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

	ControllerUpdateScore( ctrl );

	CanvasPaint( canvas );
}

void onGameExit ( Controller *ctrl ) {

}

void onGameStart( Controller *ctrl ) {}
void onGameOver( Controller *ctrl ) {}

void onRoundStart ( Controller *ctrl ) {
	ctrl->winner = 0;

	FieldOnGameStart( &ctrl->field );
	CannonOnGameStart( &ctrl->cannon );
	TankOnGameStart( &ctrl->tank );

	ControllerUpdateScore( ctrl );

	CanvasPaint( ctrl->canvas );
}

void onRoundOver ( Controller *ctrl ) {

	if ( ctrl->tank.health == 0 || ctrl->cannon.health == 0 ) {
		onGameOver( ctrl );

	} else {
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
		sleep( 2 );

		CanvasRemove( ctrl->canvas, img );
		CanvasPaint( ctrl->canvas );

		onRoundStart( ctrl );
	}

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
	ctrl->tank.health -= 1;
	onRoundOver( ctrl );

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

	FieldHit( &ctrl->field, x, y );
	CanvasPaint( ctrl->canvas);

	if (TankIsOn( &ctrl->tank, x, y )) {
		onTankHit( ctrl );
	}

}

void onCannonHit ( Controller *ctrl ) {

	ctrl->winner = A;
	ctrl->cannon.health -= 1;
	onRoundOver( ctrl );

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

static bool canMove ( Controller *ctrl, int x, int y, int dx, int dy ) {
	return CheckBounds ( ctrl, x, y, dx, dy ) && !FieldIsBurned( &ctrl->field, x+dx, y+dy);
}

void ControllerUpdateScore( Controller *ctrl ) {

	int cannon_health = ctrl->cannon.health;
	int tank_health = ctrl->tank.health;

	printf("%d %d\n", cannon_health, tank_health);
	uint8_t val = 0;

	if (tank_health == 1) {
		val = 1;
	} else if (tank_health == 2) {
		val = 3;
	} else if (tank_health == 3) {
		val = 7;
	} else if (tank_health == 4) {
		val = 15;
	}

	if (cannon_health == 1) {
		val |= 0x80;
	} else if (cannon_health == 2) {
		val |= 0xC0;
	} else if (cannon_health == 3) {
		val |= 0xE0;
	} else if (cannon_health == 4) {
		val |= 0xF0;
	}

	LedWrite( val );
}
