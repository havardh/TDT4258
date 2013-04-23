#include "controller.h"
#include "assert.h"

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

	if ( CheckBounds( ctrl, ctrl->cannon.x, ctrl->cannon.y, dx, dy ) ) {
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

	if (TankIsOn(x, y)) {
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

	if ( x < 0 ) return false;
	if ( x >= ctrl->field.width) return false;
	if ( y < 0 ) return false;
	if ( x >= ctrl->field.height ) return false;

	return true;

}
