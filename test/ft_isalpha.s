	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15, 6
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
	pushq	%rbx
	pushq	%rax
	.cfi_offset %rbx, -24
	movq	__DefaultRuneLocale@GOTPCREL(%rip), %rbx
	movl	384(%rbx), %esi
	shrl	$8, %esi
	andl	$1, %esi
	leaq	L_.str(%rip), %rdi
	xorl	%eax, %eax
	callq	_printf
	movl	512(%rbx), %esi
	shrl	$8, %esi
	andl	$1, %esi
	leaq	L_.str.1(%rip), %rdi
	xorl	%eax, %eax
	callq	_printf
	movl	232(%rbx), %esi
	shrl	$8, %esi
	andl	$1, %esi
	leaq	L_.str.2(%rip), %rdi
	xorl	%eax, %eax
	callq	_printf
	xorl	%eax, %eax
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"\nResult when uppercase alphabet is passed: %d"

L_.str.1:                               ## @.str.1
	.asciz	"\nResult when lowercase alphabet is passed: %d"

L_.str.2:                               ## @.str.2
	.asciz	"\nResult when non-alphabetic character is passed: %d"

.subsections_via_symbols
