/*****************************************************************************
 *
 * Øving 2 UCSysDes
 *
 * Headerfil
 *
 *****************************************************************************/

#ifndef OEVING_2_H /* vanlig måte å unngå headerrekursjon på */
#define OEVING_2_H

#include <avr32/ap7000.h> /* inkludere Atmel-headerfil */
#include <sys/interrupts.h>

/* legg andre "includes" her, sammen med "defines" og prototyper */
#define ABDAC_INT_LEVEL 0
#define BUTTONS_INT_LEVEL 1

#define ON     1

/* prototyper */
int main (int argc, char *argv[]);

static void init_hardware(void);

void update_leds(void);

#endif
