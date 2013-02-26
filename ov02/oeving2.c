/*****************************************************************************
 *
 * Øving 2 UCSysDes
 *
 *****************************************************************************/

#include "oeving2.h"
#include "interrupt.h"

volatile avr32_pio_t *piob = &AVR32_PIOB;

int LED_VALUE;

int main (int argc, char *argv[]) {
  initHardware();

  while(1);
  return 0;
}

/* funksjon for å initialisere maskinvaren, må utvides */
void initHardware (void) {
  initIntc();
  initLeds();
  initButtons();
  //initAudio();
}

void initIntc(void) {
  set_interrupts_base((void *)AVR32_INTC_ADDRESS);
  init_interrupts();
}

void initButtons(void) {
  register_interrupt( button_isr, AVR32_PIOB_IRQ/32, AVR32_PIOB_IRQ % 32, BUTTONS_INT_LEVEL);
  /* (...) */
}

void initLeds(void) {
	volatile avr32piot *pio = &AVR32_PIOC;
	pio->oer = 0xff; // Sets PIOC-OER to FF, activates output on all PIOC pins

  /* (...) */
}

void initAudio(void) {
  register_interrupt( abdac_isr, AVR32_ABDAC_IRQ/32, AVR32_ABDAC_IRQ % 32, ABDAC_INT_LEVEL);
  /* (...) */
}



void abdac_isr(void) {}
