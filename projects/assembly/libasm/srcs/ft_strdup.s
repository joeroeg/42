extern	_ft_strlen
extern	_ft_strcpy
extern	_malloc

segment	.text
	global _ft_strdup

_ft_strdup:
	call	_ft_strlen		; get the length of the source string

	push	rdi				; save the source string on the stack
	mov		rdi, rax		; allocates a new string of this length
	inc		rdi
	call	_malloc

	cmp		rax, 0			; checks the allocation
	je		end_func		; if fail, exits the function

	mov		rdi, rax		; copy the source string into the new one
	pop		rsi				; unstack the source string from the stack
	call	_ft_strcpy

end_func:
	ret						; exits the function
