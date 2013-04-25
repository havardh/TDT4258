#include "controller.h"
#include "field.h"
#include <stdbool.h>


int main() {

	Controller ctrl = ControllerNew(NULL, NULL);

	//ctrl.field.board[0][0] = FIRE;

	bool b = canMove( &ctrl, 1, 1, -1, -1 );
	printf("%d\n", b);

	return 0;
}
