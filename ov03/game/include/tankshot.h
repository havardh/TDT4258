#ifndef _TANKSHOT_H_
#define _TANKSHOT_H_

typedef struct {

	void (*paint) ( Shape*, Screen* );

	Tank *tank;

} TankShot;

TankShot *TankShotNew( Tank* );

#endif // _TANKSHOT_H_
