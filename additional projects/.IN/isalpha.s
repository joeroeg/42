ft_isalpha:                             # @ft_isalpha
        push    rbp
        mov     rbp, rsp
        mov     dword ptr [rbp - 8], edi
        cmp     dword ptr [rbp - 8], 64
        jle     .LBB0_2
        cmp     dword ptr [rbp - 8], 91
        jl      .LBB0_4
.LBB0_2:
        cmp     dword ptr [rbp - 8], 96
        jle     .LBB0_5
        cmp     dword ptr [rbp - 8], 122
        jg      .LBB0_5
.LBB0_4:
        mov     dword ptr [rbp - 4], 1
        jmp     .LBB0_6
.LBB0_5:
        mov     dword ptr [rbp - 4], 0
.LBB0_6:
        mov     eax, dword ptr [rbp - 4]
        pop     rbp
        ret
main:                                   # @main
        push    rbp
        mov     rbp, rsp
        sub     rsp, 16
        mov     dword ptr [rbp - 4], 0
        mov     byte ptr [rbp - 5], 97
        movsx   edi, byte ptr [rbp - 5]
        call    ft_isalpha
        mov     esi, eax
        lea     rdi, [rip + .L.str]
        mov     al, 0
        call    printf@PLT
        xor     eax, eax
        add     rsp, 16
        pop     rbp
        ret
.L.str:
        .asciz  "%d"