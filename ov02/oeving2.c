/*****************************************************************************
 *
 * Øving 2 UCSysDes
 *
 *****************************************************************************/

#include "oeving2.h"
#include "interrupt.h"
#include <stdlib.h>
#include <math.h>

volatile avr32_pio_t *piob = &AVR32_PIOB;
volatile avr32_pio_t *pioc = &AVR32_PIOC;
volatile avr32_abdac_t *dac = &AVR32_ABDAC;
volatile avr32_pm_t *sm = &AVR32_PM;

int LED_VALUE;

int main(int argc, char *argv[]) {
	init_hardware();

	LED_VALUE = 0x8;
	update_leds();

	while (1) update_leds() ;
	return 0;
}

void update_leds(void) {
	// Turn off lights
	pioc->codr = 0xFF;

	// Turn on lights
	pioc->sodr = LED_VALUE;
}

/* funksjon for å initialisere maskinvaren, må utvides */
void init_hardware(void) {
	init_intc();
	init_leds();
	init_buttons();
	init_audio();
}

void init_intc(void) {
	set_interrupts_base((void *) AVR32_INTC_ADDRESS);

	init_interrupts();
}

void init_buttons(void) {
	register_interrupt((__int_handler)(button_isr),
		AVR32_PIOB_IRQ / 32, AVR32_PIOB_IRQ % 32, BUTTONS_INT_LEVEL);
	piob->per = 0xff;
	piob->ier = 0xff;
	piob->puer = 0xff;

}

void init_leds(void) {
	pioc->per = 0xff; // Sets PIOC-PER to 0xFF, activates all PIOC pins
	pioc->oer = 0xff; // Sets PIOC-OER to 0xFF, sets all PIOC pins to output
	/* (...) */
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
	dac->CR.en = ON;
	// Turn on interrupts
	dac->IER.tx_ready = ON;
}


// button_isr
// Bytte datastruktur

double t = 0;
#define PI 3.14
#define SHORT_MAX 32768


short sine_puls(double t, double ampl, double period) {
	double value = sin(t*period) * ampl;
	short normalized = (short)(value * SHORT_MAX);
	return normalized;
}


void abdac_isr(void) {
	short sound_wave = sine_puls(t, 1, 1);
	dac->SDR.channel0 = sound_wave;
	dac->SDR.channel1 = sound_wave;

	t = (t >= 2*PI ? 0 : t + 0.01);
}

char sine(int amplitude, int period, int time, int dy, int t) {
	return (char) (((amplitude * sin(period * t + time) + dy) * 127) + 128);
}

//void play_tune()

// 1. Få interrupt ifra abdac
// 2. Skriv rand til abdac
// 3. Still på klokkefrekvens (for interrupt i fra abdac)
// 4. Skriv en datastruktur til abdac
// 5. Skriv tonen A (440 Hz) til abdac.
