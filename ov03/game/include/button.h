#ifndef _BUTTONS_H_
#define _BUTTONS_H_

#define DEV_BUTTON

typedef enum {
	SW0, SW1, SW2, SW3, SW4, SW5, SW6, SW7
} Button;


void ButtonInit( void );
void ButtonDestroy( void );

void ButtonAddCallback( int, void (*callback) (void) );
void ButtonPoll( void );

#endif // _BUTTONS_H_
