#ifndef _CANNON_H_
#define _CANNON_H_

typedef struct {
	void (*paint) ( Shape*, Screen* );

	int x;
	int y;

	int health;
	int angle;

} Cannon;

Cannon *CannonNew( void );

#endif // _CANNON_H_
