/*****************************************************************************
 *
 * Copyright (C) 2008 Atmel Corporation
 * 
 * Model        : UC3000
 * Revision     : $Revision: 58751 $
 * Checkin Date : $Date: 2008-09-15 15:20:42 +0200 (Mon, 15 Sep 2008) $ 
 *
 ****************************************************************************/
#ifndef AVR32_AWM_100_H_INCLUDED
#define AVR32_AWM_100_H_INCLUDED

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_AWM_<register>
 - Bitfield mask:   AVR32_AWM_<register>_<bitfield>
 - Bitfield offset: AVR32_AWM_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_AWM_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_AWM_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_AWM_<bitfield>
 - Bitfield offset: AVR32_AWM_<bitfield>_OFFSET
 - Bitfield size:   AVR32_AWM_<bitfield>_SIZE
 - Bitfield values: AVR32_AWM_<bitfield>_<value name>
 - Bitfield values: AVR32_AWM_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_AWM_AWM                                      0x00000003
#define AVR32_AWM_AWMRESYNC                                0x00000004
#define AVR32_AWM_BR                                                0
#define AVR32_AWM_BRR                                      0x00000020
#define AVR32_AWM_BRR_BR                                            0
#define AVR32_AWM_BRR_BR_MASK                              0x0000ffff
#define AVR32_AWM_BRR_BR_OFFSET                                     0
#define AVR32_AWM_BRR_BR_SIZE                                      16
#define AVR32_AWM_BRR_MASK                                 0x0000ffff
#define AVR32_AWM_BRR_RESETVALUE                           0x00000000
#define AVR32_AWM_BR_MASK                                  0x0000ffff
#define AVR32_AWM_BR_OFFSET                                         0
#define AVR32_AWM_BR_SIZE                                          16
#define AVR32_AWM_BUSY                                              0
#define AVR32_AWM_BUSYINTCLEAR                                      8
#define AVR32_AWM_BUSYINTCLEAR_MASK                        0x00000100
#define AVR32_AWM_BUSYINTCLEAR_OFFSET                               8
#define AVR32_AWM_BUSYINTCLEAR_SIZE                                 1
#define AVR32_AWM_BUSY_MASK                                0x00000001
#define AVR32_AWM_BUSY_OFFSET                                       0
#define AVR32_AWM_BUSY_SIZE                                         1
#define AVR32_AWM_CRCERROR                                         11
#define AVR32_AWM_CRCERRORCLEAR                                    11
#define AVR32_AWM_CRCERRORCLEAR_MASK                       0x00000800
#define AVR32_AWM_CRCERRORCLEAR_OFFSET                             11
#define AVR32_AWM_CRCERRORCLEAR_SIZE                                1
#define AVR32_AWM_CRCERROR_MASK                            0x00000800
#define AVR32_AWM_CRCERROR_OFFSET                                  11
#define AVR32_AWM_CRCERROR_SIZE                                     1
#define AVR32_AWM_CRCOK                                            12
#define AVR32_AWM_CRCOKCLEAR                                       12
#define AVR32_AWM_CRCOKCLEAR_MASK                          0x00001000
#define AVR32_AWM_CRCOKCLEAR_OFFSET                                12
#define AVR32_AWM_CRCOKCLEAR_SIZE                                   1
#define AVR32_AWM_CRCOK_MASK                               0x00001000
#define AVR32_AWM_CRCOK_OFFSET                                     12
#define AVR32_AWM_CRCOK_SIZE                                        1
#define AVR32_AWM_CTRL                                     0x00000000
#define AVR32_AWM_CTRL_MASK                                0x00000003
#define AVR32_AWM_CTRL_MODE                                         0
#define AVR32_AWM_CTRL_MODE_AWM                            0x00000003
#define AVR32_AWM_CTRL_MODE_AWMRESYNC                      0x00000004
#define AVR32_AWM_CTRL_MODE_DISABLED                       0x00000000
#define AVR32_AWM_CTRL_MODE_MASK                           0x00000003
#define AVR32_AWM_CTRL_MODE_OFFSET                                  0
#define AVR32_AWM_CTRL_MODE_RECEIVE                        0x00000001
#define AVR32_AWM_CTRL_MODE_SIZE                                    2
#define AVR32_AWM_CTRL_MODE_TRANSMIT                       0x00000002
#define AVR32_AWM_CTRL_RESETVALUE                          0x00000000
#define AVR32_AWM_DATAREADY                                         1
#define AVR32_AWM_DATAREADYINT                                      9
#define AVR32_AWM_DATAREADYINTCLEAR                                 9
#define AVR32_AWM_DATAREADYINTCLEAR_MASK                   0x00000200
#define AVR32_AWM_DATAREADYINTCLEAR_OFFSET                          9
#define AVR32_AWM_DATAREADYINTCLEAR_SIZE                            1
#define AVR32_AWM_DATAREADYINT_MASK                        0x00000200
#define AVR32_AWM_DATAREADYINT_OFFSET                               9
#define AVR32_AWM_DATAREADYINT_SIZE                                 1
#define AVR32_AWM_DATAREADY_MASK                           0x00000002
#define AVR32_AWM_DATAREADY_OFFSET                                  1
#define AVR32_AWM_DATAREADY_SIZE                                    1
#define AVR32_AWM_DISABLED                                 0x00000000
#define AVR32_AWM_IDR                                      0x00000010
#define AVR32_AWM_IDR_MASK                                 0x00000000
#define AVR32_AWM_IDR_RESETVALUE                           0x00000000
#define AVR32_AWM_IER                                      0x0000000c
#define AVR32_AWM_IER_MASK                                 0x00000000
#define AVR32_AWM_IER_RESETVALUE                           0x00000000
#define AVR32_AWM_IMR                                      0x00000014
#define AVR32_AWM_IMR_MASK                                 0x00000000
#define AVR32_AWM_IMR_RESETVALUE                           0x00000000
#define AVR32_AWM_MODE                                              0
#define AVR32_AWM_MODE_AWM                                 0x00000003
#define AVR32_AWM_MODE_AWMRESYNC                           0x00000004
#define AVR32_AWM_MODE_DISABLED                            0x00000000
#define AVR32_AWM_MODE_MASK                                0x00000003
#define AVR32_AWM_MODE_OFFSET                                       0
#define AVR32_AWM_MODE_RECEIVE                             0x00000001
#define AVR32_AWM_MODE_SIZE                                         2
#define AVR32_AWM_MODE_TRANSMIT                            0x00000002
#define AVR32_AWM_OVERRUN                                          10
#define AVR32_AWM_OVERRUNCLEAR                                     10
#define AVR32_AWM_OVERRUNCLEAR_MASK                        0x00000400
#define AVR32_AWM_OVERRUNCLEAR_OFFSET                              10
#define AVR32_AWM_OVERRUNCLEAR_SIZE                                 1
#define AVR32_AWM_OVERRUN_MASK                             0x00000400
#define AVR32_AWM_OVERRUN_OFFSET                                   10
#define AVR32_AWM_OVERRUN_SIZE                                      1
#define AVR32_AWM_READYINT                                          8
#define AVR32_AWM_READYINT_MASK                            0x00000100
#define AVR32_AWM_READYINT_OFFSET                                   8
#define AVR32_AWM_READYINT_SIZE                                     1
#define AVR32_AWM_RECEIVE                                  0x00000001
#define AVR32_AWM_RHR                                      0x00000018
#define AVR32_AWM_RHR_MASK                                 0x000000ff
#define AVR32_AWM_RHR_RESETVALUE                           0x00000000
#define AVR32_AWM_RHR_RXDATA                                        0
#define AVR32_AWM_RHR_RXDATA_MASK                          0x000000ff
#define AVR32_AWM_RHR_RXDATA_OFFSET                                 0
#define AVR32_AWM_RHR_RXDATA_SIZE                                   8
#define AVR32_AWM_RXDATA                                            0
#define AVR32_AWM_RXDATA_MASK                              0x000000ff
#define AVR32_AWM_RXDATA_OFFSET                                     0
#define AVR32_AWM_RXDATA_SIZE                                       8
#define AVR32_AWM_SCR                                      0x00000008
#define AVR32_AWM_SCR_BUSYINTCLEAR                                  8
#define AVR32_AWM_SCR_BUSYINTCLEAR_MASK                    0x00000100
#define AVR32_AWM_SCR_BUSYINTCLEAR_OFFSET                           8
#define AVR32_AWM_SCR_BUSYINTCLEAR_SIZE                             1
#define AVR32_AWM_SCR_CRCERRORCLEAR                                11
#define AVR32_AWM_SCR_CRCERRORCLEAR_MASK                   0x00000800
#define AVR32_AWM_SCR_CRCERRORCLEAR_OFFSET                         11
#define AVR32_AWM_SCR_CRCERRORCLEAR_SIZE                            1
#define AVR32_AWM_SCR_CRCOKCLEAR                                   12
#define AVR32_AWM_SCR_CRCOKCLEAR_MASK                      0x00001000
#define AVR32_AWM_SCR_CRCOKCLEAR_OFFSET                            12
#define AVR32_AWM_SCR_CRCOKCLEAR_SIZE                               1
#define AVR32_AWM_SCR_DATAREADYINTCLEAR                             9
#define AVR32_AWM_SCR_DATAREADYINTCLEAR_MASK               0x00000200
#define AVR32_AWM_SCR_DATAREADYINTCLEAR_OFFSET                      9
#define AVR32_AWM_SCR_DATAREADYINTCLEAR_SIZE                        1
#define AVR32_AWM_SCR_MASK                                 0x00003f00
#define AVR32_AWM_SCR_OVERRUNCLEAR                                 10
#define AVR32_AWM_SCR_OVERRUNCLEAR_MASK                    0x00000400
#define AVR32_AWM_SCR_OVERRUNCLEAR_OFFSET                          10
#define AVR32_AWM_SCR_OVERRUNCLEAR_SIZE                             1
#define AVR32_AWM_SCR_RESETVALUE                           0x00000000
#define AVR32_AWM_SCR_TRANSMITMISMATCHCLEAR                        13
#define AVR32_AWM_SCR_TRANSMITMISMATCHCLEAR_MASK           0x00002000
#define AVR32_AWM_SCR_TRANSMITMISMATCHCLEAR_OFFSET                 13
#define AVR32_AWM_SCR_TRANSMITMISMATCHCLEAR_SIZE                    1
#define AVR32_AWM_SR                                       0x00000004
#define AVR32_AWM_SR_BUSY                                           0
#define AVR32_AWM_SR_BUSY_MASK                             0x00000001
#define AVR32_AWM_SR_BUSY_OFFSET                                    0
#define AVR32_AWM_SR_BUSY_SIZE                                      1
#define AVR32_AWM_SR_CRCERROR                                      11
#define AVR32_AWM_SR_CRCERROR_MASK                         0x00000800
#define AVR32_AWM_SR_CRCERROR_OFFSET                               11
#define AVR32_AWM_SR_CRCERROR_SIZE                                  1
#define AVR32_AWM_SR_CRCOK                                         12
#define AVR32_AWM_SR_CRCOK_MASK                            0x00001000
#define AVR32_AWM_SR_CRCOK_OFFSET                                  12
#define AVR32_AWM_SR_CRCOK_SIZE                                     1
#define AVR32_AWM_SR_DATAREADY                                      1
#define AVR32_AWM_SR_DATAREADYINT                                   9
#define AVR32_AWM_SR_DATAREADYINT_MASK                     0x00000200
#define AVR32_AWM_SR_DATAREADYINT_OFFSET                            9
#define AVR32_AWM_SR_DATAREADYINT_SIZE                              1
#define AVR32_AWM_SR_DATAREADY_MASK                        0x00000002
#define AVR32_AWM_SR_DATAREADY_OFFSET                               1
#define AVR32_AWM_SR_DATAREADY_SIZE                                 1
#define AVR32_AWM_SR_MASK                                  0x00003f03
#define AVR32_AWM_SR_OVERRUN                                       10
#define AVR32_AWM_SR_OVERRUN_MASK                          0x00000400
#define AVR32_AWM_SR_OVERRUN_OFFSET                                10
#define AVR32_AWM_SR_OVERRUN_SIZE                                   1
#define AVR32_AWM_SR_READYINT                                       8
#define AVR32_AWM_SR_READYINT_MASK                         0x00000100
#define AVR32_AWM_SR_READYINT_OFFSET                                8
#define AVR32_AWM_SR_READYINT_SIZE                                  1
#define AVR32_AWM_SR_RESETVALUE                            0x00000000
#define AVR32_AWM_SR_TRANSMITMISMATCH                              13
#define AVR32_AWM_SR_TRANSMITMISMATCH_MASK                 0x00002000
#define AVR32_AWM_SR_TRANSMITMISMATCH_OFFSET                       13
#define AVR32_AWM_SR_TRANSMITMISMATCH_SIZE                          1
#define AVR32_AWM_THR                                      0x0000001c
#define AVR32_AWM_THR_MASK                                 0x000000ff
#define AVR32_AWM_THR_RESETVALUE                           0x00000000
#define AVR32_AWM_THR_TXDATA                                        0
#define AVR32_AWM_THR_TXDATA_MASK                          0x000000ff
#define AVR32_AWM_THR_TXDATA_OFFSET                                 0
#define AVR32_AWM_THR_TXDATA_SIZE                                   8
#define AVR32_AWM_TRANSMIT                                 0x00000002
#define AVR32_AWM_TRANSMITMISMATCH                                 13
#define AVR32_AWM_TRANSMITMISMATCHCLEAR                            13
#define AVR32_AWM_TRANSMITMISMATCHCLEAR_MASK               0x00002000
#define AVR32_AWM_TRANSMITMISMATCHCLEAR_OFFSET                     13
#define AVR32_AWM_TRANSMITMISMATCHCLEAR_SIZE                        1
#define AVR32_AWM_TRANSMITMISMATCH_MASK                    0x00002000
#define AVR32_AWM_TRANSMITMISMATCH_OFFSET                          13
#define AVR32_AWM_TRANSMITMISMATCH_SIZE                             1
#define AVR32_AWM_TXDATA                                            0
#define AVR32_AWM_TXDATA_MASK                              0x000000ff
#define AVR32_AWM_TXDATA_OFFSET                                     0
#define AVR32_AWM_TXDATA_SIZE                                       8
#define AVR32_AWM_VERSION                                  0x00000024
#define AVR32_AWM_VERSION_MASK                             0x00000000
#define AVR32_AWM_VERSION_RESETVALUE                       0x00000000




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_awm_ctrl_t {
    unsigned int                 :30;
    unsigned int mode            : 2;
} avr32_awm_ctrl_t;



typedef struct avr32_awm_sr_t {
    unsigned int                 :18;
    unsigned int transmitmismatch : 1;
    unsigned int crcok           : 1;
    unsigned int crcerror        : 1;
    unsigned int overrun         : 1;
    unsigned int datareadyint    : 1;
    unsigned int readyint        : 1;
    unsigned int                 : 6;
    unsigned int dataready       : 1;
    unsigned int busy            : 1;
} avr32_awm_sr_t;



typedef struct avr32_awm_scr_t {
    unsigned int                 :18;
    unsigned int transmitmismatchclear : 1;
    unsigned int crcokclear      : 1;
    unsigned int crcerrorclear   : 1;
    unsigned int overrunclear    : 1;
    unsigned int datareadyintclear : 1;
    unsigned int busyintclear    : 1;
    unsigned int                 : 8;
} avr32_awm_scr_t;



typedef struct avr32_awm_rhr_t {
    unsigned int                 :24;
    unsigned int rxdata          : 8;
} avr32_awm_rhr_t;



typedef struct avr32_awm_thr_t {
    unsigned int                 :24;
    unsigned int txdata          : 8;
} avr32_awm_thr_t;



typedef struct avr32_awm_brr_t {
    unsigned int                 :16;
    unsigned int br              :16;
} avr32_awm_brr_t;



typedef struct avr32_awm_t {
  union {
          unsigned long                  ctrl      ;//0x0000
          avr32_awm_ctrl_t               CTRL      ;
  };
  union {
    const unsigned long                  sr        ;//0x0004
    const avr32_awm_sr_t                 SR        ;
  };
  union {
          unsigned long                  scr       ;//0x0008
          avr32_awm_scr_t                SCR       ;
  };
          unsigned long                  ier       ;//0x000c
          unsigned long                  idr       ;//0x0010
    const unsigned long                  imr       ;//0x0014
  union {
    const unsigned long                  rhr       ;//0x0018
    const avr32_awm_rhr_t                RHR       ;
  };
  union {
          unsigned long                  thr       ;//0x001c
          avr32_awm_thr_t                THR       ;
  };
  union {
          unsigned long                  brr       ;//0x0020
          avr32_awm_brr_t                BRR       ;
  };
    const unsigned long                  version   ;//0x0024
} avr32_awm_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_AWM_100_H_INCLUDED*/
#endif

