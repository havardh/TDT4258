#ifndef _FIELD_H_
#define _FIELD_H_

#include "shape.h"
#include "screen.h"

static char* field_filename = "field.bmp";

typedef enum {

	EMPTY,
	BURNING,
	PLAYER

} SquareType;

typedef struct {

	void (*paint) ( Shape*, Screen* );

	int width;
	int height;

	SquareType **board;


} Field;

Field FieldNew( int, int );

#endif // _FIELD_H_
