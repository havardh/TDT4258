#include "tunes.h"
#include "note.h"

void load_lisa (note_t **tune) {
	note_t *s21->next = note_new( C, WHOLE, NULL);
	
	note_t *s20->next = note_new( D, FORTH, s21);
	note_t *s19->next = note_new( D, FORTH, s20);
	note_t *s18->next = note_new( D, FORTH, s19);
	note_t *s17->next = note_new( D, FORTH, s18);
	
	note_t *s16->next = note_new( E, HALF, s17);
	note_t *s15->next = note_new( E, HALF, s16);
	
	note_t *s14->next = note_new( F, FORTH, s15);
	note_t *s13->next = note_new( F, FORTH, s14);
	note_t *s12->next = note_new( F, FORTH, s13);
	note_t *s11->next = note_new( F, FORTH, s12);
	
	note_t *s10->next = note_new( G, WHOLE, s11);
	
	note_t *s09->next = note_new( A, FORTH, s10);
	note_t *s08->next = note_new( A, FORTH, s09);
	note_t *s07->next = note_new( A, FORTH, s08);
	note_t *s06->next = note_new( A, FORTH, s07);
	
	note_t *s05->next = note_new( G, HALF, s06);
	note_t *s04->next = note_new( G, HALF, s05);
	
	note_t *s03->next = note_new( F, FORTH, s04);
	note_t *s02->next = note_new( E, FORTH, s03);
	note_t *s01->next = note_new( D, FORTH, s02);
	note_t *s00->next = note_new( C, FORTH, s01);
	
	tune[0] = s00;
}

void load_explosion ( note_t **sound ) {
	note_t *t06->next = note_new( C, SHORT, NULL);
	note_t *t05->next = note_new( D, SHORT, t06);
	note_t *t04->next = note_new( C, SHORT, t05);
	note_t *t03->next = note_new( F, SHORT, t04);
	note_t *t02->next = note_new( C, SHORT, t03);
	note_t *t01->next = note_new( G, SHORT, t02);
	note_t *t00->next = note_new( A, SHORT, t01);

	note_t *t16->next = note_new( F, SHORT, NULL);
	note_t *t15->next = note_new( G, SHORT, t16);
	note_t *t14->next = note_new( A, SHORT, t15);
	note_t *t13->next = note_new( F, SHORT, t14);
	note_t *t12->next = note_new( E, SHORT, t13);
	note_t *t11->next = note_new( F, SHORT, t12);
	note_t *t10->next = note_new( A, SHORT, t11);

	sound[0] = t00;
	sound[1] = t10;
}

void load_test ( note_t ** sound ) {
	note_t *t06->next = note_new( A, FORTH, NULL);
	note_t *t05->next = note_new( B, FORTH, t06);
	note_t *t04->next = note_new( G, FORTH, t05);
	note_t *t03->next = note_new( F, FORTH, t04);
	note_t *t02->next = note_new( E, FORTH, t03);
	note_t *t01->next = note_new( D, FORTH, t02);
	note_t *t00->next = note_new( C, FORTH, t01);

	note_t *t06->next = note_new( C, FORTH, NULL);
	note_t *t05->next = note_new( D, FORTH, t06);
	note_t *t04->next = note_new( E, FORTH, t05);
	note_t *t03->next = note_new( F, FORTH, t04);
	note_t *t02->next = note_new( G, FORTH, t03);
	note_t *t01->next = note_new( A, FORTH, t02);
	note_t *t00->next = note_new( B, FORTH, t01);

	sound[0] = t00;
	sound[1] = t10;
}