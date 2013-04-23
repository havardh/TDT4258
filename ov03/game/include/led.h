#ifndef _LED_H_
#define _LED_H_

#define DEV_LED "/dev/leds"

typedef enum {
	SW0, SW1, SW2, SW3, SW4, SW5, SW6, SW7
} Led;


void LedInit( void );
void LedDestroy( void );

void LedWrite( uint8_t );

#endif // _LED_H_
