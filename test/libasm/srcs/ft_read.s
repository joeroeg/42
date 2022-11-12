extern ___error

segment .text
	global _ft_read

_ft_read:
    mov 	rax, 0x2000003	; read
	syscall					; appel systeme (read)
    jc 		error			; si erreur, carry flag = 1
	ret						; sort de la fonction

error:
	push	rax				; sauvegarde le code d'erreur
	call 	___error		; recupere un pointeur sur errno
	pop		r15				; recupere le code d'erreur
	mov		[rax], r15		; affecte le code à errno
	mov		rax, -1			; retourne -1
	ret
