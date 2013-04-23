#include "field.h"

static void paint ( Shape *shape, Screen *screen ) {

	Field *field = (Field*)shape;
	int height = field->height;
	int width = field->width;

	for (int i=0; i<height; i++) {
		for(int j=0; j<width; j++) {
			if (field->board[i][j] == EMPTY) {
			    field->grass->paint(shape, screen);
			}
		}
	}
}

Field FieldNew( int width, int height ) {

	Field field = {
		.paint = &paint,
		.grass = ImageNew(field_filename, 0, 0),
		.width = width,
		.height = height,
		.board = malloc(sizeof(SquareType*) * height)
	};

	for (int i=0; i<height; i++) {
		field.board[i] = malloc(sizeof(SquareType) * width);
		for(int j=0; j<width; j++) { field.board[i][j] = EMPTY; }
	}

	return field;
}
