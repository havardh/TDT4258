/*****************************************************************************
 *
 * Copyright (C) 2008 Atmel Corporation
 * 
 * Model        : UC3000
 * Revision     : $Revision: 58751 $
 * Checkin Date : $Date: 2008-09-15 15:20:42 +0200 (Mon, 15 Sep 2008) $ 
 *
 ****************************************************************************/
#ifndef AVR32_JTAGM_100_H_INCLUDED
#define AVR32_JTAGM_100_H_INCLUDED

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_JTAGM_<register>
 - Bitfield mask:   AVR32_JTAGM_<register>_<bitfield>
 - Bitfield offset: AVR32_JTAGM_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_JTAGM_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_JTAGM_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_JTAGM_<bitfield>
 - Bitfield offset: AVR32_JTAGM_<bitfield>_OFFSET
 - Bitfield size:   AVR32_JTAGM_<bitfield>_SIZE
 - Bitfield values: AVR32_JTAGM_<bitfield>_<value name>
 - Bitfield values: AVR32_JTAGM_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_JTAGM_AVR32_HALT                               0x0000000a
#define AVR32_JTAGM_AVR32_RESET                              0x0000000b
#define AVR32_JTAGM_BASIC                                    0x00000003
#define AVR32_JTAGM_BUSY                                              5
#define AVR32_JTAGM_BUSY_MASK                                0x00000020
#define AVR32_JTAGM_BUSY_OFFSET                                       5
#define AVR32_JTAGM_BUSY_SIZE                                         1
#define AVR32_JTAGM_CCMODE                                            4
#define AVR32_JTAGM_CCMODE_MASK                              0x00000010
#define AVR32_JTAGM_CCMODE_OFFSET                                     4
#define AVR32_JTAGM_CCMODE_SIZE                                       1
#define AVR32_JTAGM_CINST                                            16
#define AVR32_JTAGM_CINST_MASK                               0x00ff0000
#define AVR32_JTAGM_CINST_OFFSET                                     16
#define AVR32_JTAGM_CINST_SIZE                                        8
#define AVR32_JTAGM_CMD                                               0
#define AVR32_JTAGM_CMDR                                     0x00000040
#define AVR32_JTAGM_CMDR_CMD                                          0
#define AVR32_JTAGM_CMDR_CMD_AVR32_HALT                      0x0000000a
#define AVR32_JTAGM_CMDR_CMD_AVR32_RESET                     0x0000000b
#define AVR32_JTAGM_CMDR_CMD_BASIC                           0x00000003
#define AVR32_JTAGM_CMDR_CMD_COUNT                           0x00000002
#define AVR32_JTAGM_CMDR_CMD_DATA                            0x00000005
#define AVR32_JTAGM_CMDR_CMD_DATAL                           0x00000006
#define AVR32_JTAGM_CMDR_CMD_DMA_BYTE                        0x00000009
#define AVR32_JTAGM_CMDR_CMD_DMA_HWORD                       0x00000008
#define AVR32_JTAGM_CMDR_CMD_DMA_WORD                        0x00000007
#define AVR32_JTAGM_CMDR_CMD_INSTR                           0x00000004
#define AVR32_JTAGM_CMDR_CMD_MASK                            0x000000ff
#define AVR32_JTAGM_CMDR_CMD_MEM_ACCESS                      0x0000000e
#define AVR32_JTAGM_CMDR_CMD_MEM_BLOCK                       0x00000010
#define AVR32_JTAGM_CMDR_CMD_MEM_SERVICE                     0x0000000d
#define AVR32_JTAGM_CMDR_CMD_MEM_WACCESS                     0x0000000f
#define AVR32_JTAGM_CMDR_CMD_NEXUS                           0x0000000c
#define AVR32_JTAGM_CMDR_CMD_OFFSET                                   0
#define AVR32_JTAGM_CMDR_CMD_RESET                           0x00000001
#define AVR32_JTAGM_CMDR_CMD_SIZE                                     8
#define AVR32_JTAGM_CMDR_MASK                                0xffff00ff
#define AVR32_JTAGM_CMDR_OPT                                         16
#define AVR32_JTAGM_CMDR_OPTB                                        24
#define AVR32_JTAGM_CMDR_OPTB_MASK                           0xff000000
#define AVR32_JTAGM_CMDR_OPTB_OFFSET                                 24
#define AVR32_JTAGM_CMDR_OPTB_SIZE                                    8
#define AVR32_JTAGM_CMDR_OPT_MASK                            0x00ff0000
#define AVR32_JTAGM_CMDR_OPT_OFFSET                                  16
#define AVR32_JTAGM_CMDR_OPT_SIZE                                     8
#define AVR32_JTAGM_CMDR_RESETVALUE                          0x00000000
#define AVR32_JTAGM_CMD_AVR32_HALT                           0x0000000a
#define AVR32_JTAGM_CMD_AVR32_RESET                          0x0000000b
#define AVR32_JTAGM_CMD_BASIC                                0x00000003
#define AVR32_JTAGM_CMD_COUNT                                0x00000002
#define AVR32_JTAGM_CMD_DATA                                 0x00000005
#define AVR32_JTAGM_CMD_DATAL                                0x00000006
#define AVR32_JTAGM_CMD_DMA_BYTE                             0x00000009
#define AVR32_JTAGM_CMD_DMA_HWORD                            0x00000008
#define AVR32_JTAGM_CMD_DMA_WORD                             0x00000007
#define AVR32_JTAGM_CMD_INSTR                                0x00000004
#define AVR32_JTAGM_CMD_MASK                                 0x000000ff
#define AVR32_JTAGM_CMD_MEM_ACCESS                           0x0000000e
#define AVR32_JTAGM_CMD_MEM_BLOCK                            0x00000010
#define AVR32_JTAGM_CMD_MEM_SERVICE                          0x0000000d
#define AVR32_JTAGM_CMD_MEM_WACCESS                          0x0000000f
#define AVR32_JTAGM_CMD_NEXUS                                0x0000000c
#define AVR32_JTAGM_CMD_OFFSET                                        0
#define AVR32_JTAGM_CMD_RESET                                0x00000001
#define AVR32_JTAGM_CMD_SIZE                                          8
#define AVR32_JTAGM_COUNT                                    0x00000002
#define AVR32_JTAGM_CR                                       0x00000000
#define AVR32_JTAGM_CR_CCMODE                                         4
#define AVR32_JTAGM_CR_CCMODE_MASK                           0x00000010
#define AVR32_JTAGM_CR_CCMODE_OFFSET                                  4
#define AVR32_JTAGM_CR_CCMODE_SIZE                                    1
#define AVR32_JTAGM_CR_DIVSEL                                         8
#define AVR32_JTAGM_CR_DIVSEL_MASK                           0x00ffff00
#define AVR32_JTAGM_CR_DIVSEL_OFFSET                                  8
#define AVR32_JTAGM_CR_DIVSEL_SIZE                                   16
#define AVR32_JTAGM_CR_EN                                             0
#define AVR32_JTAGM_CR_EN_MASK                               0x00000001
#define AVR32_JTAGM_CR_EN_OFFSET                                      0
#define AVR32_JTAGM_CR_EN_SIZE                                        1
#define AVR32_JTAGM_CR_MASK                                  0x00ffff31
#define AVR32_JTAGM_CR_MSBF                                           5
#define AVR32_JTAGM_CR_MSBF_MASK                             0x00000020
#define AVR32_JTAGM_CR_MSBF_OFFSET                                    5
#define AVR32_JTAGM_CR_MSBF_SIZE                                      1
#define AVR32_JTAGM_CR_RESETVALUE                            0x00000000
#define AVR32_JTAGM_DATAL                                    0x00000006
#define AVR32_JTAGM_DATA_MASK                                0xffffffff
#define AVR32_JTAGM_DATA_OFFSET                                       0
#define AVR32_JTAGM_DATA_SIZE                                        32
#define AVR32_JTAGM_DIVSEL                                            8
#define AVR32_JTAGM_DIVSEL_MASK                              0x00ffff00
#define AVR32_JTAGM_DIVSEL_OFFSET                                     8
#define AVR32_JTAGM_DIVSEL_SIZE                                      16
#define AVR32_JTAGM_DMA_BYTE                                 0x00000009
#define AVR32_JTAGM_DMA_HWORD                                0x00000008
#define AVR32_JTAGM_DMA_WORD                                 0x00000007
#define AVR32_JTAGM_DR0                                      0x00000044
#define AVR32_JTAGM_DR0_DATA                                          0
#define AVR32_JTAGM_DR0_DATA_MASK                            0xffffffff
#define AVR32_JTAGM_DR0_DATA_OFFSET                                   0
#define AVR32_JTAGM_DR0_DATA_SIZE                                    32
#define AVR32_JTAGM_DR0_MASK                                 0xffffffff
#define AVR32_JTAGM_DR0_RESETVALUE                           0x00000000
#define AVR32_JTAGM_DR1                                      0x00000048
#define AVR32_JTAGM_DR1_DATA                                          0
#define AVR32_JTAGM_DR1_DATA_MASK                            0xffffffff
#define AVR32_JTAGM_DR1_DATA_OFFSET                                   0
#define AVR32_JTAGM_DR1_DATA_SIZE                                    32
#define AVR32_JTAGM_DR1_MASK                                 0xffffffff
#define AVR32_JTAGM_DR1_RESETVALUE                           0x00000000
#define AVR32_JTAGM_DR2                                      0x0000004c
#define AVR32_JTAGM_DR2_DATA                                          0
#define AVR32_JTAGM_DR2_DATA_MASK                            0xffffffff
#define AVR32_JTAGM_DR2_DATA_OFFSET                                   0
#define AVR32_JTAGM_DR2_DATA_SIZE                                    32
#define AVR32_JTAGM_DR2_MASK                                 0xffffffff
#define AVR32_JTAGM_DR2_RESETVALUE                           0x00000000
#define AVR32_JTAGM_DRPL                                             20
#define AVR32_JTAGM_DRPL_MASK                                0x00f00000
#define AVR32_JTAGM_DRPL_OFFSET                                      20
#define AVR32_JTAGM_DRPL_SIZE                                         4
#define AVR32_JTAGM_DRPR                                             16
#define AVR32_JTAGM_DRPR_MASK                                0x000f0000
#define AVR32_JTAGM_DRPR_OFFSET                                      16
#define AVR32_JTAGM_DRPR_SIZE                                         4
#define AVR32_JTAGM_EN_SIZE                                           1
#define AVR32_JTAGM_ERRO                                              1
#define AVR32_JTAGM_ERROR                                             1
#define AVR32_JTAGM_ERROR_MASK                               0x00000002
#define AVR32_JTAGM_ERROR_OFFSET                                      1
#define AVR32_JTAGM_ERROR_SIZE                                        1
#define AVR32_JTAGM_ERRO_MASK                                0x00000002
#define AVR32_JTAGM_ERRO_OFFSET                                       1
#define AVR32_JTAGM_ERRO_SIZE                                         1
#define AVR32_JTAGM_IDR                                      0x00000014
#define AVR32_JTAGM_IDR_ERROR                                         1
#define AVR32_JTAGM_IDR_ERROR_MASK                           0x00000002
#define AVR32_JTAGM_IDR_ERROR_OFFSET                                  1
#define AVR32_JTAGM_IDR_ERROR_SIZE                                    1
#define AVR32_JTAGM_IDR_MASK                                 0x00000003
#define AVR32_JTAGM_IDR_RDYINT                                        0
#define AVR32_JTAGM_IDR_RDYINT_MASK                          0x00000001
#define AVR32_JTAGM_IDR_RDYINT_OFFSET                                 0
#define AVR32_JTAGM_IDR_RDYINT_SIZE                                   1
#define AVR32_JTAGM_IDR_RESETVALUE                           0x00000000
#define AVR32_JTAGM_IER                                      0x00000010
#define AVR32_JTAGM_IER_ERROR                                         1
#define AVR32_JTAGM_IER_ERROR_MASK                           0x00000002
#define AVR32_JTAGM_IER_ERROR_OFFSET                                  1
#define AVR32_JTAGM_IER_ERROR_SIZE                                    1
#define AVR32_JTAGM_IER_MASK                                 0x00000003
#define AVR32_JTAGM_IER_RDYINT                                        0
#define AVR32_JTAGM_IER_RDYINT_MASK                          0x00000001
#define AVR32_JTAGM_IER_RDYINT_OFFSET                                 0
#define AVR32_JTAGM_IER_RDYINT_SIZE                                   1
#define AVR32_JTAGM_IER_RESETVALUE                           0x00000000
#define AVR32_JTAGM_IMR                                      0x00000018
#define AVR32_JTAGM_IMR_ERROR                                         1
#define AVR32_JTAGM_IMR_ERROR_MASK                           0x00000002
#define AVR32_JTAGM_IMR_ERROR_OFFSET                                  1
#define AVR32_JTAGM_IMR_ERROR_SIZE                                    1
#define AVR32_JTAGM_IMR_MASK                                 0x00000003
#define AVR32_JTAGM_IMR_RDYINT                                        0
#define AVR32_JTAGM_IMR_RDYINT_MASK                          0x00000001
#define AVR32_JTAGM_IMR_RDYINT_OFFSET                                 0
#define AVR32_JTAGM_IMR_RDYINT_SIZE                                   1
#define AVR32_JTAGM_IMR_RESETVALUE                           0x00000000
#define AVR32_JTAGM_INSTR                                    0x00000004
#define AVR32_JTAGM_IRL                                              24
#define AVR32_JTAGM_IRL_MASK                                 0x0f000000
#define AVR32_JTAGM_IRL_OFFSET                                       24
#define AVR32_JTAGM_IRL_SIZE                                          4
#define AVR32_JTAGM_IRPL                                              8
#define AVR32_JTAGM_IRPL_MASK                                0x0000ff00
#define AVR32_JTAGM_IRPL_OFFSET                                       8
#define AVR32_JTAGM_IRPL_SIZE                                         8
#define AVR32_JTAGM_IRPR                                              0
#define AVR32_JTAGM_IRPR_MASK                                0x000000ff
#define AVR32_JTAGM_IRPR_OFFSET                                       0
#define AVR32_JTAGM_IRPR_SIZE                                         8
#define AVR32_JTAGM_MEM_ACCESS                               0x0000000e
#define AVR32_JTAGM_MEM_BLOCK                                0x00000010
#define AVR32_JTAGM_MEM_SERVICE                              0x0000000d
#define AVR32_JTAGM_MEM_WACCESS                              0x0000000f
#define AVR32_JTAGM_MSBF                                              5
#define AVR32_JTAGM_MSBF_MASK                                0x00000020
#define AVR32_JTAGM_MSBF_OFFSET                                       5
#define AVR32_JTAGM_MSBF_SIZE                                         1
#define AVR32_JTAGM_NEXUS                                    0x0000000c
#define AVR32_JTAGM_OPT                                              16
#define AVR32_JTAGM_OPTB                                             24
#define AVR32_JTAGM_OPTB_MASK                                0xff000000
#define AVR32_JTAGM_OPTB_OFFSET                                      24
#define AVR32_JTAGM_OPTB_SIZE                                         8
#define AVR32_JTAGM_OPT_MASK                                 0x00ff0000
#define AVR32_JTAGM_OPT_OFFSET                                       16
#define AVR32_JTAGM_OPT_SIZE                                          8
#define AVR32_JTAGM_RDYINT                                            0
#define AVR32_JTAGM_RDYINT_MASK                              0x00000001
#define AVR32_JTAGM_RDYINT_OFFSET                                     0
#define AVR32_JTAGM_RDYINT_SIZE                                       1
#define AVR32_JTAGM_RESET                                    0x00000001
#define AVR32_JTAGM_RXRDY                                             2
#define AVR32_JTAGM_RXRDY_MASK                               0x00000004
#define AVR32_JTAGM_RXRDY_OFFSET                                      2
#define AVR32_JTAGM_RXRDY_SIZE                                        1
#define AVR32_JTAGM_SCR                                      0x00000008
#define AVR32_JTAGM_SCR_ERRO                                          1
#define AVR32_JTAGM_SCR_ERRO_MASK                            0x00000002
#define AVR32_JTAGM_SCR_ERRO_OFFSET                                   1
#define AVR32_JTAGM_SCR_ERRO_SIZE                                     1
#define AVR32_JTAGM_SCR_MASK                                 0x00000003
#define AVR32_JTAGM_SCR_RDYINT                                        0
#define AVR32_JTAGM_SCR_RDYINT_MASK                          0x00000001
#define AVR32_JTAGM_SCR_RDYINT_OFFSET                                 0
#define AVR32_JTAGM_SCR_RDYINT_SIZE                                   1
#define AVR32_JTAGM_SCR_RESETVALUE                           0x00000000
#define AVR32_JTAGM_SIR                                      0x00000020
#define AVR32_JTAGM_SIR_DRPL                                         20
#define AVR32_JTAGM_SIR_DRPL_MASK                            0x00f00000
#define AVR32_JTAGM_SIR_DRPL_OFFSET                                  20
#define AVR32_JTAGM_SIR_DRPL_SIZE                                     4
#define AVR32_JTAGM_SIR_DRPR                                         16
#define AVR32_JTAGM_SIR_DRPR_MASK                            0x000f0000
#define AVR32_JTAGM_SIR_DRPR_OFFSET                                  16
#define AVR32_JTAGM_SIR_DRPR_SIZE                                     4
#define AVR32_JTAGM_SIR_IRL                                          24
#define AVR32_JTAGM_SIR_IRL_MASK                             0x0f000000
#define AVR32_JTAGM_SIR_IRL_OFFSET                                   24
#define AVR32_JTAGM_SIR_IRL_SIZE                                      4
#define AVR32_JTAGM_SIR_IRPL                                          8
#define AVR32_JTAGM_SIR_IRPL_MASK                            0x0000ff00
#define AVR32_JTAGM_SIR_IRPL_OFFSET                                   8
#define AVR32_JTAGM_SIR_IRPL_SIZE                                     8
#define AVR32_JTAGM_SIR_IRPR                                          0
#define AVR32_JTAGM_SIR_IRPR_MASK                            0x000000ff
#define AVR32_JTAGM_SIR_IRPR_OFFSET                                   0
#define AVR32_JTAGM_SIR_IRPR_SIZE                                     8
#define AVR32_JTAGM_SIR_MASK                                 0x0fffffff
#define AVR32_JTAGM_SIR_RESETVALUE                           0x00000000
#define AVR32_JTAGM_SR                                       0x00000004
#define AVR32_JTAGM_SR_BUSY                                           5
#define AVR32_JTAGM_SR_BUSY_MASK                             0x00000020
#define AVR32_JTAGM_SR_BUSY_OFFSET                                    5
#define AVR32_JTAGM_SR_BUSY_SIZE                                      1
#define AVR32_JTAGM_SR_CINST                                         16
#define AVR32_JTAGM_SR_CINST_MASK                            0x00ff0000
#define AVR32_JTAGM_SR_CINST_OFFSET                                  16
#define AVR32_JTAGM_SR_CINST_SIZE                                     8
#define AVR32_JTAGM_SR_EN                                             4
#define AVR32_JTAGM_SR_EN_MASK                               0x00000010
#define AVR32_JTAGM_SR_EN_OFFSET                                      4
#define AVR32_JTAGM_SR_EN_SIZE                                        1
#define AVR32_JTAGM_SR_ERROR                                          1
#define AVR32_JTAGM_SR_ERROR_MASK                            0x00000002
#define AVR32_JTAGM_SR_ERROR_OFFSET                                   1
#define AVR32_JTAGM_SR_ERROR_SIZE                                     1
#define AVR32_JTAGM_SR_MASK                                  0x00ff0f3f
#define AVR32_JTAGM_SR_RDYINT                                         0
#define AVR32_JTAGM_SR_RDYINT_MASK                           0x00000001
#define AVR32_JTAGM_SR_RDYINT_OFFSET                                  0
#define AVR32_JTAGM_SR_RDYINT_SIZE                                    1
#define AVR32_JTAGM_SR_RESETVALUE                            0x00000000
#define AVR32_JTAGM_SR_RXRDY                                          2
#define AVR32_JTAGM_SR_RXRDY_MASK                            0x00000004
#define AVR32_JTAGM_SR_RXRDY_OFFSET                                   2
#define AVR32_JTAGM_SR_RXRDY_SIZE                                     1
#define AVR32_JTAGM_SR_STATE                                          8
#define AVR32_JTAGM_SR_STATE_MASK                            0x00000f00
#define AVR32_JTAGM_SR_STATE_OFFSET                                   8
#define AVR32_JTAGM_SR_STATE_SIZE                                     4
#define AVR32_JTAGM_SR_TXRDY                                          3
#define AVR32_JTAGM_SR_TXRDY_MASK                            0x00000008
#define AVR32_JTAGM_SR_TXRDY_OFFSET                                   3
#define AVR32_JTAGM_SR_TXRDY_SIZE                                     1
#define AVR32_JTAGM_STATE                                             8
#define AVR32_JTAGM_STATE_MASK                               0x00000f00
#define AVR32_JTAGM_STATE_OFFSET                                      8
#define AVR32_JTAGM_STATE_SIZE                                        4
#define AVR32_JTAGM_TXRDY                                             3
#define AVR32_JTAGM_TXRDY_MASK                               0x00000008
#define AVR32_JTAGM_TXRDY_OFFSET                                      3
#define AVR32_JTAGM_TXRDY_SIZE                                        1
#define AVR32_JTAGM_VERSION                                           0
#define AVR32_JTAGM_VERSION_MASK                             0x00000fff
#define AVR32_JTAGM_VERSION_OFFSET                                    0
#define AVR32_JTAGM_VERSION_SIZE                                     12
#define AVR32_JTAGM_VR                                       0x000000fc
#define AVR32_JTAGM_VR_MASK                                  0x00000fff
#define AVR32_JTAGM_VR_RESETVALUE                            0x00000000
#define AVR32_JTAGM_VR_VERSION                                        0
#define AVR32_JTAGM_VR_VERSION_MASK                          0x00000fff
#define AVR32_JTAGM_VR_VERSION_OFFSET                                 0
#define AVR32_JTAGM_VR_VERSION_SIZE                                  12




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_jtagm_cr_t {
    unsigned int                 : 8;
    unsigned int divsel          :16;
    unsigned int                 : 2;
    unsigned int msbf            : 1;
    unsigned int ccmode          : 1;
    unsigned int                 : 3;
    unsigned int en              : 1;
} avr32_jtagm_cr_t;



typedef struct avr32_jtagm_sr_t {
    unsigned int                 : 8;
    unsigned int cinst           : 8;
    unsigned int                 : 4;
    unsigned int state           : 4;
    unsigned int                 : 2;
    unsigned int busy            : 1;
    unsigned int en              : 1;
    unsigned int txrdy           : 1;
    unsigned int rxrdy           : 1;
    unsigned int error           : 1;
    unsigned int rdyint          : 1;
} avr32_jtagm_sr_t;



typedef struct avr32_jtagm_scr_t {
    unsigned int                 :30;
    unsigned int erro            : 1;
    unsigned int rdyint          : 1;
} avr32_jtagm_scr_t;



typedef struct avr32_jtagm_ier_t {
    unsigned int                 :30;
    unsigned int error           : 1;
    unsigned int rdyint          : 1;
} avr32_jtagm_ier_t;



typedef struct avr32_jtagm_idr_t {
    unsigned int                 :30;
    unsigned int error           : 1;
    unsigned int rdyint          : 1;
} avr32_jtagm_idr_t;



typedef struct avr32_jtagm_imr_t {
    unsigned int                 :30;
    unsigned int error           : 1;
    unsigned int rdyint          : 1;
} avr32_jtagm_imr_t;



typedef struct avr32_jtagm_sir_t {
    unsigned int                 : 4;
    unsigned int irl             : 4;
    unsigned int drpl            : 4;
    unsigned int drpr            : 4;
    unsigned int irpl            : 8;
    unsigned int irpr            : 8;
} avr32_jtagm_sir_t;



typedef struct avr32_jtagm_cmdr_t {
    unsigned int optb            : 8;
    unsigned int opt             : 8;
    unsigned int                 : 8;
    unsigned int cmd             : 8;
} avr32_jtagm_cmdr_t;



typedef struct avr32_jtagm_vr_t {
    unsigned int                 :20;
    unsigned int version         :12;
} avr32_jtagm_vr_t;



typedef struct avr32_jtagm_t {
  union {
          unsigned long                  cr        ;//0x0000
          avr32_jtagm_cr_t               CR        ;
  };
  union {
    const unsigned long                  sr        ;//0x0004
    const avr32_jtagm_sr_t               SR        ;
  };
  union {
          unsigned long                  scr       ;//0x0008
          avr32_jtagm_scr_t              SCR       ;
  };
          unsigned int                   :32       ;//0x000c
  union {
          unsigned long                  ier       ;//0x0010
          avr32_jtagm_ier_t              IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0014
          avr32_jtagm_idr_t              IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0018
    const avr32_jtagm_imr_t              IMR       ;
  };
          unsigned int                   :32       ;//0x001c
  union {
          unsigned long                  sir       ;//0x0020
          avr32_jtagm_sir_t              SIR       ;
  };
          unsigned int                   :32       ;//0x0024
          unsigned int                   :32       ;//0x0028
          unsigned int                   :32       ;//0x002c
          unsigned int                   :32       ;//0x0030
          unsigned int                   :32       ;//0x0034
          unsigned int                   :32       ;//0x0038
          unsigned int                   :32       ;//0x003c
  union {
          unsigned long                  cmdr      ;//0x0040
          avr32_jtagm_cmdr_t             CMDR      ;
  };
          unsigned long                  dr0       ;//0x0044
          unsigned long                  dr1       ;//0x0048
          unsigned long                  dr2       ;//0x004c
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
  union {
    const unsigned long                  vr        ;//0x00fc
    const avr32_jtagm_vr_t               VR        ;
  };
} avr32_jtagm_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_JTAGM_100_H_INCLUDED*/
#endif

