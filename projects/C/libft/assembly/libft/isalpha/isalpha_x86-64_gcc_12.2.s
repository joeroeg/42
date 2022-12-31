ft_isalpha(int):
        and     edi, -33
        sub     edi, 65
        xor     eax, eax
        cmp     edi, 25
        setbe   al
        ret
.LC0:
        .string "%d"
main:
        sub     rsp, 8
        mov     esi, 1
        mov     edi, OFFSET FLAT:.LC0
        xor     eax, eax
        call    printf
        xor     eax, eax
        add     rsp, 8
        ret
