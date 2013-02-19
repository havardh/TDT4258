/*****************************************************************************
 *
 * Copyright (C) 2008 Atmel Corporation
 * 
 * Model        : UC3A0512ES
 * Revision     : $Revision: 58751 $
 * Checkin Date : $Date: 2008-09-15 15:20:42 +0200 (Mon, 15 Sep 2008) $ 
 *
 ****************************************************************************/
#ifndef AVR32_FLASHC_100_H_INCLUDED
#define AVR32_FLASHC_100_H_INCLUDED

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_FLASHC_<register>
 - Bitfield mask:   AVR32_FLASHC_<register>_<bitfield>
 - Bitfield offset: AVR32_FLASHC_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_FLASHC_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_FLASHC_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_FLASHC_<bitfield>
 - Bitfield offset: AVR32_FLASHC_<bitfield>_OFFSET
 - Bitfield size:   AVR32_FLASHC_<bitfield>_SIZE
 - Bitfield values: AVR32_FLASHC_<bitfield>_<value name>
 - Bitfield values: AVR32_FLASHC_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_FLASHC_1024                                     0x00000007
#define AVR32_FLASHC_128                                      0x00000002
#define AVR32_FLASHC_256                                      0x00000003
#define AVR32_FLASHC_32                                       0x00000000
#define AVR32_FLASHC_384                                      0x00000004
#define AVR32_FLASHC_512                                      0x00000005
#define AVR32_FLASHC_64                                       0x00000001
#define AVR32_FLASHC_768                                      0x00000006
#define AVR32_FLASHC_BODEN                                            27
#define AVR32_FLASHC_BODEN_MASK                               0x18000000
#define AVR32_FLASHC_BODEN_OFFSET                                     27
#define AVR32_FLASHC_BODEN_SIZE                                        2
#define AVR32_FLASHC_BODHYST                                          26
#define AVR32_FLASHC_BODHYST_MASK                             0x04000000
#define AVR32_FLASHC_BODHYST_OFFSET                                   26
#define AVR32_FLASHC_BODHYST_SIZE                                      1
#define AVR32_FLASHC_BODLEVEL                                         20
#define AVR32_FLASHC_BODLEVEL_MASK                            0x03f00000
#define AVR32_FLASHC_BODLEVEL_OFFSET                                  20
#define AVR32_FLASHC_BODLEVEL_SIZE                                     6
#define AVR32_FLASHC_BOOTPROT                                         17
#define AVR32_FLASHC_BOOTPROT_MASK                            0x000e0000
#define AVR32_FLASHC_BOOTPROT_OFFSET                                  17
#define AVR32_FLASHC_BOOTPROT_SIZE                                     3
#define AVR32_FLASHC_CE                                       0x00000014
#define AVR32_FLASHC_CF00                                              0
#define AVR32_FLASHC_CF00_MASK                                0x00000001
#define AVR32_FLASHC_CF00_OFFSET                                       0
#define AVR32_FLASHC_CF00_SIZE                                         1
#define AVR32_FLASHC_CF01                                              1
#define AVR32_FLASHC_CF01_MASK                                0x00000002
#define AVR32_FLASHC_CF01_OFFSET                                       1
#define AVR32_FLASHC_CF01_SIZE                                         1
#define AVR32_FLASHC_CF02                                              2
#define AVR32_FLASHC_CF02_MASK                                0x00000004
#define AVR32_FLASHC_CF02_OFFSET                                       2
#define AVR32_FLASHC_CF02_SIZE                                         1
#define AVR32_FLASHC_CF03                                              3
#define AVR32_FLASHC_CF03_MASK                                0x00000008
#define AVR32_FLASHC_CF03_OFFSET                                       3
#define AVR32_FLASHC_CF03_SIZE                                         1
#define AVR32_FLASHC_CF04                                              4
#define AVR32_FLASHC_CF04_MASK                                0x00000010
#define AVR32_FLASHC_CF04_OFFSET                                       4
#define AVR32_FLASHC_CF04_SIZE                                         1
#define AVR32_FLASHC_CF05                                              5
#define AVR32_FLASHC_CF05_MASK                                0x00000020
#define AVR32_FLASHC_CF05_OFFSET                                       5
#define AVR32_FLASHC_CF05_SIZE                                         1
#define AVR32_FLASHC_CF06                                              6
#define AVR32_FLASHC_CF06_MASK                                0x00000040
#define AVR32_FLASHC_CF06_OFFSET                                       6
#define AVR32_FLASHC_CF06_SIZE                                         1
#define AVR32_FLASHC_CF07                                              7
#define AVR32_FLASHC_CF07_MASK                                0x00000080
#define AVR32_FLASHC_CF07_OFFSET                                       7
#define AVR32_FLASHC_CF07_SIZE                                         1
#define AVR32_FLASHC_CF08                                              8
#define AVR32_FLASHC_CF08_MASK                                0x00000100
#define AVR32_FLASHC_CF08_OFFSET                                       8
#define AVR32_FLASHC_CF08_SIZE                                         1
#define AVR32_FLASHC_CF09                                              9
#define AVR32_FLASHC_CF09_MASK                                0x00000200
#define AVR32_FLASHC_CF09_OFFSET                                       9
#define AVR32_FLASHC_CF09_SIZE                                         1
#define AVR32_FLASHC_CF10                                             10
#define AVR32_FLASHC_CF10_MASK                                0x00000400
#define AVR32_FLASHC_CF10_OFFSET                                      10
#define AVR32_FLASHC_CF10_SIZE                                         1
#define AVR32_FLASHC_CF11                                             11
#define AVR32_FLASHC_CF11_MASK                                0x00000800
#define AVR32_FLASHC_CF11_OFFSET                                      11
#define AVR32_FLASHC_CF11_SIZE                                         1
#define AVR32_FLASHC_CF12                                             12
#define AVR32_FLASHC_CF12_MASK                                0x00001000
#define AVR32_FLASHC_CF12_OFFSET                                      12
#define AVR32_FLASHC_CF12_SIZE                                         1
#define AVR32_FLASHC_CF13                                             13
#define AVR32_FLASHC_CF13_MASK                                0x00002000
#define AVR32_FLASHC_CF13_OFFSET                                      13
#define AVR32_FLASHC_CF13_SIZE                                         1
#define AVR32_FLASHC_CF14                                             14
#define AVR32_FLASHC_CF14_MASK                                0x00004000
#define AVR32_FLASHC_CF14_OFFSET                                      14
#define AVR32_FLASHC_CF14_SIZE                                         1
#define AVR32_FLASHC_CF15                                             15
#define AVR32_FLASHC_CF15_MASK                                0x00008000
#define AVR32_FLASHC_CF15_OFFSET                                      15
#define AVR32_FLASHC_CF15_SIZE                                         1
#define AVR32_FLASHC_CF16                                             16
#define AVR32_FLASHC_CF16_MASK                                0x00010000
#define AVR32_FLASHC_CF16_OFFSET                                      16
#define AVR32_FLASHC_CF16_SIZE                                         1
#define AVR32_FLASHC_CF17                                             17
#define AVR32_FLASHC_CF17_MASK                                0x00020000
#define AVR32_FLASHC_CF17_OFFSET                                      17
#define AVR32_FLASHC_CF17_SIZE                                         1
#define AVR32_FLASHC_CF18                                             18
#define AVR32_FLASHC_CF18_MASK                                0x00040000
#define AVR32_FLASHC_CF18_OFFSET                                      18
#define AVR32_FLASHC_CF18_SIZE                                         1
#define AVR32_FLASHC_CF19                                             19
#define AVR32_FLASHC_CF19_MASK                                0x00080000
#define AVR32_FLASHC_CF19_OFFSET                                      19
#define AVR32_FLASHC_CF19_SIZE                                         1
#define AVR32_FLASHC_CF20                                             20
#define AVR32_FLASHC_CF20_MASK                                0x00100000
#define AVR32_FLASHC_CF20_OFFSET                                      20
#define AVR32_FLASHC_CF20_SIZE                                         1
#define AVR32_FLASHC_CF21                                             21
#define AVR32_FLASHC_CF21_MASK                                0x00200000
#define AVR32_FLASHC_CF21_OFFSET                                      21
#define AVR32_FLASHC_CF21_SIZE                                         1
#define AVR32_FLASHC_CF22                                             22
#define AVR32_FLASHC_CF22_MASK                                0x00400000
#define AVR32_FLASHC_CF22_OFFSET                                      22
#define AVR32_FLASHC_CF22_SIZE                                         1
#define AVR32_FLASHC_CF23                                             23
#define AVR32_FLASHC_CF23_MASK                                0x00800000
#define AVR32_FLASHC_CF23_OFFSET                                      23
#define AVR32_FLASHC_CF23_SIZE                                         1
#define AVR32_FLASHC_CF24                                             24
#define AVR32_FLASHC_CF24_MASK                                0x01000000
#define AVR32_FLASHC_CF24_OFFSET                                      24
#define AVR32_FLASHC_CF24_SIZE                                         1
#define AVR32_FLASHC_CF25                                             25
#define AVR32_FLASHC_CF25_MASK                                0x02000000
#define AVR32_FLASHC_CF25_OFFSET                                      25
#define AVR32_FLASHC_CF25_SIZE                                         1
#define AVR32_FLASHC_CF26                                             26
#define AVR32_FLASHC_CF26_MASK                                0x04000000
#define AVR32_FLASHC_CF26_OFFSET                                      26
#define AVR32_FLASHC_CF26_SIZE                                         1
#define AVR32_FLASHC_CF27                                             27
#define AVR32_FLASHC_CF27_MASK                                0x08000000
#define AVR32_FLASHC_CF27_OFFSET                                      27
#define AVR32_FLASHC_CF27_SIZE                                         1
#define AVR32_FLASHC_CF28                                             28
#define AVR32_FLASHC_CF28_MASK                                0x10000000
#define AVR32_FLASHC_CF28_OFFSET                                      28
#define AVR32_FLASHC_CF28_SIZE                                         1
#define AVR32_FLASHC_CF29                                             29
#define AVR32_FLASHC_CF29_MASK                                0x20000000
#define AVR32_FLASHC_CF29_OFFSET                                      29
#define AVR32_FLASHC_CF29_SIZE                                         1
#define AVR32_FLASHC_CF30                                             30
#define AVR32_FLASHC_CF30_MASK                                0x40000000
#define AVR32_FLASHC_CF30_OFFSET                                      30
#define AVR32_FLASHC_CF30_SIZE                                         1
#define AVR32_FLASHC_CF31                                             31
#define AVR32_FLASHC_CF31_MASK                                0x80000000
#define AVR32_FLASHC_CF31_OFFSET                                      31
#define AVR32_FLASHC_CF31_SIZE                                         1
#define AVR32_FLASHC_CMD                                               0
#define AVR32_FLASHC_CMD_CE                                   0x00000014
#define AVR32_FLASHC_CMD_CPB                                  0x00000003
#define AVR32_FLASHC_CMD_CUE                                  0x00000016
#define AVR32_FLASHC_CMD_CUFE                                 0x00000018
#define AVR32_FLASHC_CMD_CUFW                                 0x00000019
#define AVR32_FLASHC_CMD_CUW                                  0x00000017
#define AVR32_FLASHC_CMD_CW                                   0x00000015
#define AVR32_FLASHC_CMD_EA                                   0x00000006
#define AVR32_FLASHC_CMD_EAF                                  0x0000001b
#define AVR32_FLASHC_CMD_EAGPF                                0x0000000b
#define AVR32_FLASHC_CMD_ECONF                                0x00000013
#define AVR32_FLASHC_CMD_EDIAG                                0x0000001d
#define AVR32_FLASHC_CMD_EFP                                  0x0000001f
#define AVR32_FLASHC_CMD_EGPB                                 0x00000008
#define AVR32_FLASHC_CMD_EP                                   0x00000002
#define AVR32_FLASHC_CMD_EUP                                  0x0000000e
#define AVR32_FLASHC_CMD_LP                                   0x00000004
#define AVR32_FLASHC_CMD_MASK                                 0x0000003f
#define AVR32_FLASHC_CMD_NOP                                  0x00000000
#define AVR32_FLASHC_CMD_OFFSET                                        0
#define AVR32_FLASHC_CMD_PCFB                                 0x00000011
#define AVR32_FLASHC_CMD_PGPFB                                0x0000000a
#define AVR32_FLASHC_CMD_QPR                                  0x0000000c
#define AVR32_FLASHC_CMD_SIZE                                          6
#define AVR32_FLASHC_CMD_SSB                                  0x00000009
#define AVR32_FLASHC_CMD_UP                                   0x00000005
#define AVR32_FLASHC_CMD_WAF                                  0x0000001a
#define AVR32_FLASHC_CMD_WCONF                                0x00000012
#define AVR32_FLASHC_CMD_WDIAG                                0x0000001c
#define AVR32_FLASHC_CMD_WFP                                  0x0000001e
#define AVR32_FLASHC_CMD_WGPB                                 0x00000007
#define AVR32_FLASHC_CMD_WP                                   0x00000001
#define AVR32_FLASHC_CMD_WUP                                  0x0000000d
#define AVR32_FLASHC_CPB                                      0x00000003
#define AVR32_FLASHC_CUE                                      0x00000016
#define AVR32_FLASHC_CUFE                                     0x00000018
#define AVR32_FLASHC_CUFW                                     0x00000019
#define AVR32_FLASHC_CUW                                      0x00000017
#define AVR32_FLASHC_CW                                       0x00000015
#define AVR32_FLASHC_EA                                       0x00000006
#define AVR32_FLASHC_EAF                                      0x0000001b
#define AVR32_FLASHC_EAGPF                                    0x0000000b
#define AVR32_FLASHC_ECONF                                    0x00000013
#define AVR32_FLASHC_EDIAG                                    0x0000001d
#define AVR32_FLASHC_EFP                                      0x0000001f
#define AVR32_FLASHC_EGPB                                     0x00000008
#define AVR32_FLASHC_EP                                       0x00000002
#define AVR32_FLASHC_EPFL                                             16
#define AVR32_FLASHC_EPFL_MASK                                0x00010000
#define AVR32_FLASHC_EPFL_OFFSET                                      16
#define AVR32_FLASHC_EPFL_SIZE                                         1
#define AVR32_FLASHC_EUP                                      0x0000000e
#define AVR32_FLASHC_FCFR                                     0x00000010
#define AVR32_FLASHC_FCFR_CF00                                         0
#define AVR32_FLASHC_FCFR_CF00_MASK                           0x00000001
#define AVR32_FLASHC_FCFR_CF00_OFFSET                                  0
#define AVR32_FLASHC_FCFR_CF00_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF01                                         1
#define AVR32_FLASHC_FCFR_CF01_MASK                           0x00000002
#define AVR32_FLASHC_FCFR_CF01_OFFSET                                  1
#define AVR32_FLASHC_FCFR_CF01_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF02                                         2
#define AVR32_FLASHC_FCFR_CF02_MASK                           0x00000004
#define AVR32_FLASHC_FCFR_CF02_OFFSET                                  2
#define AVR32_FLASHC_FCFR_CF02_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF03                                         3
#define AVR32_FLASHC_FCFR_CF03_MASK                           0x00000008
#define AVR32_FLASHC_FCFR_CF03_OFFSET                                  3
#define AVR32_FLASHC_FCFR_CF03_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF04                                         4
#define AVR32_FLASHC_FCFR_CF04_MASK                           0x00000010
#define AVR32_FLASHC_FCFR_CF04_OFFSET                                  4
#define AVR32_FLASHC_FCFR_CF04_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF05                                         5
#define AVR32_FLASHC_FCFR_CF05_MASK                           0x00000020
#define AVR32_FLASHC_FCFR_CF05_OFFSET                                  5
#define AVR32_FLASHC_FCFR_CF05_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF06                                         6
#define AVR32_FLASHC_FCFR_CF06_MASK                           0x00000040
#define AVR32_FLASHC_FCFR_CF06_OFFSET                                  6
#define AVR32_FLASHC_FCFR_CF06_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF07                                         7
#define AVR32_FLASHC_FCFR_CF07_MASK                           0x00000080
#define AVR32_FLASHC_FCFR_CF07_OFFSET                                  7
#define AVR32_FLASHC_FCFR_CF07_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF08                                         8
#define AVR32_FLASHC_FCFR_CF08_MASK                           0x00000100
#define AVR32_FLASHC_FCFR_CF08_OFFSET                                  8
#define AVR32_FLASHC_FCFR_CF08_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF09                                         9
#define AVR32_FLASHC_FCFR_CF09_MASK                           0x00000200
#define AVR32_FLASHC_FCFR_CF09_OFFSET                                  9
#define AVR32_FLASHC_FCFR_CF09_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF10                                        10
#define AVR32_FLASHC_FCFR_CF10_MASK                           0x00000400
#define AVR32_FLASHC_FCFR_CF10_OFFSET                                 10
#define AVR32_FLASHC_FCFR_CF10_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF11                                        11
#define AVR32_FLASHC_FCFR_CF11_MASK                           0x00000800
#define AVR32_FLASHC_FCFR_CF11_OFFSET                                 11
#define AVR32_FLASHC_FCFR_CF11_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF12                                        12
#define AVR32_FLASHC_FCFR_CF12_MASK                           0x00001000
#define AVR32_FLASHC_FCFR_CF12_OFFSET                                 12
#define AVR32_FLASHC_FCFR_CF12_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF13                                        13
#define AVR32_FLASHC_FCFR_CF13_MASK                           0x00002000
#define AVR32_FLASHC_FCFR_CF13_OFFSET                                 13
#define AVR32_FLASHC_FCFR_CF13_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF14                                        14
#define AVR32_FLASHC_FCFR_CF14_MASK                           0x00004000
#define AVR32_FLASHC_FCFR_CF14_OFFSET                                 14
#define AVR32_FLASHC_FCFR_CF14_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF15                                        15
#define AVR32_FLASHC_FCFR_CF15_MASK                           0x00008000
#define AVR32_FLASHC_FCFR_CF15_OFFSET                                 15
#define AVR32_FLASHC_FCFR_CF15_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF16                                        16
#define AVR32_FLASHC_FCFR_CF16_MASK                           0x00010000
#define AVR32_FLASHC_FCFR_CF16_OFFSET                                 16
#define AVR32_FLASHC_FCFR_CF16_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF17                                        17
#define AVR32_FLASHC_FCFR_CF17_MASK                           0x00020000
#define AVR32_FLASHC_FCFR_CF17_OFFSET                                 17
#define AVR32_FLASHC_FCFR_CF17_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF18                                        18
#define AVR32_FLASHC_FCFR_CF18_MASK                           0x00040000
#define AVR32_FLASHC_FCFR_CF18_OFFSET                                 18
#define AVR32_FLASHC_FCFR_CF18_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF19                                        19
#define AVR32_FLASHC_FCFR_CF19_MASK                           0x00080000
#define AVR32_FLASHC_FCFR_CF19_OFFSET                                 19
#define AVR32_FLASHC_FCFR_CF19_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF20                                        20
#define AVR32_FLASHC_FCFR_CF20_MASK                           0x00100000
#define AVR32_FLASHC_FCFR_CF20_OFFSET                                 20
#define AVR32_FLASHC_FCFR_CF20_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF21                                        21
#define AVR32_FLASHC_FCFR_CF21_MASK                           0x00200000
#define AVR32_FLASHC_FCFR_CF21_OFFSET                                 21
#define AVR32_FLASHC_FCFR_CF21_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF22                                        22
#define AVR32_FLASHC_FCFR_CF22_MASK                           0x00400000
#define AVR32_FLASHC_FCFR_CF22_OFFSET                                 22
#define AVR32_FLASHC_FCFR_CF22_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF23                                        23
#define AVR32_FLASHC_FCFR_CF23_MASK                           0x00800000
#define AVR32_FLASHC_FCFR_CF23_OFFSET                                 23
#define AVR32_FLASHC_FCFR_CF23_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF24                                        24
#define AVR32_FLASHC_FCFR_CF24_MASK                           0x01000000
#define AVR32_FLASHC_FCFR_CF24_OFFSET                                 24
#define AVR32_FLASHC_FCFR_CF24_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF25                                        25
#define AVR32_FLASHC_FCFR_CF25_MASK                           0x02000000
#define AVR32_FLASHC_FCFR_CF25_OFFSET                                 25
#define AVR32_FLASHC_FCFR_CF25_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF26                                        26
#define AVR32_FLASHC_FCFR_CF26_MASK                           0x04000000
#define AVR32_FLASHC_FCFR_CF26_OFFSET                                 26
#define AVR32_FLASHC_FCFR_CF26_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF27                                        27
#define AVR32_FLASHC_FCFR_CF27_MASK                           0x08000000
#define AVR32_FLASHC_FCFR_CF27_OFFSET                                 27
#define AVR32_FLASHC_FCFR_CF27_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF28                                        28
#define AVR32_FLASHC_FCFR_CF28_MASK                           0x10000000
#define AVR32_FLASHC_FCFR_CF28_OFFSET                                 28
#define AVR32_FLASHC_FCFR_CF28_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF29                                        29
#define AVR32_FLASHC_FCFR_CF29_MASK                           0x20000000
#define AVR32_FLASHC_FCFR_CF29_OFFSET                                 29
#define AVR32_FLASHC_FCFR_CF29_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF30                                        30
#define AVR32_FLASHC_FCFR_CF30_MASK                           0x40000000
#define AVR32_FLASHC_FCFR_CF30_OFFSET                                 30
#define AVR32_FLASHC_FCFR_CF30_SIZE                                    1
#define AVR32_FLASHC_FCFR_CF31                                        31
#define AVR32_FLASHC_FCFR_CF31_MASK                           0x80000000
#define AVR32_FLASHC_FCFR_CF31_OFFSET                                 31
#define AVR32_FLASHC_FCFR_CF31_SIZE                                    1
#define AVR32_FLASHC_FCFR_MASK                                0xffffffff
#define AVR32_FLASHC_FCFR_RESETVALUE                          0x00000000
#define AVR32_FLASHC_FCMD                                     0x00000004
#define AVR32_FLASHC_FCMD_CMD                                          0
#define AVR32_FLASHC_FCMD_CMD_CE                              0x00000014
#define AVR32_FLASHC_FCMD_CMD_CPB                             0x00000003
#define AVR32_FLASHC_FCMD_CMD_CUE                             0x00000016
#define AVR32_FLASHC_FCMD_CMD_CUFE                            0x00000018
#define AVR32_FLASHC_FCMD_CMD_CUFW                            0x00000019
#define AVR32_FLASHC_FCMD_CMD_CUW                             0x00000017
#define AVR32_FLASHC_FCMD_CMD_CW                              0x00000015
#define AVR32_FLASHC_FCMD_CMD_EA                              0x00000006
#define AVR32_FLASHC_FCMD_CMD_EAF                             0x0000001b
#define AVR32_FLASHC_FCMD_CMD_EAGPF                           0x0000000b
#define AVR32_FLASHC_FCMD_CMD_ECONF                           0x00000013
#define AVR32_FLASHC_FCMD_CMD_EDIAG                           0x0000001d
#define AVR32_FLASHC_FCMD_CMD_EFP                             0x0000001f
#define AVR32_FLASHC_FCMD_CMD_EGPB                            0x00000008
#define AVR32_FLASHC_FCMD_CMD_EP                              0x00000002
#define AVR32_FLASHC_FCMD_CMD_EUP                             0x0000000e
#define AVR32_FLASHC_FCMD_CMD_LP                              0x00000004
#define AVR32_FLASHC_FCMD_CMD_MASK                            0x0000003f
#define AVR32_FLASHC_FCMD_CMD_NOP                             0x00000000
#define AVR32_FLASHC_FCMD_CMD_OFFSET                                   0
#define AVR32_FLASHC_FCMD_CMD_PCFB                            0x00000011
#define AVR32_FLASHC_FCMD_CMD_PGPFB                           0x0000000a
#define AVR32_FLASHC_FCMD_CMD_QPR                             0x0000000c
#define AVR32_FLASHC_FCMD_CMD_SIZE                                     6
#define AVR32_FLASHC_FCMD_CMD_SSB                             0x00000009
#define AVR32_FLASHC_FCMD_CMD_UP                              0x00000005
#define AVR32_FLASHC_FCMD_CMD_WAF                             0x0000001a
#define AVR32_FLASHC_FCMD_CMD_WCONF                           0x00000012
#define AVR32_FLASHC_FCMD_CMD_WDIAG                           0x0000001c
#define AVR32_FLASHC_FCMD_CMD_WFP                             0x0000001e
#define AVR32_FLASHC_FCMD_CMD_WGPB                            0x00000007
#define AVR32_FLASHC_FCMD_CMD_WP                              0x00000001
#define AVR32_FLASHC_FCMD_CMD_WUP                             0x0000000d
#define AVR32_FLASHC_FCMD_KEY                                         24
#define AVR32_FLASHC_FCMD_KEY_KEY                             0x000000a5
#define AVR32_FLASHC_FCMD_KEY_MASK                            0xff000000
#define AVR32_FLASHC_FCMD_KEY_OFFSET                                  24
#define AVR32_FLASHC_FCMD_KEY_SIZE                                     8
#define AVR32_FLASHC_FCMD_MASK                                0xffffff3f
#define AVR32_FLASHC_FCMD_PAGEN                                        8
#define AVR32_FLASHC_FCMD_PAGEN_MASK                          0x00ffff00
#define AVR32_FLASHC_FCMD_PAGEN_OFFSET                                 8
#define AVR32_FLASHC_FCMD_PAGEN_SIZE                                  16
#define AVR32_FLASHC_FCMD_RESETVALUE                          0x00000000
#define AVR32_FLASHC_FCR                                      0x00000000
#define AVR32_FLASHC_FCR_FRDY                                          0
#define AVR32_FLASHC_FCR_FRDY_MASK                            0x00000001
#define AVR32_FLASHC_FCR_FRDY_OFFSET                                   0
#define AVR32_FLASHC_FCR_FRDY_SIZE                                     1
#define AVR32_FLASHC_FCR_FWS                                           6
#define AVR32_FLASHC_FCR_FWS_MASK                             0x00000040
#define AVR32_FLASHC_FCR_FWS_OFFSET                                    6
#define AVR32_FLASHC_FCR_FWS_SIZE                                      1
#define AVR32_FLASHC_FCR_LOCKE                                         2
#define AVR32_FLASHC_FCR_LOCKE_MASK                           0x00000004
#define AVR32_FLASHC_FCR_LOCKE_OFFSET                                  2
#define AVR32_FLASHC_FCR_LOCKE_SIZE                                    1
#define AVR32_FLASHC_FCR_MASK                                 0x0000004d
#define AVR32_FLASHC_FCR_PROGE                                         3
#define AVR32_FLASHC_FCR_PROGE_MASK                           0x00000008
#define AVR32_FLASHC_FCR_PROGE_OFFSET                                  3
#define AVR32_FLASHC_FCR_PROGE_SIZE                                    1
#define AVR32_FLASHC_FCR_RESETVALUE                           0x00000000
#define AVR32_FLASHC_FGPFR                                    0x0000000c
#define AVR32_FLASHC_FGPFR_BODEN                                      27
#define AVR32_FLASHC_FGPFR_BODEN_MASK                         0x18000000
#define AVR32_FLASHC_FGPFR_BODEN_OFFSET                               27
#define AVR32_FLASHC_FGPFR_BODEN_SIZE                                  2
#define AVR32_FLASHC_FGPFR_BODHYST                                    26
#define AVR32_FLASHC_FGPFR_BODHYST_MASK                       0x04000000
#define AVR32_FLASHC_FGPFR_BODHYST_OFFSET                             26
#define AVR32_FLASHC_FGPFR_BODHYST_SIZE                                1
#define AVR32_FLASHC_FGPFR_BODLEVEL                                   20
#define AVR32_FLASHC_FGPFR_BODLEVEL_MASK                      0x03f00000
#define AVR32_FLASHC_FGPFR_BODLEVEL_OFFSET                            20
#define AVR32_FLASHC_FGPFR_BODLEVEL_SIZE                               6
#define AVR32_FLASHC_FGPFR_BOOTPROT                                   17
#define AVR32_FLASHC_FGPFR_BOOTPROT_MASK                      0x000e0000
#define AVR32_FLASHC_FGPFR_BOOTPROT_OFFSET                            17
#define AVR32_FLASHC_FGPFR_BOOTPROT_SIZE                               3
#define AVR32_FLASHC_FGPFR_EPFL                                       16
#define AVR32_FLASHC_FGPFR_EPFL_MASK                          0x00010000
#define AVR32_FLASHC_FGPFR_EPFL_OFFSET                                16
#define AVR32_FLASHC_FGPFR_EPFL_SIZE                                   1
#define AVR32_FLASHC_FGPFR_GPF29                                      29
#define AVR32_FLASHC_FGPFR_GPF29_MASK                         0x20000000
#define AVR32_FLASHC_FGPFR_GPF29_OFFSET                               29
#define AVR32_FLASHC_FGPFR_GPF29_SIZE                                  1
#define AVR32_FLASHC_FGPFR_GPF30                                      30
#define AVR32_FLASHC_FGPFR_GPF30_MASK                         0x40000000
#define AVR32_FLASHC_FGPFR_GPF30_OFFSET                               30
#define AVR32_FLASHC_FGPFR_GPF30_SIZE                                  1
#define AVR32_FLASHC_FGPFR_GPF31                                      31
#define AVR32_FLASHC_FGPFR_GPF31_MASK                         0x80000000
#define AVR32_FLASHC_FGPFR_GPF31_OFFSET                               31
#define AVR32_FLASHC_FGPFR_GPF31_SIZE                                  1
#define AVR32_FLASHC_FGPFR_LOCK0                                       0
#define AVR32_FLASHC_FGPFR_LOCK0_MASK                         0x00000001
#define AVR32_FLASHC_FGPFR_LOCK0_OFFSET                                0
#define AVR32_FLASHC_FGPFR_LOCK0_SIZE                                  1
#define AVR32_FLASHC_FGPFR_LOCK1                                       1
#define AVR32_FLASHC_FGPFR_LOCK10                                     10
#define AVR32_FLASHC_FGPFR_LOCK10_MASK                        0x00000400
#define AVR32_FLASHC_FGPFR_LOCK10_OFFSET                              10
#define AVR32_FLASHC_FGPFR_LOCK10_SIZE                                 1
#define AVR32_FLASHC_FGPFR_LOCK11                                     11
#define AVR32_FLASHC_FGPFR_LOCK11_MASK                        0x00000800
#define AVR32_FLASHC_FGPFR_LOCK11_OFFSET                              11
#define AVR32_FLASHC_FGPFR_LOCK11_SIZE                                 1
#define AVR32_FLASHC_FGPFR_LOCK12                                     12
#define AVR32_FLASHC_FGPFR_LOCK12_MASK                        0x00001000
#define AVR32_FLASHC_FGPFR_LOCK12_OFFSET                              12
#define AVR32_FLASHC_FGPFR_LOCK12_SIZE                                 1
#define AVR32_FLASHC_FGPFR_LOCK13                                     13
#define AVR32_FLASHC_FGPFR_LOCK13_MASK                        0x00002000
#define AVR32_FLASHC_FGPFR_LOCK13_OFFSET                              13
#define AVR32_FLASHC_FGPFR_LOCK13_SIZE                                 1
#define AVR32_FLASHC_FGPFR_LOCK14                                     14
#define AVR32_FLASHC_FGPFR_LOCK14_MASK                        0x00004000
#define AVR32_FLASHC_FGPFR_LOCK14_OFFSET                              14
#define AVR32_FLASHC_FGPFR_LOCK14_SIZE                                 1
#define AVR32_FLASHC_FGPFR_LOCK15                                     15
#define AVR32_FLASHC_FGPFR_LOCK15_MASK                        0x00008000
#define AVR32_FLASHC_FGPFR_LOCK15_OFFSET                              15
#define AVR32_FLASHC_FGPFR_LOCK15_SIZE                                 1
#define AVR32_FLASHC_FGPFR_LOCK1_MASK                         0x00000002
#define AVR32_FLASHC_FGPFR_LOCK1_OFFSET                                1
#define AVR32_FLASHC_FGPFR_LOCK1_SIZE                                  1
#define AVR32_FLASHC_FGPFR_LOCK2                                       2
#define AVR32_FLASHC_FGPFR_LOCK2_MASK                         0x00000004
#define AVR32_FLASHC_FGPFR_LOCK2_OFFSET                                2
#define AVR32_FLASHC_FGPFR_LOCK2_SIZE                                  1
#define AVR32_FLASHC_FGPFR_LOCK3                                       3
#define AVR32_FLASHC_FGPFR_LOCK3_MASK                         0x00000008
#define AVR32_FLASHC_FGPFR_LOCK3_OFFSET                                3
#define AVR32_FLASHC_FGPFR_LOCK3_SIZE                                  1
#define AVR32_FLASHC_FGPFR_LOCK4                                       4
#define AVR32_FLASHC_FGPFR_LOCK4_MASK                         0x00000010
#define AVR32_FLASHC_FGPFR_LOCK4_OFFSET                                4
#define AVR32_FLASHC_FGPFR_LOCK4_SIZE                                  1
#define AVR32_FLASHC_FGPFR_LOCK5                                       5
#define AVR32_FLASHC_FGPFR_LOCK5_MASK                         0x00000020
#define AVR32_FLASHC_FGPFR_LOCK5_OFFSET                                5
#define AVR32_FLASHC_FGPFR_LOCK5_SIZE                                  1
#define AVR32_FLASHC_FGPFR_LOCK6                                       6
#define AVR32_FLASHC_FGPFR_LOCK6_MASK                         0x00000040
#define AVR32_FLASHC_FGPFR_LOCK6_OFFSET                                6
#define AVR32_FLASHC_FGPFR_LOCK6_SIZE                                  1
#define AVR32_FLASHC_FGPFR_LOCK7                                       7
#define AVR32_FLASHC_FGPFR_LOCK7_MASK                         0x00000080
#define AVR32_FLASHC_FGPFR_LOCK7_OFFSET                                7
#define AVR32_FLASHC_FGPFR_LOCK7_SIZE                                  1
#define AVR32_FLASHC_FGPFR_LOCK8                                       8
#define AVR32_FLASHC_FGPFR_LOCK8_MASK                         0x00000100
#define AVR32_FLASHC_FGPFR_LOCK8_OFFSET                                8
#define AVR32_FLASHC_FGPFR_LOCK8_SIZE                                  1
#define AVR32_FLASHC_FGPFR_LOCK9                                       9
#define AVR32_FLASHC_FGPFR_LOCK9_MASK                         0x00000200
#define AVR32_FLASHC_FGPFR_LOCK9_OFFSET                                9
#define AVR32_FLASHC_FGPFR_LOCK9_SIZE                                  1
#define AVR32_FLASHC_FGPFR_MASK                               0xffffffff
#define AVR32_FLASHC_FGPFR_RESETVALUE                         0x00000000
#define AVR32_FLASHC_FRDY                                              0
#define AVR32_FLASHC_FRDY_MASK                                0x00000001
#define AVR32_FLASHC_FRDY_OFFSET                                       0
#define AVR32_FLASHC_FRDY_SIZE                                         1
#define AVR32_FLASHC_FSR                                      0x00000008
#define AVR32_FLASHC_FSR_FRDY                                          0
#define AVR32_FLASHC_FSR_FRDY_MASK                            0x00000001
#define AVR32_FLASHC_FSR_FRDY_OFFSET                                   0
#define AVR32_FLASHC_FSR_FRDY_SIZE                                     1
#define AVR32_FLASHC_FSR_FSZ                                          13
#define AVR32_FLASHC_FSR_FSZ_1024                             0x00000007
#define AVR32_FLASHC_FSR_FSZ_128                              0x00000002
#define AVR32_FLASHC_FSR_FSZ_256                              0x00000003
#define AVR32_FLASHC_FSR_FSZ_32                               0x00000000
#define AVR32_FLASHC_FSR_FSZ_384                              0x00000004
#define AVR32_FLASHC_FSR_FSZ_512                              0x00000005
#define AVR32_FLASHC_FSR_FSZ_64                               0x00000001
#define AVR32_FLASHC_FSR_FSZ_768                              0x00000006
#define AVR32_FLASHC_FSR_FSZ_MASK                             0x0000e000
#define AVR32_FLASHC_FSR_FSZ_OFFSET                                   13
#define AVR32_FLASHC_FSR_FSZ_SIZE                                      3
#define AVR32_FLASHC_FSR_LOCK0                                        16
#define AVR32_FLASHC_FSR_LOCK0_MASK                           0x00010000
#define AVR32_FLASHC_FSR_LOCK0_OFFSET                                 16
#define AVR32_FLASHC_FSR_LOCK0_SIZE                                    1
#define AVR32_FLASHC_FSR_LOCK1                                        17
#define AVR32_FLASHC_FSR_LOCK10                                       26
#define AVR32_FLASHC_FSR_LOCK10_MASK                          0x04000000
#define AVR32_FLASHC_FSR_LOCK10_OFFSET                                26
#define AVR32_FLASHC_FSR_LOCK10_SIZE                                   1
#define AVR32_FLASHC_FSR_LOCK11                                       27
#define AVR32_FLASHC_FSR_LOCK11_MASK                          0x08000000
#define AVR32_FLASHC_FSR_LOCK11_OFFSET                                27
#define AVR32_FLASHC_FSR_LOCK11_SIZE                                   1
#define AVR32_FLASHC_FSR_LOCK12                                       28
#define AVR32_FLASHC_FSR_LOCK12_MASK                          0x10000000
#define AVR32_FLASHC_FSR_LOCK12_OFFSET                                28
#define AVR32_FLASHC_FSR_LOCK12_SIZE                                   1
#define AVR32_FLASHC_FSR_LOCK13                                       29
#define AVR32_FLASHC_FSR_LOCK13_MASK                          0x20000000
#define AVR32_FLASHC_FSR_LOCK13_OFFSET                                29
#define AVR32_FLASHC_FSR_LOCK13_SIZE                                   1
#define AVR32_FLASHC_FSR_LOCK14                                       30
#define AVR32_FLASHC_FSR_LOCK14_MASK                          0x40000000
#define AVR32_FLASHC_FSR_LOCK14_OFFSET                                30
#define AVR32_FLASHC_FSR_LOCK14_SIZE                                   1
#define AVR32_FLASHC_FSR_LOCK15                                       31
#define AVR32_FLASHC_FSR_LOCK15_MASK                          0x80000000
#define AVR32_FLASHC_FSR_LOCK15_OFFSET                                31
#define AVR32_FLASHC_FSR_LOCK15_SIZE                                   1
#define AVR32_FLASHC_FSR_LOCK1_MASK                           0x00020000
#define AVR32_FLASHC_FSR_LOCK1_OFFSET                                 17
#define AVR32_FLASHC_FSR_LOCK1_SIZE                                    1
#define AVR32_FLASHC_FSR_LOCK2                                        18
#define AVR32_FLASHC_FSR_LOCK2_MASK                           0x00040000
#define AVR32_FLASHC_FSR_LOCK2_OFFSET                                 18
#define AVR32_FLASHC_FSR_LOCK2_SIZE                                    1
#define AVR32_FLASHC_FSR_LOCK3                                        19
#define AVR32_FLASHC_FSR_LOCK3_MASK                           0x00080000
#define AVR32_FLASHC_FSR_LOCK3_OFFSET                                 19
#define AVR32_FLASHC_FSR_LOCK3_SIZE                                    1
#define AVR32_FLASHC_FSR_LOCK4                                        20
#define AVR32_FLASHC_FSR_LOCK4_MASK                           0x00100000
#define AVR32_FLASHC_FSR_LOCK4_OFFSET                                 20
#define AVR32_FLASHC_FSR_LOCK4_SIZE                                    1
#define AVR32_FLASHC_FSR_LOCK5                                        21
#define AVR32_FLASHC_FSR_LOCK5_MASK                           0x00200000
#define AVR32_FLASHC_FSR_LOCK5_OFFSET                                 21
#define AVR32_FLASHC_FSR_LOCK5_SIZE                                    1
#define AVR32_FLASHC_FSR_LOCK6                                        22
#define AVR32_FLASHC_FSR_LOCK6_MASK                           0x00400000
#define AVR32_FLASHC_FSR_LOCK6_OFFSET                                 22
#define AVR32_FLASHC_FSR_LOCK6_SIZE                                    1
#define AVR32_FLASHC_FSR_LOCK7                                        23
#define AVR32_FLASHC_FSR_LOCK7_MASK                           0x00800000
#define AVR32_FLASHC_FSR_LOCK7_OFFSET                                 23
#define AVR32_FLASHC_FSR_LOCK7_SIZE                                    1
#define AVR32_FLASHC_FSR_LOCK8                                        24
#define AVR32_FLASHC_FSR_LOCK8_MASK                           0x01000000
#define AVR32_FLASHC_FSR_LOCK8_OFFSET                                 24
#define AVR32_FLASHC_FSR_LOCK8_SIZE                                    1
#define AVR32_FLASHC_FSR_LOCK9                                        25
#define AVR32_FLASHC_FSR_LOCK9_MASK                           0x02000000
#define AVR32_FLASHC_FSR_LOCK9_OFFSET                                 25
#define AVR32_FLASHC_FSR_LOCK9_SIZE                                    1
#define AVR32_FLASHC_FSR_LOCKE                                         2
#define AVR32_FLASHC_FSR_LOCKE_MASK                           0x00000004
#define AVR32_FLASHC_FSR_LOCKE_OFFSET                                  2
#define AVR32_FLASHC_FSR_LOCKE_SIZE                                    1
#define AVR32_FLASHC_FSR_MASK                                 0xffffe03d
#define AVR32_FLASHC_FSR_PROGE                                         3
#define AVR32_FLASHC_FSR_PROGE_MASK                           0x00000008
#define AVR32_FLASHC_FSR_PROGE_OFFSET                                  3
#define AVR32_FLASHC_FSR_PROGE_SIZE                                    1
#define AVR32_FLASHC_FSR_QPRR                                          5
#define AVR32_FLASHC_FSR_QPRR_MASK                            0x00000020
#define AVR32_FLASHC_FSR_QPRR_OFFSET                                   5
#define AVR32_FLASHC_FSR_QPRR_SIZE                                     1
#define AVR32_FLASHC_FSR_RESETVALUE                           0x00000000
#define AVR32_FLASHC_FSR_SECURITY                                      4
#define AVR32_FLASHC_FSR_SECURITY_MASK                        0x00000010
#define AVR32_FLASHC_FSR_SECURITY_OFFSET                               4
#define AVR32_FLASHC_FSR_SECURITY_SIZE                                 1
#define AVR32_FLASHC_FSZ                                              13
#define AVR32_FLASHC_FSZ_1024                                 0x00000007
#define AVR32_FLASHC_FSZ_128                                  0x00000002
#define AVR32_FLASHC_FSZ_256                                  0x00000003
#define AVR32_FLASHC_FSZ_32                                   0x00000000
#define AVR32_FLASHC_FSZ_384                                  0x00000004
#define AVR32_FLASHC_FSZ_512                                  0x00000005
#define AVR32_FLASHC_FSZ_64                                   0x00000001
#define AVR32_FLASHC_FSZ_768                                  0x00000006
#define AVR32_FLASHC_FSZ_MASK                                 0x0000e000
#define AVR32_FLASHC_FSZ_OFFSET                                       13
#define AVR32_FLASHC_FSZ_SIZE                                          3
#define AVR32_FLASHC_FWS                                               6
#define AVR32_FLASHC_FWS_MASK                                 0x00000040
#define AVR32_FLASHC_FWS_OFFSET                                        6
#define AVR32_FLASHC_FWS_SIZE                                          1
#define AVR32_FLASHC_GPF29                                            29
#define AVR32_FLASHC_GPF29_MASK                               0x20000000
#define AVR32_FLASHC_GPF29_OFFSET                                     29
#define AVR32_FLASHC_GPF29_SIZE                                        1
#define AVR32_FLASHC_GPF30                                            30
#define AVR32_FLASHC_GPF30_MASK                               0x40000000
#define AVR32_FLASHC_GPF30_OFFSET                                     30
#define AVR32_FLASHC_GPF30_SIZE                                        1
#define AVR32_FLASHC_GPF31                                            31
#define AVR32_FLASHC_GPF31_MASK                               0x80000000
#define AVR32_FLASHC_GPF31_OFFSET                                     31
#define AVR32_FLASHC_GPF31_SIZE                                        1
#define AVR32_FLASHC_KEY_KEY                                  0x000000a5
#define AVR32_FLASHC_KEY_MASK                                 0xff000000
#define AVR32_FLASHC_KEY_OFFSET                                       24
#define AVR32_FLASHC_KEY_SIZE                                          8
#define AVR32_FLASHC_LOCK0_SIZE                                        1
#define AVR32_FLASHC_LOCK10_SIZE                                       1
#define AVR32_FLASHC_LOCK11_SIZE                                       1
#define AVR32_FLASHC_LOCK12_SIZE                                       1
#define AVR32_FLASHC_LOCK13_SIZE                                       1
#define AVR32_FLASHC_LOCK14_SIZE                                       1
#define AVR32_FLASHC_LOCK15_SIZE                                       1
#define AVR32_FLASHC_LOCK1_SIZE                                        1
#define AVR32_FLASHC_LOCK2_SIZE                                        1
#define AVR32_FLASHC_LOCK3_SIZE                                        1
#define AVR32_FLASHC_LOCK4_SIZE                                        1
#define AVR32_FLASHC_LOCK5_SIZE                                        1
#define AVR32_FLASHC_LOCK6_SIZE                                        1
#define AVR32_FLASHC_LOCK7_SIZE                                        1
#define AVR32_FLASHC_LOCK8_SIZE                                        1
#define AVR32_FLASHC_LOCK9_SIZE                                        1
#define AVR32_FLASHC_LOCKE                                             2
#define AVR32_FLASHC_LOCKE_MASK                               0x00000004
#define AVR32_FLASHC_LOCKE_OFFSET                                      2
#define AVR32_FLASHC_LOCKE_SIZE                                        1
#define AVR32_FLASHC_LP                                       0x00000004
#define AVR32_FLASHC_NOP                                      0x00000000
#define AVR32_FLASHC_PAGEN                                             8
#define AVR32_FLASHC_PAGEN_MASK                               0x00ffff00
#define AVR32_FLASHC_PAGEN_OFFSET                                      8
#define AVR32_FLASHC_PAGEN_SIZE                                       16
#define AVR32_FLASHC_PCFB                                     0x00000011
#define AVR32_FLASHC_PGPFB                                    0x0000000a
#define AVR32_FLASHC_PROGE                                             3
#define AVR32_FLASHC_PROGE_MASK                               0x00000008
#define AVR32_FLASHC_PROGE_OFFSET                                      3
#define AVR32_FLASHC_PROGE_SIZE                                        1
#define AVR32_FLASHC_QPR                                      0x0000000c
#define AVR32_FLASHC_QPRR                                              5
#define AVR32_FLASHC_QPRR_MASK                                0x00000020
#define AVR32_FLASHC_QPRR_OFFSET                                       5
#define AVR32_FLASHC_QPRR_SIZE                                         1
#define AVR32_FLASHC_SECURITY                                          4
#define AVR32_FLASHC_SECURITY_MASK                            0x00000010
#define AVR32_FLASHC_SECURITY_OFFSET                                   4
#define AVR32_FLASHC_SECURITY_SIZE                                     1
#define AVR32_FLASHC_SSB                                      0x00000009
#define AVR32_FLASHC_UP                                       0x00000005
#define AVR32_FLASHC_WAF                                      0x0000001a
#define AVR32_FLASHC_WCONF                                    0x00000012
#define AVR32_FLASHC_WDIAG                                    0x0000001c
#define AVR32_FLASHC_WFP                                      0x0000001e
#define AVR32_FLASHC_WGPB                                     0x00000007
#define AVR32_FLASHC_WP                                       0x00000001
#define AVR32_FLASHC_WUP                                      0x0000000d




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_flashc_fcr_t {
    unsigned int                 :25;
    unsigned int fws             : 1;
    unsigned int                 : 2;
    unsigned int proge           : 1;
    unsigned int locke           : 1;
    unsigned int                 : 1;
    unsigned int frdy            : 1;
} avr32_flashc_fcr_t;



typedef struct avr32_flashc_fcmd_t {
    unsigned int key             : 8;
    unsigned int pagen           :16;
    unsigned int                 : 2;
    unsigned int cmd             : 6;
} avr32_flashc_fcmd_t;



typedef struct avr32_flashc_fsr_t {
    unsigned int lock15          : 1;
    unsigned int lock14          : 1;
    unsigned int lock13          : 1;
    unsigned int lock12          : 1;
    unsigned int lock11          : 1;
    unsigned int lock10          : 1;
    unsigned int lock9           : 1;
    unsigned int lock8           : 1;
    unsigned int lock7           : 1;
    unsigned int lock6           : 1;
    unsigned int lock5           : 1;
    unsigned int lock4           : 1;
    unsigned int lock3           : 1;
    unsigned int lock2           : 1;
    unsigned int lock1           : 1;
    unsigned int lock0           : 1;
    unsigned int fsz             : 3;
    unsigned int                 : 7;
    unsigned int qprr            : 1;
    unsigned int security        : 1;
    unsigned int proge           : 1;
    unsigned int locke           : 1;
    unsigned int                 : 1;
    unsigned int frdy            : 1;
} avr32_flashc_fsr_t;



typedef struct avr32_flashc_fgpfr_t {
    unsigned int gpf31           : 1;
    unsigned int gpf30           : 1;
    unsigned int gpf29           : 1;
    unsigned int boden           : 2;
    unsigned int bodhyst         : 1;
    unsigned int bodlevel        : 6;
    unsigned int bootprot        : 3;
    unsigned int epfl            : 1;
    unsigned int lock15          : 1;
    unsigned int lock14          : 1;
    unsigned int lock13          : 1;
    unsigned int lock12          : 1;
    unsigned int lock11          : 1;
    unsigned int lock10          : 1;
    unsigned int lock9           : 1;
    unsigned int lock8           : 1;
    unsigned int lock7           : 1;
    unsigned int lock6           : 1;
    unsigned int lock5           : 1;
    unsigned int lock4           : 1;
    unsigned int lock3           : 1;
    unsigned int lock2           : 1;
    unsigned int lock1           : 1;
    unsigned int lock0           : 1;
} avr32_flashc_fgpfr_t;



typedef struct avr32_flashc_fcfr_t {
    unsigned int cf31            : 1;
    unsigned int cf30            : 1;
    unsigned int cf29            : 1;
    unsigned int cf28            : 1;
    unsigned int cf27            : 1;
    unsigned int cf26            : 1;
    unsigned int cf25            : 1;
    unsigned int cf24            : 1;
    unsigned int cf23            : 1;
    unsigned int cf22            : 1;
    unsigned int cf21            : 1;
    unsigned int cf20            : 1;
    unsigned int cf19            : 1;
    unsigned int cf18            : 1;
    unsigned int cf17            : 1;
    unsigned int cf16            : 1;
    unsigned int cf15            : 1;
    unsigned int cf14            : 1;
    unsigned int cf13            : 1;
    unsigned int cf12            : 1;
    unsigned int cf11            : 1;
    unsigned int cf10            : 1;
    unsigned int cf09            : 1;
    unsigned int cf08            : 1;
    unsigned int cf07            : 1;
    unsigned int cf06            : 1;
    unsigned int cf05            : 1;
    unsigned int cf04            : 1;
    unsigned int cf03            : 1;
    unsigned int cf02            : 1;
    unsigned int cf01            : 1;
    unsigned int cf00            : 1;
} avr32_flashc_fcfr_t;



typedef struct avr32_flashc_t {
  union {
          unsigned long                  fcr       ;//0x0000
          avr32_flashc_fcr_t             FCR       ;
  };
  union {
          unsigned long                  fcmd      ;//0x0004
          avr32_flashc_fcmd_t            FCMD      ;
  };
  union {
          unsigned long                  fsr       ;//0x0008
          avr32_flashc_fsr_t             FSR       ;
  };
  union {
    const unsigned long                  fgpfr     ;//0x000c
    const avr32_flashc_fgpfr_t           FGPFR     ;
  };
  union {
    const unsigned long                  fcfr      ;//0x0010
    const avr32_flashc_fcfr_t            FCFR      ;
  };
} avr32_flashc_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_FLASHC_100_H_INCLUDED*/
#endif

