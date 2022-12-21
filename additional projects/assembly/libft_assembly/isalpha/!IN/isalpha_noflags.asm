; Disassembly of file: isalpha.o
; Wed Dec 14 19:21:26 2022
; Type: Mach-O Little Endian64
; Syntax: NASM
; Instruction set: Pentium Pro, x64

default rel

global _ft_isalpha: function
global _main

extern _printf                                          ; near


SECTION ._TEXT.__text align=16 execute                  ; section number 1, code

_ft_isalpha:; Function begin
        push    rbp                                     ; 0000 _ 55
        mov     rbp, rsp                                ; 0001 _ 48: 89. E5
        mov     dword [rbp-8H], edi                     ; 0004 _ 89. 7D, F8
        cmp     dword [rbp-8H], 64                      ; 0007 _ 83. 7D, F8, 40
; Note: Immediate operand could be made smaller by sign extension
        jle     ?_001                                   ; 000B _ 0F 8E, 0000000A
        cmp     dword [rbp-8H], 91                      ; 0011 _ 83. 7D, F8, 5B
; Note: Immediate operand could be made smaller by sign extension
        jl      ?_002                                   ; 0015 _ 0F 8C, 00000014
?_001:  cmp     dword [rbp-8H], 96                      ; 001B _ 83. 7D, F8, 60
; Note: Immediate operand could be made smaller by sign extension
        jle     ?_003                                   ; 001F _ 0F 8E, 00000016
        cmp     dword [rbp-8H], 122                     ; 0025 _ 83. 7D, F8, 7A
; Note: Immediate operand could be made smaller by sign extension
        jg      ?_003                                   ; 0029 _ 0F 8F, 0000000C
?_002:  mov     dword [rbp-4H], 1                       ; 002F _ C7. 45, FC, 00000001
; Note: Immediate operand could be made smaller by sign extension
        jmp     ?_004                                   ; 0036 _ E9, 00000007

?_003:  mov     dword [rbp-4H], 0                       ; 003B _ C7. 45, FC, 00000000
?_004:  mov     eax, dword [rbp-4H]                     ; 0042 _ 8B. 45, FC
        pop     rbp                                     ; 0045 _ 5D
        ret                                             ; 0046 _ C3
; _ft_isalpha End of function

; Filling space: 9H
; Filler type: Multi-byte NOP
;       db 66H, 0FH, 1FH, 84H, 00H, 00H, 00H, 00H
;       db 00H

ALIGN   16

_main:  ; Function begin
        push    rbp                                     ; 0050 _ 55
        mov     rbp, rsp                                ; 0051 _ 48: 89. E5
        sub     rsp, 16                                 ; 0054 _ 48: 83. EC, 10
        mov     dword [rbp-4H], 0                       ; 0058 _ C7. 45, FC, 00000000
        mov     byte [rbp-5H], 97                       ; 005F _ C6. 45, FB, 61
        movsx   edi, byte [rbp-5H]                      ; 0063 _ 0F BE. 7D, FB
        call    _ft_isalpha                             ; 0067 _ E8, 00000000(rel)
        lea     rdi, [rel _ft_isalpha+16H]              ; 006C _ 48: 8D. 3D, 00000016(rel)
        mov     esi, eax                                ; 0073 _ 89. C6
        mov     al, 0                                   ; 0075 _ B0, 00
        call    _printf                                 ; 0077 _ E8, 00000000(rel)
        xor     ecx, ecx                                ; 007C _ 31. C9
        mov     dword [rbp-0CH], eax                    ; 007E _ 89. 45, F4
        mov     eax, ecx                                ; 0081 _ 89. C8
        add     rsp, 16                                 ; 0083 _ 48: 83. C4, 10
        pop     rbp                                     ; 0087 _ 5D
        ret                                             ; 0088 _ C3
; _main End of function


SECTION ._TEXT.__cstring align=1 noexecute              ; section number 2, data

        db 25H, 64H, 00H                                ; 0089 _ %d.


SECTION ._LD.__compact_unwind__LD align=8 noexecute     ; section number 3, data

        dq _ft_isalpha                                  ; 0090 _ 0000000000000000 (d)
        dq 0100000000000047H                            ; 0098 _ 0100000000000047 
        dq 0000000000000000H                            ; 00A0 _ 0000000000000000 
        dq 0000000000000000H                            ; 00A8 _ 0000000000000000 
        dq _main                                        ; 00B0 _ 0000000000000050 (d)
        dq 0100000000000039H                            ; 00B8 _ 0100000000000039 
        dq 0000000000000000H                            ; 00C0 _ 0000000000000000 
        dq 0000000000000000H                            ; 00C8 _ 0000000000000000 


SECTION ._TEXT.__eh_frame align=8 noexecute             ; section number 4, data

        db 14H, 00H, 00H, 00H, 00H, 00H, 00H, 00H       ; 00D0 _ ........
        db 01H, 7AH, 52H, 00H, 01H, 78H, 10H, 01H       ; 00D8 _ .zR..x..
        db 10H, 0CH, 07H, 08H, 90H, 01H, 00H, 00H       ; 00E0 _ ........
        db 24H, 00H, 00H, 00H, 1CH, 00H, 00H, 00H       ; 00E8 _ $.......
        db 10H, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH; 00F0 _ ........
        db 47H, 00H, 00H, 00H, 00H, 00H, 00H, 00H       ; 00F8 _ G.......
        db 00H, 41H, 0EH, 10H, 86H, 02H, 43H, 0DH       ; 0100 _ .A....C.
        db 06H, 00H, 00H, 00H, 00H, 00H, 00H, 00H       ; 0108 _ ........
        db 24H, 00H, 00H, 00H, 44H, 00H, 00H, 00H       ; 0110 _ $...D...
        db 38H, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH, 0FFH; 0118 _ 8.......
        db 39H, 00H, 00H, 00H, 00H, 00H, 00H, 00H       ; 0120 _ 9.......
        db 00H, 41H, 0EH, 10H, 86H, 02H, 43H, 0DH       ; 0128 _ .A....C.
        db 06H, 00H, 00H, 00H, 00H, 00H, 00H, 00H       ; 0130 _ ........


