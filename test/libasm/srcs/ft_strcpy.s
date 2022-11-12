segment .text
	global _ft_strcpy

_ft_strcpy:
    mov	rcx, 0						; initialise le compteur pour la boucle

w_loop: ; parcourt la chaîne source
    cmp	byte [rsi + rcx], 0			; compare l'octet de la chaine avec l'octet nul
    je	w_end						; si vrai sort de la boucle
	mov	rbx, [rsi + rcx]			; copie le caractère source dans un registre intermédiaire
    mov	[rdi + rcx], rbx			; copie le caractère dans la destination
    inc	rcx							; incrémente le compteur
    jmp	w_loop						; retourne au début de la boucle

w_end: ; fin boucle while
    mov	byte [rdi + rcx], 0			; place l'octet nul à la fin de la chaine de destination
    mov	rax, rdi            		; affecte la valeur de retour (chaîne de destination)
	ret								; sort de la fonction
