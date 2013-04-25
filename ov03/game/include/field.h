#ifndef _FIELD_H_
#define _FIELD_H_

#include "shape.h"
#include "screen.h"
#include "image.h"
#include <stdbool.h>

static char *background_filename = "./data/background.bmp";

static char *explosion_filename[16] = {
	"./data/explosion_1.bmp",
	"./data/explosion_2.bmp",
	"./data/explosion_3.bmp",
	"./data/explosion_4.bmp",
	"./data/explosion_5.bmp",
	"./data/explosion_6.bmp",
	"./data/explosion_7.bmp",
	"./data/explosion_8.bmp",
	"./data/explosion_9.bmp",
	"./data/explosion_10.bmp",
	"./data/explosion_11.bmp",
	"./data/explosion_12.bmp",
	"./data/explosion_13.bmp",
	"./data/explosion_14.bmp",
	"./data/explosion_15.bmp",
	"./data/explosion_16.bmp"
		};

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

	int explosion_state;

	Image *image_expl[16];

	int width;
	int height;

	SquareType **board;


} Field;

Field FieldNew( int, int );

void FieldOnGameStart( Field*);
bool FieldIsBurned( Field*, int, int );

void FieldHit( Field*, int, int );

#endif // _FIELD_H_
