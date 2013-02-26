#ifndef INTERRUPT_H
#define INTERRUPT_H

#include <avr32/ap7000.h>
#include <sys/interrupts.h>

extern int LED_VALUE;
extern volatile avr32_pio_t *piob;
extern volatile avr32_pio_t *pioc;
__int_handler *button_isr(void);

#define SW0 0x1
#define SW1 0x2
#define SW2 0x4
#define SW3 0x8
#define SW4 0x10
#define SW5 0x20
#define SW6 0x40
#define SW7 0x80

#endif
