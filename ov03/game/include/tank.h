#ifndef _TANK_H_
#define _TANK_H_

typedef struct {
	void (*paint) ( Shape*, Screen* );

	int x;
	int y;

	int health;

} Tank;

Tank *TankNew( void );

#endif // _TANK_H_
