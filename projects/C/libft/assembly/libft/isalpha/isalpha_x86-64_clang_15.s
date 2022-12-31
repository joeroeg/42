ft_isalpha(int):                        # @ft_isalpha(int)
        and     edi, -33
        add     edi, -65
        xor     eax, eax
        cmp     edi, 26
        setb    al
        ret
main:                                   # @main
        push    rax
        lea     rdi, [rip + .L.str]
        mov     esi, 1
        xor     eax, eax
        call    printf@PLT
        xor     eax, eax
        pop     rcx
        ret
.L.str:
        .asciz  "%d"
