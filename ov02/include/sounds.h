#ifndef SOUNDS_H
#define SOUNDS_H

#include "note.h"
#include "interrupt.h"
#include "samples.h"
#include "tone.h"
#include "playback.h"

void dur_scale( void );
void cromatic_scale( void );
void full_scale ( void );

void gunshot1( void );
void explosion( void );
void gunshot( void );

void smb_power_up(void);
void smb_1up(void);
void smb_death(void);

void ex1( void );
void lisa_sound ( void );
void random_explosion ( void );
void sound_scale ( void );
void portal_song ( void );

void toccata ( void );

void silent( void );

#endif // SOUNDS_H
