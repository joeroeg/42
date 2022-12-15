; Disassembly of file: isalpha.o
; Wed Dec 14 21:43:22 2022
; Type: Mach-O Little Endian64
; Syntax: NASM
; Instruction set: Pentium Pro, x64

global _main

extern _printf                                          ; near


SECTION ._TEXT.__text                   ; section number 1, code

_ft_isalpha:; Function begin
        push    rbp                                     ; 0000 _ 55
        mov     rbp, rsp                                ; 0001 _ 48: 89. E5
        and     edi, 0FFFFFFDFH                         ; 0004 _ 83. E7, DF
        add     edi, -65                                ; 0007 _ 83. C7, BF
        xor     eax, eax                                ; 000A _ 31. C0
        cmp     edi, 26                                 ; 000C _ 83. FF, 1A
        setb    al                                      ; 000F _ 0F 92. C0
        pop     rbp                                     ; 0012 _ 5D
        ret                                             ; 0013 _ C3
; _ft_isalpha End of function

; Filling space: 0CH
; Filler type: Multi-byte NOP
;       db 66H, 2EH, 0FH, 1FH, 84H, 00H, 00H, 00H
;       db 00H, 00H, 66H, 90H

ALIGN   16

_main:  ; Function begin
        push    rbp                                     ; 0020 _ 55
        mov     rbp, rsp                                ; 0021 _ 48: 89. E5
        lea     rdi, [rel _ft_isalpha+10H]              ; 0024 _ 48: 8D. 3D, 00000010(rel)
        mov     esi, 1                                  ; 002B _ BE, 00000001
        xor     eax, eax                                ; 0030 _ 31. C0
        call    _printf                                 ; 0032 _ E8, 00000000(rel)
        xor     eax, eax                                ; 0037 _ 31. C0
        pop     rbp                                     ; 0039 _ 5D
        ret                                             ; 003A _ C3
; _main End of function


SECTION ._TEXT.__cstring               ; section number 2, data

        db 25H, 64H, 00H                                ; 003B _ %d.


