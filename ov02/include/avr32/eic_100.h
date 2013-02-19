/*****************************************************************************
 *
 * Copyright (C) 2008 Atmel Corporation
 * 
 * Model        : AP7000
 * Revision     : $Revision: 58751 $
 * Checkin Date : $Date: 2008-09-15 15:20:42 +0200 (Mon, 15 Sep 2008) $ 
 *
 ****************************************************************************/
#ifndef AVR32_EIC_100_H_INCLUDED
#define AVR32_EIC_100_H_INCLUDED

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_EIC_<register>
 - Bitfield mask:   AVR32_EIC_<register>_<bitfield>
 - Bitfield offset: AVR32_EIC_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_EIC_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_EIC_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_EIC_<bitfield>
 - Bitfield offset: AVR32_EIC_<bitfield>_OFFSET
 - Bitfield size:   AVR32_EIC_<bitfield>_SIZE
 - Bitfield values: AVR32_EIC_<bitfield>_<value name>
 - Bitfield values: AVR32_EIC_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_EIC_EDGE                                     0x00000018
#define AVR32_EIC_EDGE_INT0                                         0
#define AVR32_EIC_EDGE_INT0_MASK                           0x00000001
#define AVR32_EIC_EDGE_INT0_OFFSET                                  0
#define AVR32_EIC_EDGE_INT0_SIZE                                    1
#define AVR32_EIC_EDGE_INT1                                         1
#define AVR32_EIC_EDGE_INT1_MASK                           0x00000002
#define AVR32_EIC_EDGE_INT1_OFFSET                                  1
#define AVR32_EIC_EDGE_INT1_SIZE                                    1
#define AVR32_EIC_EDGE_INT2                                         2
#define AVR32_EIC_EDGE_INT2_MASK                           0x00000004
#define AVR32_EIC_EDGE_INT2_OFFSET                                  2
#define AVR32_EIC_EDGE_INT2_SIZE                                    1
#define AVR32_EIC_EDGE_INT3                                         3
#define AVR32_EIC_EDGE_INT3_MASK                           0x00000008
#define AVR32_EIC_EDGE_INT3_OFFSET                                  3
#define AVR32_EIC_EDGE_INT3_SIZE                                    1
#define AVR32_EIC_EDGE_MASK                                0x0000000f
#define AVR32_EIC_EDGE_RESETVALUE                          0x00000000
#define AVR32_EIC_EN                                                0
#define AVR32_EIC_EN_MASK                                  0x00000001
#define AVR32_EIC_EN_OFFSET                                         0
#define AVR32_EIC_EN_SIZE                                           1
#define AVR32_EIC_ICR                                      0x00000010
#define AVR32_EIC_ICR_INT0                                          0
#define AVR32_EIC_ICR_INT0_MASK                            0x00000001
#define AVR32_EIC_ICR_INT0_OFFSET                                   0
#define AVR32_EIC_ICR_INT0_SIZE                                     1
#define AVR32_EIC_ICR_INT1                                          1
#define AVR32_EIC_ICR_INT1_MASK                            0x00000002
#define AVR32_EIC_ICR_INT1_OFFSET                                   1
#define AVR32_EIC_ICR_INT1_SIZE                                     1
#define AVR32_EIC_ICR_INT2                                          2
#define AVR32_EIC_ICR_INT2_MASK                            0x00000004
#define AVR32_EIC_ICR_INT2_OFFSET                                   2
#define AVR32_EIC_ICR_INT2_SIZE                                     1
#define AVR32_EIC_ICR_INT3                                          3
#define AVR32_EIC_ICR_INT3_MASK                            0x00000008
#define AVR32_EIC_ICR_INT3_OFFSET                                   3
#define AVR32_EIC_ICR_INT3_SIZE                                     1
#define AVR32_EIC_ICR_MASK                                 0x0000000f
#define AVR32_EIC_ICR_RESETVALUE                           0x00000000
#define AVR32_EIC_IDR                                      0x00000004
#define AVR32_EIC_IDR_INT0                                          0
#define AVR32_EIC_IDR_INT0_MASK                            0x00000001
#define AVR32_EIC_IDR_INT0_OFFSET                                   0
#define AVR32_EIC_IDR_INT0_SIZE                                     1
#define AVR32_EIC_IDR_INT1                                          1
#define AVR32_EIC_IDR_INT1_MASK                            0x00000002
#define AVR32_EIC_IDR_INT1_OFFSET                                   1
#define AVR32_EIC_IDR_INT1_SIZE                                     1
#define AVR32_EIC_IDR_INT2                                          2
#define AVR32_EIC_IDR_INT2_MASK                            0x00000004
#define AVR32_EIC_IDR_INT2_OFFSET                                   2
#define AVR32_EIC_IDR_INT2_SIZE                                     1
#define AVR32_EIC_IDR_INT3                                          3
#define AVR32_EIC_IDR_INT3_MASK                            0x00000008
#define AVR32_EIC_IDR_INT3_OFFSET                                   3
#define AVR32_EIC_IDR_INT3_SIZE                                     1
#define AVR32_EIC_IDR_MASK                                 0x0000000f
#define AVR32_EIC_IDR_RESETVALUE                           0x00000000
#define AVR32_EIC_IER                                      0x00000000
#define AVR32_EIC_IER_INT0                                          0
#define AVR32_EIC_IER_INT0_MASK                            0x00000001
#define AVR32_EIC_IER_INT0_OFFSET                                   0
#define AVR32_EIC_IER_INT0_SIZE                                     1
#define AVR32_EIC_IER_INT1                                          1
#define AVR32_EIC_IER_INT1_MASK                            0x00000002
#define AVR32_EIC_IER_INT1_OFFSET                                   1
#define AVR32_EIC_IER_INT1_SIZE                                     1
#define AVR32_EIC_IER_INT2                                          2
#define AVR32_EIC_IER_INT2_MASK                            0x00000004
#define AVR32_EIC_IER_INT2_OFFSET                                   2
#define AVR32_EIC_IER_INT2_SIZE                                     1
#define AVR32_EIC_IER_INT3                                          3
#define AVR32_EIC_IER_INT3_MASK                            0x00000008
#define AVR32_EIC_IER_INT3_OFFSET                                   3
#define AVR32_EIC_IER_INT3_SIZE                                     1
#define AVR32_EIC_IER_MASK                                 0x0000000f
#define AVR32_EIC_IER_RESETVALUE                           0x00000000
#define AVR32_EIC_IMR                                      0x00000008
#define AVR32_EIC_IMR_INT0                                          0
#define AVR32_EIC_IMR_INT0_MASK                            0x00000001
#define AVR32_EIC_IMR_INT0_OFFSET                                   0
#define AVR32_EIC_IMR_INT0_SIZE                                     1
#define AVR32_EIC_IMR_INT1                                          1
#define AVR32_EIC_IMR_INT1_MASK                            0x00000002
#define AVR32_EIC_IMR_INT1_OFFSET                                   1
#define AVR32_EIC_IMR_INT1_SIZE                                     1
#define AVR32_EIC_IMR_INT2                                          2
#define AVR32_EIC_IMR_INT2_MASK                            0x00000004
#define AVR32_EIC_IMR_INT2_OFFSET                                   2
#define AVR32_EIC_IMR_INT2_SIZE                                     1
#define AVR32_EIC_IMR_INT3                                          3
#define AVR32_EIC_IMR_INT3_MASK                            0x00000008
#define AVR32_EIC_IMR_INT3_OFFSET                                   3
#define AVR32_EIC_IMR_INT3_SIZE                                     1
#define AVR32_EIC_IMR_MASK                                 0x0000000f
#define AVR32_EIC_IMR_RESETVALUE                           0x00000000
#define AVR32_EIC_INT0                                              0
#define AVR32_EIC_INT0_MASK                                0x00000001
#define AVR32_EIC_INT0_OFFSET                                       0
#define AVR32_EIC_INT0_SIZE                                         1
#define AVR32_EIC_INT1                                              1
#define AVR32_EIC_INT1_MASK                                0x00000002
#define AVR32_EIC_INT1_OFFSET                                       1
#define AVR32_EIC_INT1_SIZE                                         1
#define AVR32_EIC_INT2                                              2
#define AVR32_EIC_INT2_MASK                                0x00000004
#define AVR32_EIC_INT2_OFFSET                                       2
#define AVR32_EIC_INT2_SIZE                                         1
#define AVR32_EIC_INT3                                              3
#define AVR32_EIC_INT3_MASK                                0x00000008
#define AVR32_EIC_INT3_OFFSET                                       3
#define AVR32_EIC_INT3_SIZE                                         1
#define AVR32_EIC_ISR                                      0x0000000c
#define AVR32_EIC_ISR_INT0                                          0
#define AVR32_EIC_ISR_INT0_MASK                            0x00000001
#define AVR32_EIC_ISR_INT0_OFFSET                                   0
#define AVR32_EIC_ISR_INT0_SIZE                                     1
#define AVR32_EIC_ISR_INT1                                          1
#define AVR32_EIC_ISR_INT1_MASK                            0x00000002
#define AVR32_EIC_ISR_INT1_OFFSET                                   1
#define AVR32_EIC_ISR_INT1_SIZE                                     1
#define AVR32_EIC_ISR_INT2                                          2
#define AVR32_EIC_ISR_INT2_MASK                            0x00000004
#define AVR32_EIC_ISR_INT2_OFFSET                                   2
#define AVR32_EIC_ISR_INT2_SIZE                                     1
#define AVR32_EIC_ISR_INT3                                          3
#define AVR32_EIC_ISR_INT3_MASK                            0x00000008
#define AVR32_EIC_ISR_INT3_OFFSET                                   3
#define AVR32_EIC_ISR_INT3_SIZE                                     1
#define AVR32_EIC_ISR_MASK                                 0x0000000f
#define AVR32_EIC_ISR_RESETVALUE                           0x00000000
#define AVR32_EIC_LEVEL                                    0x0000001c
#define AVR32_EIC_LEVEL_INT0                                        0
#define AVR32_EIC_LEVEL_INT0_MASK                          0x00000001
#define AVR32_EIC_LEVEL_INT0_OFFSET                                 0
#define AVR32_EIC_LEVEL_INT0_SIZE                                   1
#define AVR32_EIC_LEVEL_INT1                                        1
#define AVR32_EIC_LEVEL_INT1_MASK                          0x00000002
#define AVR32_EIC_LEVEL_INT1_OFFSET                                 1
#define AVR32_EIC_LEVEL_INT1_SIZE                                   1
#define AVR32_EIC_LEVEL_INT2                                        2
#define AVR32_EIC_LEVEL_INT2_MASK                          0x00000004
#define AVR32_EIC_LEVEL_INT2_OFFSET                                 2
#define AVR32_EIC_LEVEL_INT2_SIZE                                   1
#define AVR32_EIC_LEVEL_INT3                                        3
#define AVR32_EIC_LEVEL_INT3_MASK                          0x00000008
#define AVR32_EIC_LEVEL_INT3_OFFSET                                 3
#define AVR32_EIC_LEVEL_INT3_SIZE                                   1
#define AVR32_EIC_LEVEL_MASK                               0x0000000f
#define AVR32_EIC_LEVEL_RESETVALUE                         0x00000000
#define AVR32_EIC_MODE                                     0x00000014
#define AVR32_EIC_MODE_INT0                                         0
#define AVR32_EIC_MODE_INT0_MASK                           0x00000001
#define AVR32_EIC_MODE_INT0_OFFSET                                  0
#define AVR32_EIC_MODE_INT0_SIZE                                    1
#define AVR32_EIC_MODE_INT1                                         1
#define AVR32_EIC_MODE_INT1_MASK                           0x00000002
#define AVR32_EIC_MODE_INT1_OFFSET                                  1
#define AVR32_EIC_MODE_INT1_SIZE                                    1
#define AVR32_EIC_MODE_INT2                                         2
#define AVR32_EIC_MODE_INT2_MASK                           0x00000004
#define AVR32_EIC_MODE_INT2_OFFSET                                  2
#define AVR32_EIC_MODE_INT2_SIZE                                    1
#define AVR32_EIC_MODE_INT3                                         3
#define AVR32_EIC_MODE_INT3_MASK                           0x00000008
#define AVR32_EIC_MODE_INT3_OFFSET                                  3
#define AVR32_EIC_MODE_INT3_SIZE                                    1
#define AVR32_EIC_MODE_MASK                                0x0000000f
#define AVR32_EIC_MODE_RESETVALUE                          0x00000000
#define AVR32_EIC_NMIC                                     0x00000024
#define AVR32_EIC_NMIC_EN                                           0
#define AVR32_EIC_NMIC_EN_MASK                             0x00000001
#define AVR32_EIC_NMIC_EN_OFFSET                                    0
#define AVR32_EIC_NMIC_EN_SIZE                                      1
#define AVR32_EIC_NMIC_MASK                                0x00000001
#define AVR32_EIC_NMIC_RESETVALUE                          0x00000000
#define AVR32_EIC_TEST                                     0x00000020
#define AVR32_EIC_TESTEN                                           31
#define AVR32_EIC_TESTEN_MASK                              0x80000000
#define AVR32_EIC_TESTEN_OFFSET                                    31
#define AVR32_EIC_TESTEN_SIZE                                       1
#define AVR32_EIC_TEST_INT0                                         0
#define AVR32_EIC_TEST_INT0_MASK                           0x00000001
#define AVR32_EIC_TEST_INT0_OFFSET                                  0
#define AVR32_EIC_TEST_INT0_SIZE                                    1
#define AVR32_EIC_TEST_INT1                                         1
#define AVR32_EIC_TEST_INT1_MASK                           0x00000002
#define AVR32_EIC_TEST_INT1_OFFSET                                  1
#define AVR32_EIC_TEST_INT1_SIZE                                    1
#define AVR32_EIC_TEST_INT2                                         2
#define AVR32_EIC_TEST_INT2_MASK                           0x00000004
#define AVR32_EIC_TEST_INT2_OFFSET                                  2
#define AVR32_EIC_TEST_INT2_SIZE                                    1
#define AVR32_EIC_TEST_INT3                                         3
#define AVR32_EIC_TEST_INT3_MASK                           0x00000008
#define AVR32_EIC_TEST_INT3_OFFSET                                  3
#define AVR32_EIC_TEST_INT3_SIZE                                    1
#define AVR32_EIC_TEST_MASK                                0x8000000f
#define AVR32_EIC_TEST_RESETVALUE                          0x00000000
#define AVR32_EIC_TEST_TESTEN                                      31
#define AVR32_EIC_TEST_TESTEN_MASK                         0x80000000
#define AVR32_EIC_TEST_TESTEN_OFFSET                               31
#define AVR32_EIC_TEST_TESTEN_SIZE                                  1




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_eic_ier_t {
    unsigned int                 :28;
    unsigned int int3            : 1;
    unsigned int int2            : 1;
    unsigned int int1            : 1;
    unsigned int int0            : 1;
} avr32_eic_ier_t;



typedef struct avr32_eic_idr_t {
    unsigned int                 :28;
    unsigned int int3            : 1;
    unsigned int int2            : 1;
    unsigned int int1            : 1;
    unsigned int int0            : 1;
} avr32_eic_idr_t;



typedef struct avr32_eic_imr_t {
    unsigned int                 :28;
    unsigned int int3            : 1;
    unsigned int int2            : 1;
    unsigned int int1            : 1;
    unsigned int int0            : 1;
} avr32_eic_imr_t;



typedef struct avr32_eic_isr_t {
    unsigned int                 :28;
    unsigned int int3            : 1;
    unsigned int int2            : 1;
    unsigned int int1            : 1;
    unsigned int int0            : 1;
} avr32_eic_isr_t;



typedef struct avr32_eic_icr_t {
    unsigned int                 :28;
    unsigned int int3            : 1;
    unsigned int int2            : 1;
    unsigned int int1            : 1;
    unsigned int int0            : 1;
} avr32_eic_icr_t;



typedef struct avr32_eic_mode_t {
    unsigned int                 :28;
    unsigned int int3            : 1;
    unsigned int int2            : 1;
    unsigned int int1            : 1;
    unsigned int int0            : 1;
} avr32_eic_mode_t;



typedef struct avr32_eic_edge_t {
    unsigned int                 :28;
    unsigned int int3            : 1;
    unsigned int int2            : 1;
    unsigned int int1            : 1;
    unsigned int int0            : 1;
} avr32_eic_edge_t;



typedef struct avr32_eic_level_t {
    unsigned int                 :28;
    unsigned int int3            : 1;
    unsigned int int2            : 1;
    unsigned int int1            : 1;
    unsigned int int0            : 1;
} avr32_eic_level_t;



typedef struct avr32_eic_test_t {
    unsigned int testen          : 1;
    unsigned int                 :27;
    unsigned int int3            : 1;
    unsigned int int2            : 1;
    unsigned int int1            : 1;
    unsigned int int0            : 1;
} avr32_eic_test_t;



typedef struct avr32_eic_nmic_t {
    unsigned int                 :31;
    unsigned int en              : 1;
} avr32_eic_nmic_t;



typedef struct avr32_eic_t {
  union {
          unsigned long                  ier       ;//0x0000
          avr32_eic_ier_t                IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0004
          avr32_eic_idr_t                IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0008
    const avr32_eic_imr_t                IMR       ;
  };
  union {
    const unsigned long                  isr       ;//0x000c
    const avr32_eic_isr_t                ISR       ;
  };
  union {
          unsigned long                  icr       ;//0x0010
          avr32_eic_icr_t                ICR       ;
  };
  union {
          unsigned long                  mode      ;//0x0014
          avr32_eic_mode_t               MODE      ;
  };
  union {
          unsigned long                  edge      ;//0x0018
          avr32_eic_edge_t               EDGE      ;
  };
  union {
          unsigned long                  level     ;//0x001c
          avr32_eic_level_t              LEVEL     ;
  };
  union {
          unsigned long                  test      ;//0x0020
          avr32_eic_test_t               TEST      ;
  };
  union {
          unsigned long                  nmic      ;//0x0024
          avr32_eic_nmic_t               NMIC      ;
  };
} avr32_eic_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_EIC_100_H_INCLUDED*/
#endif

