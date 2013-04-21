#ifndef _CANNONBALL_H_
#define _CANNONBALL_H_

typedef struct {
	void (*paint) ( Shape*, Screen* );

	Cannon *cannon;


} Cannonball;

Cannonball *CannonballNew( Cannon* );

#endif // _CANNONBALL_H_
