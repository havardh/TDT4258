.text

        
.globl Sleep    
Sleep:
sleep$:
        sub r0,1
        cp.w r0,0
        breq end$
        rjmp sleep$
end$:   mov pc,lr

        