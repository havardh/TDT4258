#ifndef SOUNDS_H
#define SOUNDS_H

#include "note.h"
#include "interrupt.h"
#include "samples.h"
#include "tone.h"
#include "playback.h"

void init_sounds( void );

void dur_scale( void );
void cromatic_scale( void );
void full_scale ( void );

void gunshot( void );
void gunshot1( void );
void explosion( void );

void smb_starman_theme ( void );
void smb_underworld_theme ( void );
void smb_power_up(void);
void smb_1up(void);
void smb_death(void);

void ex1( void );
void toccata ( void );

#endif // SOUNDS_H
