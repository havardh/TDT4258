/*This file is prepared for Doxygen automatic documentation generation.*/
/*! \file *********************************************************************
 *
 * \brief Standard part header file.
 *
 * This file includes the appropriate part header file according to the defined
 * MCU.
 *
 * - Compiler:           IAR EWAVR32 and GNU GCC for AVR32
 * - Supported devices:  All AVR32 devices can be used.
 * - AppNote:
 *
 * \author               Atmel Corporation: http://www.atmel.com \n
 *                       Support email: avr32@atmel.com
 *
 ******************************************************************************/

/* Copyright (c) 2007, Atmel Corporation All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. The name of ATMEL may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE EXPRESSLY AND
 * SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#ifndef _IO_H_
#define _IO_H_

#if __GNUC__
#   if __AVR32_AP7000__
#       include <avr32/ap7000.h>
#   elif __AVR32_AP7001__
#     include <avr32/ap7001.h>
#   elif __AVR32_AP7002__
#      include <avr32/ap7002.h>
#   elif __AVR32_AP7200__
#      include <avr32/ap7200.h>
#   elif __AVR32_UC3A0128__
#      include <avr32/uc3a0128.h>
#   elif __AVR32_UC3A0256__
#      include <avr32/uc3a0256.h>
#   elif __AVR32_UC3A0512__
#      include <avr32/uc3a0512.h>
#   elif __AVR32_UC3A0512ES__
#      include <avr32/uc3a0512es.h>
#   elif __AVR32_UC3A1128__
#      include <avr32/uc3a1128.h>
#   elif __AVR32_UC3A1256__
#      include <avr32/uc3a1256.h>
#   elif __AVR32_UC3A1512__
#     include <avr32/uc3a1512.h>
#   elif __AVR32_UC3A1512ES__
#      include <avr32/uc3a1512es.h>
#   elif __AVR32_UC3A364__
#      include <avr32/uc3a364.h>
#   elif __AVR32_UC3A364S__
#      include <avr32/uc3a364s.h>
#   elif __AVR32_UC3A3128__
#      include <avr32/uc3a3128.h>
#   elif __AVR32_UC3A3128S__
#      include <avr32/uc3a3128s.h>
#   elif __AVR32_UC3A3256__
#      include <avr32/uc3a3256.h>
#   elif __AVR32_UC3A3256S__
#      include <avr32/uc3a3256s.h>
#   elif __AVR32_UC3B064__
#      include <avr32/uc3b064.h>
#   elif __AVR32_UC3B0128__
#      include <avr32/uc3b0128.h>
#   elif __AVR32_UC3B0256__
#      include <avr32/uc3b0256.h>
#   elif __AVR32_UC3B0256ES__
#      include <avr32/uc3b0256es.h>
#   elif __AVR32_UC3B164__
#      include <avr32/uc3b164.h>
#   elif __AVR32_UC3B1128__
#      include <avr32/uc3b1128.h>
#   elif __AVR32_UC3B1256__
#      include <avr32/uc3b1256.h>
#   elif __AVR32_UC3B1256ES__
#      include <avr32/uc3b1256es.h>
#   else
#      error No known AVR32 part defined
#   endif /* __AVR32_<PART>__ */
#elif __ICCAVR32__ || __AAVR32__
#  if   __AT32AP7000__
#    include <avr32/ioap7000.h>
#  elif __AT32AP7001__
#    include <avr32/ioap7001.h>
#  elif __AT32AP7002__
#    include <avr32/ioap7002.h>
#  elif __AT32AP7200__
#    include <avr32/ioap7200.h>
#  elif __AT32UC3A0512ES__
#    include <avr32/iouc3a0512es.h>
#  elif __AT32UC3A1512ES__
#    include <avr32/iouc3a1512es.h>
#  elif __AT32UC3A0128__
#    include <avr32/iouc3a0128.h>
#  elif __AT32UC3A0256__
#    include <avr32/iouc3a0256.h>
#  elif __AT32UC3A0512__
#    include <avr32/iouc3a0512.h>
#  elif __AT32UC3A1128__
#    include <avr32/iouc3a1128.h>
#  elif __AT32UC3A1256__
#    include <avr32/iouc3a1256.h>
#  elif __AT32UC3A1512__
#    include <avr32/iouc3a1512.h>
#  elif __AT32UC3B0256ES__
#    include <avr32/iouc3b0256es.h>
#  elif __AT32UC3B1256ES__
#    include <avr32/iouc3b1256es.h>
#  elif __AT32UC3A364__
#    include <avr32/iouc3a364.h>
#  elif __AT32UC3A364S__
#    include <avr32/iouc3a364s.h>
#  elif __AT32UC3A3128__
#    include <avr32/iouc3a3128.h>
#  elif __AT32UC3A3128S__
#    include <avr32/iouc3a3128s.h>
#  elif __AT32UC3A3256__
#    include <avr32/iouc3a3256.h>
#  elif __AT32UC3A3256S__
#    include <avr32/iouc3a3256s.h>
#  elif __AT32UC3B064__
#    include <avr32/iouc3b064.h>
#  elif __AT32UC3B0128__
#    include <avr32/iouc3b0128.h>
#  elif __AT32UC3B0256__
#    include <avr32/iouc3b0256.h>
#  elif __AT32UC3B164__
#    include <avr32/iouc3b164.h>
#  elif __AT32UC3B1128__
#    include <avr32/iouc3b1128.h>
#  elif __AT32UC3B1256__
#    include <avr32/iouc3b1256.h>
#  else
#    error No known AVR32 part defined
#  endif  // __AT32<PART>__
#else
#   error Unknown compiler
#endif /* __GNUC__ */

#endif /* _IO_H_ */

