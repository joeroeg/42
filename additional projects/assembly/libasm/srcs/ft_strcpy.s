segment .text
	global _ft_strcpy

_ft_strcpy:
    mov	rcx, 0						; initializes the counter for the loop

w_loop: ; browse the source string
    cmp	byte [rsi + rcx], 0			; compare the byte of the string with the null byte
    je	w_end						; if true exit the loop
	mov	rbx, [rsi + rcx]			; copy the source character in an intermediate register
    mov	[rdi + rcx], rbx			; copy the character in the destination
    inc	rcx							; increments the counter
    jmp	w_loop						; return to the beginning of the loop

w_end: ; end loop while
    mov	byte [rdi + rcx], 0			; place the null byte at the end of the destination string
    mov	rax, rdi            		; set the return value (destination string)
	ret								; exit from the function
