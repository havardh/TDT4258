/*****************************************************************************
 *
 * Øving 2 UCSysDes
 *
 *****************************************************************************/

#include "oeving2.h"
#include "interrupt.h"
#include "gpio.h"
#include "tunes.h"
#include "samples.h"
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

struct note_t *tune;

static void init_hardware(void);

int main(int argc, char *argv[]) {
	init_samples();
	init_tune(tune);

	init_hardware();

	set_leds(0x88);

	while (1);

	return 0;
}

void abdac_isr(void) {

	dac->SDR.channel0 = 0;
	dac->SDR.channel1 = 0;

	
}

void init_audio(void) {
	// Register interrupt handler
	register_interrupt((__int_handler)(abdac_isr),
		AVR32_ABDAC_IRQ / 32, AVR32_ABDAC_IRQ % 32, ABDAC_INT_LEVEL);

	// Disable PIO
	piob->PDR.p20 = 1;
	piob->PDR.p21 = 1;

	// Enable ABDAC
	piob->ASR.p20 = 1;
	piob->ASR.p21 = 1;

	// Set the clock to use Oscillator (OSC0 and OSC1 is 20MHz and 12MHz)
	avr32_pm_gcctrl_t *clock = &sm->gcctrl[6];

	clock->oscsel = 0; // OSC0 = 20MHz, gir 20 MHz / 256 = 81.920 kHz
	clock->pllsel = 0;
	clock->cen = ON;

	//clock->diven = ON;
	//clock->div = 100;

	// Turn on DAC
	//dac->CR.en = ON;
	// Turn on interrupts
	//dac->IER.tx_ready = ON;
}

/* funksjon for å initialisere maskinvaren, må utvides */
static void init_hardware(void) {
	init_intc();
	init_leds();
	init_buttons();
	init_audio();
}

// button_isr
// Bytte datastruktur

//void play_tune()

// 1. Få interrupt ifra abdac
// 2. Skriv rand til abdac
// 3. Still på klokkefrekvens (for interrupt i fra abdac)
// 4. Skriv en datastruktur til abdac
// 5. Skriv tonen A (440 Hz) til abdac.
