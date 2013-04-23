#ifndef _FIELD_H_
#define _FIELD_H_

#include "shape.h"
#include "screen.h"
#include "image.h"

static char* field_filename = "../graphics/data/box.bmp";

typedef enum {

	EMPTY,
	FIRE,
	PLAYER

} SquareType;

typedef struct {
	void *parent;
	void (*paint) ( Shape*, Screen* );

	Image *grass;
	Image *fire;

	int width;
	int height;

	SquareType **board;


} Field;

Field FieldNew( int, int );

void FieldHit( Field*, int, int );

#endif // _FIELD_H_
