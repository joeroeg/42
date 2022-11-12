extern	_ft_strlen
extern	_ft_strcpy
extern	_malloc

segment	.text
	global _ft_strdup

_ft_strdup:
	call	_ft_strlen		; récupère la longueur de la chaine source

	push	rdi				; sauvegarde la chaine source sur la stack
	mov		rdi, rax		; alloue une nouvelle chaine de cette longueur
	inc		rdi
	call	_malloc

	cmp		rax, 0			; vérifie l'allocation
	je		end_func		; si fail, sort de la fonction

	mov		rdi, rax		; copie la chaine source dans la nouvelle
	pop		rsi				; dépile la chaine source de la stack
	call	_ft_strcpy

end_func:
	ret						; sort de la fonction
