	.file	"macroDefineParams2.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 8
.LC0:
	.ascii "a = %d, b = %d, max is %d, min is %d\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$72, %rsp
	.seh_stackalloc	72
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movl	%ecx, -32(%rbp)
	movq	%rdx, -24(%rbp)
	call	__main
	movl	$5, -68(%rbp)
	movl	$7, -72(%rbp)
	movl	-72(%rbp), %eax
	cmpl	%eax, -68(%rbp)
	cmovle	-68(%rbp), %eax
	movl	%eax, %edx
	movl	-68(%rbp), %eax
	cmpl	%eax, -72(%rbp)
	cmovge	-72(%rbp), %eax
	movl	%eax, %ecx
	movl	-72(%rbp), %r8d
	movl	-68(%rbp), %eax
	movl	%edx, 32(%rsp)
	movl	%ecx, %r9d
	movl	%eax, %edx
	leaq	.LC0(%rip), %rcx
	call	printf
	movl	-72(%rbp), %edx
	movl	-68(%rbp), %eax
	movl	%eax, %ecx
	call	minNum
	movl	%eax, %ebx
	movl	-72(%rbp), %edx
	movl	-68(%rbp), %eax
	movl	%eax, %ecx
	call	maxNum
	movl	%eax, %ecx
	movl	-72(%rbp), %edx
	movl	-68(%rbp), %eax
	movl	%ebx, 32(%rsp)
	movl	%ecx, %r9d
	movl	%edx, %r8d
	movl	%eax, %edx
	leaq	.LC0(%rip), %rcx
	call	printf
	movl	$0, %eax
	addq	$72, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.globl	maxNum
	.def	maxNum;	.scl	2;	.type	32;	.endef
	.seh_proc	maxNum
maxNum:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	movl	16(%rbp), %eax
	cmpl	%eax, 24(%rbp)
	cmovge	24(%rbp), %eax
	popq	%rbp
	ret
	.seh_endproc
	.globl	minNum
	.def	minNum;	.scl	2;	.type	32;	.endef
	.seh_proc	minNum
minNum:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	movl	24(%rbp), %eax
	cmpl	%eax, 16(%rbp)
	cmovle	16(%rbp), %eax
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	printf;	.scl	2;	.type	32;	.endef
