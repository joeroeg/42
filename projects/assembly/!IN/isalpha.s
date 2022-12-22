ft_isalpha:
        push    rbp
        mov     rbp, rsp
        mov     DWORD PTR [rbp-4], edi
        cmp     DWORD PTR [rbp-4], 64
        jle     .L2
        cmp     DWORD PTR [rbp-4], 90
        jle     .L3
.L2:
        cmp     DWORD PTR [rbp-4], 96
        jle     .L4
        cmp     DWORD PTR [rbp-4], 122
        jg      .L4
.L3:
        mov     eax, 1
        jmp     .L5
.L4:
        mov     eax, 0
.L5:
        pop     rbp
        ret
.LC0:
        .string "%d"
main:
        push    rbp
        mov     rbp, rsp
        sub     rsp, 16
        mov     BYTE PTR [rbp-1], 49
        movsx   eax, BYTE PTR [rbp-1]
        mov     edi, eax
        call    ft_isalpha
        mov     esi, eax
        mov     edi, OFFSET FLAT:.LC0
        mov     eax, 0
        call    printf
        mov     eax, 0
        leave
        ret