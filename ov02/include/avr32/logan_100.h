/*****************************************************************************
 *
 * Copyright (C) 2008 Atmel Corporation
 * 
 * Model        : UC3000
 * Revision     : $Revision: 58751 $
 * Checkin Date : $Date: 2008-09-15 15:20:42 +0200 (Mon, 15 Sep 2008) $ 
 *
 ****************************************************************************/
#ifndef AVR32_LOGAN_100_H_INCLUDED
#define AVR32_LOGAN_100_H_INCLUDED

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_LOGAN_<register>
 - Bitfield mask:   AVR32_LOGAN_<register>_<bitfield>
 - Bitfield offset: AVR32_LOGAN_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_LOGAN_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_LOGAN_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_LOGAN_<bitfield>
 - Bitfield offset: AVR32_LOGAN_<bitfield>_OFFSET
 - Bitfield size:   AVR32_LOGAN_<bitfield>_SIZE
 - Bitfield values: AVR32_LOGAN_<bitfield>_<value name>
 - Bitfield values: AVR32_LOGAN_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_LOGAN_16BIT                                    0x00000004
#define AVR32_LOGAN_1BIT                                     0x00000000
#define AVR32_LOGAN_2BIT                                     0x00000001
#define AVR32_LOGAN_4BIT                                     0x00000002
#define AVR32_LOGAN_8BIT                                     0x00000003
#define AVR32_LOGAN_ALL                                      0x00000000
#define AVR32_LOGAN_BDIS                                              5
#define AVR32_LOGAN_BDIS_MASK                                0x00000020
#define AVR32_LOGAN_BDIS_OFFSET                                       5
#define AVR32_LOGAN_BDIS_SIZE                                         1
#define AVR32_LOGAN_BEN                                               4
#define AVR32_LOGAN_BEN_MASK                                 0x00000010
#define AVR32_LOGAN_BEN_OFFSET                                        4
#define AVR32_LOGAN_BEN_SIZE                                          1
#define AVR32_LOGAN_BLOCK                                             5
#define AVR32_LOGAN_BLOCK_MASK                               0x00000020
#define AVR32_LOGAN_BLOCK_OFFSET                                      5
#define AVR32_LOGAN_BLOCK_SIZE                                        1
#define AVR32_LOGAN_CFR                                      0x00000004
#define AVR32_LOGAN_CFR_EDGE                                          0
#define AVR32_LOGAN_CFR_EDGE_MASK                            0x00000001
#define AVR32_LOGAN_CFR_EDGE_NEG                             0x00000001
#define AVR32_LOGAN_CFR_EDGE_OFFSET                                   0
#define AVR32_LOGAN_CFR_EDGE_POS                             0x00000000
#define AVR32_LOGAN_CFR_EDGE_SIZE                                     1
#define AVR32_LOGAN_CFR_FLEN                                          8
#define AVR32_LOGAN_CFR_FLEN_16BIT                           0x00000004
#define AVR32_LOGAN_CFR_FLEN_1BIT                            0x00000000
#define AVR32_LOGAN_CFR_FLEN_2BIT                            0x00000001
#define AVR32_LOGAN_CFR_FLEN_4BIT                            0x00000002
#define AVR32_LOGAN_CFR_FLEN_8BIT                            0x00000003
#define AVR32_LOGAN_CFR_FLEN_MASK                            0x00000700
#define AVR32_LOGAN_CFR_FLEN_OFFSET                                   8
#define AVR32_LOGAN_CFR_FLEN_SIZE                                     3
#define AVR32_LOGAN_CFR_MASK                                 0x00000731
#define AVR32_LOGAN_CFR_MODE                                          4
#define AVR32_LOGAN_CFR_MODE_ALL                             0x00000000
#define AVR32_LOGAN_CFR_MODE_DIFF                            0x00000002
#define AVR32_LOGAN_CFR_MODE_MASK                            0x00000030
#define AVR32_LOGAN_CFR_MODE_OFFSET                                   4
#define AVR32_LOGAN_CFR_MODE_SIZE                                     2
#define AVR32_LOGAN_CFR_MODE_SKIP                            0x00000001
#define AVR32_LOGAN_CFR_MODE_TDIFF                           0x00000003
#define AVR32_LOGAN_CFR_RESETVALUE                           0x00000000
#define AVR32_LOGAN_CR                                       0x00000000
#define AVR32_LOGAN_CR_BDIS                                           5
#define AVR32_LOGAN_CR_BDIS_MASK                             0x00000020
#define AVR32_LOGAN_CR_BDIS_OFFSET                                    5
#define AVR32_LOGAN_CR_BDIS_SIZE                                      1
#define AVR32_LOGAN_CR_BEN                                            4
#define AVR32_LOGAN_CR_BEN_MASK                              0x00000010
#define AVR32_LOGAN_CR_BEN_OFFSET                                     4
#define AVR32_LOGAN_CR_BEN_SIZE                                       1
#define AVR32_LOGAN_CR_DIS                                            1
#define AVR32_LOGAN_CR_DIS_MASK                              0x00000002
#define AVR32_LOGAN_CR_DIS_OFFSET                                     1
#define AVR32_LOGAN_CR_DIS_SIZE                                       1
#define AVR32_LOGAN_CR_EN                                             0
#define AVR32_LOGAN_CR_EN_MASK                               0x00000001
#define AVR32_LOGAN_CR_EN_OFFSET                                      0
#define AVR32_LOGAN_CR_EN_SIZE                                        1
#define AVR32_LOGAN_CR_MASK                                  0x00000333
#define AVR32_LOGAN_CR_RESETVALUE                            0x00000000
#define AVR32_LOGAN_CR_START                                          8
#define AVR32_LOGAN_CR_START_MASK                            0x00000100
#define AVR32_LOGAN_CR_START_OFFSET                                   8
#define AVR32_LOGAN_CR_START_SIZE                                     1
#define AVR32_LOGAN_CR_STOP                                           9
#define AVR32_LOGAN_CR_STOP_MASK                             0x00000200
#define AVR32_LOGAN_CR_STOP_OFFSET                                    9
#define AVR32_LOGAN_CR_STOP_SIZE                                      1
#define AVR32_LOGAN_CSR                                      0x00000018
#define AVR32_LOGAN_CSR_CSSEL                                         8
#define AVR32_LOGAN_CSR_CSSEL_MASK                           0x00000300
#define AVR32_LOGAN_CSR_CSSEL_OFFSET                                  8
#define AVR32_LOGAN_CSR_CSSEL_SIZE                                    2
#define AVR32_LOGAN_CSR_FLUSH                                         1
#define AVR32_LOGAN_CSR_FLUSH_MASK                           0x00000002
#define AVR32_LOGAN_CSR_FLUSH_OFFSET                                  1
#define AVR32_LOGAN_CSR_FLUSH_SIZE                                    1
#define AVR32_LOGAN_CSR_MASK                                 0x00000302
#define AVR32_LOGAN_CSR_RESETVALUE                           0x00000000
#define AVR32_LOGAN_CSSEL                                             8
#define AVR32_LOGAN_CSSEL_MASK                               0x00000300
#define AVR32_LOGAN_CSSEL_OFFSET                                      8
#define AVR32_LOGAN_CSSEL_SIZE                                        2
#define AVR32_LOGAN_DATA                                     0x00000400
#define AVR32_LOGAN_DATA_MASK                                0x00000000
#define AVR32_LOGAN_DATA_RESETVALUE                          0x00000000
#define AVR32_LOGAN_DIFF                                     0x00000002
#define AVR32_LOGAN_DIS                                               1
#define AVR32_LOGAN_DIS_MASK                                 0x00000002
#define AVR32_LOGAN_DIS_OFFSET                                        1
#define AVR32_LOGAN_DIS_SIZE                                          1
#define AVR32_LOGAN_DONE                                              3
#define AVR32_LOGAN_DONE_MASK                                0x00000008
#define AVR32_LOGAN_DONE_OFFSET                                       3
#define AVR32_LOGAN_DONE_SIZE                                         1
#define AVR32_LOGAN_DRDY                                              4
#define AVR32_LOGAN_DRDY_MASK                                0x00000010
#define AVR32_LOGAN_DRDY_OFFSET                                       4
#define AVR32_LOGAN_DRDY_SIZE                                         1
#define AVR32_LOGAN_EDGE                                              0
#define AVR32_LOGAN_EDGE_MASK                                0x00000001
#define AVR32_LOGAN_EDGE_NEG                                 0x00000001
#define AVR32_LOGAN_EDGE_OFFSET                                       0
#define AVR32_LOGAN_EDGE_POS                                 0x00000000
#define AVR32_LOGAN_EDGE_SIZE                                         1
#define AVR32_LOGAN_EN                                                0
#define AVR32_LOGAN_END                                               0
#define AVR32_LOGAN_END_MASK                                 0x00ffffff
#define AVR32_LOGAN_END_OFFSET                                        0
#define AVR32_LOGAN_END_SIZE                                         24
#define AVR32_LOGAN_EN_MASK                                  0x00000001
#define AVR32_LOGAN_EN_OFFSET                                         0
#define AVR32_LOGAN_EN_SIZE                                           1
#define AVR32_LOGAN_ER                                       0x0000000c
#define AVR32_LOGAN_ER_END                                            0
#define AVR32_LOGAN_ER_END_MASK                              0x00ffffff
#define AVR32_LOGAN_ER_END_OFFSET                                     0
#define AVR32_LOGAN_ER_END_SIZE                                      24
#define AVR32_LOGAN_ER_MASK                                  0x00ffffff
#define AVR32_LOGAN_ER_RESETVALUE                            0x00000000
#define AVR32_LOGAN_FLEN                                              8
#define AVR32_LOGAN_FLEN_16BIT                               0x00000004
#define AVR32_LOGAN_FLEN_1BIT                                0x00000000
#define AVR32_LOGAN_FLEN_2BIT                                0x00000001
#define AVR32_LOGAN_FLEN_4BIT                                0x00000002
#define AVR32_LOGAN_FLEN_8BIT                                0x00000003
#define AVR32_LOGAN_FLEN_MASK                                0x00000700
#define AVR32_LOGAN_FLEN_OFFSET                                       8
#define AVR32_LOGAN_FLEN_SIZE                                         3
#define AVR32_LOGAN_FLUSH                                             1
#define AVR32_LOGAN_FLUSH_MASK                               0x00000002
#define AVR32_LOGAN_FLUSH_OFFSET                                      1
#define AVR32_LOGAN_FLUSH_SIZE                                        1
#define AVR32_LOGAN_IDR                                      0x00000024
#define AVR32_LOGAN_IDR_DONE                                          3
#define AVR32_LOGAN_IDR_DONE_MASK                            0x00000008
#define AVR32_LOGAN_IDR_DONE_OFFSET                                   3
#define AVR32_LOGAN_IDR_DONE_SIZE                                     1
#define AVR32_LOGAN_IDR_DRDY                                          4
#define AVR32_LOGAN_IDR_DRDY_MASK                            0x00000010
#define AVR32_LOGAN_IDR_DRDY_OFFSET                                   4
#define AVR32_LOGAN_IDR_DRDY_SIZE                                     1
#define AVR32_LOGAN_IDR_MASK                                 0x0000001c
#define AVR32_LOGAN_IDR_OVER                                          2
#define AVR32_LOGAN_IDR_OVER_MASK                            0x00000004
#define AVR32_LOGAN_IDR_OVER_OFFSET                                   2
#define AVR32_LOGAN_IDR_OVER_SIZE                                     1
#define AVR32_LOGAN_IDR_RESETVALUE                           0x00000000
#define AVR32_LOGAN_IER                                      0x00000020
#define AVR32_LOGAN_IER_DONE                                          3
#define AVR32_LOGAN_IER_DONE_MASK                            0x00000008
#define AVR32_LOGAN_IER_DONE_OFFSET                                   3
#define AVR32_LOGAN_IER_DONE_SIZE                                     1
#define AVR32_LOGAN_IER_DRDY                                          4
#define AVR32_LOGAN_IER_DRDY_MASK                            0x00000010
#define AVR32_LOGAN_IER_DRDY_OFFSET                                   4
#define AVR32_LOGAN_IER_DRDY_SIZE                                     1
#define AVR32_LOGAN_IER_MASK                                 0x0000001c
#define AVR32_LOGAN_IER_OVER                                          2
#define AVR32_LOGAN_IER_OVER_MASK                            0x00000004
#define AVR32_LOGAN_IER_OVER_OFFSET                                   2
#define AVR32_LOGAN_IER_OVER_SIZE                                     1
#define AVR32_LOGAN_IER_RESETVALUE                           0x00000000
#define AVR32_LOGAN_IFR                                      0x00000008
#define AVR32_LOGAN_IFRAME                                            0
#define AVR32_LOGAN_IFRAME_MASK                              0x0000ffff
#define AVR32_LOGAN_IFRAME_OFFSET                                     0
#define AVR32_LOGAN_IFRAME_SIZE                                      16
#define AVR32_LOGAN_IFR_IFRAME                                        0
#define AVR32_LOGAN_IFR_IFRAME_MASK                          0x0000ffff
#define AVR32_LOGAN_IFR_IFRAME_OFFSET                                 0
#define AVR32_LOGAN_IFR_IFRAME_SIZE                                  16
#define AVR32_LOGAN_IFR_MASK                                 0x0000ffff
#define AVR32_LOGAN_IFR_RESETVALUE                           0x00000000
#define AVR32_LOGAN_IMR                                      0x00000028
#define AVR32_LOGAN_IMR_DONE                                          3
#define AVR32_LOGAN_IMR_DONE_MASK                            0x00000008
#define AVR32_LOGAN_IMR_DONE_OFFSET                                   3
#define AVR32_LOGAN_IMR_DONE_SIZE                                     1
#define AVR32_LOGAN_IMR_DRDY                                          4
#define AVR32_LOGAN_IMR_DRDY_MASK                            0x00000010
#define AVR32_LOGAN_IMR_DRDY_OFFSET                                   4
#define AVR32_LOGAN_IMR_DRDY_SIZE                                     1
#define AVR32_LOGAN_IMR_MASK                                 0x0000001c
#define AVR32_LOGAN_IMR_OVER                                          2
#define AVR32_LOGAN_IMR_OVER_MASK                            0x00000004
#define AVR32_LOGAN_IMR_OVER_OFFSET                                   2
#define AVR32_LOGAN_IMR_OVER_SIZE                                     1
#define AVR32_LOGAN_IMR_RESETVALUE                           0x00000000
#define AVR32_LOGAN_MODE                                              4
#define AVR32_LOGAN_MODE_ALL                                 0x00000000
#define AVR32_LOGAN_MODE_DIFF                                0x00000002
#define AVR32_LOGAN_MODE_MASK                                0x00000030
#define AVR32_LOGAN_MODE_OFFSET                                       4
#define AVR32_LOGAN_MODE_SIZE                                         2
#define AVR32_LOGAN_MODE_SKIP                                0x00000001
#define AVR32_LOGAN_MODE_TDIFF                               0x00000003
#define AVR32_LOGAN_NEG                                      0x00000001
#define AVR32_LOGAN_OVER                                              2
#define AVR32_LOGAN_OVER_MASK                                0x00000004
#define AVR32_LOGAN_OVER_OFFSET                                       2
#define AVR32_LOGAN_OVER_SIZE                                         1
#define AVR32_LOGAN_POS                                      0x00000000
#define AVR32_LOGAN_READY                                             1
#define AVR32_LOGAN_READY_MASK                               0x00000002
#define AVR32_LOGAN_READY_OFFSET                                      1
#define AVR32_LOGAN_READY_SIZE                                        1
#define AVR32_LOGAN_SCR                                      0x00000014
#define AVR32_LOGAN_SCR_DONE                                          3
#define AVR32_LOGAN_SCR_DONE_MASK                            0x00000008
#define AVR32_LOGAN_SCR_DONE_OFFSET                                   3
#define AVR32_LOGAN_SCR_DONE_SIZE                                     1
#define AVR32_LOGAN_SCR_MASK                                 0x0000000c
#define AVR32_LOGAN_SCR_OVER                                          2
#define AVR32_LOGAN_SCR_OVER_MASK                            0x00000004
#define AVR32_LOGAN_SCR_OVER_OFFSET                                   2
#define AVR32_LOGAN_SCR_OVER_SIZE                                     1
#define AVR32_LOGAN_SCR_RESETVALUE                           0x00000000
#define AVR32_LOGAN_SKIP                                     0x00000001
#define AVR32_LOGAN_SR                                       0x00000010
#define AVR32_LOGAN_SR_BLOCK                                          5
#define AVR32_LOGAN_SR_BLOCK_MASK                            0x00000020
#define AVR32_LOGAN_SR_BLOCK_OFFSET                                   5
#define AVR32_LOGAN_SR_BLOCK_SIZE                                     1
#define AVR32_LOGAN_SR_DONE                                           3
#define AVR32_LOGAN_SR_DONE_MASK                             0x00000008
#define AVR32_LOGAN_SR_DONE_OFFSET                                    3
#define AVR32_LOGAN_SR_DONE_SIZE                                      1
#define AVR32_LOGAN_SR_DRDY                                           4
#define AVR32_LOGAN_SR_DRDY_MASK                             0x00000010
#define AVR32_LOGAN_SR_DRDY_OFFSET                                    4
#define AVR32_LOGAN_SR_DRDY_SIZE                                      1
#define AVR32_LOGAN_SR_EN                                             0
#define AVR32_LOGAN_SR_EN_MASK                               0x00000001
#define AVR32_LOGAN_SR_EN_OFFSET                                      0
#define AVR32_LOGAN_SR_EN_SIZE                                        1
#define AVR32_LOGAN_SR_MASK                                  0x0000003f
#define AVR32_LOGAN_SR_OVER                                           2
#define AVR32_LOGAN_SR_OVER_MASK                             0x00000004
#define AVR32_LOGAN_SR_OVER_OFFSET                                    2
#define AVR32_LOGAN_SR_OVER_SIZE                                      1
#define AVR32_LOGAN_SR_READY                                          1
#define AVR32_LOGAN_SR_READY_MASK                            0x00000002
#define AVR32_LOGAN_SR_READY_OFFSET                                   1
#define AVR32_LOGAN_SR_READY_SIZE                                     1
#define AVR32_LOGAN_SR_RESETVALUE                            0x00000000
#define AVR32_LOGAN_START                                             8
#define AVR32_LOGAN_START_MASK                               0x00000100
#define AVR32_LOGAN_START_OFFSET                                      8
#define AVR32_LOGAN_START_SIZE                                        1
#define AVR32_LOGAN_STOP                                              9
#define AVR32_LOGAN_STOP_MASK                                0x00000200
#define AVR32_LOGAN_STOP_OFFSET                                       9
#define AVR32_LOGAN_STOP_SIZE                                         1
#define AVR32_LOGAN_TDIFF                                    0x00000003




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_logan_cr_t {
    unsigned int                 :22;
    unsigned int stop            : 1;
    unsigned int start           : 1;
    unsigned int                 : 2;
    unsigned int bdis            : 1;
    unsigned int ben             : 1;
    unsigned int                 : 2;
    unsigned int dis             : 1;
    unsigned int en              : 1;
} avr32_logan_cr_t;



typedef struct avr32_logan_cfr_t {
    unsigned int                 :21;
    unsigned int flen            : 3;
    unsigned int                 : 2;
    unsigned int mode            : 2;
    unsigned int                 : 3;
    unsigned int edge            : 1;
} avr32_logan_cfr_t;



typedef struct avr32_logan_ifr_t {
    unsigned int                 :16;
    unsigned int iframe          :16;
} avr32_logan_ifr_t;



typedef struct avr32_logan_er_t {
    unsigned int                 : 8;
    unsigned int end             :24;
} avr32_logan_er_t;



typedef struct avr32_logan_sr_t {
    unsigned int                 :26;
    unsigned int block           : 1;
    unsigned int drdy            : 1;
    unsigned int done            : 1;
    unsigned int over            : 1;
    unsigned int ready           : 1;
    unsigned int en              : 1;
} avr32_logan_sr_t;



typedef struct avr32_logan_scr_t {
    unsigned int                 :28;
    unsigned int done            : 1;
    unsigned int over            : 1;
    unsigned int                 : 2;
} avr32_logan_scr_t;



typedef struct avr32_logan_csr_t {
    unsigned int                 :22;
    unsigned int cssel           : 2;
    unsigned int                 : 6;
    unsigned int flush           : 1;
    unsigned int                 : 1;
} avr32_logan_csr_t;



typedef struct avr32_logan_ier_t {
    unsigned int                 :27;
    unsigned int drdy            : 1;
    unsigned int done            : 1;
    unsigned int over            : 1;
    unsigned int                 : 2;
} avr32_logan_ier_t;



typedef struct avr32_logan_idr_t {
    unsigned int                 :27;
    unsigned int drdy            : 1;
    unsigned int done            : 1;
    unsigned int over            : 1;
    unsigned int                 : 2;
} avr32_logan_idr_t;



typedef struct avr32_logan_imr_t {
    unsigned int                 :27;
    unsigned int drdy            : 1;
    unsigned int done            : 1;
    unsigned int over            : 1;
    unsigned int                 : 2;
} avr32_logan_imr_t;



typedef struct avr32_logan_t {
  union {
          unsigned long                  cr        ;//0x0000
          avr32_logan_cr_t               CR        ;
  };
  union {
          unsigned long                  cfr       ;//0x0004
          avr32_logan_cfr_t              CFR       ;
  };
  union {
          unsigned long                  ifr       ;//0x0008
          avr32_logan_ifr_t              IFR       ;
  };
  union {
          unsigned long                  er        ;//0x000c
          avr32_logan_er_t               ER        ;
  };
  union {
          unsigned long                  sr        ;//0x0010
          avr32_logan_sr_t               SR        ;
  };
  union {
          unsigned long                  scr       ;//0x0014
          avr32_logan_scr_t              SCR       ;
  };
  union {
          unsigned long                  csr       ;//0x0018
          avr32_logan_csr_t              CSR       ;
  };
          unsigned int                   :32       ;//0x001c
  union {
          unsigned long                  ier       ;//0x0020
          avr32_logan_ier_t              IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0024
          avr32_logan_idr_t              IDR       ;
  };
  union {
          unsigned long                  imr       ;//0x0028
          avr32_logan_imr_t              IMR       ;
  };
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
          unsigned int                   :32       ;//0x0200
          unsigned int                   :32       ;//0x0204
          unsigned int                   :32       ;//0x0208
          unsigned int                   :32       ;//0x020c
          unsigned int                   :32       ;//0x0210
          unsigned int                   :32       ;//0x0214
          unsigned int                   :32       ;//0x0218
          unsigned int                   :32       ;//0x021c
          unsigned int                   :32       ;//0x0220
          unsigned int                   :32       ;//0x0224
          unsigned int                   :32       ;//0x0228
          unsigned int                   :32       ;//0x022c
          unsigned int                   :32       ;//0x0230
          unsigned int                   :32       ;//0x0234
          unsigned int                   :32       ;//0x0238
          unsigned int                   :32       ;//0x023c
          unsigned int                   :32       ;//0x0240
          unsigned int                   :32       ;//0x0244
          unsigned int                   :32       ;//0x0248
          unsigned int                   :32       ;//0x024c
          unsigned int                   :32       ;//0x0250
          unsigned int                   :32       ;//0x0254
          unsigned int                   :32       ;//0x0258
          unsigned int                   :32       ;//0x025c
          unsigned int                   :32       ;//0x0260
          unsigned int                   :32       ;//0x0264
          unsigned int                   :32       ;//0x0268
          unsigned int                   :32       ;//0x026c
          unsigned int                   :32       ;//0x0270
          unsigned int                   :32       ;//0x0274
          unsigned int                   :32       ;//0x0278
          unsigned int                   :32       ;//0x027c
          unsigned int                   :32       ;//0x0280
          unsigned int                   :32       ;//0x0284
          unsigned int                   :32       ;//0x0288
          unsigned int                   :32       ;//0x028c
          unsigned int                   :32       ;//0x0290
          unsigned int                   :32       ;//0x0294
          unsigned int                   :32       ;//0x0298
          unsigned int                   :32       ;//0x029c
          unsigned int                   :32       ;//0x02a0
          unsigned int                   :32       ;//0x02a4
          unsigned int                   :32       ;//0x02a8
          unsigned int                   :32       ;//0x02ac
          unsigned int                   :32       ;//0x02b0
          unsigned int                   :32       ;//0x02b4
          unsigned int                   :32       ;//0x02b8
          unsigned int                   :32       ;//0x02bc
          unsigned int                   :32       ;//0x02c0
          unsigned int                   :32       ;//0x02c4
          unsigned int                   :32       ;//0x02c8
          unsigned int                   :32       ;//0x02cc
          unsigned int                   :32       ;//0x02d0
          unsigned int                   :32       ;//0x02d4
          unsigned int                   :32       ;//0x02d8
          unsigned int                   :32       ;//0x02dc
          unsigned int                   :32       ;//0x02e0
          unsigned int                   :32       ;//0x02e4
          unsigned int                   :32       ;//0x02e8
          unsigned int                   :32       ;//0x02ec
          unsigned int                   :32       ;//0x02f0
          unsigned int                   :32       ;//0x02f4
          unsigned int                   :32       ;//0x02f8
          unsigned int                   :32       ;//0x02fc
          unsigned int                   :32       ;//0x0300
          unsigned int                   :32       ;//0x0304
          unsigned int                   :32       ;//0x0308
          unsigned int                   :32       ;//0x030c
          unsigned int                   :32       ;//0x0310
          unsigned int                   :32       ;//0x0314
          unsigned int                   :32       ;//0x0318
          unsigned int                   :32       ;//0x031c
          unsigned int                   :32       ;//0x0320
          unsigned int                   :32       ;//0x0324
          unsigned int                   :32       ;//0x0328
          unsigned int                   :32       ;//0x032c
          unsigned int                   :32       ;//0x0330
          unsigned int                   :32       ;//0x0334
          unsigned int                   :32       ;//0x0338
          unsigned int                   :32       ;//0x033c
          unsigned int                   :32       ;//0x0340
          unsigned int                   :32       ;//0x0344
          unsigned int                   :32       ;//0x0348
          unsigned int                   :32       ;//0x034c
          unsigned int                   :32       ;//0x0350
          unsigned int                   :32       ;//0x0354
          unsigned int                   :32       ;//0x0358
          unsigned int                   :32       ;//0x035c
          unsigned int                   :32       ;//0x0360
          unsigned int                   :32       ;//0x0364
          unsigned int                   :32       ;//0x0368
          unsigned int                   :32       ;//0x036c
          unsigned int                   :32       ;//0x0370
          unsigned int                   :32       ;//0x0374
          unsigned int                   :32       ;//0x0378
          unsigned int                   :32       ;//0x037c
          unsigned int                   :32       ;//0x0380
          unsigned int                   :32       ;//0x0384
          unsigned int                   :32       ;//0x0388
          unsigned int                   :32       ;//0x038c
          unsigned int                   :32       ;//0x0390
          unsigned int                   :32       ;//0x0394
          unsigned int                   :32       ;//0x0398
          unsigned int                   :32       ;//0x039c
          unsigned int                   :32       ;//0x03a0
          unsigned int                   :32       ;//0x03a4
          unsigned int                   :32       ;//0x03a8
          unsigned int                   :32       ;//0x03ac
          unsigned int                   :32       ;//0x03b0
          unsigned int                   :32       ;//0x03b4
          unsigned int                   :32       ;//0x03b8
          unsigned int                   :32       ;//0x03bc
          unsigned int                   :32       ;//0x03c0
          unsigned int                   :32       ;//0x03c4
          unsigned int                   :32       ;//0x03c8
          unsigned int                   :32       ;//0x03cc
          unsigned int                   :32       ;//0x03d0
          unsigned int                   :32       ;//0x03d4
          unsigned int                   :32       ;//0x03d8
          unsigned int                   :32       ;//0x03dc
          unsigned int                   :32       ;//0x03e0
          unsigned int                   :32       ;//0x03e4
          unsigned int                   :32       ;//0x03e8
          unsigned int                   :32       ;//0x03ec
          unsigned int                   :32       ;//0x03f0
          unsigned int                   :32       ;//0x03f4
          unsigned int                   :32       ;//0x03f8
          unsigned int                   :32       ;//0x03fc
    const unsigned long                  data      ;//0x0400
} avr32_logan_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_LOGAN_100_H_INCLUDED*/
#endif

