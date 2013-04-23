#ifndef _CONTROLLER_H_
#define _CONTROLLER_H_

#include "field.h"
#include "cannon.h"
#include "tank.h"
#include "cannonball.h"
#include "tankshot.h"
#include "canvas.h"
#include <stdbool.h>

typedef enum {
	A, B
} Player;

typedef struct {

	Player winner;

	Canvas *canvas;
	Field field;
	Cannon cannon;
	Tank tank;

} Controller;

Controller ControllerNew( Canvas *cavnas );

// Events
void onTick ( Controller* );

void onGameInit( Controller* );
void onGameExit ( Controller* );

void onGameStart ( Controller* );
void onGameOver ( Controller* );

bool onTankMove ( Controller*, int, int );
void onTankFire ( Controller* );
void onTankHit ( Controller* );

bool onCannonAim ( Controller*, int, int );
void onCannonFire ( Controller* );
void onCannonHit ( Controller* );

#endif // _CONTROLLER_H_
