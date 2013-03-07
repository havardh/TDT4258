/*****************************************************************************
 *
 * Øving 2 UCSysDes
 *
 *****************************************************************************/

#include "oeving2.h"
#include "interrupt.h"
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

#define SAMPLES 4096

volatile avr32_pio_t *piob = &AVR32_PIOB;
volatile avr32_pio_t *pioc = &AVR32_PIOC;
volatile avr32_abdac_t *dac = &AVR32_ABDAC;
volatile avr32_pm_t *sm = &AVR32_PM;

void generate_sine_table( void );
void generate_square_table( void );

int LED_VALUE;
double period_multiplier = 1.0;

int16_t sine_table[SAMPLES];
int16_t square_table[SAMPLES];
void init_tune( void );


typedef struct {
	int pitch;
	int duration;
} note;


int main(int argc, char *argv[]) {
	generate_sine_table();
	generate_square_table();
	init_tune();

	init_hardware();

	while (1);

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

void generate_sine_table( void ) {
	int i;
	for (i=0; i<SAMPLES; i++) {
		double fac = (double)i/SAMPLES;
		double x = fac * (2*PI);
		double y = sin( x ) * 20000;
		sine_table[i] = (int16_t)y;
	}
}

void generate_square_table( void ) {
	int i;
	for (i=0; i<SAMPLES; i++) {

		if (i < (SAMPLES / 2)) {
			square_table[i] = 10000;
		} else {
			square_table[i] = -10000;
		}
	}
}

#define C 16
#define D 18
#define E 20
#define F 21
#define G 24
#define A 27
#define B 30

#define WHOLE  100000
#define HALF	50000
#define FORTH	25000
#define EIGHT	12500

static note tune[22];
static note *n = &tune[0];

void init_tune() {

	tune[0].pitch = C;
	tune[0].duration = FORTH;
	tune[1].pitch = D;
	tune[1].duration = FORTH;
	tune[2].pitch = E;
	tune[2].duration = FORTH;
	tune[3].pitch = F;
	tune[3].duration = FORTH;

	tune[4].pitch = G;
	tune[4].duration = HALF;
	tune[5].pitch = G;
	tune[5].duration = HALF;

	tune[6].pitch = A;
	tune[6].duration = FORTH;
	tune[7].pitch = A;
	tune[7].duration = FORTH;
	tune[8].pitch = A;
	tune[8].duration = FORTH;
	tune[9].pitch = A;
	tune[9].duration = FORTH;

	tune[10].pitch = G;
	tune[10].duration = WHOLE;

	tune[11].pitch = F;
	tune[11].duration = FORTH;
	tune[12].pitch = F;
	tune[12].duration = FORTH;
	tune[13].pitch = F;
	tune[13].duration = FORTH;
	tune[14].pitch = F;
	tune[14].duration = FORTH;

	tune[15].pitch = E;
	tune[15].duration = HALF;
	tune[16].pitch = E;
	tune[16].duration = HALF;

	tune[17].pitch = D;
	tune[17].duration = FORTH;
	tune[18].pitch = D;
	tune[18].duration = FORTH;
	tune[19].pitch = D;
	tune[19].duration = FORTH;
	tune[20].pitch = D;
	tune[20].duration = FORTH;

	tune[21].pitch = C;
	tune[21].duration = WHOLE;

	n = tune;
}

static int i = 0;
static int sample = 0;
static int tone_number = 0;

void abdac_isr(void) {

	if (i > n->duration) {
		i = 0;
		tone_number++;
		if (tone_number >= 22) { tone_number = 0; }
		n = &tune[tone_number];
	}
	i++;
	int16_t sound_wave;
	if (i > n->duration * (7.0 / 8.0)) {
		sound_wave = 0;
	} else {
		sound_wave = square_table[sample];
	}

	dac->SDR.channel0 = sound_wave;
	dac->SDR.channel1 = sound_wave;

	sample += n->pitch;

	if (sample >= SAMPLES) {
		sample = 0;
	}

}

//void play_tune()

// 1. Få interrupt ifra abdac
// 2. Skriv rand til abdac
// 3. Still på klokkefrekvens (for interrupt i fra abdac)
// 4. Skriv en datastruktur til abdac
// 5. Skriv tonen A (440 Hz) til abdac.
