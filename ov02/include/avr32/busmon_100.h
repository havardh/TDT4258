/*****************************************************************************
 *
 * Copyright (C) 2008 Atmel Corporation
 * 
 * Model        : AP7200
 * Revision     : $Revision: 58751 $
 * Checkin Date : $Date: 2008-09-15 15:20:42 +0200 (Mon, 15 Sep 2008) $ 
 *
 ****************************************************************************/
#ifndef AVR32_BUSMON_100_H_INCLUDED
#define AVR32_BUSMON_100_H_INCLUDED

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_BUSMON_<register>
 - Bitfield mask:   AVR32_BUSMON_<register>_<bitfield>
 - Bitfield offset: AVR32_BUSMON_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_BUSMON_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_BUSMON_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_BUSMON_<bitfield>
 - Bitfield offset: AVR32_BUSMON_<bitfield>_OFFSET
 - Bitfield size:   AVR32_BUSMON_<bitfield>_SIZE
 - Bitfield values: AVR32_BUSMON_<bitfield>_<value name>
 - Bitfield values: AVR32_BUSMON_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_BUSMON_CONTROL                                  0x00000000
#define AVR32_BUSMON_CONTROL_EN0                                       0
#define AVR32_BUSMON_CONTROL_EN0_MASK                         0x00000001
#define AVR32_BUSMON_CONTROL_EN0_OFFSET                                0
#define AVR32_BUSMON_CONTROL_EN0_SIZE                                  1
#define AVR32_BUSMON_CONTROL_EN1                                       1
#define AVR32_BUSMON_CONTROL_EN1_MASK                         0x00000002
#define AVR32_BUSMON_CONTROL_EN1_OFFSET                                1
#define AVR32_BUSMON_CONTROL_EN1_SIZE                                  1
#define AVR32_BUSMON_CONTROL_EN2                                       2
#define AVR32_BUSMON_CONTROL_EN2_MASK                         0x00000004
#define AVR32_BUSMON_CONTROL_EN2_OFFSET                                2
#define AVR32_BUSMON_CONTROL_EN2_SIZE                                  1
#define AVR32_BUSMON_CONTROL_EN3                                       3
#define AVR32_BUSMON_CONTROL_EN3_MASK                         0x00000008
#define AVR32_BUSMON_CONTROL_EN3_OFFSET                                3
#define AVR32_BUSMON_CONTROL_EN3_SIZE                                  1
#define AVR32_BUSMON_CONTROL_FR0                                       8
#define AVR32_BUSMON_CONTROL_FR0_MASK                         0x00000100
#define AVR32_BUSMON_CONTROL_FR0_OFFSET                                8
#define AVR32_BUSMON_CONTROL_FR0_SIZE                                  1
#define AVR32_BUSMON_CONTROL_FR1                                       9
#define AVR32_BUSMON_CONTROL_FR1_MASK                         0x00000200
#define AVR32_BUSMON_CONTROL_FR1_OFFSET                                9
#define AVR32_BUSMON_CONTROL_FR1_SIZE                                  1
#define AVR32_BUSMON_CONTROL_FR2                                      10
#define AVR32_BUSMON_CONTROL_FR2_MASK                         0x00000400
#define AVR32_BUSMON_CONTROL_FR2_OFFSET                               10
#define AVR32_BUSMON_CONTROL_FR2_SIZE                                  1
#define AVR32_BUSMON_CONTROL_FR3                                      11
#define AVR32_BUSMON_CONTROL_FR3_MASK                         0x00000800
#define AVR32_BUSMON_CONTROL_FR3_OFFSET                               11
#define AVR32_BUSMON_CONTROL_FR3_SIZE                                  1
#define AVR32_BUSMON_CONTROL_MASK                             0x000f0f0f
#define AVR32_BUSMON_CONTROL_RE0                                      16
#define AVR32_BUSMON_CONTROL_RE0_MASK                         0x00010000
#define AVR32_BUSMON_CONTROL_RE0_OFFSET                               16
#define AVR32_BUSMON_CONTROL_RE0_SIZE                                  1
#define AVR32_BUSMON_CONTROL_RE1                                      17
#define AVR32_BUSMON_CONTROL_RE1_MASK                         0x00020000
#define AVR32_BUSMON_CONTROL_RE1_OFFSET                               17
#define AVR32_BUSMON_CONTROL_RE1_SIZE                                  1
#define AVR32_BUSMON_CONTROL_RE2                                      18
#define AVR32_BUSMON_CONTROL_RE2_MASK                         0x00040000
#define AVR32_BUSMON_CONTROL_RE2_OFFSET                               18
#define AVR32_BUSMON_CONTROL_RE2_SIZE                                  1
#define AVR32_BUSMON_CONTROL_RE3                                      19
#define AVR32_BUSMON_CONTROL_RE3_MASK                         0x00080000
#define AVR32_BUSMON_CONTROL_RE3_OFFSET                               19
#define AVR32_BUSMON_CONTROL_RE3_SIZE                                  1
#define AVR32_BUSMON_CONTROL_RESETVALUE                       0x00000000
#define AVR32_BUSMON_DATA0                                    0x00000010
#define AVR32_BUSMON_DATA0_MASK                               0x00000000
#define AVR32_BUSMON_DATA0_RESETVALUE                         0x00000000
#define AVR32_BUSMON_DATA1                                    0x00000020
#define AVR32_BUSMON_DATA1_MASK                               0x00000000
#define AVR32_BUSMON_DATA1_RESETVALUE                         0x00000000
#define AVR32_BUSMON_DATA2                                    0x00000030
#define AVR32_BUSMON_DATA2_MASK                               0x00000000
#define AVR32_BUSMON_DATA2_RESETVALUE                         0x00000000
#define AVR32_BUSMON_DATA3                                    0x00000040
#define AVR32_BUSMON_DATA3_MASK                               0x00000000
#define AVR32_BUSMON_DATA3_RESETVALUE                         0x00000000
#define AVR32_BUSMON_EN0                                               0
#define AVR32_BUSMON_EN0_MASK                                 0x00000001
#define AVR32_BUSMON_EN0_OFFSET                                        0
#define AVR32_BUSMON_EN0_SIZE                                          1
#define AVR32_BUSMON_EN1                                               1
#define AVR32_BUSMON_EN1_MASK                                 0x00000002
#define AVR32_BUSMON_EN1_OFFSET                                        1
#define AVR32_BUSMON_EN1_SIZE                                          1
#define AVR32_BUSMON_EN2                                               2
#define AVR32_BUSMON_EN2_MASK                                 0x00000004
#define AVR32_BUSMON_EN2_OFFSET                                        2
#define AVR32_BUSMON_EN2_SIZE                                          1
#define AVR32_BUSMON_EN3                                               3
#define AVR32_BUSMON_EN3_MASK                                 0x00000008
#define AVR32_BUSMON_EN3_OFFSET                                        3
#define AVR32_BUSMON_EN3_SIZE                                          1
#define AVR32_BUSMON_FR0                                               8
#define AVR32_BUSMON_FR0_MASK                                 0x00000100
#define AVR32_BUSMON_FR0_OFFSET                                        8
#define AVR32_BUSMON_FR0_SIZE                                          1
#define AVR32_BUSMON_FR1                                               9
#define AVR32_BUSMON_FR1_MASK                                 0x00000200
#define AVR32_BUSMON_FR1_OFFSET                                        9
#define AVR32_BUSMON_FR1_SIZE                                          1
#define AVR32_BUSMON_FR2                                              10
#define AVR32_BUSMON_FR2_MASK                                 0x00000400
#define AVR32_BUSMON_FR2_OFFSET                                       10
#define AVR32_BUSMON_FR2_SIZE                                          1
#define AVR32_BUSMON_FR3                                              11
#define AVR32_BUSMON_FR3_MASK                                 0x00000800
#define AVR32_BUSMON_FR3_OFFSET                                       11
#define AVR32_BUSMON_FR3_SIZE                                          1
#define AVR32_BUSMON_LAT0                                     0x00000018
#define AVR32_BUSMON_LAT0_MASK                                0x00000000
#define AVR32_BUSMON_LAT0_RESETVALUE                          0x00000000
#define AVR32_BUSMON_LAT1                                     0x00000028
#define AVR32_BUSMON_LAT1_MASK                                0x00000000
#define AVR32_BUSMON_LAT1_RESETVALUE                          0x00000000
#define AVR32_BUSMON_LAT2                                     0x00000038
#define AVR32_BUSMON_LAT2_MASK                                0x00000000
#define AVR32_BUSMON_LAT2_RESETVALUE                          0x00000000
#define AVR32_BUSMON_LAT3                                     0x00000048
#define AVR32_BUSMON_LAT3_MASK                                0x00000000
#define AVR32_BUSMON_LAT3_RESETVALUE                          0x00000000
#define AVR32_BUSMON_RE0                                              16
#define AVR32_BUSMON_RE0_MASK                                 0x00010000
#define AVR32_BUSMON_RE0_OFFSET                                       16
#define AVR32_BUSMON_RE0_SIZE                                          1
#define AVR32_BUSMON_RE1                                              17
#define AVR32_BUSMON_RE1_MASK                                 0x00020000
#define AVR32_BUSMON_RE1_OFFSET                                       17
#define AVR32_BUSMON_RE1_SIZE                                          1
#define AVR32_BUSMON_RE2                                              18
#define AVR32_BUSMON_RE2_MASK                                 0x00040000
#define AVR32_BUSMON_RE2_OFFSET                                       18
#define AVR32_BUSMON_RE2_SIZE                                          1
#define AVR32_BUSMON_RE3                                              19
#define AVR32_BUSMON_RE3_MASK                                 0x00080000
#define AVR32_BUSMON_RE3_OFFSET                                       19
#define AVR32_BUSMON_RE3_SIZE                                          1
#define AVR32_BUSMON_STALL0                                   0x00000014
#define AVR32_BUSMON_STALL0_MASK                              0x00000000
#define AVR32_BUSMON_STALL0_RESETVALUE                        0x00000000
#define AVR32_BUSMON_STALL1                                   0x00000024
#define AVR32_BUSMON_STALL1_MASK                              0x00000000
#define AVR32_BUSMON_STALL1_RESETVALUE                        0x00000000
#define AVR32_BUSMON_STALL2                                   0x00000034
#define AVR32_BUSMON_STALL2_MASK                              0x00000000
#define AVR32_BUSMON_STALL2_RESETVALUE                        0x00000000
#define AVR32_BUSMON_STALL3                                   0x00000044
#define AVR32_BUSMON_STALL3_MASK                              0x00000000
#define AVR32_BUSMON_STALL3_RESETVALUE                        0x00000000




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_busmon_control_t {
    unsigned int                 :12;
    unsigned int re3             : 1;
    unsigned int re2             : 1;
    unsigned int re1             : 1;
    unsigned int re0             : 1;
    unsigned int                 : 4;
    unsigned int fr3             : 1;
    unsigned int fr2             : 1;
    unsigned int fr1             : 1;
    unsigned int fr0             : 1;
    unsigned int                 : 4;
    unsigned int en3             : 1;
    unsigned int en2             : 1;
    unsigned int en1             : 1;
    unsigned int en0             : 1;
} avr32_busmon_control_t;



typedef struct avr32_busmon_t {
  union {
          unsigned long                  control   ;//0x0000
          avr32_busmon_control_t         CONTROL   ;
  };
          unsigned int                   :32       ;//0x0004
          unsigned int                   :32       ;//0x0008
          unsigned int                   :32       ;//0x000c
    const unsigned long                  data0     ;//0x0010
    const unsigned long                  stall0    ;//0x0014
    const unsigned long                  lat0      ;//0x0018
          unsigned int                   :32       ;//0x001c
    const unsigned long                  data1     ;//0x0020
    const unsigned long                  stall1    ;//0x0024
    const unsigned long                  lat1      ;//0x0028
          unsigned int                   :32       ;//0x002c
    const unsigned long                  data2     ;//0x0030
    const unsigned long                  stall2    ;//0x0034
    const unsigned long                  lat2      ;//0x0038
          unsigned int                   :32       ;//0x003c
    const unsigned long                  data3     ;//0x0040
    const unsigned long                  stall3    ;//0x0044
    const unsigned long                  lat3      ;//0x0048
} avr32_busmon_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_BUSMON_100_H_INCLUDED*/
#endif

