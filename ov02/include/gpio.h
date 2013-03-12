#ifndef GPIO_H
#define GPIO_H

#include <stdint.h>
#include <avr32/ap7000.h>
#include <sys/interrupts.h>
#include "interrupt.h"
#include "samples.h"

static uint8_t led_value;

extern volatile avr32_pio_t *piob;
extern volatile avr32_pio_t *pioc;
extern volatile avr32_abdac_t *dac;
//extern volatile avr32_pm_t *sm;

// Init HW
void init_intc( void );
void init_buttons( void );
void init_leds( void );
void init_audio( void );

// Get and Set LEDs
uint8_t get_leds ( void );
void set_leds ( uint8_t );

// DAC
void turn_on_abdac( void );
void turn_off_abdac( void );
void set_dac_sample( int16_t sound );

#endif // GPIO_H
