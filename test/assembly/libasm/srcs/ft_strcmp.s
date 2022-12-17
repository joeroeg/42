segment .text
	global _ft_strcmp

_ft_strcmp:
	mov	rcx, 0				; initializes the counter to 0

cmp_loop: ; runs through the source chain
	mov	r10b, [rdi + rcx]	; retrieves the characters
	mov	r11b, [rsi + rcx]

	cmp	r10b, r11b			; compares the characters
	jne	cmp_end				; if not equal, exit

	cmp	r10b, 0				; check that the chain is not finished
	je	cmp_end				; if the chain is finished, exit

	inc	rcx					; increments the counter
	jmp	cmp_loop			; loop

cmp_end: ; end loop while
	movzx	r10, r10b			; sets the other bits of the register to 0
	movzx	r11, r11b			; same
	sub	r10, r11			; calculates the difference (unsigned values)
	
	mov	rax, r10			; assigns the return value
	ret						; exits the function
