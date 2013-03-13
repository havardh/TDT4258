#include "sounds.h"

static void init_dur_scale( void );
static void init_cromatic_scale( void );
static void init_full_scale( void );
static void init_gunshot( void );
static void init_gunshot1( void );
static void init_explosion( void );
static void init_smb_starman_theme( void );
static void init_smb_power_up_start( void );
static void init_smb_1up_start( void );
static void init_smb_death_start( void );
static void init_ex1( void );

static struct note_t *dur_scale_start;
static struct note_t *cromatic_scale_start;
static struct note_t *full_scale_start;
static struct note_t *gunshot_start;
static struct note_t *gunshot1_start;
static struct note_t *explosion_startT0;
static struct note_t *explosion_startT1;
static struct note_t *explosion_startT2;
static struct note_t *smb_starman_theme_startT0;
static struct note_t *smb_starman_theme_startT1;
static struct note_t *smb_starman_theme_startT2;
static struct note_t *smb_power_up_start;
static struct note_t *smb_1up_start;
static struct note_t *smb_death_start;
static struct note_t *ex1_startT0;
static struct note_t *ex1_startT1;

void init_sounds( void ) {
	init_dur_scale();
}

static void init_dur_scale( void ) {

	struct note_t* note8 = note_new(C2, FORTH, NULL);
	struct note_t* note7 = note_new(B, FORTH, note8);
	struct note_t* note6 = note_new(A, FORTH, note7);
	struct note_t* note5 = note_new(G, FORTH, note6);
	struct note_t* note4 = note_new(F, FORTH, note5);
	struct note_t* note3 = note_new(E, FORTH, note4);
	struct note_t* note2 = note_new(D, FORTH, note3);
	dur_scale_start = note_new(C, FORTH, note2);

}

void dur_scale( void ) {
	set_sample_fn(square_sample);
	set_track(0, dur_scale_start);
}

static void init_cromatic_scale( void ) {
	struct note_t* n13 = note_new(C4,  EIGHT, NULL);
	n13->cutoff = 1;
	struct note_t* n12 = note_new(B3,  EIGHT, n13);
	n12->cutoff = 1;
	struct note_t* n11 = note_new(A3_, EIGHT, n12);
	n11->cutoff = 1;
	struct note_t* n10 = note_new(A3,  EIGHT, n11);
	n10->cutoff = 1;
	struct note_t* n9  = note_new(G3_, EIGHT, n10);
	n9->cutoff = 1;
	struct note_t* n8  = note_new(G3,  EIGHT,  n9);
	n8->cutoff = 1;
	struct note_t* n7  = note_new(F3_, EIGHT,  n8);
	n7->cutoff = 1;
	struct note_t* n6  = note_new(F3,  EIGHT,  n7);
	n6->cutoff = 1;
	struct note_t* n5  = note_new(E3,  EIGHT,  n6);
	n5->cutoff = 1;
	struct note_t* n4  = note_new(D3_, EIGHT,  n5);
	n4->cutoff = 1;
	struct note_t* n3  = note_new(D3,  EIGHT,  n4);
	n3->cutoff = 1;
	struct note_t* n2  = note_new(C3_, EIGHT,  n3);
	n2->cutoff = 1;
	cromatic_scale_start  = note_new(C3,  EIGHT,  n2);
	cromatic_scale_start->cutoff = 1;

}

void cromatic_scale( void ) {
	set_sample_fn(square_sample);
	set_track(0, cromatic_scale_start);
}

static void init_full_scale( void ) {
	int pitch[51] =	 {
		C2, C2_, D2, D2_, E2, F2, G2, G2_, A2,
		A2_, B2, C3_, D3, D3_, E3, F3, F3_, G3,
		G3_, A3, A3_, B3, C4_, D4, D4_, E4, F4,
		F4_, G4, G4_, A4, A4_, B4
		/*C5, C5_, D5, D5_, E5, F5, F5_, G5, G5_, A5, A5_, B5*/
	};

	full_scale_start = even_tune(pitch, 51, EIGHT, 0.875);

}

void full_scale ( void ) {
	set_sample_fn(square_sample);
	set_track(0, full_scale_start);
}

static void init_gunshot( void ) {
	int pitch[25] = {
		C5, B4, A4_, A4, G4_, G4, F4_, F4, E4,
		D4_, D4, C4_, C4, B3, A3_, A3, G3_,
		G3, F3_, F3, E3, D3_, D3, C3_, C3
	};
	gunshot_start = even_tune(pitch, 25, 350, 1);
}


void gunshot (void ) {
	set_sample_fn(triangle_sample);
	set_track(0, gunshot_start);
}

static void init_gunshot1( void ) {
	int pitch[13] = { C4, B3, A3_, A3, G3_, G3, F3_, F3, E3, D3_, D3, C3_, C3 };
	gunshot1_start = even_tune(pitch, 13, SIXTEENTH, 1);
}


void gunshot1 ( void ) {
	set_sample_fn(triangle_sample);
	set_track(0, gunshot1_start);
}

static void init_explosion( void ) {
	int pitch0[4] = {5, 5, 5, 5};
	int pitch1[8] = {2, 6, 2, 5, 4, 2, 4, 2};
	explosion_startT0 = even_tune(pitch0, 4, EIGHT, 1);
	explosion_startT1 = even_tune(pitch1, 8, SIXTEENTH, 0.5);
	explosion_startT2 = note_new(1, HALF, 0);
}

void explosion ( void ) {
	set_sample_fn(sawtooth_sample);
	set_track(0, explosion_startT0);
	set_track(1, explosion_startT1);
	set_track(2, explosion_startT2);
}

static void init_smb_starman_theme( void ) {
	int pitch_high[156] = {
		PAUSE, EIGHT,
		C4, EIGHT, C4, EIGHT, C4, EIGHT, PAUSE, SIXTEENTH, C4, SIXTEENTH,
		PAUSE, SIXTEENTH,C4, EIGHT,PAUSE, SIXTEENTH,C4, SIXTEENTH,PAUSE, SIXTEENTH,C4, EIGHT,
		B3, EIGHT,B3, EIGHT,B3, EIGHT,PAUSE, SIXTEENTH,B3, SIXTEENTH,
		PAUSE, SIXTEENTH, B3, EIGHT,PAUSE, SIXTEENTH,B3, SIXTEENTH,PAUSE, SIXTEENTH,B3, EIGHT,

		C4, EIGHT, C4, EIGHT, C4, EIGHT, PAUSE, SIXTEENTH, C4, SIXTEENTH,
		PAUSE, SIXTEENTH,C4, EIGHT,PAUSE, SIXTEENTH,C4, SIXTEENTH,PAUSE, SIXTEENTH,C4, EIGHT,
		B3, EIGHT,B3, EIGHT,B3, EIGHT,PAUSE, SIXTEENTH,B3, SIXTEENTH,
		PAUSE, SIXTEENTH, B3, EIGHT,PAUSE, SIXTEENTH,B3, SIXTEENTH,PAUSE, SIXTEENTH,B3, EIGHT,

		C4, EIGHT, C4, EIGHT, C4, EIGHT, PAUSE, SIXTEENTH, C4, SIXTEENTH,
		PAUSE, SIXTEENTH,C4, EIGHT,PAUSE, SIXTEENTH,C4, SIXTEENTH,PAUSE, SIXTEENTH,C4, EIGHT,
		B3, EIGHT,B3, EIGHT,B3, EIGHT,PAUSE, SIXTEENTH,B3, SIXTEENTH,
		PAUSE, SIXTEENTH, B3, EIGHT,PAUSE, SIXTEENTH,B3, SIXTEENTH,PAUSE, SIXTEENTH,B3, EIGHT,

		C4, EIGHT, C4, EIGHT, C4, EIGHT, PAUSE, SIXTEENTH, C4, SIXTEENTH,
		PAUSE, SIXTEENTH,C4, EIGHT,PAUSE, SIXTEENTH,C4, SIXTEENTH,PAUSE, SIXTEENTH,C4, EIGHT
	};

	int pitch_middle[156] = {
		PAUSE, EIGHT,
		F3, EIGHT, F3, EIGHT, F3, EIGHT, D3, SIXTEENTH, F3, SIXTEENTH,
		PAUSE, SIXTEENTH,F3, EIGHT,D3, SIXTEENTH,F3, SIXTEENTH,D3, SIXTEENTH,F3, EIGHT,
		E3, EIGHT,E3, EIGHT,E3, EIGHT,C3, SIXTEENTH,E3, SIXTEENTH,
		PAUSE, SIXTEENTH, E3, EIGHT,C3, SIXTEENTH,E3, SIXTEENTH,C3, SIXTEENTH,E3, EIGHT,

		F3, EIGHT,F3, EIGHT,F3, EIGHT,D3, SIXTEENTH,F3, SIXTEENTH,
		PAUSE, SIXTEENTH,F3, EIGHT,D3, SIXTEENTH,F3, SIXTEENTH,D3, SIXTEENTH,F3, EIGHT,
		E3, EIGHT,E3, EIGHT,E3, EIGHT,C3, SIXTEENTH,E3, SIXTEENTH,
		PAUSE, SIXTEENTH, E3, EIGHT,C3, SIXTEENTH,E3, SIXTEENTH,C3, SIXTEENTH,E3, EIGHT,

		F3, EIGHT,F3, EIGHT,F3, EIGHT,D3, SIXTEENTH,F3, SIXTEENTH,
		PAUSE, SIXTEENTH,F3, EIGHT,D3, SIXTEENTH,F3, SIXTEENTH,D3, SIXTEENTH,F3, EIGHT,
		E3, EIGHT,E3, EIGHT,E3, EIGHT,C3, SIXTEENTH,E3, SIXTEENTH,
		PAUSE, SIXTEENTH, E3, EIGHT,C3, SIXTEENTH,E3, SIXTEENTH,C3, SIXTEENTH,E3, EIGHT,

		F3, EIGHT,F3, EIGHT,F3, EIGHT,D3, SIXTEENTH,F3, SIXTEENTH,
		PAUSE, SIXTEENTH,F3, EIGHT,D3, SIXTEENTH,F3, SIXTEENTH,D3, SIXTEENTH,F3, EIGHT
	};

	int pitch_low[114] = {
		PAUSE, EIGHT,
		D2, EIGHT, PAUSE, EIGHT, A2, EIGHT, PAUSE, SIXTEENTH, D3, SIXTEENTH,
		PAUSE, FORTH, A2, EIGHT, D3, EIGHT,
		C2, EIGHT, PAUSE, EIGHT, G2, EIGHT, PAUSE, SIXTEENTH, C3, SIXTEENTH,
		PAUSE, FORTH, G2, EIGHT, C3, EIGHT,

		D2, EIGHT, PAUSE, EIGHT, A2, EIGHT, PAUSE, SIXTEENTH, D3, SIXTEENTH,
		PAUSE, FORTH, A2, EIGHT, D3, EIGHT,
		C2, EIGHT, PAUSE, EIGHT, G2, EIGHT, PAUSE, SIXTEENTH, C3, SIXTEENTH,
		PAUSE, FORTH, G2, EIGHT, C3, EIGHT,

		D2, EIGHT, PAUSE, EIGHT, A2, EIGHT, PAUSE, SIXTEENTH, D3, SIXTEENTH,
		PAUSE, FORTH, A2, EIGHT, D3, EIGHT,
		C2, EIGHT, PAUSE, EIGHT, G2, EIGHT, PAUSE, SIXTEENTH, C3, SIXTEENTH,
		PAUSE, FORTH, G2, EIGHT, C3, EIGHT,

		D2, EIGHT, PAUSE, EIGHT, A2, EIGHT, PAUSE, SIXTEENTH, D3, SIXTEENTH,
		PAUSE, FORTH, A2, EIGHT, D3, EIGHT
	};

	smb_starman_theme_startT0 = variable_tune(pitch_high, 78, 0.875);
	smb_starman_theme_startT1 = variable_tune(pitch_middle, 78, 0.875);
	smb_starman_theme_startT2 = variable_tune(pitch_low, 57, 0.875);

}

void smb_starman_theme ( void ) {
	set_sample_fn ( square_sample );

	set_track(0, smb_starman_theme_startT0);
	set_track(1, smb_starman_theme_startT1);
	set_track(2, smb_starman_theme_startT2);
}

static void init_smb_power_up_start( void ) {
	int pitch[15] = {
		G2,  B2, D3,  G3,  B3,
		G2_, C3, D3_, G3_, C4,
		A2_, D3, F3, A3_, D4
	};

	smb_power_up_start = even_tune(pitch, 15, SHORT_P, 0.875);

}

void smb_power_up( void ) {

	set_sample_fn(square_sample);
	set_track(0, smb_power_up_start);
}

static void init_smb_1up_start( void ) {

	int pitch[6] =	{
		E3, G3, E4, C4, D4, G4
	};

	smb_1up_start = even_tune(pitch, 6, EIGHT, 0.875);

}


void smb_1up( void ) {

	set_sample_fn(square_sample);
	set_track(0, smb_1up_start);
}

static void init_smb_death_start( void ) {
	int pitch_dur[6] = {
		C3, SIXTEENTH,
		C3_, SIXTEENTH,
		D3, EIGHT
	};

	smb_death_start = variable_tune(pitch_dur, 3, 0.875);
}


void smb_death( void ) {
	set_sample_fn(square_sample);
	set_track(0, smb_death_start);
}

static void init_ex1( void ) {

	ex1_startT0 = note_new(C, HALF, 0);
	ex1_startT1 = note_new(A, HALF, 0);

}

void ex1( void ) {

	set_sample_fn(sine_sample);
	set_track(0, ex1_startT0);
	set_track(1, ex1_startT1);
}
