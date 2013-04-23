#include "field.h"

static void paint ( Shape *shape, Screen *screen ) {

	Field *field = (Field*)shape;
	int height = field->height;
	int width = field->width;

	for (int i=0; i<height; i++) {
		for(int j=0; j<width; j++) {

		      if ( field->board[i][j] == EMPTY ) {
			      field->grass->x = j * 20;
			      field->grass->y = i * 20;
			      field->grass->paint( field->grass, screen );
		      } else if ( field->board[i][j] == FIRE ) {
			      field->fire->x = j * 20;
			      field->fire->y = i * 20;
			      field->fire->paint( field->fire, screen );
		      }

		}
	}
}

Field FieldNew( int width, int height ) {

	Field field = {
		.parent = NULL,
		.paint = &paint,
		.grass = ImageNew(field_filename, 0, 0),
		.fire = ImageNew(fire_filename, 0, 0),
		.width = width,
		.height = height,
		.board = malloc(sizeof(SquareType*) * height)
	};

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

void FieldHit( Field *field, int x, int y ) {

	field->board[y][x] = FIRE;

}
