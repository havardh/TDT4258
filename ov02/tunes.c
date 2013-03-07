#include "tunes.h"

void init_tune (note_t *tune) {

	tune = (struct note_t*)calloc(sizeof(note_t), 22);

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

}
