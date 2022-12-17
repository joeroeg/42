ft_isalpha:
        pushl %ebp
        movl %esp,%ebp
        cmpl $64,8(%ebp)
        jle .L4
        cmpl $90,8(%ebp)
        jle .L3
        jmp .L4
.L4:
        cmpl $96,8(%ebp)
        jle .L2
        cmpl $122,8(%ebp)
        jle .L3
        jmp .L2
.L3:
        movl $1,%eax
        jmp .L1
.L2:
        xorl %eax,%eax
        jmp .L1
.L1:
        leave
        ret
.LC0:
        .byte 0x25,0x64,0x0
main:
        pushl %ebp
        movl %esp,%ebp
        subl $4,%esp
        movb $49,-4(%ebp)
        movsbl -4(%ebp),%eax
        pushl %eax
        call ft_isalpha
        movl %eax,%eax
        pushl %eax
        pushl $.LC0
        call printf
        xorl %eax,%eax
        jmp .L5
.L5:
        leave
        ret