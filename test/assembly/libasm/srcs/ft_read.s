extern ___error

segment .text
	global _ft_read

_ft_read:
    mov 	rax, 0x2000003	; read
	syscall					; system call (read)
    jc 		error			; if error, carry flag = 1
	ret						; exits the function

error:
	push	rax				; saves the error code
	call 	___error		; retrieve a pointer to errno
	pop		r15				; retrieve the error code
	mov		[rax], r15		; assign the code to errno
	mov		rax, -1			; returns -1
	ret
