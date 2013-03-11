#include "sounds.h"
#include "tone.h"

void sound1( void ) {

  struct note_t* note8 = note_new(C1, FORTH, NULL);
  struct note_t* note7 = note_new(B, FORTH, note8);
  struct note_t* note6 = note_new(A, FORTH, note7);
  struct note_t* note5 = note_new(G, FORTH, note6);
  struct note_t* note4 = note_new(F, FORTH, note5);
  struct note_t* note3 = note_new(E, FORTH, note4);
  struct note_t* note2 = note_new(D, FORTH, note3);
  struct note_t* note1 = note_new(C, FORTH, note2);
  
  set_track(0, note1);
}

void lisa_sound ( void ) {
  note_t *s21 = note_new( C, WHOLE, NULL);
  
  note_t *s20 = note_new( D, FORTH, s21);
  note_t *s19 = note_new( D, FORTH, s20);
  note_t *s18 = note_new( D, FORTH, s19);
  note_t *s17 = note_new( D, FORTH, s18);
  
  note_t *s16 = note_new( E, HALF, s17);
  note_t *s15 = note_new( E, HALF, s16);
  
  note_t *s14 = note_new( F, FORTH, s15);
  note_t *s13 = note_new( F, FORTH, s14);
  note_t *s12 = note_new( F, FORTH, s13);
  note_t *s11 = note_new( F, FORTH, s12);
  
  note_t *s10 = note_new( G, WHOLE, s11);
  
  note_t *s09 = note_new( A, FORTH, s10);
  note_t *s08 = note_new( A, FORTH, s09);
  note_t *s07 = note_new( A, FORTH, s08);
  note_t *s06 = note_new( A, FORTH, s07);
  
  note_t *s05 = note_new( G, HALF, s06);
  note_t *s04 = note_new( G, HALF, s05);
  
  note_t *s03 = note_new( F, FORTH, s04);
  note_t *s02 = note_new( E, FORTH, s03);
  note_t *s01 = note_new( D, FORTH, s02);
  note_t *s00 = note_new( C, FORTH, s01);
  
  set_track( 0, s00 );
}

void random_explosion ( void ) {
  note_t *t06 = note_new( C, SHORT, NULL);
  note_t *t05 = note_new( D, SHORT, t06);
  note_t *t04 = note_new( C, SHORT, t05);
  note_t *t03 = note_new( F, SHORT, t04);
  note_t *t02 = note_new( C, SHORT, t03);
  note_t *t01 = note_new( G, SHORT, t02);
  note_t *t00 = note_new( A, SHORT, t01);

  note_t *t16 = note_new( F, SHORT, NULL);
  note_t *t15 = note_new( G, SHORT, t16);
  note_t *t14 = note_new( A, SHORT, t15);
  note_t *t13 = note_new( F, SHORT, t14);
  note_t *t12 = note_new( E, SHORT, t13);
  note_t *t11 = note_new( F, SHORT, t12);
  note_t *t10 = note_new( A, SHORT, t11);

  set_track( 0, t00 );
  set_track( 1, t10 );
}

void sound_scale ( void ) {
  note_t *t06 = note_new( A, FORTH, NULL);
  note_t *t05 = note_new( B, FORTH, t06);
  note_t *t04 = note_new( G, FORTH, t05);
  note_t *t03 = note_new( F, FORTH, t04);
  note_t *t02 = note_new( E, FORTH, t03);
  note_t *t01 = note_new( D, FORTH, t02);
  note_t *t00 = note_new( C, FORTH, t01);

  note_t *t16 = note_new( C, FORTH, NULL);
  note_t *t15 = note_new( D, FORTH, t16);
  note_t *t14 = note_new( E, FORTH, t15);
  note_t *t13 = note_new( F, FORTH, t14);
  note_t *t12 = note_new( G, FORTH, t13);
  note_t *t11 = note_new( A, FORTH, t12);
  note_t *t10 = note_new( B, FORTH, t11);

  set_track( 0, t00 );
  set_track( 1, t10 );
}

void silent( void ) {

  set_track(0, NULL);

}
