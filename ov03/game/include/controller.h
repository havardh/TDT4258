#ifndef _CONTROLLER_H_
#define _CONTROLLER_H_

typedef struct {

	Field *field;
	Cannon *cannon;
	Tank *tank;

} Controller;

Controller *ControllerNew( void );

// Events
void onTick ( void );

void onGameStart ( void );
void onGameOver ( void );

void onTankMove ( void );
void onTankFire ( void );
void onTankHit ( void );

void onCannonAim ( void );
void onCannonFire ( void );
void onCannonHit ( void );

#endif // _CONTROLLER_H_
