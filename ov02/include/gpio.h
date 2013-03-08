#ifndef GPIO_H
#define GPIO_H

#include <stdint.h>
#include <avr32/ap7000.h>
#include <sys/interrupts.h>
#include "interrupt.h"

static uint8_t led_value;

extern volatile avr32_pio_t *piob = &AVR32_PIOB;
extern volatile avr32_pio_t *pioc = &AVR32_PIOC;
extern volatile avr32_abdac_t *dac = &AVR32_ABDAC;
extern volatile avr32_pm_t *sm = &AVR32_PM;

// Init HW
void init_intc( void );
void init_buttons( void );
void init_leds( void );
void init_audio( void );

// Get and Set LEDs
uint8_t get_leds ( void );
void set_leds ( uint8_t );

#endif // GPIO_H
