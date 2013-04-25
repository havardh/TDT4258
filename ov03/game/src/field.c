#include "field.h"

static void paint ( Shape *shape, Screen *screen ) {

	Field *field = (Field*)shape;
	int height = field->height;
	int width = field->width;

	field->background->paint( field->background, screen );

	Image *image = field->image_expl[tank->explosion_state];
	for (int i=0; i<height; i++) {
		for(int j=0; j<width; j++) {
		      if ( field->board[i][j] == FIRE ) {
			      image->x = j * 20;
			      image->y = i * 20;
			      image->paint( image, screen );
		      }
		}
	}
}

Field FieldNew( int width, int height ) {

	Field field = {
		.parent = NULL,
		.paint = &paint,
		.background = ImageNew(background_filename, 0, 0),
		.fire = ImageNew(fire_filename, 0, 0),
		.explosion_state = 0,
		.width = width,
		.height = height,
		.board = malloc(sizeof(SquareType*) * height)
	};

	for (int i=0; i<16; i++) {
		field->image_expl[i] = ImageNew(explosion_filename[i], 0, 0);
	}

	for (int i=0; i<height; i++) {
		field.board[i] = malloc(sizeof(SquareType) * width);
	}
	FieldOnGameStart( &field );

	return field;
}

void FieldOnGameStart( Field *field ) {

	for (int i=0; i<field->height; i++) {
		for(int j=0; j<field->width; j++) {
			field->board[i][j] = EMPTY;
		}
	}

}

bool FieldIsBurned( Field* field, int x, int y ) {
	return field->board[y][x] == FIRE;

}

void FieldHit( Field *field, int x, int y ) {

	field->board[y][x] = FIRE;

}
