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

	onGameStart( ctrl );

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

	ctrl->winner = A;
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
