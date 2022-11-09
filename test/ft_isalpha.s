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
	movl	%edi, -4(%rbp)
	cmpl	$97, -4(%rbp)
	jl	LBB0_2
## %bb.1:
	cmpl	$122, -4(%rbp)
	movb	$1, %al
	movb	%al, -5(%rbp)           ## 1-byte Spill
	jle	LBB0_5
LBB0_2:
	xorl	%eax, %eax
                                        ## kill: def $al killed $al killed $eax
	cmpl	$65, -4(%rbp)
	movb	%al, -6(%rbp)           ## 1-byte Spill
	jl	LBB0_4
## %bb.3:
	cmpl	$90, -4(%rbp)
	setle	%al
	movb	%al, -6(%rbp)           ## 1-byte Spill
LBB0_4:
	movb	-6(%rbp), %al           ## 1-byte Reload
	movb	%al, -5(%rbp)           ## 1-byte Spill
LBB0_5:
	movb	-5(%rbp), %al           ## 1-byte Reload
	xorl	%ecx, %ecx
	testb	$1, %al
	movl	$1, %edx
	cmovnel	%edx, %ecx
	movl	%ecx, %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
.subsections_via_symbols
