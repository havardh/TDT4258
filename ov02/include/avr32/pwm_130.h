/*****************************************************************************
 *
 * Copyright (C) 2008 Atmel Corporation
 * 
 * Model        : UC3A0512
 * Revision     : $Revision: 58751 $
 * Checkin Date : $Date: 2008-09-15 15:20:42 +0200 (Mon, 15 Sep 2008) $ 
 *
 ****************************************************************************/
#ifndef AVR32_PWM_130_H_INCLUDED
#define AVR32_PWM_130_H_INCLUDED

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_PWM_<register>
 - Bitfield mask:   AVR32_PWM_<register>_<bitfield>
 - Bitfield offset: AVR32_PWM_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_PWM_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_PWM_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_PWM_<bitfield>
 - Bitfield offset: AVR32_PWM_<bitfield>_OFFSET
 - Bitfield size:   AVR32_PWM_<bitfield>_SIZE
 - Bitfield values: AVR32_PWM_<bitfield>_<value name>
 - Bitfield values: AVR32_PWM_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_PWM_CALG                                              8
#define AVR32_PWM_CALG_MASK                                0x00000100
#define AVR32_PWM_CALG_OFFSET                                       8
#define AVR32_PWM_CALG_SIZE                                         1
#define AVR32_PWM_CCNT0                                    0x0000020c
#define AVR32_PWM_CCNT0_CNT                                         0
#define AVR32_PWM_CCNT0_CNT_MASK                           0xffffffff
#define AVR32_PWM_CCNT0_CNT_OFFSET                                  0
#define AVR32_PWM_CCNT0_CNT_SIZE                                   32
#define AVR32_PWM_CCNT0_MASK                               0xffffffff
#define AVR32_PWM_CCNT0_RESETVALUE                         0x00000000
#define AVR32_PWM_CCNT1                                    0x0000022c
#define AVR32_PWM_CCNT1_CNT                                         0
#define AVR32_PWM_CCNT1_CNT_MASK                           0xffffffff
#define AVR32_PWM_CCNT1_CNT_OFFSET                                  0
#define AVR32_PWM_CCNT1_CNT_SIZE                                   32
#define AVR32_PWM_CCNT1_MASK                               0xffffffff
#define AVR32_PWM_CCNT1_RESETVALUE                         0x00000000
#define AVR32_PWM_CCNT2                                    0x0000024c
#define AVR32_PWM_CCNT2_CNT                                         0
#define AVR32_PWM_CCNT2_CNT_MASK                           0xffffffff
#define AVR32_PWM_CCNT2_CNT_OFFSET                                  0
#define AVR32_PWM_CCNT2_CNT_SIZE                                   32
#define AVR32_PWM_CCNT2_MASK                               0xffffffff
#define AVR32_PWM_CCNT2_RESETVALUE                         0x00000000
#define AVR32_PWM_CCNT3                                    0x0000026c
#define AVR32_PWM_CCNT3_CNT                                         0
#define AVR32_PWM_CCNT3_CNT_MASK                           0xffffffff
#define AVR32_PWM_CCNT3_CNT_OFFSET                                  0
#define AVR32_PWM_CCNT3_CNT_SIZE                                   32
#define AVR32_PWM_CCNT3_MASK                               0xffffffff
#define AVR32_PWM_CCNT3_RESETVALUE                         0x00000000
#define AVR32_PWM_CCNT4                                    0x0000028c
#define AVR32_PWM_CCNT4_CNT                                         0
#define AVR32_PWM_CCNT4_CNT_MASK                           0xffffffff
#define AVR32_PWM_CCNT4_CNT_OFFSET                                  0
#define AVR32_PWM_CCNT4_CNT_SIZE                                   32
#define AVR32_PWM_CCNT4_MASK                               0xffffffff
#define AVR32_PWM_CCNT4_RESETVALUE                         0x00000000
#define AVR32_PWM_CCNT5                                    0x000002ac
#define AVR32_PWM_CCNT5_CNT                                         0
#define AVR32_PWM_CCNT5_CNT_MASK                           0xffffffff
#define AVR32_PWM_CCNT5_CNT_OFFSET                                  0
#define AVR32_PWM_CCNT5_CNT_SIZE                                   32
#define AVR32_PWM_CCNT5_MASK                               0xffffffff
#define AVR32_PWM_CCNT5_RESETVALUE                         0x00000000
#define AVR32_PWM_CCNT6                                    0x000002cc
#define AVR32_PWM_CCNT6_CNT                                         0
#define AVR32_PWM_CCNT6_CNT_MASK                           0xffffffff
#define AVR32_PWM_CCNT6_CNT_OFFSET                                  0
#define AVR32_PWM_CCNT6_CNT_SIZE                                   32
#define AVR32_PWM_CCNT6_MASK                               0xffffffff
#define AVR32_PWM_CCNT6_RESETVALUE                         0x00000000
#define AVR32_PWM_CDTY                                              0
#define AVR32_PWM_CDTY0                                    0x00000204
#define AVR32_PWM_CDTY0_CDTY                                        0
#define AVR32_PWM_CDTY0_CDTY_MASK                          0xffffffff
#define AVR32_PWM_CDTY0_CDTY_OFFSET                                 0
#define AVR32_PWM_CDTY0_CDTY_SIZE                                  32
#define AVR32_PWM_CDTY0_MASK                               0xffffffff
#define AVR32_PWM_CDTY0_RESETVALUE                         0x00000000
#define AVR32_PWM_CDTY1                                    0x00000224
#define AVR32_PWM_CDTY1_CDTY                                        0
#define AVR32_PWM_CDTY1_CDTY_MASK                          0xffffffff
#define AVR32_PWM_CDTY1_CDTY_OFFSET                                 0
#define AVR32_PWM_CDTY1_CDTY_SIZE                                  32
#define AVR32_PWM_CDTY1_MASK                               0xffffffff
#define AVR32_PWM_CDTY1_RESETVALUE                         0x00000000
#define AVR32_PWM_CDTY2                                    0x00000244
#define AVR32_PWM_CDTY2_CDTY                                        0
#define AVR32_PWM_CDTY2_CDTY_MASK                          0xffffffff
#define AVR32_PWM_CDTY2_CDTY_OFFSET                                 0
#define AVR32_PWM_CDTY2_CDTY_SIZE                                  32
#define AVR32_PWM_CDTY2_MASK                               0xffffffff
#define AVR32_PWM_CDTY2_RESETVALUE                         0x00000000
#define AVR32_PWM_CDTY3                                    0x00000264
#define AVR32_PWM_CDTY3_CDTY                                        0
#define AVR32_PWM_CDTY3_CDTY_MASK                          0xffffffff
#define AVR32_PWM_CDTY3_CDTY_OFFSET                                 0
#define AVR32_PWM_CDTY3_CDTY_SIZE                                  32
#define AVR32_PWM_CDTY3_MASK                               0xffffffff
#define AVR32_PWM_CDTY3_RESETVALUE                         0x00000000
#define AVR32_PWM_CDTY4                                    0x00000284
#define AVR32_PWM_CDTY4_CDTY                                        0
#define AVR32_PWM_CDTY4_CDTY_MASK                          0xffffffff
#define AVR32_PWM_CDTY4_CDTY_OFFSET                                 0
#define AVR32_PWM_CDTY4_CDTY_SIZE                                  32
#define AVR32_PWM_CDTY4_MASK                               0xffffffff
#define AVR32_PWM_CDTY4_RESETVALUE                         0x00000000
#define AVR32_PWM_CDTY5                                    0x000002a4
#define AVR32_PWM_CDTY5_CDTY                                        0
#define AVR32_PWM_CDTY5_CDTY_MASK                          0xffffffff
#define AVR32_PWM_CDTY5_CDTY_OFFSET                                 0
#define AVR32_PWM_CDTY5_CDTY_SIZE                                  32
#define AVR32_PWM_CDTY5_MASK                               0xffffffff
#define AVR32_PWM_CDTY5_RESETVALUE                         0x00000000
#define AVR32_PWM_CDTY6                                    0x000002c4
#define AVR32_PWM_CDTY6_CDTY                                        0
#define AVR32_PWM_CDTY6_CDTY_MASK                          0xffffffff
#define AVR32_PWM_CDTY6_CDTY_OFFSET                                 0
#define AVR32_PWM_CDTY6_CDTY_SIZE                                  32
#define AVR32_PWM_CDTY6_MASK                               0xffffffff
#define AVR32_PWM_CDTY6_RESETVALUE                         0x00000000
#define AVR32_PWM_CDTY_MASK                                0xffffffff
#define AVR32_PWM_CDTY_OFFSET                                       0
#define AVR32_PWM_CDTY_SIZE                                        32
#define AVR32_PWM_CHID0                                             0
#define AVR32_PWM_CHID0_MASK                               0x00000001
#define AVR32_PWM_CHID0_OFFSET                                      0
#define AVR32_PWM_CHID0_SIZE                                        1
#define AVR32_PWM_CHID1                                             1
#define AVR32_PWM_CHID1_MASK                               0x00000002
#define AVR32_PWM_CHID1_OFFSET                                      1
#define AVR32_PWM_CHID1_SIZE                                        1
#define AVR32_PWM_CHID2                                             2
#define AVR32_PWM_CHID2_MASK                               0x00000004
#define AVR32_PWM_CHID2_OFFSET                                      2
#define AVR32_PWM_CHID2_SIZE                                        1
#define AVR32_PWM_CHID3                                             3
#define AVR32_PWM_CHID3_MASK                               0x00000008
#define AVR32_PWM_CHID3_OFFSET                                      3
#define AVR32_PWM_CHID3_SIZE                                        1
#define AVR32_PWM_CHID4                                             4
#define AVR32_PWM_CHID4_MASK                               0x00000010
#define AVR32_PWM_CHID4_OFFSET                                      4
#define AVR32_PWM_CHID4_SIZE                                        1
#define AVR32_PWM_CHID5                                             5
#define AVR32_PWM_CHID5_MASK                               0x00000020
#define AVR32_PWM_CHID5_OFFSET                                      5
#define AVR32_PWM_CHID5_SIZE                                        1
#define AVR32_PWM_CHID6                                             6
#define AVR32_PWM_CHID6_MASK                               0x00000040
#define AVR32_PWM_CHID6_OFFSET                                      6
#define AVR32_PWM_CHID6_SIZE                                        1
#define AVR32_PWM_CLKA                                     0x0000000b
#define AVR32_PWM_CLKB                                     0x0000000c
#define AVR32_PWM_CLK_OFF                                  0x00000000
#define AVR32_PWM_CLK_SEL_PREAB                            0x00000001
#define AVR32_PWM_CMR0                                     0x00000200
#define AVR32_PWM_CMR0_CALG                                         8
#define AVR32_PWM_CMR0_CALG_MASK                           0x00000100
#define AVR32_PWM_CMR0_CALG_OFFSET                                  8
#define AVR32_PWM_CMR0_CALG_SIZE                                    1
#define AVR32_PWM_CMR0_CPD                                         10
#define AVR32_PWM_CMR0_CPD_MASK                            0x00000400
#define AVR32_PWM_CMR0_CPD_OFFSET                                  10
#define AVR32_PWM_CMR0_CPD_SIZE                                     1
#define AVR32_PWM_CMR0_CPOL                                         9
#define AVR32_PWM_CMR0_CPOL_MASK                           0x00000200
#define AVR32_PWM_CMR0_CPOL_OFFSET                                  9
#define AVR32_PWM_CMR0_CPOL_SIZE                                    1
#define AVR32_PWM_CMR0_CPRE                                         0
#define AVR32_PWM_CMR0_CPRE_CLKA                           0x0000000b
#define AVR32_PWM_CMR0_CPRE_CLKB                           0x0000000c
#define AVR32_PWM_CMR0_CPRE_MASK                           0x0000000f
#define AVR32_PWM_CMR0_CPRE_MCK                            0x00000000
#define AVR32_PWM_CMR0_CPRE_MCK_DIV_1024                   0x0000000a
#define AVR32_PWM_CMR0_CPRE_MCK_DIV_128                    0x00000007
#define AVR32_PWM_CMR0_CPRE_MCK_DIV_16                     0x00000004
#define AVR32_PWM_CMR0_CPRE_MCK_DIV_2                      0x00000001
#define AVR32_PWM_CMR0_CPRE_MCK_DIV_256                    0x00000008
#define AVR32_PWM_CMR0_CPRE_MCK_DIV_32                     0x00000005
#define AVR32_PWM_CMR0_CPRE_MCK_DIV_4                      0x00000002
#define AVR32_PWM_CMR0_CPRE_MCK_DIV_512                    0x00000009
#define AVR32_PWM_CMR0_CPRE_MCK_DIV_64                     0x00000006
#define AVR32_PWM_CMR0_CPRE_MCK_DIV_8                      0x00000003
#define AVR32_PWM_CMR0_CPRE_OFFSET                                  0
#define AVR32_PWM_CMR0_CPRE_SIZE                                    4
#define AVR32_PWM_CMR0_MASK                                0x0000070f
#define AVR32_PWM_CMR0_RESETVALUE                          0x00000000
#define AVR32_PWM_CMR1                                     0x00000220
#define AVR32_PWM_CMR1_CALG                                         8
#define AVR32_PWM_CMR1_CALG_MASK                           0x00000100
#define AVR32_PWM_CMR1_CALG_OFFSET                                  8
#define AVR32_PWM_CMR1_CALG_SIZE                                    1
#define AVR32_PWM_CMR1_CPD                                         10
#define AVR32_PWM_CMR1_CPD_MASK                            0x00000400
#define AVR32_PWM_CMR1_CPD_OFFSET                                  10
#define AVR32_PWM_CMR1_CPD_SIZE                                     1
#define AVR32_PWM_CMR1_CPOL                                         9
#define AVR32_PWM_CMR1_CPOL_MASK                           0x00000200
#define AVR32_PWM_CMR1_CPOL_OFFSET                                  9
#define AVR32_PWM_CMR1_CPOL_SIZE                                    1
#define AVR32_PWM_CMR1_CPRE                                         0
#define AVR32_PWM_CMR1_CPRE_CLKA                           0x0000000b
#define AVR32_PWM_CMR1_CPRE_CLKB                           0x0000000c
#define AVR32_PWM_CMR1_CPRE_MASK                           0x0000000f
#define AVR32_PWM_CMR1_CPRE_MCK                            0x00000000
#define AVR32_PWM_CMR1_CPRE_MCK_DIV_1024                   0x0000000a
#define AVR32_PWM_CMR1_CPRE_MCK_DIV_128                    0x00000007
#define AVR32_PWM_CMR1_CPRE_MCK_DIV_16                     0x00000004
#define AVR32_PWM_CMR1_CPRE_MCK_DIV_2                      0x00000001
#define AVR32_PWM_CMR1_CPRE_MCK_DIV_256                    0x00000008
#define AVR32_PWM_CMR1_CPRE_MCK_DIV_32                     0x00000005
#define AVR32_PWM_CMR1_CPRE_MCK_DIV_4                      0x00000002
#define AVR32_PWM_CMR1_CPRE_MCK_DIV_512                    0x00000009
#define AVR32_PWM_CMR1_CPRE_MCK_DIV_64                     0x00000006
#define AVR32_PWM_CMR1_CPRE_MCK_DIV_8                      0x00000003
#define AVR32_PWM_CMR1_CPRE_OFFSET                                  0
#define AVR32_PWM_CMR1_CPRE_SIZE                                    4
#define AVR32_PWM_CMR1_MASK                                0x0000070f
#define AVR32_PWM_CMR1_RESETVALUE                          0x00000000
#define AVR32_PWM_CMR2                                     0x00000240
#define AVR32_PWM_CMR2_CALG                                         8
#define AVR32_PWM_CMR2_CALG_MASK                           0x00000100
#define AVR32_PWM_CMR2_CALG_OFFSET                                  8
#define AVR32_PWM_CMR2_CALG_SIZE                                    1
#define AVR32_PWM_CMR2_CPD                                         10
#define AVR32_PWM_CMR2_CPD_MASK                            0x00000400
#define AVR32_PWM_CMR2_CPD_OFFSET                                  10
#define AVR32_PWM_CMR2_CPD_SIZE                                     1
#define AVR32_PWM_CMR2_CPOL                                         9
#define AVR32_PWM_CMR2_CPOL_MASK                           0x00000200
#define AVR32_PWM_CMR2_CPOL_OFFSET                                  9
#define AVR32_PWM_CMR2_CPOL_SIZE                                    1
#define AVR32_PWM_CMR2_CPRE                                         0
#define AVR32_PWM_CMR2_CPRE_CLKA                           0x0000000b
#define AVR32_PWM_CMR2_CPRE_CLKB                           0x0000000c
#define AVR32_PWM_CMR2_CPRE_MASK                           0x0000000f
#define AVR32_PWM_CMR2_CPRE_MCK                            0x00000000
#define AVR32_PWM_CMR2_CPRE_MCK_DIV_1024                   0x0000000a
#define AVR32_PWM_CMR2_CPRE_MCK_DIV_128                    0x00000007
#define AVR32_PWM_CMR2_CPRE_MCK_DIV_16                     0x00000004
#define AVR32_PWM_CMR2_CPRE_MCK_DIV_2                      0x00000001
#define AVR32_PWM_CMR2_CPRE_MCK_DIV_256                    0x00000008
#define AVR32_PWM_CMR2_CPRE_MCK_DIV_32                     0x00000005
#define AVR32_PWM_CMR2_CPRE_MCK_DIV_4                      0x00000002
#define AVR32_PWM_CMR2_CPRE_MCK_DIV_512                    0x00000009
#define AVR32_PWM_CMR2_CPRE_MCK_DIV_64                     0x00000006
#define AVR32_PWM_CMR2_CPRE_MCK_DIV_8                      0x00000003
#define AVR32_PWM_CMR2_CPRE_OFFSET                                  0
#define AVR32_PWM_CMR2_CPRE_SIZE                                    4
#define AVR32_PWM_CMR2_MASK                                0x0000070f
#define AVR32_PWM_CMR2_RESETVALUE                          0x00000000
#define AVR32_PWM_CMR3                                     0x00000260
#define AVR32_PWM_CMR3_CALG                                         8
#define AVR32_PWM_CMR3_CALG_MASK                           0x00000100
#define AVR32_PWM_CMR3_CALG_OFFSET                                  8
#define AVR32_PWM_CMR3_CALG_SIZE                                    1
#define AVR32_PWM_CMR3_CPD                                         10
#define AVR32_PWM_CMR3_CPD_MASK                            0x00000400
#define AVR32_PWM_CMR3_CPD_OFFSET                                  10
#define AVR32_PWM_CMR3_CPD_SIZE                                     1
#define AVR32_PWM_CMR3_CPOL                                         9
#define AVR32_PWM_CMR3_CPOL_MASK                           0x00000200
#define AVR32_PWM_CMR3_CPOL_OFFSET                                  9
#define AVR32_PWM_CMR3_CPOL_SIZE                                    1
#define AVR32_PWM_CMR3_CPRE                                         0
#define AVR32_PWM_CMR3_CPRE_CLKA                           0x0000000b
#define AVR32_PWM_CMR3_CPRE_CLKB                           0x0000000c
#define AVR32_PWM_CMR3_CPRE_MASK                           0x0000000f
#define AVR32_PWM_CMR3_CPRE_MCK                            0x00000000
#define AVR32_PWM_CMR3_CPRE_MCK_DIV_1024                   0x0000000a
#define AVR32_PWM_CMR3_CPRE_MCK_DIV_128                    0x00000007
#define AVR32_PWM_CMR3_CPRE_MCK_DIV_16                     0x00000004
#define AVR32_PWM_CMR3_CPRE_MCK_DIV_2                      0x00000001
#define AVR32_PWM_CMR3_CPRE_MCK_DIV_256                    0x00000008
#define AVR32_PWM_CMR3_CPRE_MCK_DIV_32                     0x00000005
#define AVR32_PWM_CMR3_CPRE_MCK_DIV_4                      0x00000002
#define AVR32_PWM_CMR3_CPRE_MCK_DIV_512                    0x00000009
#define AVR32_PWM_CMR3_CPRE_MCK_DIV_64                     0x00000006
#define AVR32_PWM_CMR3_CPRE_MCK_DIV_8                      0x00000003
#define AVR32_PWM_CMR3_CPRE_OFFSET                                  0
#define AVR32_PWM_CMR3_CPRE_SIZE                                    4
#define AVR32_PWM_CMR3_MASK                                0x0000070f
#define AVR32_PWM_CMR3_RESETVALUE                          0x00000000
#define AVR32_PWM_CMR4                                     0x00000280
#define AVR32_PWM_CMR4_CALG                                         8
#define AVR32_PWM_CMR4_CALG_MASK                           0x00000100
#define AVR32_PWM_CMR4_CALG_OFFSET                                  8
#define AVR32_PWM_CMR4_CALG_SIZE                                    1
#define AVR32_PWM_CMR4_CPD                                         10
#define AVR32_PWM_CMR4_CPD_MASK                            0x00000400
#define AVR32_PWM_CMR4_CPD_OFFSET                                  10
#define AVR32_PWM_CMR4_CPD_SIZE                                     1
#define AVR32_PWM_CMR4_CPOL                                         9
#define AVR32_PWM_CMR4_CPOL_MASK                           0x00000200
#define AVR32_PWM_CMR4_CPOL_OFFSET                                  9
#define AVR32_PWM_CMR4_CPOL_SIZE                                    1
#define AVR32_PWM_CMR4_CPRE                                         0
#define AVR32_PWM_CMR4_CPRE_CLKA                           0x0000000b
#define AVR32_PWM_CMR4_CPRE_CLKB                           0x0000000c
#define AVR32_PWM_CMR4_CPRE_MASK                           0x0000000f
#define AVR32_PWM_CMR4_CPRE_MCK                            0x00000000
#define AVR32_PWM_CMR4_CPRE_MCK_DIV_1024                   0x0000000a
#define AVR32_PWM_CMR4_CPRE_MCK_DIV_128                    0x00000007
#define AVR32_PWM_CMR4_CPRE_MCK_DIV_16                     0x00000004
#define AVR32_PWM_CMR4_CPRE_MCK_DIV_2                      0x00000001
#define AVR32_PWM_CMR4_CPRE_MCK_DIV_256                    0x00000008
#define AVR32_PWM_CMR4_CPRE_MCK_DIV_32                     0x00000005
#define AVR32_PWM_CMR4_CPRE_MCK_DIV_4                      0x00000002
#define AVR32_PWM_CMR4_CPRE_MCK_DIV_512                    0x00000009
#define AVR32_PWM_CMR4_CPRE_MCK_DIV_64                     0x00000006
#define AVR32_PWM_CMR4_CPRE_MCK_DIV_8                      0x00000003
#define AVR32_PWM_CMR4_CPRE_OFFSET                                  0
#define AVR32_PWM_CMR4_CPRE_SIZE                                    4
#define AVR32_PWM_CMR4_MASK                                0x0000070f
#define AVR32_PWM_CMR4_RESETVALUE                          0x00000000
#define AVR32_PWM_CMR5                                     0x000002a0
#define AVR32_PWM_CMR5_CALG                                         8
#define AVR32_PWM_CMR5_CALG_MASK                           0x00000100
#define AVR32_PWM_CMR5_CALG_OFFSET                                  8
#define AVR32_PWM_CMR5_CALG_SIZE                                    1
#define AVR32_PWM_CMR5_CPD                                         10
#define AVR32_PWM_CMR5_CPD_MASK                            0x00000400
#define AVR32_PWM_CMR5_CPD_OFFSET                                  10
#define AVR32_PWM_CMR5_CPD_SIZE                                     1
#define AVR32_PWM_CMR5_CPOL                                         9
#define AVR32_PWM_CMR5_CPOL_MASK                           0x00000200
#define AVR32_PWM_CMR5_CPOL_OFFSET                                  9
#define AVR32_PWM_CMR5_CPOL_SIZE                                    1
#define AVR32_PWM_CMR5_CPRE                                         0
#define AVR32_PWM_CMR5_CPRE_CLKA                           0x0000000b
#define AVR32_PWM_CMR5_CPRE_CLKB                           0x0000000c
#define AVR32_PWM_CMR5_CPRE_MASK                           0x0000000f
#define AVR32_PWM_CMR5_CPRE_MCK                            0x00000000
#define AVR32_PWM_CMR5_CPRE_MCK_DIV_1024                   0x0000000a
#define AVR32_PWM_CMR5_CPRE_MCK_DIV_128                    0x00000007
#define AVR32_PWM_CMR5_CPRE_MCK_DIV_16                     0x00000004
#define AVR32_PWM_CMR5_CPRE_MCK_DIV_2                      0x00000001
#define AVR32_PWM_CMR5_CPRE_MCK_DIV_256                    0x00000008
#define AVR32_PWM_CMR5_CPRE_MCK_DIV_32                     0x00000005
#define AVR32_PWM_CMR5_CPRE_MCK_DIV_4                      0x00000002
#define AVR32_PWM_CMR5_CPRE_MCK_DIV_512                    0x00000009
#define AVR32_PWM_CMR5_CPRE_MCK_DIV_64                     0x00000006
#define AVR32_PWM_CMR5_CPRE_MCK_DIV_8                      0x00000003
#define AVR32_PWM_CMR5_CPRE_OFFSET                                  0
#define AVR32_PWM_CMR5_CPRE_SIZE                                    4
#define AVR32_PWM_CMR5_MASK                                0x0000070f
#define AVR32_PWM_CMR5_RESETVALUE                          0x00000000
#define AVR32_PWM_CMR6                                     0x000002c0
#define AVR32_PWM_CMR6_CALG                                         8
#define AVR32_PWM_CMR6_CALG_MASK                           0x00000100
#define AVR32_PWM_CMR6_CALG_OFFSET                                  8
#define AVR32_PWM_CMR6_CALG_SIZE                                    1
#define AVR32_PWM_CMR6_CPD                                         10
#define AVR32_PWM_CMR6_CPD_MASK                            0x00000400
#define AVR32_PWM_CMR6_CPD_OFFSET                                  10
#define AVR32_PWM_CMR6_CPD_SIZE                                     1
#define AVR32_PWM_CMR6_CPOL                                         9
#define AVR32_PWM_CMR6_CPOL_MASK                           0x00000200
#define AVR32_PWM_CMR6_CPOL_OFFSET                                  9
#define AVR32_PWM_CMR6_CPOL_SIZE                                    1
#define AVR32_PWM_CMR6_CPRE                                         0
#define AVR32_PWM_CMR6_CPRE_CLKA                           0x0000000b
#define AVR32_PWM_CMR6_CPRE_CLKB                           0x0000000c
#define AVR32_PWM_CMR6_CPRE_MASK                           0x0000000f
#define AVR32_PWM_CMR6_CPRE_MCK                            0x00000000
#define AVR32_PWM_CMR6_CPRE_MCK_DIV_1024                   0x0000000a
#define AVR32_PWM_CMR6_CPRE_MCK_DIV_128                    0x00000007
#define AVR32_PWM_CMR6_CPRE_MCK_DIV_16                     0x00000004
#define AVR32_PWM_CMR6_CPRE_MCK_DIV_2                      0x00000001
#define AVR32_PWM_CMR6_CPRE_MCK_DIV_256                    0x00000008
#define AVR32_PWM_CMR6_CPRE_MCK_DIV_32                     0x00000005
#define AVR32_PWM_CMR6_CPRE_MCK_DIV_4                      0x00000002
#define AVR32_PWM_CMR6_CPRE_MCK_DIV_512                    0x00000009
#define AVR32_PWM_CMR6_CPRE_MCK_DIV_64                     0x00000006
#define AVR32_PWM_CMR6_CPRE_MCK_DIV_8                      0x00000003
#define AVR32_PWM_CMR6_CPRE_OFFSET                                  0
#define AVR32_PWM_CMR6_CPRE_SIZE                                    4
#define AVR32_PWM_CMR6_MASK                                0x0000070f
#define AVR32_PWM_CMR6_RESETVALUE                          0x00000000
#define AVR32_PWM_CNT                                               0
#define AVR32_PWM_CNT_MASK                                 0xffffffff
#define AVR32_PWM_CNT_OFFSET                                        0
#define AVR32_PWM_CNT_SIZE                                         32
#define AVR32_PWM_CPD                                              10
#define AVR32_PWM_CPD_MASK                                 0x00000400
#define AVR32_PWM_CPD_OFFSET                                       10
#define AVR32_PWM_CPD_SIZE                                          1
#define AVR32_PWM_CPOL                                              9
#define AVR32_PWM_CPOL_MASK                                0x00000200
#define AVR32_PWM_CPOL_OFFSET                                       9
#define AVR32_PWM_CPOL_SIZE                                         1
#define AVR32_PWM_CPRD                                              0
#define AVR32_PWM_CPRD0                                    0x00000208
#define AVR32_PWM_CPRD0_CPRD                                        0
#define AVR32_PWM_CPRD0_CPRD_MASK                          0xffffffff
#define AVR32_PWM_CPRD0_CPRD_OFFSET                                 0
#define AVR32_PWM_CPRD0_CPRD_SIZE                                  32
#define AVR32_PWM_CPRD0_MASK                               0xffffffff
#define AVR32_PWM_CPRD0_RESETVALUE                         0x00000000
#define AVR32_PWM_CPRD1                                    0x00000228
#define AVR32_PWM_CPRD1_CPRD                                        0
#define AVR32_PWM_CPRD1_CPRD_MASK                          0xffffffff
#define AVR32_PWM_CPRD1_CPRD_OFFSET                                 0
#define AVR32_PWM_CPRD1_CPRD_SIZE                                  32
#define AVR32_PWM_CPRD1_MASK                               0xffffffff
#define AVR32_PWM_CPRD1_RESETVALUE                         0x00000000
#define AVR32_PWM_CPRD2                                    0x00000248
#define AVR32_PWM_CPRD2_CPRD                                        0
#define AVR32_PWM_CPRD2_CPRD_MASK                          0xffffffff
#define AVR32_PWM_CPRD2_CPRD_OFFSET                                 0
#define AVR32_PWM_CPRD2_CPRD_SIZE                                  32
#define AVR32_PWM_CPRD2_MASK                               0xffffffff
#define AVR32_PWM_CPRD2_RESETVALUE                         0x00000000
#define AVR32_PWM_CPRD3                                    0x00000268
#define AVR32_PWM_CPRD3_CPRD                                        0
#define AVR32_PWM_CPRD3_CPRD_MASK                          0xffffffff
#define AVR32_PWM_CPRD3_CPRD_OFFSET                                 0
#define AVR32_PWM_CPRD3_CPRD_SIZE                                  32
#define AVR32_PWM_CPRD3_MASK                               0xffffffff
#define AVR32_PWM_CPRD3_RESETVALUE                         0x00000000
#define AVR32_PWM_CPRD4                                    0x00000288
#define AVR32_PWM_CPRD4_CPRD                                        0
#define AVR32_PWM_CPRD4_CPRD_MASK                          0xffffffff
#define AVR32_PWM_CPRD4_CPRD_OFFSET                                 0
#define AVR32_PWM_CPRD4_CPRD_SIZE                                  32
#define AVR32_PWM_CPRD4_MASK                               0xffffffff
#define AVR32_PWM_CPRD4_RESETVALUE                         0x00000000
#define AVR32_PWM_CPRD5                                    0x000002a8
#define AVR32_PWM_CPRD5_CPRD                                        0
#define AVR32_PWM_CPRD5_CPRD_MASK                          0xffffffff
#define AVR32_PWM_CPRD5_CPRD_OFFSET                                 0
#define AVR32_PWM_CPRD5_CPRD_SIZE                                  32
#define AVR32_PWM_CPRD5_MASK                               0xffffffff
#define AVR32_PWM_CPRD5_RESETVALUE                         0x00000000
#define AVR32_PWM_CPRD6                                    0x000002c8
#define AVR32_PWM_CPRD6_CPRD                                        0
#define AVR32_PWM_CPRD6_CPRD_MASK                          0xffffffff
#define AVR32_PWM_CPRD6_CPRD_OFFSET                                 0
#define AVR32_PWM_CPRD6_CPRD_SIZE                                  32
#define AVR32_PWM_CPRD6_MASK                               0xffffffff
#define AVR32_PWM_CPRD6_RESETVALUE                         0x00000000
#define AVR32_PWM_CPRD_MASK                                0xffffffff
#define AVR32_PWM_CPRD_OFFSET                                       0
#define AVR32_PWM_CPRD_SIZE                                        32
#define AVR32_PWM_CPRE                                              0
#define AVR32_PWM_CPRE_CLKA                                0x0000000b
#define AVR32_PWM_CPRE_CLKB                                0x0000000c
#define AVR32_PWM_CPRE_MASK                                0x0000000f
#define AVR32_PWM_CPRE_MCK                                 0x00000000
#define AVR32_PWM_CPRE_MCK_DIV_1024                        0x0000000a
#define AVR32_PWM_CPRE_MCK_DIV_128                         0x00000007
#define AVR32_PWM_CPRE_MCK_DIV_16                          0x00000004
#define AVR32_PWM_CPRE_MCK_DIV_2                           0x00000001
#define AVR32_PWM_CPRE_MCK_DIV_256                         0x00000008
#define AVR32_PWM_CPRE_MCK_DIV_32                          0x00000005
#define AVR32_PWM_CPRE_MCK_DIV_4                           0x00000002
#define AVR32_PWM_CPRE_MCK_DIV_512                         0x00000009
#define AVR32_PWM_CPRE_MCK_DIV_64                          0x00000006
#define AVR32_PWM_CPRE_MCK_DIV_8                           0x00000003
#define AVR32_PWM_CPRE_OFFSET                                       0
#define AVR32_PWM_CPRE_SIZE                                         4
#define AVR32_PWM_CUPD                                              0
#define AVR32_PWM_CUPD0                                    0x00000210
#define AVR32_PWM_CUPD0_CUPD                                        0
#define AVR32_PWM_CUPD0_CUPD_MASK                          0xffffffff
#define AVR32_PWM_CUPD0_CUPD_OFFSET                                 0
#define AVR32_PWM_CUPD0_CUPD_SIZE                                  32
#define AVR32_PWM_CUPD0_MASK                               0xffffffff
#define AVR32_PWM_CUPD0_RESETVALUE                         0x00000000
#define AVR32_PWM_CUPD1                                    0x00000230
#define AVR32_PWM_CUPD1_CUPD                                        0
#define AVR32_PWM_CUPD1_CUPD_MASK                          0xffffffff
#define AVR32_PWM_CUPD1_CUPD_OFFSET                                 0
#define AVR32_PWM_CUPD1_CUPD_SIZE                                  32
#define AVR32_PWM_CUPD1_MASK                               0xffffffff
#define AVR32_PWM_CUPD1_RESETVALUE                         0x00000000
#define AVR32_PWM_CUPD2                                    0x00000250
#define AVR32_PWM_CUPD2_CUPD                                        0
#define AVR32_PWM_CUPD2_CUPD_MASK                          0xffffffff
#define AVR32_PWM_CUPD2_CUPD_OFFSET                                 0
#define AVR32_PWM_CUPD2_CUPD_SIZE                                  32
#define AVR32_PWM_CUPD2_MASK                               0xffffffff
#define AVR32_PWM_CUPD2_RESETVALUE                         0x00000000
#define AVR32_PWM_CUPD3                                    0x00000270
#define AVR32_PWM_CUPD3_CUPD                                        0
#define AVR32_PWM_CUPD3_CUPD_MASK                          0xffffffff
#define AVR32_PWM_CUPD3_CUPD_OFFSET                                 0
#define AVR32_PWM_CUPD3_CUPD_SIZE                                  32
#define AVR32_PWM_CUPD3_MASK                               0xffffffff
#define AVR32_PWM_CUPD3_RESETVALUE                         0x00000000
#define AVR32_PWM_CUPD4                                    0x00000290
#define AVR32_PWM_CUPD4_CUPD                                        0
#define AVR32_PWM_CUPD4_CUPD_MASK                          0xffffffff
#define AVR32_PWM_CUPD4_CUPD_OFFSET                                 0
#define AVR32_PWM_CUPD4_CUPD_SIZE                                  32
#define AVR32_PWM_CUPD4_MASK                               0xffffffff
#define AVR32_PWM_CUPD4_RESETVALUE                         0x00000000
#define AVR32_PWM_CUPD5                                    0x000002b0
#define AVR32_PWM_CUPD5_CUPD                                        0
#define AVR32_PWM_CUPD5_CUPD_MASK                          0xffffffff
#define AVR32_PWM_CUPD5_CUPD_OFFSET                                 0
#define AVR32_PWM_CUPD5_CUPD_SIZE                                  32
#define AVR32_PWM_CUPD5_MASK                               0xffffffff
#define AVR32_PWM_CUPD5_RESETVALUE                         0x00000000
#define AVR32_PWM_CUPD6                                    0x000002d0
#define AVR32_PWM_CUPD6_CUPD                                        0
#define AVR32_PWM_CUPD6_CUPD_MASK                          0xffffffff
#define AVR32_PWM_CUPD6_CUPD_OFFSET                                 0
#define AVR32_PWM_CUPD6_CUPD_SIZE                                  32
#define AVR32_PWM_CUPD6_MASK                               0xffffffff
#define AVR32_PWM_CUPD6_RESETVALUE                         0x00000000
#define AVR32_PWM_CUPD_MASK                                0xffffffff
#define AVR32_PWM_CUPD_OFFSET                                       0
#define AVR32_PWM_CUPD_SIZE                                        32
#define AVR32_PWM_DIS                                      0x00000008
#define AVR32_PWM_DIS_CHID0                                         0
#define AVR32_PWM_DIS_CHID0_MASK                           0x00000001
#define AVR32_PWM_DIS_CHID0_OFFSET                                  0
#define AVR32_PWM_DIS_CHID0_SIZE                                    1
#define AVR32_PWM_DIS_CHID1                                         1
#define AVR32_PWM_DIS_CHID1_MASK                           0x00000002
#define AVR32_PWM_DIS_CHID1_OFFSET                                  1
#define AVR32_PWM_DIS_CHID1_SIZE                                    1
#define AVR32_PWM_DIS_CHID2                                         2
#define AVR32_PWM_DIS_CHID2_MASK                           0x00000004
#define AVR32_PWM_DIS_CHID2_OFFSET                                  2
#define AVR32_PWM_DIS_CHID2_SIZE                                    1
#define AVR32_PWM_DIS_CHID3                                         3
#define AVR32_PWM_DIS_CHID3_MASK                           0x00000008
#define AVR32_PWM_DIS_CHID3_OFFSET                                  3
#define AVR32_PWM_DIS_CHID3_SIZE                                    1
#define AVR32_PWM_DIS_CHID4                                         4
#define AVR32_PWM_DIS_CHID4_MASK                           0x00000010
#define AVR32_PWM_DIS_CHID4_OFFSET                                  4
#define AVR32_PWM_DIS_CHID4_SIZE                                    1
#define AVR32_PWM_DIS_CHID5                                         5
#define AVR32_PWM_DIS_CHID5_MASK                           0x00000020
#define AVR32_PWM_DIS_CHID5_OFFSET                                  5
#define AVR32_PWM_DIS_CHID5_SIZE                                    1
#define AVR32_PWM_DIS_CHID6                                         6
#define AVR32_PWM_DIS_CHID6_MASK                           0x00000040
#define AVR32_PWM_DIS_CHID6_OFFSET                                  6
#define AVR32_PWM_DIS_CHID6_SIZE                                    1
#define AVR32_PWM_DIS_MASK                                 0x0000007f
#define AVR32_PWM_DIS_RESETVALUE                           0x00000000
#define AVR32_PWM_DIVA                                              0
#define AVR32_PWM_DIVA_CLK_OFF                             0x00000000
#define AVR32_PWM_DIVA_CLK_SEL_PREAB                       0x00000001
#define AVR32_PWM_DIVA_MASK                                0x000000ff
#define AVR32_PWM_DIVA_OFFSET                                       0
#define AVR32_PWM_DIVA_SIZE                                         8
#define AVR32_PWM_DIVB                                             16
#define AVR32_PWM_DIVB_CLK_OFF                             0x00000000
#define AVR32_PWM_DIVB_CLK_SEL_PREAB                       0x00000001
#define AVR32_PWM_DIVB_MASK                                0x00ff0000
#define AVR32_PWM_DIVB_OFFSET                                      16
#define AVR32_PWM_DIVB_SIZE                                         8
#define AVR32_PWM_ENA                                      0x00000004
#define AVR32_PWM_ENA_CHID0                                         0
#define AVR32_PWM_ENA_CHID0_MASK                           0x00000001
#define AVR32_PWM_ENA_CHID0_OFFSET                                  0
#define AVR32_PWM_ENA_CHID0_SIZE                                    1
#define AVR32_PWM_ENA_CHID1                                         1
#define AVR32_PWM_ENA_CHID1_MASK                           0x00000002
#define AVR32_PWM_ENA_CHID1_OFFSET                                  1
#define AVR32_PWM_ENA_CHID1_SIZE                                    1
#define AVR32_PWM_ENA_CHID2                                         2
#define AVR32_PWM_ENA_CHID2_MASK                           0x00000004
#define AVR32_PWM_ENA_CHID2_OFFSET                                  2
#define AVR32_PWM_ENA_CHID2_SIZE                                    1
#define AVR32_PWM_ENA_CHID3                                         3
#define AVR32_PWM_ENA_CHID3_MASK                           0x00000008
#define AVR32_PWM_ENA_CHID3_OFFSET                                  3
#define AVR32_PWM_ENA_CHID3_SIZE                                    1
#define AVR32_PWM_ENA_CHID4                                         4
#define AVR32_PWM_ENA_CHID4_MASK                           0x00000010
#define AVR32_PWM_ENA_CHID4_OFFSET                                  4
#define AVR32_PWM_ENA_CHID4_SIZE                                    1
#define AVR32_PWM_ENA_CHID5                                         5
#define AVR32_PWM_ENA_CHID5_MASK                           0x00000020
#define AVR32_PWM_ENA_CHID5_OFFSET                                  5
#define AVR32_PWM_ENA_CHID5_SIZE                                    1
#define AVR32_PWM_ENA_CHID6                                         6
#define AVR32_PWM_ENA_CHID6_MASK                           0x00000040
#define AVR32_PWM_ENA_CHID6_OFFSET                                  6
#define AVR32_PWM_ENA_CHID6_SIZE                                    1
#define AVR32_PWM_ENA_MASK                                 0x0000007f
#define AVR32_PWM_ENA_RESETVALUE                           0x00000000
#define AVR32_PWM_IDR                                      0x00000014
#define AVR32_PWM_IDR_CHID0                                         0
#define AVR32_PWM_IDR_CHID0_MASK                           0x00000001
#define AVR32_PWM_IDR_CHID0_OFFSET                                  0
#define AVR32_PWM_IDR_CHID0_SIZE                                    1
#define AVR32_PWM_IDR_CHID1                                         1
#define AVR32_PWM_IDR_CHID1_MASK                           0x00000002
#define AVR32_PWM_IDR_CHID1_OFFSET                                  1
#define AVR32_PWM_IDR_CHID1_SIZE                                    1
#define AVR32_PWM_IDR_CHID2                                         2
#define AVR32_PWM_IDR_CHID2_MASK                           0x00000004
#define AVR32_PWM_IDR_CHID2_OFFSET                                  2
#define AVR32_PWM_IDR_CHID2_SIZE                                    1
#define AVR32_PWM_IDR_CHID3                                         3
#define AVR32_PWM_IDR_CHID3_MASK                           0x00000008
#define AVR32_PWM_IDR_CHID3_OFFSET                                  3
#define AVR32_PWM_IDR_CHID3_SIZE                                    1
#define AVR32_PWM_IDR_CHID4                                         4
#define AVR32_PWM_IDR_CHID4_MASK                           0x00000010
#define AVR32_PWM_IDR_CHID4_OFFSET                                  4
#define AVR32_PWM_IDR_CHID4_SIZE                                    1
#define AVR32_PWM_IDR_CHID5                                         5
#define AVR32_PWM_IDR_CHID5_MASK                           0x00000020
#define AVR32_PWM_IDR_CHID5_OFFSET                                  5
#define AVR32_PWM_IDR_CHID5_SIZE                                    1
#define AVR32_PWM_IDR_CHID6                                         6
#define AVR32_PWM_IDR_CHID6_MASK                           0x00000040
#define AVR32_PWM_IDR_CHID6_OFFSET                                  6
#define AVR32_PWM_IDR_CHID6_SIZE                                    1
#define AVR32_PWM_IDR_MASK                                 0x0000007f
#define AVR32_PWM_IDR_RESETVALUE                           0x00000000
#define AVR32_PWM_IER                                      0x00000010
#define AVR32_PWM_IER_CHID0                                         0
#define AVR32_PWM_IER_CHID0_MASK                           0x00000001
#define AVR32_PWM_IER_CHID0_OFFSET                                  0
#define AVR32_PWM_IER_CHID0_SIZE                                    1
#define AVR32_PWM_IER_CHID1                                         1
#define AVR32_PWM_IER_CHID1_MASK                           0x00000002
#define AVR32_PWM_IER_CHID1_OFFSET                                  1
#define AVR32_PWM_IER_CHID1_SIZE                                    1
#define AVR32_PWM_IER_CHID2                                         2
#define AVR32_PWM_IER_CHID2_MASK                           0x00000004
#define AVR32_PWM_IER_CHID2_OFFSET                                  2
#define AVR32_PWM_IER_CHID2_SIZE                                    1
#define AVR32_PWM_IER_CHID3                                         3
#define AVR32_PWM_IER_CHID3_MASK                           0x00000008
#define AVR32_PWM_IER_CHID3_OFFSET                                  3
#define AVR32_PWM_IER_CHID3_SIZE                                    1
#define AVR32_PWM_IER_CHID4                                         4
#define AVR32_PWM_IER_CHID4_MASK                           0x00000010
#define AVR32_PWM_IER_CHID4_OFFSET                                  4
#define AVR32_PWM_IER_CHID4_SIZE                                    1
#define AVR32_PWM_IER_CHID5                                         5
#define AVR32_PWM_IER_CHID5_MASK                           0x00000020
#define AVR32_PWM_IER_CHID5_OFFSET                                  5
#define AVR32_PWM_IER_CHID5_SIZE                                    1
#define AVR32_PWM_IER_CHID6                                         6
#define AVR32_PWM_IER_CHID6_MASK                           0x00000040
#define AVR32_PWM_IER_CHID6_OFFSET                                  6
#define AVR32_PWM_IER_CHID6_SIZE                                    1
#define AVR32_PWM_IER_MASK                                 0x0000007f
#define AVR32_PWM_IER_RESETVALUE                           0x00000000
#define AVR32_PWM_IMR                                      0x00000018
#define AVR32_PWM_IMR_CHID0                                         0
#define AVR32_PWM_IMR_CHID0_MASK                           0x00000001
#define AVR32_PWM_IMR_CHID0_OFFSET                                  0
#define AVR32_PWM_IMR_CHID0_SIZE                                    1
#define AVR32_PWM_IMR_CHID1                                         1
#define AVR32_PWM_IMR_CHID1_MASK                           0x00000002
#define AVR32_PWM_IMR_CHID1_OFFSET                                  1
#define AVR32_PWM_IMR_CHID1_SIZE                                    1
#define AVR32_PWM_IMR_CHID2                                         2
#define AVR32_PWM_IMR_CHID2_MASK                           0x00000004
#define AVR32_PWM_IMR_CHID2_OFFSET                                  2
#define AVR32_PWM_IMR_CHID2_SIZE                                    1
#define AVR32_PWM_IMR_CHID3                                         3
#define AVR32_PWM_IMR_CHID3_MASK                           0x00000008
#define AVR32_PWM_IMR_CHID3_OFFSET                                  3
#define AVR32_PWM_IMR_CHID3_SIZE                                    1
#define AVR32_PWM_IMR_CHID4                                         4
#define AVR32_PWM_IMR_CHID4_MASK                           0x00000010
#define AVR32_PWM_IMR_CHID4_OFFSET                                  4
#define AVR32_PWM_IMR_CHID4_SIZE                                    1
#define AVR32_PWM_IMR_CHID5                                         5
#define AVR32_PWM_IMR_CHID5_MASK                           0x00000020
#define AVR32_PWM_IMR_CHID5_OFFSET                                  5
#define AVR32_PWM_IMR_CHID5_SIZE                                    1
#define AVR32_PWM_IMR_CHID6                                         6
#define AVR32_PWM_IMR_CHID6_MASK                           0x00000040
#define AVR32_PWM_IMR_CHID6_OFFSET                                  6
#define AVR32_PWM_IMR_CHID6_SIZE                                    1
#define AVR32_PWM_IMR_MASK                                 0x0000007f
#define AVR32_PWM_IMR_RESETVALUE                           0x00000000
#define AVR32_PWM_ISR                                      0x0000001c
#define AVR32_PWM_ISR_CHID0                                         0
#define AVR32_PWM_ISR_CHID0_MASK                           0x00000001
#define AVR32_PWM_ISR_CHID0_OFFSET                                  0
#define AVR32_PWM_ISR_CHID0_SIZE                                    1
#define AVR32_PWM_ISR_CHID1                                         1
#define AVR32_PWM_ISR_CHID1_MASK                           0x00000002
#define AVR32_PWM_ISR_CHID1_OFFSET                                  1
#define AVR32_PWM_ISR_CHID1_SIZE                                    1
#define AVR32_PWM_ISR_CHID2                                         2
#define AVR32_PWM_ISR_CHID2_MASK                           0x00000004
#define AVR32_PWM_ISR_CHID2_OFFSET                                  2
#define AVR32_PWM_ISR_CHID2_SIZE                                    1
#define AVR32_PWM_ISR_CHID3                                         3
#define AVR32_PWM_ISR_CHID3_MASK                           0x00000008
#define AVR32_PWM_ISR_CHID3_OFFSET                                  3
#define AVR32_PWM_ISR_CHID3_SIZE                                    1
#define AVR32_PWM_ISR_CHID4                                         4
#define AVR32_PWM_ISR_CHID4_MASK                           0x00000010
#define AVR32_PWM_ISR_CHID4_OFFSET                                  4
#define AVR32_PWM_ISR_CHID4_SIZE                                    1
#define AVR32_PWM_ISR_CHID5                                         5
#define AVR32_PWM_ISR_CHID5_MASK                           0x00000020
#define AVR32_PWM_ISR_CHID5_OFFSET                                  5
#define AVR32_PWM_ISR_CHID5_SIZE                                    1
#define AVR32_PWM_ISR_CHID6                                         6
#define AVR32_PWM_ISR_CHID6_MASK                           0x00000040
#define AVR32_PWM_ISR_CHID6_OFFSET                                  6
#define AVR32_PWM_ISR_CHID6_SIZE                                    1
#define AVR32_PWM_ISR_MASK                                 0x0000007f
#define AVR32_PWM_ISR_RESETVALUE                           0x00000000
#define AVR32_PWM_MCK                                      0x00000000
#define AVR32_PWM_MCK_DIV_1024                             0x0000000a
#define AVR32_PWM_MCK_DIV_128                              0x00000007
#define AVR32_PWM_MCK_DIV_16                               0x00000004
#define AVR32_PWM_MCK_DIV_2                                0x00000001
#define AVR32_PWM_MCK_DIV_256                              0x00000008
#define AVR32_PWM_MCK_DIV_32                               0x00000005
#define AVR32_PWM_MCK_DIV_4                                0x00000002
#define AVR32_PWM_MCK_DIV_512                              0x00000009
#define AVR32_PWM_MCK_DIV_64                               0x00000006
#define AVR32_PWM_MCK_DIV_8                                0x00000003
#define AVR32_PWM_MR                                       0x00000000
#define AVR32_PWM_MR_DIVA                                           0
#define AVR32_PWM_MR_DIVA_CLK_OFF                          0x00000000
#define AVR32_PWM_MR_DIVA_CLK_SEL_PREAB                    0x00000001
#define AVR32_PWM_MR_DIVA_MASK                             0x000000ff
#define AVR32_PWM_MR_DIVA_OFFSET                                    0
#define AVR32_PWM_MR_DIVA_SIZE                                      8
#define AVR32_PWM_MR_DIVB                                          16
#define AVR32_PWM_MR_DIVB_CLK_OFF                          0x00000000
#define AVR32_PWM_MR_DIVB_CLK_SEL_PREAB                    0x00000001
#define AVR32_PWM_MR_DIVB_MASK                             0x00ff0000
#define AVR32_PWM_MR_DIVB_OFFSET                                   16
#define AVR32_PWM_MR_DIVB_SIZE                                      8
#define AVR32_PWM_MR_MASK                                  0x0fff0fff
#define AVR32_PWM_MR_PREA                                           8
#define AVR32_PWM_MR_PREA_MASK                             0x00000f00
#define AVR32_PWM_MR_PREA_MCK                              0x00000000
#define AVR32_PWM_MR_PREA_MCK_DIV_1024                     0x0000000a
#define AVR32_PWM_MR_PREA_MCK_DIV_128                      0x00000007
#define AVR32_PWM_MR_PREA_MCK_DIV_16                       0x00000004
#define AVR32_PWM_MR_PREA_MCK_DIV_2                        0x00000001
#define AVR32_PWM_MR_PREA_MCK_DIV_256                      0x00000008
#define AVR32_PWM_MR_PREA_MCK_DIV_32                       0x00000005
#define AVR32_PWM_MR_PREA_MCK_DIV_4                        0x00000002
#define AVR32_PWM_MR_PREA_MCK_DIV_512                      0x00000009
#define AVR32_PWM_MR_PREA_MCK_DIV_64                       0x00000006
#define AVR32_PWM_MR_PREA_MCK_DIV_8                        0x00000003
#define AVR32_PWM_MR_PREA_OFFSET                                    8
#define AVR32_PWM_MR_PREA_SIZE                                      4
#define AVR32_PWM_MR_PREB                                          24
#define AVR32_PWM_MR_PREB_MASK                             0x0f000000
#define AVR32_PWM_MR_PREB_MCK                              0x00000000
#define AVR32_PWM_MR_PREB_MCK_DIV_1024                     0x0000000a
#define AVR32_PWM_MR_PREB_MCK_DIV_128                      0x00000007
#define AVR32_PWM_MR_PREB_MCK_DIV_16                       0x00000004
#define AVR32_PWM_MR_PREB_MCK_DIV_2                        0x00000001
#define AVR32_PWM_MR_PREB_MCK_DIV_256                      0x00000008
#define AVR32_PWM_MR_PREB_MCK_DIV_32                       0x00000005
#define AVR32_PWM_MR_PREB_MCK_DIV_4                        0x00000002
#define AVR32_PWM_MR_PREB_MCK_DIV_512                      0x00000009
#define AVR32_PWM_MR_PREB_MCK_DIV_64                       0x00000006
#define AVR32_PWM_MR_PREB_MCK_DIV_8                        0x00000003
#define AVR32_PWM_MR_PREB_OFFSET                                   24
#define AVR32_PWM_MR_PREB_SIZE                                      4
#define AVR32_PWM_MR_RESETVALUE                            0x00000000
#define AVR32_PWM_PREA                                              8
#define AVR32_PWM_PREA_MASK                                0x00000f00
#define AVR32_PWM_PREA_MCK                                 0x00000000
#define AVR32_PWM_PREA_MCK_DIV_1024                        0x0000000a
#define AVR32_PWM_PREA_MCK_DIV_128                         0x00000007
#define AVR32_PWM_PREA_MCK_DIV_16                          0x00000004
#define AVR32_PWM_PREA_MCK_DIV_2                           0x00000001
#define AVR32_PWM_PREA_MCK_DIV_256                         0x00000008
#define AVR32_PWM_PREA_MCK_DIV_32                          0x00000005
#define AVR32_PWM_PREA_MCK_DIV_4                           0x00000002
#define AVR32_PWM_PREA_MCK_DIV_512                         0x00000009
#define AVR32_PWM_PREA_MCK_DIV_64                          0x00000006
#define AVR32_PWM_PREA_MCK_DIV_8                           0x00000003
#define AVR32_PWM_PREA_OFFSET                                       8
#define AVR32_PWM_PREA_SIZE                                         4
#define AVR32_PWM_PREB                                             24
#define AVR32_PWM_PREB_MASK                                0x0f000000
#define AVR32_PWM_PREB_MCK                                 0x00000000
#define AVR32_PWM_PREB_MCK_DIV_1024                        0x0000000a
#define AVR32_PWM_PREB_MCK_DIV_128                         0x00000007
#define AVR32_PWM_PREB_MCK_DIV_16                          0x00000004
#define AVR32_PWM_PREB_MCK_DIV_2                           0x00000001
#define AVR32_PWM_PREB_MCK_DIV_256                         0x00000008
#define AVR32_PWM_PREB_MCK_DIV_32                          0x00000005
#define AVR32_PWM_PREB_MCK_DIV_4                           0x00000002
#define AVR32_PWM_PREB_MCK_DIV_512                         0x00000009
#define AVR32_PWM_PREB_MCK_DIV_64                          0x00000006
#define AVR32_PWM_PREB_MCK_DIV_8                           0x00000003
#define AVR32_PWM_PREB_OFFSET                                      24
#define AVR32_PWM_PREB_SIZE                                         4
#define AVR32_PWM_SR                                       0x0000000c
#define AVR32_PWM_SR_CHID0                                          0
#define AVR32_PWM_SR_CHID0_MASK                            0x00000001
#define AVR32_PWM_SR_CHID0_OFFSET                                   0
#define AVR32_PWM_SR_CHID0_SIZE                                     1
#define AVR32_PWM_SR_CHID1                                          1
#define AVR32_PWM_SR_CHID1_MASK                            0x00000002
#define AVR32_PWM_SR_CHID1_OFFSET                                   1
#define AVR32_PWM_SR_CHID1_SIZE                                     1
#define AVR32_PWM_SR_CHID2                                          2
#define AVR32_PWM_SR_CHID2_MASK                            0x00000004
#define AVR32_PWM_SR_CHID2_OFFSET                                   2
#define AVR32_PWM_SR_CHID2_SIZE                                     1
#define AVR32_PWM_SR_CHID3                                          3
#define AVR32_PWM_SR_CHID3_MASK                            0x00000008
#define AVR32_PWM_SR_CHID3_OFFSET                                   3
#define AVR32_PWM_SR_CHID3_SIZE                                     1
#define AVR32_PWM_SR_CHID4                                          4
#define AVR32_PWM_SR_CHID4_MASK                            0x00000010
#define AVR32_PWM_SR_CHID4_OFFSET                                   4
#define AVR32_PWM_SR_CHID4_SIZE                                     1
#define AVR32_PWM_SR_CHID5                                          5
#define AVR32_PWM_SR_CHID5_MASK                            0x00000020
#define AVR32_PWM_SR_CHID5_OFFSET                                   5
#define AVR32_PWM_SR_CHID5_SIZE                                     1
#define AVR32_PWM_SR_CHID6                                          6
#define AVR32_PWM_SR_CHID6_MASK                            0x00000040
#define AVR32_PWM_SR_CHID6_OFFSET                                   6
#define AVR32_PWM_SR_CHID6_SIZE                                     1
#define AVR32_PWM_SR_MASK                                  0x0000007f
#define AVR32_PWM_SR_RESETVALUE                            0x00000000




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_pwm_mr_t {
    unsigned int                 : 4;
    unsigned int preb            : 4;
    unsigned int divb            : 8;
    unsigned int                 : 4;
    unsigned int prea            : 4;
    unsigned int diva            : 8;
} avr32_pwm_mr_t;



typedef struct avr32_pwm_ena_t {
    unsigned int                 :25;
    unsigned int chid6           : 1;
    unsigned int chid5           : 1;
    unsigned int chid4           : 1;
    unsigned int chid3           : 1;
    unsigned int chid2           : 1;
    unsigned int chid1           : 1;
    unsigned int chid0           : 1;
} avr32_pwm_ena_t;



typedef struct avr32_pwm_dis_t {
    unsigned int                 :25;
    unsigned int chid6           : 1;
    unsigned int chid5           : 1;
    unsigned int chid4           : 1;
    unsigned int chid3           : 1;
    unsigned int chid2           : 1;
    unsigned int chid1           : 1;
    unsigned int chid0           : 1;
} avr32_pwm_dis_t;



typedef struct avr32_pwm_sr_t {
    unsigned int                 :25;
    unsigned int chid6           : 1;
    unsigned int chid5           : 1;
    unsigned int chid4           : 1;
    unsigned int chid3           : 1;
    unsigned int chid2           : 1;
    unsigned int chid1           : 1;
    unsigned int chid0           : 1;
} avr32_pwm_sr_t;



typedef struct avr32_pwm_ier_t {
    unsigned int                 :25;
    unsigned int chid6           : 1;
    unsigned int chid5           : 1;
    unsigned int chid4           : 1;
    unsigned int chid3           : 1;
    unsigned int chid2           : 1;
    unsigned int chid1           : 1;
    unsigned int chid0           : 1;
} avr32_pwm_ier_t;



typedef struct avr32_pwm_idr_t {
    unsigned int                 :25;
    unsigned int chid6           : 1;
    unsigned int chid5           : 1;
    unsigned int chid4           : 1;
    unsigned int chid3           : 1;
    unsigned int chid2           : 1;
    unsigned int chid1           : 1;
    unsigned int chid0           : 1;
} avr32_pwm_idr_t;



typedef struct avr32_pwm_imr_t {
    unsigned int                 :25;
    unsigned int chid6           : 1;
    unsigned int chid5           : 1;
    unsigned int chid4           : 1;
    unsigned int chid3           : 1;
    unsigned int chid2           : 1;
    unsigned int chid1           : 1;
    unsigned int chid0           : 1;
} avr32_pwm_imr_t;



typedef struct avr32_pwm_isr_t {
    unsigned int                 :25;
    unsigned int chid6           : 1;
    unsigned int chid5           : 1;
    unsigned int chid4           : 1;
    unsigned int chid3           : 1;
    unsigned int chid2           : 1;
    unsigned int chid1           : 1;
    unsigned int chid0           : 1;
} avr32_pwm_isr_t;



typedef struct avr32_pwm_cmr_t {
    unsigned int                 :21;
    unsigned int cpd             : 1;
    unsigned int cpol            : 1;
    unsigned int calg            : 1;
    unsigned int                 : 4;
    unsigned int cpre            : 4;
} avr32_pwm_cmr_t;


typedef struct avr32_pwm_channel_t {
  union {
          unsigned long                  cmr       ;//0x0000
          avr32_pwm_cmr_t                CMR       ;
  };
          unsigned long                  cdty      ;//0x0004
          unsigned long                  cprd      ;//0x0008
    const unsigned long                  ccnt      ;//0x000c
          unsigned long                  cupd      ;//0x0010
          unsigned int                   :32       ;//0x0014
          unsigned int                   :32       ;//0x0018
          unsigned int                   :32       ;//0x001c
} avr32_pwm_channel_t;


typedef struct avr32_pwm_t {
  union {
          unsigned long                  mr        ;//0x0000
          avr32_pwm_mr_t                 MR        ;
  };
  union {
          unsigned long                  ena       ;//0x0004
          avr32_pwm_ena_t                ENA       ;
  };
  union {
          unsigned long                  dis       ;//0x0008
          avr32_pwm_dis_t                DIS       ;
  };
  union {
    const unsigned long                  sr        ;//0x000c
    const avr32_pwm_sr_t                 SR        ;
  };
  union {
          unsigned long                  ier       ;//0x0010
          avr32_pwm_ier_t                IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0014
          avr32_pwm_idr_t                IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0018
    const avr32_pwm_imr_t                IMR       ;
  };
  union {
    const unsigned long                  isr       ;//0x001c
    const avr32_pwm_isr_t                ISR       ;
  };
          unsigned int                   :32       ;//0x0020
          unsigned int                   :32       ;//0x0024
          unsigned int                   :32       ;//0x0028
          unsigned int                   :32       ;//0x002c
          unsigned int                   :32       ;//0x0030
          unsigned int                   :32       ;//0x0034
          unsigned int                   :32       ;//0x0038
          unsigned int                   :32       ;//0x003c
          unsigned int                   :32       ;//0x0040
          unsigned int                   :32       ;//0x0044
          unsigned int                   :32       ;//0x0048
          unsigned int                   :32       ;//0x004c
          unsigned int                   :32       ;//0x0050
          unsigned int                   :32       ;//0x0054
          unsigned int                   :32       ;//0x0058
          unsigned int                   :32       ;//0x005c
          unsigned int                   :32       ;//0x0060
          unsigned int                   :32       ;//0x0064
          unsigned int                   :32       ;//0x0068
          unsigned int                   :32       ;//0x006c
          unsigned int                   :32       ;//0x0070
          unsigned int                   :32       ;//0x0074
          unsigned int                   :32       ;//0x0078
          unsigned int                   :32       ;//0x007c
          unsigned int                   :32       ;//0x0080
          unsigned int                   :32       ;//0x0084
          unsigned int                   :32       ;//0x0088
          unsigned int                   :32       ;//0x008c
          unsigned int                   :32       ;//0x0090
          unsigned int                   :32       ;//0x0094
          unsigned int                   :32       ;//0x0098
          unsigned int                   :32       ;//0x009c
          unsigned int                   :32       ;//0x00a0
          unsigned int                   :32       ;//0x00a4
          unsigned int                   :32       ;//0x00a8
          unsigned int                   :32       ;//0x00ac
          unsigned int                   :32       ;//0x00b0
          unsigned int                   :32       ;//0x00b4
          unsigned int                   :32       ;//0x00b8
          unsigned int                   :32       ;//0x00bc
          unsigned int                   :32       ;//0x00c0
          unsigned int                   :32       ;//0x00c4
          unsigned int                   :32       ;//0x00c8
          unsigned int                   :32       ;//0x00cc
          unsigned int                   :32       ;//0x00d0
          unsigned int                   :32       ;//0x00d4
          unsigned int                   :32       ;//0x00d8
          unsigned int                   :32       ;//0x00dc
          unsigned int                   :32       ;//0x00e0
          unsigned int                   :32       ;//0x00e4
          unsigned int                   :32       ;//0x00e8
          unsigned int                   :32       ;//0x00ec
          unsigned int                   :32       ;//0x00f0
          unsigned int                   :32       ;//0x00f4
          unsigned int                   :32       ;//0x00f8
          unsigned int                   :32       ;//0x00fc
          unsigned int                   :32       ;//0x0100
          unsigned int                   :32       ;//0x0104
          unsigned int                   :32       ;//0x0108
          unsigned int                   :32       ;//0x010c
          unsigned int                   :32       ;//0x0110
          unsigned int                   :32       ;//0x0114
          unsigned int                   :32       ;//0x0118
          unsigned int                   :32       ;//0x011c
          unsigned int                   :32       ;//0x0120
          unsigned int                   :32       ;//0x0124
          unsigned int                   :32       ;//0x0128
          unsigned int                   :32       ;//0x012c
          unsigned int                   :32       ;//0x0130
          unsigned int                   :32       ;//0x0134
          unsigned int                   :32       ;//0x0138
          unsigned int                   :32       ;//0x013c
          unsigned int                   :32       ;//0x0140
          unsigned int                   :32       ;//0x0144
          unsigned int                   :32       ;//0x0148
          unsigned int                   :32       ;//0x014c
          unsigned int                   :32       ;//0x0150
          unsigned int                   :32       ;//0x0154
          unsigned int                   :32       ;//0x0158
          unsigned int                   :32       ;//0x015c
          unsigned int                   :32       ;//0x0160
          unsigned int                   :32       ;//0x0164
          unsigned int                   :32       ;//0x0168
          unsigned int                   :32       ;//0x016c
          unsigned int                   :32       ;//0x0170
          unsigned int                   :32       ;//0x0174
          unsigned int                   :32       ;//0x0178
          unsigned int                   :32       ;//0x017c
          unsigned int                   :32       ;//0x0180
          unsigned int                   :32       ;//0x0184
          unsigned int                   :32       ;//0x0188
          unsigned int                   :32       ;//0x018c
          unsigned int                   :32       ;//0x0190
          unsigned int                   :32       ;//0x0194
          unsigned int                   :32       ;//0x0198
          unsigned int                   :32       ;//0x019c
          unsigned int                   :32       ;//0x01a0
          unsigned int                   :32       ;//0x01a4
          unsigned int                   :32       ;//0x01a8
          unsigned int                   :32       ;//0x01ac
          unsigned int                   :32       ;//0x01b0
          unsigned int                   :32       ;//0x01b4
          unsigned int                   :32       ;//0x01b8
          unsigned int                   :32       ;//0x01bc
          unsigned int                   :32       ;//0x01c0
          unsigned int                   :32       ;//0x01c4
          unsigned int                   :32       ;//0x01c8
          unsigned int                   :32       ;//0x01cc
          unsigned int                   :32       ;//0x01d0
          unsigned int                   :32       ;//0x01d4
          unsigned int                   :32       ;//0x01d8
          unsigned int                   :32       ;//0x01dc
          unsigned int                   :32       ;//0x01e0
          unsigned int                   :32       ;//0x01e4
          unsigned int                   :32       ;//0x01e8
          unsigned int                   :32       ;//0x01ec
          unsigned int                   :32       ;//0x01f0
          unsigned int                   :32       ;//0x01f4
          unsigned int                   :32       ;//0x01f8
          unsigned int                   :32       ;//0x01fc
  avr32_pwm_channel_t channel[AVR32_PWM_CHANNEL_LENGTH];//0x200
  avr32_pwm_channel_t channel_reserved[32 - AVR32_PWM_CHANNEL_LENGTH];//Padding
} avr32_pwm_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_PWM_130_H_INCLUDED*/
#endif

