segment	.text
	global _ft_strlen


_ft_strlen:
	mov	rax, 0				; initialize the size of the string to 0

w_loop: ; scans the string passed in parameter
	cmp	byte [rdi + rax], 0	; compares the character of the string to the ASCII value '\0'.
	je	w_end				; exits the loop if equal
	inc	rax					; increments the size of the string
	jmp	w_loop				; returns to the beginning of the loop

w_end: ; end loop while
	ret						; returns the length of the string (rax)
