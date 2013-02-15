.text

.global EnableInterrupt
EnableInterrupt:
        mov r1,r0

        // Enable interrupt button (1,2)
        rcall GetPIOBBase
        mov r2,AVR32_PIO_IER
        add r0,r2 // addr
        st.w r0,r1

        // Disable interrupt other buttons
        rcall GetPIOBBase
        mov r2,AVR32_PIO_IDR
        add r0,r2 // addr
        mov r3,0xFF
        eor r1,r1,r3
        st.w r0,r1
        
        mov pc,lr

.globl
SetInterruptAddress:    

        mov r1,0 // Base of interrupt rutine
        mtsr 4,r1 // Set EVBA to base

        // Save interrupt rutine address to InterruptController for buttons
        mov r1,lo(AVR32_INTC)
        orh r1,hi(AVR32_INTC)
        mov r2,AVR32_INTC_IPR14
        add r1,r2
        st.w r1,r0
        
        mov pc,lr
        
.global InterruptRoutine
InterruptRoutine:

        // Disable interrupts
        //ssrf SR_GM

        st.w --sp,r0
        st.w --sp,r1
        st.w --sp,r2
        st.w --sp,r3
        st.w --sp,r4
        st.w --sp,r5
        st.w --sp,r6
        st.w --sp,r7
        //st.w --sp,r8
        //st.w --sp,r9
        st.w --sp,r10
        st.w --sp,r11       
        
        mov r1,r0
        
        // Sleep debouncing
        mov r0,0xFFFF
        rcall Sleep

        // Notify interrupt handled
        rcall GetPIOBBase
        ld.w r0,r0[AVR32_PIO_ISR]

        
        mov r2,0x1
        and r1,r2,r8  // (x & 1 == 1)
        cp.w r1,r2
        brne performShift$
        
        mov r8,0x0
        breq rend$ // Hopp ut

performShift$:     
        mov r8,0x1

        // Was SW0 clicked
        mov r1,0x01 // Button value
        cp.b r0,r1
        brne rrend$
        rcall RotateRight
        rjmp rend$
rrend$:

        // Was SW2 clicked
        mov r1,0x4
        cp.b r0,r1
        brne rlend$     
        rcall RotateLeft
        rjmp rend$
rlend$:

        // Was SW5 clicked
/*        mov r1,0x20
        cp.b r0,r1
        brne anend$
        rcall Animate
        rjmp rend$
anend$: */
        
        // Was SW6 clicked
        mov r1,0x40
        cp.b r0,r1
        brne clend$
        rcall Clear
        rjmp rend$
clend$: 
        
        // Was SW7 clicked
        mov r1,0x80
        cp.b r0,r1
        brne tlend$
        mov r0,0x80
        rcall ToggleLight
        rjmp rend$        
tlend$: 
rend$:

        ld.w r11,sp++
        ld.w r10,sp++
        //ld.w r9,sp++
        //ld.w r8,sp++
        ld.w r7,sp++
        ld.w r6,sp++
        ld.w r5,sp++
        ld.w r4,sp++
        ld.w r3,sp++
        ld.w r2,sp++
        ld.w r1,sp++
        ld.w r0,sp++

        // Enable interrupts
        //csrf SR_GM
        rete

Animate:

        mov r9,0b10101

        mov r7,lo(0xFFFFFF) // Sleep time
        orh r7,hi(0xFFFFFF) 
        rcall RotateLeft
        rcall RefreshLEDs
        mov r0,r7
        rcall Sleep
        ror r7
        rcall RotateLeft
        rcall RefreshLEDs
        mov r0,r7
        rcall Sleep
        ror r7
        mov pc,lr
        
Clear:
        mov r9,0x0        
        mov pc,lr


        
RotateLeft:     
        // Rotate left
        mov r2,0x2
        mul r9,r9,r2

        // Handle overflow
        mov r2,0xFF
        cp.w r9,r2
        brle oend$
        mov r3,0xFF
        and r9,r9,r3
        mov r3,0x1
        or r9,r9,r3
oend$:  
        mov pc,lr

RotateRight:
        // Rotate right

        mov r2,0x1
        and r3,r9,r2
        
        ror r9

        // Handle underflow
        cp.w r3,r2
        brne uend$
        mov r3,0xFF
        and r9,r9,r3
        mov r3,0x80
        or r9,r9,r3
uend$:          
        mov pc,lr

        // r0 = bit to toggle
ToggleLight:
        // Is the light on?
        and r1,r9,r0
        mov r2,0x0
        cp.b r1,r2
        brne turnOff$:

        // Turn on
        or r9,r9,r0

        rjmp tolend$

turnOff$:

        // Turn off
        mov r2,0xFF
        eor r1,r1,r2

        and r9,r9,r1
        
tolend$:                
        mov pc,lr
        