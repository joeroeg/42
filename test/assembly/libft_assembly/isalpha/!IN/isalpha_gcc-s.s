## compiled with gcc
	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15, 6
	.globl	_ft_isalpha             ## -- Begin function ft_isalpha
	.p2align	4, 0x90
_ft_isalpha:                            ## @ft_isalpha
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	%edi, -8(%rbp)
	cmpl	$64, -8(%rbp)
	jle	LBB0_2
## %bb.1:
	cmpl	$91, -8(%rbp)
	jl	LBB0_4
LBB0_2:
	cmpl	$96, -8(%rbp)
	jle	LBB0_5
## %bb.3:
	cmpl	$122, -8(%rbp)
	jg	LBB0_5
LBB0_4:
	movl	$1, -4(%rbp)
	jmp	LBB0_6
LBB0_5:
	movl	$0, -4(%rbp)
LBB0_6:
	movl	-4(%rbp), %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	movb	$49, -5(%rbp)
	movsbl	-5(%rbp), %edi
	callq	_ft_isalpha
	leaq	L_.str(%rip), %rdi
	movl	%eax, %esi
	movb	$0, %al
	callq	_printf
	xorl	%ecx, %ecx
	movl	%eax, -12(%rbp)         ## 4-byte Spill
	movl	%ecx, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%d"

.subsections_via_symbols
