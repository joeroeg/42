extern ___error

segment .text
	global _ft_write

_ft_write:
    mov		rax, 0x2000004	; write
	syscall					; appel systeme (write)
    jc		error			; si erreur, carry flag = 1
	ret						; sort de la fonction

error:
	push	rax				; sauvegarde le code d'erreur
	call	___error		; recupere un pointeur sur errno
	pop		r15				; recupere la valeur d'errno
	mov		[rax], r15		; affecte le code d'erreur a errno
	mov		rax, -1			; renvoie -1
	ret
