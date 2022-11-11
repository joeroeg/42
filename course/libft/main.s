	.file	"main.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$96, %rsp
	.seh_stackalloc	96
	.seh_endprologue
	call	__main
	leaq	-64(%rbp), %rax
	movabsq	$2338328219631577172, %rdx
	movabsq	$7507051352786367603, %rcx
	movq	%rdx, (%rax)
	movq	%rcx, 8(%rax)
	movabsq	$8751164169839537184, %rdx
	movabsq	$8028075781168391712, %rcx
	movq	%rdx, 16(%rax)
	movq	%rcx, 24(%rax)
	movw	$110, 32(%rax)
	leaq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	puts
	leaq	-64(%rbp), %rax
	movl	$7, %r8d
	movl	$45, %edx
	movq	%rax, %rcx
	call	memset
	leaq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	puts
	movl	$0, %eax
	addq	$96, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 11.2.0"
	.def	puts;	.scl	2;	.type	32;	.endef
	.def	memset;	.scl	2;	.type	32;	.endef
