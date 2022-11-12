segment	.text
	global _ft_strlen


_ft_strlen:
	mov	rax, 0				; initialise la taille de la chaine à 0

w_loop: ; parcourt la chaîne passée en paramètre
	cmp	byte [rdi + rax], 0	; compare le caractère de la chaine à la valeur ASCII '\0'
	je	w_end				; sort de la boucle si égal
	inc	rax					; incrémente la taille de la chaine
	jmp	w_loop				; revient au début de la boucle

w_end: ; fin boucle while
	ret						; renvoie la longueur de la chaine (rax)
