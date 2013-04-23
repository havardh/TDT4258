#include "controller.h"

Controller ControllerNew( Canvas *canvas ) {

	Controller ctrl = {

		.canvas = canvas,
		.field = FieldNew(16, 12),
		.cannon = CannonNew(15, 0),
		.tank = TankNew(0, 11)

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

}

void onGameOver ( Controller *ctrl ) {

}

void onTick ( Controller *ctrl ) {

}

void onTankMove ( Controller *ctrl ) {

}

void onTankFire ( Controller *ctrl ) {

}

void onTankHit ( Controller *ctrl ) {

}

void onCannonAim ( Controller *ctrl ) {

}

void onCannonFire ( Controller *ctrl ) {

}

void onCannonHit ( Controller *ctrl ) {

}
