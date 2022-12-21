ft_isalpha:
        push    rbp 			; push	rbp - This pushes the contents of the frame pointer (rbp) onto the stack. 
        mov     rbp, rsp 		; mov	rbp, rsp - This moves the current stack pointer (rsp) into the frame pointer (rbp). 
        mov     [rbp-4], edi	; mov   [rbp-4], edi - This moves the argument (edi) into a register (rbp - 4). 
        cmp     [rbp-4], 64 	; cmp   [rbp-4], 64 - This compares the argument with the ASCII value for "A" (64). 
        jle     .L2 			; jle   .L2 - If the result of the previous comparison is less than or equal to 0, then jump to label ".L2". 
        cmp     [rbp-4], 90 	; cmp	[rbp-4], 90 - This compares the argument with the ASCII value for "Z" (90).
        jle     .L3 			; jle   .L3 - If the result of the previous comparison is less than or equal to 0, then jump to label ".L3". 
.L2:							; .L2:	The label for when the argument was less than or equal to "A". 
        cmp     [rbp-4], 96 	; cmp   [rbp-4], 96 - This compares the argument with the ASCII value for "a" (96). 
        jle     .L4 			; jle   .L4 - If the result of the previous comparison is less than or equal to 0, then jump to label ".L4". 
        cmp     [rbp-4], 122 	; cmp   [rbp-4], 122 - This compares the argument with the ASCII value for "z" (122). 
        jg      .L4 			; jg    .L4 - If the result of the previous comparison is greater than 0, then jump to label ".L4". 
.L3:							; .L3:	The label for when the argument was between "A" and "Z".
        mov     eax, 1 			; mov   eax, 1 - This sets the return value of the function to 1 (true). 
        jmp     .L5 			; jmp   .L5 - Jump to label ".L5". 
.L4:							; .L4:	The label for when the argument was less than or equal to "a" or greater than "z". 
        mov     eax, 0 			; mov   eax, 0 - This sets the return value of the function to 0 (false). 
.L5:							; .L5:	The label for when the previous comparison has been made. 
        pop     rbp 			; pop   rbp - This pops the contents of the frame pointer off the stack. 
        ret						; ret - This returns the result of the function.
.LC0:							; 
        .asciz "%d"			; The line .LC0: .string "%d" defines the format specifier that will be used when printing the result. The %d indicates that the result should be printed as an integer.
main:
        push    rbp				; push  rbp - This pushes the contents of the frame pointer (rbp) onto the stack. 
        mov     rbp, rsp		; mov   rbp, rsp - This moves the current stack pointer (rsp) into the frame pointer (rbp). 
        sub     rsp, 16			; sub   rsp, 16 - This subtracts 16 from the current stack pointer (rsp). This creates space for the function's local variables.
        mov     [rbp-1], 49		; mov   [rbp-1], 49 - This moves the ASCII code for the character '1' (49) into a register (rbp - 1). 
        movsx   eax, [rbp-1]	; movsx eax, [rbp-1] - This moves the contents of the register (rbp - 1) into an extended register (eax). 
        mov     edi, eax		; mov   edi, eax - This moves the contents of the extended register (eax) into the general purpose register (edi), which is used for passing arguments. 
        call    ft_isalpha		; call  ft_isalpha - This calls the ft_isalpha function with the argument stored in edi. 
        mov     esi, eax		; mov   esi, eax - This moves the return value of the ft_isalpha function into a general purpose register (esi), which is used for holding return values. 
        mov     edi, OFFSET FLAT:.LC0 ; mov     edi, OFFSET FLAT:.LC0 - This moves the address of the format specifier into the general purpose register (edi).
        mov     eax, 0			; mov	eax, 0 - This moves 0 into an extended register (eax), which is used for holding return values.
        call    printf			; call  printf - This calls the printf function, passing in the format specifier and return value from the ft_isalpha function. 
        mov     eax, 0			; mov   eax, 0 - This moves 0 into an extended register (eax), which is used for holding the return value of the main function. 
        leave					; leave - This pops the contents of the frame pointer off the stack and restores the stack pointer to its previous state. 
        ret						; ret - This returns the result of the main function.