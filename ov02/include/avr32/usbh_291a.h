/*****************************************************************************
 *
 * Copyright (C) 2008 Atmel Corporation
 * 
 * Model        : AP7200
 * Revision     : $Revision: 58751 $
 * Checkin Date : $Date: 2008-09-15 15:20:42 +0200 (Mon, 15 Sep 2008) $ 
 *
 ****************************************************************************/
#ifndef AVR32_USBH_291a_H_INCLUDED
#define AVR32_USBH_291a_H_INCLUDED

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_USBH_<register>
 - Bitfield mask:   AVR32_USBH_<register>_<bitfield>
 - Bitfield offset: AVR32_USBH_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_USBH_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_USBH_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_USBH_<bitfield>
 - Bitfield offset: AVR32_USBH_<bitfield>_OFFSET
 - Bitfield size:   AVR32_USBH_<bitfield>_SIZE
 - Bitfield values: AVR32_USBH_<bitfield>_<value name>
 - Bitfield values: AVR32_USBH_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_USBH_ASYNCLISTADDR                            0x00000028
#define AVR32_USBH_ASYNCLISTADDR_MASK                       0x00000000
#define AVR32_USBH_ASYNCLISTADDR_RESETVALUE                 0x00000000
#define AVR32_USBH_CONFIGFLAG                               0x00000050
#define AVR32_USBH_CONFIGFLAG_MASK                          0x00000000
#define AVR32_USBH_CONFIGFLAG_RESETVALUE                    0x00000000
#define AVR32_USBH_CTRLDSSEGMENT                            0x00000020
#define AVR32_USBH_CTRLDSSEGMENT_MASK                       0x00000000
#define AVR32_USBH_CTRLDSSEGMENT_RESETVALUE                 0x00000000
#define AVR32_USBH_FRINDEX                                  0x0000001c
#define AVR32_USBH_FRINDEX_MASK                             0x00000000
#define AVR32_USBH_FRINDEX_RESETVALUE                       0x00000000
#define AVR32_USBH_HCBULKCURRENTED                          0x0000002c
#define AVR32_USBH_HCBULKCURRENTED_MASK                     0x00000000
#define AVR32_USBH_HCBULKCURRENTED_RESETVALUE               0x00000000
#define AVR32_USBH_HCBULKHEADED                             0x00000028
#define AVR32_USBH_HCBULKHEADED_MASK                        0x00000000
#define AVR32_USBH_HCBULKHEADED_RESETVALUE                  0x00000000
#define AVR32_USBH_HCCAPBASE                                0x00000000
#define AVR32_USBH_HCCAPBASE_MASK                           0x00000000
#define AVR32_USBH_HCCAPBASE_RESETVALUE                     0x01000010
#define AVR32_USBH_HCCOMMANDSTATUS                          0x00000008
#define AVR32_USBH_HCCOMMANDSTATUS_MASK                     0x00000000
#define AVR32_USBH_HCCOMMANDSTATUS_RESETVALUE               0x00000000
#define AVR32_USBH_HCCONTROL                                0x00000004
#define AVR32_USBH_HCCONTROLCURRENTED                       0x00000024
#define AVR32_USBH_HCCONTROLCURRENTED_MASK                  0x00000000
#define AVR32_USBH_HCCONTROLCURRENTED_RESETVALUE            0x00000000
#define AVR32_USBH_HCCONTROLHEADED                          0x00000020
#define AVR32_USBH_HCCONTROLHEADED_MASK                     0x00000000
#define AVR32_USBH_HCCONTROLHEADED_RESETVALUE               0x00000000
#define AVR32_USBH_HCCONTROL_MASK                           0x00000000
#define AVR32_USBH_HCCONTROL_RESETVALUE                     0x00000000
#define AVR32_USBH_HCCPARAMS                                0x00000008
#define AVR32_USBH_HCCPARAMS_MASK                           0x00000000
#define AVR32_USBH_HCCPARAMS_RESETVALUE                     0x0000a010
#define AVR32_USBH_HCDONEHEAD                               0x00000030
#define AVR32_USBH_HCDONEHEAD_MASK                          0x00000000
#define AVR32_USBH_HCDONEHEAD_RESETVALUE                    0x00000000
#define AVR32_USBH_HCFMINTERVAL                             0x00000034
#define AVR32_USBH_HCFMINTERVAL_MASK                        0x00000000
#define AVR32_USBH_HCFMINTERVAL_RESETVALUE                  0x00000000
#define AVR32_USBH_HCFMNUMBER                               0x0000003c
#define AVR32_USBH_HCFMNUMBER_MASK                          0x00000000
#define AVR32_USBH_HCFMNUMBER_RESETVALUE                    0x00000000
#define AVR32_USBH_HCFMREMAINING                            0x00000038
#define AVR32_USBH_HCFMREMAINING_MASK                       0x00000000
#define AVR32_USBH_HCFMREMAINING_RESETVALUE                 0x00000000
#define AVR32_USBH_HCHCCA                                   0x00000018
#define AVR32_USBH_HCHCCA_MASK                              0x00000000
#define AVR32_USBH_HCHCCA_RESETVALUE                        0x00000000
#define AVR32_USBH_HCINTERRUPTDISABLE                       0x00000014
#define AVR32_USBH_HCINTERRUPTDISABLE_MASK                  0x00000000
#define AVR32_USBH_HCINTERRUPTDISABLE_RESETVALUE            0x00000000
#define AVR32_USBH_HCINTERRUPTENABLE                        0x00000010
#define AVR32_USBH_HCINTERRUPTENABLE_MASK                   0x00000000
#define AVR32_USBH_HCINTERRUPTENABLE_RESETVALUE             0x00000000
#define AVR32_USBH_HCINTERRUPTSTATUS                        0x0000000c
#define AVR32_USBH_HCINTERRUPTSTATUS_MASK                   0x00000000
#define AVR32_USBH_HCINTERRUPTSTATUS_RESETVALUE             0x00000000
#define AVR32_USBH_HCLSTHRESHOLD                            0x00000044
#define AVR32_USBH_HCLSTHRESHOLD_MASK                       0x00000000
#define AVR32_USBH_HCLSTHRESHOLD_RESETVALUE                 0x00000000
#define AVR32_USBH_HCPERIODCURRENTED                        0x0000001c
#define AVR32_USBH_HCPERIODCURRENTED_MASK                   0x00000000
#define AVR32_USBH_HCPERIODCURRENTED_RESETVALUE             0x00000000
#define AVR32_USBH_HCPERIODSTART                            0x00000040
#define AVR32_USBH_HCPERIODSTART_MASK                       0x00000000
#define AVR32_USBH_HCPERIODSTART_RESETVALUE                 0x00000000
#define AVR32_USBH_HCREVISION                               0x00000000
#define AVR32_USBH_HCREVISION_MASK                          0x00000000
#define AVR32_USBH_HCREVISION_RESETVALUE                    0x00000000
#define AVR32_USBH_HCRHDESCRIPTORA                          0x00000048
#define AVR32_USBH_HCRHDESCRIPTORA_MASK                     0x00000000
#define AVR32_USBH_HCRHDESCRIPTORA_RESETVALUE               0x00000000
#define AVR32_USBH_HCRHDESCRIPTORB                          0x0000004c
#define AVR32_USBH_HCRHDESCRIPTORB_MASK                     0x00000000
#define AVR32_USBH_HCRHDESCRIPTORB_RESETVALUE               0x00000000
#define AVR32_USBH_HCRHPORTSTATUS                           0x00000054
#define AVR32_USBH_HCRHPORTSTATUS_MASK                      0x00000000
#define AVR32_USBH_HCRHPORTSTATUS_RESETVALUE                0x00000000
#define AVR32_USBH_HCRHSTATUS                               0x00000050
#define AVR32_USBH_HCRHSTATUS_MASK                          0x00000000
#define AVR32_USBH_HCRHSTATUS_RESETVALUE                    0x00000000
#define AVR32_USBH_HCSPARAMS                                0x00000004
#define AVR32_USBH_HCSPARAMS_MASK                           0x00000000
#define AVR32_USBH_HCSPARAMS_RESETVALUE                     0x00001116
#define AVR32_USBH_INSNREG00                                0x00000090
#define AVR32_USBH_INSNREG00_MASK                           0x00000000
#define AVR32_USBH_INSNREG00_RESETVALUE                     0x00000000
#define AVR32_USBH_INSNREG01                                0x00000094
#define AVR32_USBH_INSNREG01_MASK                           0x00000000
#define AVR32_USBH_INSNREG01_RESETVALUE                     0x00200020
#define AVR32_USBH_INSNREG02                                0x00000098
#define AVR32_USBH_INSNREG02_MASK                           0x00000000
#define AVR32_USBH_INSNREG02_RESETVALUE                     0x00000200
#define AVR32_USBH_INSNREG03                                0x0000009c
#define AVR32_USBH_INSNREG03_MASK                           0x00000000
#define AVR32_USBH_INSNREG03_RESETVALUE                     0x00000000
#define AVR32_USBH_INSNREG04                                0x000000a0
#define AVR32_USBH_INSNREG04_MASK                           0x00000000
#define AVR32_USBH_INSNREG04_RESETVALUE                     0x00000000
#define AVR32_USBH_INSNREG05                                0x000000a4
#define AVR32_USBH_INSNREG05_MASK                           0x00000000
#define AVR32_USBH_INSNREG05_RESETVALUE                     0x00001000
#define AVR32_USBH_PERIODICLISTBASE                         0x00000024
#define AVR32_USBH_PERIODICLISTBASE_MASK                    0x00000000
#define AVR32_USBH_PERIODICLISTBASE_RESETVALUE              0x00000000
#define AVR32_USBH_PORTSC                                   0x00000054
#define AVR32_USBH_PORTSC_MASK                              0x00000000
#define AVR32_USBH_PORTSC_RESETVALUE                        0x00000000
#define AVR32_USBH_USBCMD                                   0x00000010
#define AVR32_USBH_USBCMD_MASK                              0x00000000
#define AVR32_USBH_USBCMD_RESETVALUE                        0x00080b00
#define AVR32_USBH_USBINTR                                  0x00000018
#define AVR32_USBH_USBINTR_MASK                             0x00000000
#define AVR32_USBH_USBINTR_RESETVALUE                       0x00000000
#define AVR32_USBH_USBSTS                                   0x00000014
#define AVR32_USBH_USBSTS_MASK                              0x00000000
#define AVR32_USBH_USBSTS_RESETVALUE                        0x00001000




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_usbh_ohci_t {
          unsigned long                  hcrevision;//0x0000
          unsigned long                  hccontrol ;//0x0004
          unsigned long                  hccommandstatus;//0x0008
          unsigned long                  hcinterruptstatus;//0x000c
          unsigned long                  hcinterruptenable;//0x0010
          unsigned long                  hcinterruptdisable;//0x0014
          unsigned long                  hchcca    ;//0x0018
          unsigned long                  hcperiodcurrented;//0x001c
          unsigned long                  hccontrolheaded;//0x0020
          unsigned long                  hccontrolcurrented;//0x0024
          unsigned long                  hcbulkheaded;//0x0028
          unsigned long                  hcbulkcurrented;//0x002c
          unsigned long                  hcdonehead;//0x0030
          unsigned long                  hcfminterval;//0x0034
          unsigned long                  hcfmremaining;//0x0038
          unsigned long                  hcfmnumber;//0x003c
          unsigned long                  hcperiodstart;//0x0040
          unsigned long                  hclsthreshold;//0x0044
          unsigned long                  hcrhdescriptora;//0x0048
          unsigned long                  hcrhdescriptorb;//0x004c
          unsigned long                  hcrhstatus;//0x0050
          unsigned long                  hcrhportstatus;//0x0054
} avr32_usbh_ohci_t;


typedef struct avr32_usbh_ehci_t {
    const unsigned long                  hccapbase ;//0x0000
    const unsigned long                  hcsparams ;//0x0004
    const unsigned long                  hccparams ;//0x0008
          unsigned int                   :32       ;//0x000c
          unsigned long                  usbcmd    ;//0x0010
          unsigned long                  usbsts    ;//0x0014
          unsigned long                  usbintr   ;//0x0018
          unsigned long                  frindex   ;//0x001c
          unsigned long                  ctrldssegment;//0x0020
          unsigned long                  periodiclistbase;//0x0024
          unsigned long                  asynclistaddr;//0x0028
          unsigned int                   :32       ;//0x002c
          unsigned int                   :32       ;//0x0030
          unsigned int                   :32       ;//0x0034
          unsigned int                   :32       ;//0x0038
          unsigned int                   :32       ;//0x003c
          unsigned int                   :32       ;//0x0040
          unsigned int                   :32       ;//0x0044
          unsigned int                   :32       ;//0x0048
          unsigned int                   :32       ;//0x004c
          unsigned long                  configflag;//0x0050
          unsigned long                  portsc    ;//0x0054
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
          unsigned long                  insnreg00 ;//0x0090
          unsigned long                  insnreg01 ;//0x0094
          unsigned long                  insnreg02 ;//0x0098
          unsigned long                  insnreg03 ;//0x009c
          unsigned long                  insnreg04 ;//0x00a0
          unsigned long                  insnreg05 ;//0x00a4
} avr32_usbh_ehci_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_USBH_291A_H_INCLUDED*/
#endif

