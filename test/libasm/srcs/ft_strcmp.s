segment .text
	global _ft_strcmp

_ft_strcmp:
	mov	rcx, 0				; initialise le compteur à 0

cmp_loop: ; parcourt la chaîne source
	mov	r10b, [rdi + rcx]	; récupère les caractères
	mov	r11b, [rsi + rcx]

	cmp	r10b, r11b			; compare les caractères
	jne	cmp_end				; si pas égal, sort

	cmp	r10b, 0				; vérifie que la chaine n'est pas terminée
	je	cmp_end				; si la chaine est finie, sort

	inc	rcx					; incrémente le compteur
	jmp	cmp_loop			; boucle

cmp_end: ; fin boucle while
	movzx	r10, r10b			; met les autres bits du registre à 0
	movzx	r11, r11b			; pareil
	sub	r10, r11			; calcule la différence (valeurs non signées)
	
	mov	rax, r10			; affecte la valeur de retour
	ret						; sort de la fonction
