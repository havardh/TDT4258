#include "button.h"
#include <stdint.h>
#include <fcntl.h>

static int _fd;

static void (*callbacks[8])(void);

void ButtonInit( void ) {

	_fd = open( "/dev/buttons", O_RDONLY );

}

void ButtonDestroy( void ) {

	close( _fd );

}

void ButtonAddCallback( int button, void (*callback) (void) ) {

  	callbacks[button] = callback;

}

void ButtonPoll( void ) {

  static uint8_t last = 0;
  	uint8_t buttons;
	read( _fd, &buttons, 1);
        
        //mprintf("%d\n", buttons);

        if (buttons != last) {

	switch (buttons) {

          case 1:   callbacks[0](); break;
          case 2:   callbacks[1](); break;
          case 4:   callbacks[2](); break;
          case 8:   callbacks[3](); break;
          case 16:  callbacks[4](); break;
          case 32:  callbacks[5](); break;
          case 64:  callbacks[6](); break;
          case 128: callbacks[7](); break;
            
	}

        last = buttons;
        }
}
