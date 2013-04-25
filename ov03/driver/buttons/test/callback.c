#include "button_ioctl.h"

static r = 1;

void callback( void ){
	printf("Callback\n");
	r = 0;
}



int main( void ) {

	int fd = open( "/dev/buttons" );

	struct button_callback btn_clbk = {
		.sw = 0,
		.callback = &callback
	}

	ioctl( fd, BTN_CALLBACK, &btn_clbk);

	while (r) ;

	return 0;
}
