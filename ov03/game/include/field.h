#ifndef _FIELD_H_
#define _FIELD_H_

#include "shape.h"
#include "screen.h"
#include "image.h"
#include <stdbool.h>

static char *background_filename = "./data/background.bmp";
static char* fire_filename = "./data/fire.bmp";


typedef enum {

	EMPTY,
	FIRE,
	PLAYER

} SquareType;

typedef struct {
	void *parent;
	void (*paint) ( Shape*, Screen* );

	Image *background;
	Image *fire;

	int width;
	int height;

	SquareType **board;


} Field;

Field FieldNew( int, int );

void FieldOnGameStart( Field*);
bool FieldIsBurned( Field*, int, int );

void FieldHit( Field*, int, int );

#endif // _FIELD_H_
