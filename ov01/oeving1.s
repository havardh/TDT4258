/******************************************************************************
 *	
 * Øving 1 UCSysDes
 *	
 *****************************************************************************/

.include "io.s"  /* inkludere noen nyttige symboler (konstanter) */
//.include "gpio.s" 
      

        
/* Eksempel på hvordan sette symboler (se også io.s) */
SR_GM =   16  /* statusregisterflag "GM" er bit 16 */

/*****************************************************************************/
/* text-segment */
/* all programkoden må plasseres i dette segmentet */
        
.text
        
.globl  _start
_start: /* programutføring vil starte her */

        mov sp,lo(0x1000F000)
        orh sp,hi(0x1000F000)

        // INIT LEDS
        
        /* Get GPIO C address */
        rcall GetPIOCBase

        /* Set to output */
        mov r1,0xFF
        rcall InitGPIOOutput        

        // INIT BUTTONS
        
        // Get GPIO B address 
        rcall GetPIOBBase
        
        // Set to input 
        mov r1,0xFF
        rcall InitGPIOInput

        rcall GetPIOCBase
        mov r1,0xFF
        rcall TurnOffLights

        // INIT INTERRUPTS

        // Enable buttons in bit mask
        mov r0,0b11000101
        rcall EnableInterrupt
        
        // Set InterruptRoutine
        mov r0,InterruptRoutine
        rcall SetInterruptAddress
        
        // Enable interrupts globally
        csrf SR_GM
        
        // Local variables
        mov r9,0x8 // Light status
        mov r8,0x0 // Button status
              
        
loop:   /* evig løkke */


        rcall RefreshLEDs

        sleep 0
        
        rjmp loop


.globl RefreshLEDs
RefreshLEDs:
        rcall GetPIOCBase
        mov r1,0xFF
        rcall TurnOffLights

        mov r1,	r9        
        rcall GetPIOCBase
        rcall TurnOnLights
        mov pc,lr
        
.include "interrupt.s"        
.include "gpio.s"
.include "util.s"
