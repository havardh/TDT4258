#ifndef _FIELD_H_
#define _FIELD_H_

#include "shape.h"
#include "screen.h"

#define BACKGROUND

typedef enum {

	EMPTY,
	BURNING,
	PLAYER

} SquareType;

typedef struct {

	void (*paint) ( Shape*, Screen* );

	int width;
	int height;

	int **board;


} Field;

Field *FieldNew( void );

#endif // _FIELD_H_
