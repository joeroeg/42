extern ___error

segment .text
	global _ft_write

_ft_write:
    mov		rax, 0x2000004	; write
	syscall					; system call (write)
    jc		error			; if error, carry flag = 1
	ret						; exits the function

error:
	push	rax				; saves the error code
	call	___error		; retrieve a pointer to errno
	pop		r15				; recover the value of errno
	mov		[rax], r15		; assigns the error code to errno
	mov		rax, -1			; returns -1
	ret
 