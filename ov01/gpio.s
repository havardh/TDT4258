.globl GetPIOCBase
GetPIOCBase:
        mov r0,lo(AVR32_PIOC)
        orh r0,hi(AVR32_PIOC)
        mov pc,lr

       
.globl GetPIOBBase
GetPIOBBase:
        mov r0,lo(AVR32_PIOB)
        orh r0,hi(AVR32_PIOB)
        mov pc,lr 


       
WriteIO:
        // TODO: Validate r0, r1 
        st.w r0,r1
        mov pc,lr
        
        
.globl InitGPIOOutput        
InitGPIOOutput:
        // TODO: Validate r0, r1 
        // Enable GPIO
        st.w --sp,lr
        rcall WriteIO
        // Set mode = output
        mov r2,AVR32_PIO_OER
        add r0,r2
        rcall WriteIO
        ld.w lr,sp++
        mov pc,lr

.globl InitGPIOInput
InitGPIOInput:
        // Enable GPIO
        st.w --sp,lr
        rcall WriteIO
        // Default mode = input
        mov r2,AVR32_PIO_PUER
        add r0,r2
        rcall WriteIO
        ld.w lr,sp++
        mov pc,lr
       
        // r0 = base addr
        // r1 = bit map
        // r2 = offset
SwitchLights:   
        
        add r0,r2
        st.w --sp,lr        
        rcall WriteIO
        ld.w lr,sp++        
        mov pc,lr
        

.global TurnOffLights
        // r0 = base addr
        // r1 = bit map
TurnOffLights:
        mov r2,AVR32_PIO_CODR
        st.w --sp,lr
        rcall SwitchLights
        ld.w lr,sp++        
        mov pc,lr        

.global TurnOnLights
        // r0 = base addr
        // r1 = bit map
TurnOnLights:
        mov r2,AVR32_PIO_SODR
        st.w --sp,lr
        rcall SwitchLights
        ld.w lr,sp++
        mov pc,lr

.global ReadButtons
ReadButtons:
        ld.w r0,r0[AVR32_PIO_PDSR]
        mov pc,lr
        