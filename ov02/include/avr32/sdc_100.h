/*****************************************************************************
 *
 * Copyright (C) 2008 Atmel Corporation
 * 
 * Model        : AP7200
 * Revision     : $Revision: 58751 $
 * Checkin Date : $Date: 2008-09-15 15:20:42 +0200 (Mon, 15 Sep 2008) $ 
 *
 ****************************************************************************/
#ifndef AVR32_SDC_100_H_INCLUDED
#define AVR32_SDC_100_H_INCLUDED

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_SDC_<register>
 - Bitfield mask:   AVR32_SDC_<register>_<bitfield>
 - Bitfield offset: AVR32_SDC_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_SDC_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_SDC_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_SDC_<bitfield>
 - Bitfield offset: AVR32_SDC_<bitfield>_OFFSET
 - Bitfield size:   AVR32_SDC_<bitfield>_SIZE
 - Bitfield values: AVR32_SDC_<bitfield>_<value name>
 - Bitfield values: AVR32_SDC_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_SDC_AST_EN                                            8
#define AVR32_SDC_AST_EN_MASK                              0x00000100
#define AVR32_SDC_AST_EN_OFFSET                                     8
#define AVR32_SDC_AST_EN_SIZE                                       1
#define AVR32_SDC_AST_EVENT                                         8
#define AVR32_SDC_AST_EVENT_MASK                           0x00000100
#define AVR32_SDC_AST_EVENT_OFFSET                                  8
#define AVR32_SDC_AST_EVENT_SIZE                                    1
#define AVR32_SDC_ASYNC                                    0x00000004
#define AVR32_SDC_ASYNC_KEY                                        24
#define AVR32_SDC_ASYNC_KEY_MASK                           0xff000000
#define AVR32_SDC_ASYNC_KEY_OFFSET                                 24
#define AVR32_SDC_ASYNC_KEY_SIZE                                    8
#define AVR32_SDC_ASYNC_MASK                               0xff000110
#define AVR32_SDC_ASYNC_MODE                                        4
#define AVR32_SDC_ASYNC_MODE_MASK                          0x00000010
#define AVR32_SDC_ASYNC_MODE_OFFSET                                 4
#define AVR32_SDC_ASYNC_MODE_SIZE                                   1
#define AVR32_SDC_ASYNC_POL                                         8
#define AVR32_SDC_ASYNC_POL_MASK                           0x00000100
#define AVR32_SDC_ASYNC_POL_OFFSET                                  8
#define AVR32_SDC_ASYNC_POL_SIZE                                    1
#define AVR32_SDC_ASYNC_RESETVALUE                         0x00000000
#define AVR32_SDC_BUSY                                             24
#define AVR32_SDC_BUSY_MASK                                0x01000000
#define AVR32_SDC_BUSY_OFFSET                                      24
#define AVR32_SDC_BUSY_SIZE                                         1
#define AVR32_SDC_CORE_POR_TEST                                    23
#define AVR32_SDC_CORE_POR_TEST_MASK                       0x00800000
#define AVR32_SDC_CORE_POR_TEST_OFFSET                             23
#define AVR32_SDC_CORE_POR_TEST_SIZE                                1
#define AVR32_SDC_CTRL                                     0x00000000
#define AVR32_SDC_CTRL_AST_EN                                       8
#define AVR32_SDC_CTRL_AST_EN_MASK                         0x00000100
#define AVR32_SDC_CTRL_AST_EN_OFFSET                                8
#define AVR32_SDC_CTRL_AST_EN_SIZE                                  1
#define AVR32_SDC_CTRL_CORE_POR_TEST                               23
#define AVR32_SDC_CTRL_CORE_POR_TEST_MASK                  0x00800000
#define AVR32_SDC_CTRL_CORE_POR_TEST_OFFSET                        23
#define AVR32_SDC_CTRL_CORE_POR_TEST_SIZE                           1
#define AVR32_SDC_CTRL_KEY                                         24
#define AVR32_SDC_CTRL_KEY_MASK                            0xff000000
#define AVR32_SDC_CTRL_KEY_OFFSET                                  24
#define AVR32_SDC_CTRL_KEY_SIZE                                     8
#define AVR32_SDC_CTRL_MASK                                0xff800301
#define AVR32_SDC_CTRL_PIN_EN                                       0
#define AVR32_SDC_CTRL_PIN_EN_MASK                         0x00000001
#define AVR32_SDC_CTRL_PIN_EN_OFFSET                                0
#define AVR32_SDC_CTRL_PIN_EN_SIZE                                  1
#define AVR32_SDC_CTRL_RESETVALUE                          0x00000000
#define AVR32_SDC_CTRL_WDT_EN                                       9
#define AVR32_SDC_CTRL_WDT_EN_MASK                         0x00000200
#define AVR32_SDC_CTRL_WDT_EN_OFFSET                                9
#define AVR32_SDC_CTRL_WDT_EN_SIZE                                  1
#define AVR32_SDC_DURATION                                          0
#define AVR32_SDC_DURATION_MASK                            0x0000ffff
#define AVR32_SDC_DURATION_OFFSET                                   0
#define AVR32_SDC_DURATION_SIZE                                    16
#define AVR32_SDC_ECR                                      0x00000018
#define AVR32_SDC_ECR_AST_EVENT                                     8
#define AVR32_SDC_ECR_AST_EVENT_MASK                       0x00000100
#define AVR32_SDC_ECR_AST_EVENT_OFFSET                              8
#define AVR32_SDC_ECR_AST_EVENT_SIZE                                1
#define AVR32_SDC_ECR_JTAG_EVENT                                   11
#define AVR32_SDC_ECR_JTAG_EVENT_MASK                      0x00000800
#define AVR32_SDC_ECR_JTAG_EVENT_OFFSET                            11
#define AVR32_SDC_ECR_JTAG_EVENT_SIZE                               1
#define AVR32_SDC_ECR_MASK                                 0x00000f01
#define AVR32_SDC_ECR_OCD_EVENT                                    10
#define AVR32_SDC_ECR_OCD_EVENT_MASK                       0x00000400
#define AVR32_SDC_ECR_OCD_EVENT_OFFSET                             10
#define AVR32_SDC_ECR_OCD_EVENT_SIZE                                1
#define AVR32_SDC_ECR_PIN_EVENT                                     0
#define AVR32_SDC_ECR_PIN_EVENT_MASK                       0x00000001
#define AVR32_SDC_ECR_PIN_EVENT_OFFSET                              0
#define AVR32_SDC_ECR_PIN_EVENT_SIZE                                1
#define AVR32_SDC_ECR_RESETVALUE                           0x00000000
#define AVR32_SDC_ECR_WDT_EVENT                                     9
#define AVR32_SDC_ECR_WDT_EVENT_MASK                       0x00000200
#define AVR32_SDC_ECR_WDT_EVENT_OFFSET                              9
#define AVR32_SDC_ECR_WDT_EVENT_SIZE                                1
#define AVR32_SDC_EN                                                0
#define AVR32_SDC_EN_MASK                                  0x00000001
#define AVR32_SDC_EN_OFFSET                                         0
#define AVR32_SDC_EN_SIZE                                           1
#define AVR32_SDC_FILTER                                           12
#define AVR32_SDC_FILTERDUR                                0x0000000c
#define AVR32_SDC_FILTERDUR_DURATION                                0
#define AVR32_SDC_FILTERDUR_DURATION_MASK                  0x0000ffff
#define AVR32_SDC_FILTERDUR_DURATION_OFFSET                         0
#define AVR32_SDC_FILTERDUR_DURATION_SIZE                          16
#define AVR32_SDC_FILTERDUR_KEY                                    24
#define AVR32_SDC_FILTERDUR_KEY_MASK                       0xff000000
#define AVR32_SDC_FILTERDUR_KEY_OFFSET                             24
#define AVR32_SDC_FILTERDUR_KEY_SIZE                                8
#define AVR32_SDC_FILTERDUR_MASK                           0xff00ffff
#define AVR32_SDC_FILTERDUR_RESETVALUE                     0x00000000
#define AVR32_SDC_FILTER_MASK                              0x00001000
#define AVR32_SDC_FILTER_OFFSET                                    12
#define AVR32_SDC_FILTER_SIZE                                       1
#define AVR32_SDC_GPLP                                     0x00000040
#define AVR32_SDC_GPLP_MASK                                0x00000000
#define AVR32_SDC_GPLP_RESETVALUE                          0x00000000
#define AVR32_SDC_IDR                                      0x00000020
#define AVR32_SDC_IDR_MASK                                 0x01000001
#define AVR32_SDC_IDR_PIN_EVENT                                     0
#define AVR32_SDC_IDR_PIN_EVENT_MASK                       0x00000001
#define AVR32_SDC_IDR_PIN_EVENT_OFFSET                              0
#define AVR32_SDC_IDR_PIN_EVENT_SIZE                                1
#define AVR32_SDC_IDR_READY                                        24
#define AVR32_SDC_IDR_READY_MASK                           0x01000000
#define AVR32_SDC_IDR_READY_OFFSET                                 24
#define AVR32_SDC_IDR_READY_SIZE                                    1
#define AVR32_SDC_IDR_RESETVALUE                           0x00000000
#define AVR32_SDC_IER                                      0x0000001c
#define AVR32_SDC_IER_MASK                                 0x01000001
#define AVR32_SDC_IER_PIN_EVENT                                     0
#define AVR32_SDC_IER_PIN_EVENT_MASK                       0x00000001
#define AVR32_SDC_IER_PIN_EVENT_OFFSET                              0
#define AVR32_SDC_IER_PIN_EVENT_SIZE                                1
#define AVR32_SDC_IER_READY                                        24
#define AVR32_SDC_IER_READY_MASK                           0x01000000
#define AVR32_SDC_IER_READY_OFFSET                                 24
#define AVR32_SDC_IER_READY_SIZE                                    1
#define AVR32_SDC_IER_RESETVALUE                           0x00000000
#define AVR32_SDC_IMR                                      0x00000024
#define AVR32_SDC_IMR_MASK                                 0x01000001
#define AVR32_SDC_IMR_PIN_EVENT                                     0
#define AVR32_SDC_IMR_PIN_EVENT_MASK                       0x00000001
#define AVR32_SDC_IMR_PIN_EVENT_OFFSET                              0
#define AVR32_SDC_IMR_PIN_EVENT_SIZE                                1
#define AVR32_SDC_IMR_READY                                        24
#define AVR32_SDC_IMR_READY_MASK                           0x01000000
#define AVR32_SDC_IMR_READY_OFFSET                                 24
#define AVR32_SDC_IMR_READY_SIZE                                    1
#define AVR32_SDC_IMR_RESETVALUE                           0x00000000
#define AVR32_SDC_JTAG_EVENT                                       11
#define AVR32_SDC_JTAG_EVENT_MASK                          0x00000800
#define AVR32_SDC_JTAG_EVENT_OFFSET                                11
#define AVR32_SDC_JTAG_EVENT_SIZE                                   1
#define AVR32_SDC_KEY                                              24
#define AVR32_SDC_KEY_MASK                                 0xff000000
#define AVR32_SDC_KEY_OFFSET                                       24
#define AVR32_SDC_KEY_SIZE                                          8
#define AVR32_SDC_OCD_EVENT                                        10
#define AVR32_SDC_OCD_EVENT_MASK                           0x00000400
#define AVR32_SDC_OCD_EVENT_OFFSET                                 10
#define AVR32_SDC_OCD_EVENT_SIZE                                    1
#define AVR32_SDC_OSC32EN                                           0
#define AVR32_SDC_OSC32EN_MASK                             0x00000001
#define AVR32_SDC_OSC32EN_OFFSET                                    0
#define AVR32_SDC_OSC32EN_SIZE                                      1
#define AVR32_SDC_OSCCTRL32                                0x00000010
#define AVR32_SDC_OSCCTRL32_KEY                                    24
#define AVR32_SDC_OSCCTRL32_KEY_MASK                       0xff000000
#define AVR32_SDC_OSCCTRL32_KEY_OFFSET                             24
#define AVR32_SDC_OSCCTRL32_KEY_SIZE                                8
#define AVR32_SDC_OSCCTRL32_MASK                           0xff070f01
#define AVR32_SDC_OSCCTRL32_MODE                                    8
#define AVR32_SDC_OSCCTRL32_MODE_MASK                      0x00000f00
#define AVR32_SDC_OSCCTRL32_MODE_OFFSET                             8
#define AVR32_SDC_OSCCTRL32_MODE_SIZE                               4
#define AVR32_SDC_OSCCTRL32_OSC32EN                                 0
#define AVR32_SDC_OSCCTRL32_OSC32EN_MASK                   0x00000001
#define AVR32_SDC_OSCCTRL32_OSC32EN_OFFSET                          0
#define AVR32_SDC_OSCCTRL32_OSC32EN_SIZE                            1
#define AVR32_SDC_OSCCTRL32_RESETVALUE                     0x00000000
#define AVR32_SDC_OSCCTRL32_STARTUP                                16
#define AVR32_SDC_OSCCTRL32_STARTUP_MASK                   0x00070000
#define AVR32_SDC_OSCCTRL32_STARTUP_OFFSET                         16
#define AVR32_SDC_OSCCTRL32_STARTUP_SIZE                            3
#define AVR32_SDC_PIN                                              16
#define AVR32_SDC_PIN_EN                                            0
#define AVR32_SDC_PIN_EN_MASK                              0x00000001
#define AVR32_SDC_PIN_EN_OFFSET                                     0
#define AVR32_SDC_PIN_EN_SIZE                                       1
#define AVR32_SDC_PIN_EVENT                                         0
#define AVR32_SDC_PIN_EVENT_MASK                           0x00000001
#define AVR32_SDC_PIN_EVENT_OFFSET                                  0
#define AVR32_SDC_PIN_EVENT_SIZE                                    1
#define AVR32_SDC_PIN_MASK                                 0x00010000
#define AVR32_SDC_PIN_OFFSET                                       16
#define AVR32_SDC_PIN_SIZE                                          1
#define AVR32_SDC_POL                                               8
#define AVR32_SDC_POL_MASK                                 0x00000100
#define AVR32_SDC_POL_OFFSET                                        8
#define AVR32_SDC_POL_SIZE                                          1
#define AVR32_SDC_READY                                            24
#define AVR32_SDC_READY_MASK                               0x01000000
#define AVR32_SDC_READY_OFFSET                                     24
#define AVR32_SDC_READY_SIZE                                        1
#define AVR32_SDC_STARTUP                                          16
#define AVR32_SDC_STARTUP_MASK                             0x00070000
#define AVR32_SDC_STARTUP_OFFSET                                   16
#define AVR32_SDC_STARTUP_SIZE                                      3
#define AVR32_SDC_STATUS                                   0x00000014
#define AVR32_SDC_STATUS_AST_EVENT                                  8
#define AVR32_SDC_STATUS_AST_EVENT_MASK                    0x00000100
#define AVR32_SDC_STATUS_AST_EVENT_OFFSET                           8
#define AVR32_SDC_STATUS_AST_EVENT_SIZE                             1
#define AVR32_SDC_STATUS_BUSY                                      24
#define AVR32_SDC_STATUS_BUSY_MASK                         0x01000000
#define AVR32_SDC_STATUS_BUSY_OFFSET                               24
#define AVR32_SDC_STATUS_BUSY_SIZE                                  1
#define AVR32_SDC_STATUS_JTAG_EVENT                                11
#define AVR32_SDC_STATUS_JTAG_EVENT_MASK                   0x00000800
#define AVR32_SDC_STATUS_JTAG_EVENT_OFFSET                         11
#define AVR32_SDC_STATUS_JTAG_EVENT_SIZE                            1
#define AVR32_SDC_STATUS_MASK                              0xc1010f01
#define AVR32_SDC_STATUS_OCD_EVENT                                 10
#define AVR32_SDC_STATUS_OCD_EVENT_MASK                    0x00000400
#define AVR32_SDC_STATUS_OCD_EVENT_OFFSET                          10
#define AVR32_SDC_STATUS_OCD_EVENT_SIZE                             1
#define AVR32_SDC_STATUS_PIN                                       16
#define AVR32_SDC_STATUS_PIN_EVENT                                  0
#define AVR32_SDC_STATUS_PIN_EVENT_MASK                    0x00000001
#define AVR32_SDC_STATUS_PIN_EVENT_OFFSET                           0
#define AVR32_SDC_STATUS_PIN_EVENT_SIZE                             1
#define AVR32_SDC_STATUS_PIN_MASK                          0x00010000
#define AVR32_SDC_STATUS_PIN_OFFSET                                16
#define AVR32_SDC_STATUS_PIN_SIZE                                   1
#define AVR32_SDC_STATUS_RESETVALUE                        0x00000000
#define AVR32_SDC_STATUS_SWTCH                                     30
#define AVR32_SDC_STATUS_SWTCH_MASK                        0x40000000
#define AVR32_SDC_STATUS_SWTCH_OFFSET                              30
#define AVR32_SDC_STATUS_SWTCH_SIZE                                 1
#define AVR32_SDC_STATUS_VBAT                                      31
#define AVR32_SDC_STATUS_VBAT_MASK                         0x80000000
#define AVR32_SDC_STATUS_VBAT_OFFSET                               31
#define AVR32_SDC_STATUS_VBAT_SIZE                                  1
#define AVR32_SDC_STATUS_WDT_EVENT                                  9
#define AVR32_SDC_STATUS_WDT_EVENT_MASK                    0x00000200
#define AVR32_SDC_STATUS_WDT_EVENT_OFFSET                           9
#define AVR32_SDC_STATUS_WDT_EVENT_SIZE                             1
#define AVR32_SDC_SWTCH                                            30
#define AVR32_SDC_SWTCH_MASK                               0x40000000
#define AVR32_SDC_SWTCH_OFFSET                                     30
#define AVR32_SDC_SWTCH_SIZE                                        1
#define AVR32_SDC_SYNC                                     0x00000008
#define AVR32_SDC_SYNC_EN                                           0
#define AVR32_SDC_SYNC_EN_MASK                             0x00000001
#define AVR32_SDC_SYNC_EN_OFFSET                                    0
#define AVR32_SDC_SYNC_EN_SIZE                                      1
#define AVR32_SDC_SYNC_FILTER                                      12
#define AVR32_SDC_SYNC_FILTER_MASK                         0x00001000
#define AVR32_SDC_SYNC_FILTER_OFFSET                               12
#define AVR32_SDC_SYNC_FILTER_SIZE                                  1
#define AVR32_SDC_SYNC_KEY                                         24
#define AVR32_SDC_SYNC_KEY_MASK                            0xff000000
#define AVR32_SDC_SYNC_KEY_OFFSET                                  24
#define AVR32_SDC_SYNC_KEY_SIZE                                     8
#define AVR32_SDC_SYNC_MASK                                0xff001111
#define AVR32_SDC_SYNC_MODE                                         4
#define AVR32_SDC_SYNC_MODE_MASK                           0x00000010
#define AVR32_SDC_SYNC_MODE_OFFSET                                  4
#define AVR32_SDC_SYNC_MODE_SIZE                                    1
#define AVR32_SDC_SYNC_POL                                          8
#define AVR32_SDC_SYNC_POL_MASK                            0x00000100
#define AVR32_SDC_SYNC_POL_OFFSET                                   8
#define AVR32_SDC_SYNC_POL_SIZE                                     1
#define AVR32_SDC_SYNC_RESETVALUE                          0x00000000
#define AVR32_SDC_VBAT                                             31
#define AVR32_SDC_VBAT_MASK                                0x80000000
#define AVR32_SDC_VBAT_OFFSET                                      31
#define AVR32_SDC_VBAT_SIZE                                         1
#define AVR32_SDC_WDT_EN                                            9
#define AVR32_SDC_WDT_EN_MASK                              0x00000200
#define AVR32_SDC_WDT_EN_OFFSET                                     9
#define AVR32_SDC_WDT_EN_SIZE                                       1
#define AVR32_SDC_WDT_EVENT                                         9
#define AVR32_SDC_WDT_EVENT_MASK                           0x00000200
#define AVR32_SDC_WDT_EVENT_OFFSET                                  9
#define AVR32_SDC_WDT_EVENT_SIZE                                    1

#define AVR32_SDC_ACCESS_KEY                           0x00000055
#define AVR32_SDC_ASYNC_ON                             0x00000000
#define AVR32_SDC_EDGE                                 0x00000000
#define AVR32_SDC_FALLING_EDGE                         0x00000000
#define AVR32_SDC_FILTER_OFF                           0x00000000
#define AVR32_SDC_FILTER_ON                            0x00000001
#define AVR32_SDC_LEVEL                                0x00000001
#define AVR32_SDC_RISING_EDGE                          0x00000001
#define AVR32_SDC_SYNC_OFF                             0x00000000
#define AVR32_SDC_SYNC_ON                              0x00000001



#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_sdc_ctrl_t {
    unsigned int key             : 8;
    unsigned int core_por_test   : 1;
    unsigned int                 :13;
    unsigned int wdt_en          : 1;
    unsigned int ast_en          : 1;
    unsigned int                 : 7;
    unsigned int pin_en          : 1;
} avr32_sdc_ctrl_t;



typedef struct avr32_sdc_async_t {
    unsigned int key             : 8;
    unsigned int                 :15;
    unsigned int pol             : 1;
    unsigned int                 : 3;
    unsigned int mode            : 1;
    unsigned int                 : 4;
} avr32_sdc_async_t;



typedef struct avr32_sdc_sync_t {
    unsigned int key             : 8;
    unsigned int                 :11;
    unsigned int filter          : 1;
    unsigned int                 : 3;
    unsigned int pol             : 1;
    unsigned int                 : 3;
    unsigned int mode            : 1;
    unsigned int                 : 3;
    unsigned int en              : 1;
} avr32_sdc_sync_t;



typedef struct avr32_sdc_filterdur_t {
    unsigned int key             : 8;
    unsigned int                 : 8;
    unsigned int duration        :16;
} avr32_sdc_filterdur_t;



typedef struct avr32_sdc_oscctrl32_t {
    unsigned int key             : 8;
    unsigned int                 : 5;
    unsigned int startup         : 3;
    unsigned int                 : 4;
    unsigned int mode            : 4;
    unsigned int                 : 7;
    unsigned int osc32en         : 1;
} avr32_sdc_oscctrl32_t;



typedef struct avr32_sdc_status_t {
    unsigned int vbat            : 1;
    unsigned int swtch           : 1;
    unsigned int                 : 5;
    unsigned int busy            : 1;
    unsigned int                 : 7;
    unsigned int pin             : 1;
    unsigned int                 : 4;
    unsigned int jtag_event      : 1;
    unsigned int ocd_event       : 1;
    unsigned int wdt_event       : 1;
    unsigned int ast_event       : 1;
    unsigned int                 : 7;
    unsigned int pin_event       : 1;
} avr32_sdc_status_t;



typedef struct avr32_sdc_ecr_t {
    unsigned int                 :20;
    unsigned int jtag_event      : 1;
    unsigned int ocd_event       : 1;
    unsigned int wdt_event       : 1;
    unsigned int ast_event       : 1;
    unsigned int                 : 7;
    unsigned int pin_event       : 1;
} avr32_sdc_ecr_t;



typedef struct avr32_sdc_ier_t {
    unsigned int                 : 7;
    unsigned int ready           : 1;
    unsigned int                 :23;
    unsigned int pin_event       : 1;
} avr32_sdc_ier_t;



typedef struct avr32_sdc_idr_t {
    unsigned int                 : 7;
    unsigned int ready           : 1;
    unsigned int                 :23;
    unsigned int pin_event       : 1;
} avr32_sdc_idr_t;



typedef struct avr32_sdc_imr_t {
    unsigned int                 : 7;
    unsigned int ready           : 1;
    unsigned int                 :23;
    unsigned int pin_event       : 1;
} avr32_sdc_imr_t;



typedef struct avr32_sdc_t {
  union {
          unsigned long                  ctrl      ;//0x0000
          avr32_sdc_ctrl_t               CTRL      ;
  };
  union {
          unsigned long                  async     ;//0x0004
          avr32_sdc_async_t              ASYNC     ;
  };
  union {
          unsigned long                  sync      ;//0x0008
          avr32_sdc_sync_t               SYNC      ;
  };
  union {
          unsigned long                  filterdur ;//0x000c
          avr32_sdc_filterdur_t          FILTERDUR ;
  };
  union {
          unsigned long                  oscctrl32 ;//0x0010
          avr32_sdc_oscctrl32_t          OSCCTRL32 ;
  };
  union {
    const unsigned long                  status    ;//0x0014
    const avr32_sdc_status_t             STATUS    ;
  };
  union {
          unsigned long                  ecr       ;//0x0018
          avr32_sdc_ecr_t                ECR       ;
  };
  union {
          unsigned long                  ier       ;//0x001c
          avr32_sdc_ier_t                IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0020
          avr32_sdc_idr_t                IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0024
    const avr32_sdc_imr_t                IMR       ;
  };
          unsigned int                   :32       ;//0x0028
          unsigned int                   :32       ;//0x002c
          unsigned int                   :32       ;//0x0030
          unsigned int                   :32       ;//0x0034
          unsigned int                   :32       ;//0x0038
          unsigned int                   :32       ;//0x003c
          unsigned long                  gplp      [8];//0x0040
} avr32_sdc_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_SDC_100_H_INCLUDED*/
#endif

