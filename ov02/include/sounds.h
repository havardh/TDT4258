#ifndef SOUNDS_H
#define SOUNDS_H

#include "note.h"
#include "interrupt.h"
#include "samples.h"

void dur_scale( void );
void cromatic_scale( void );

void gunshot1( void );
void gunshot2( void );
void gunshot3( void );
void gunshot4( void );
void gunshot5( void );


void lisa_sound ( void );
void random_explosion ( void );
void sound_scale ( void );
void portal_song ( void );

void silent( void );

#endif // SOUNDS_H
