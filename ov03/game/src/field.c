#include "field.h"

static void paint ( Shape *shape, Screen *screen ) {

	Field *field = (Field*)shape;
	field->image->paint(shape, screen);

}

Field FieldNew( int width, int height ) {

	Field field = {
		.paint = &paint,
		.image = ImageNew()
	};

}
