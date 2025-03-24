	.file	"bubble_a Tris.c"
	.text
	.globl	bubble_a
	.type	bubble_a, @function
bubble_a:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	-48(%rbp), %rax
	subq	$1, %rax
	movq	%rax, -16(%rbp)
	jmp	.L2
.L6:
	movq	$0, -24(%rbp)
	jmp	.L3
.L5:
	movq	-24(%rbp), %rax
	addq	$1, %rax
	leaq	0(,%rax,8), %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movq	-24(%rbp), %rax
	leaq	0(,%rax,8), %rcx
	movq	-40(%rbp), %rax
	addq	%rcx, %rax
	movq	(%rax), %rax
	cmpq	%rax, %rdx
	jge	.L4
	movq	-24(%rbp), %rax
	leaq	0(,%rax,8), %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	addq	$1, %rax
	leaq	0(,%rax,8), %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movq	-24(%rbp), %rdx
	leaq	0(,%rdx,8), %rcx
	movq	-40(%rbp), %rdx
	addq	%rcx, %rdx
	movq	(%rax), %rax
	movq	%rax, (%rdx)
	movq	-24(%rbp), %rax
	addq	$1, %rax
	leaq	0(,%rax,8), %rdx
	movq	-40(%rbp), %rax
	addq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rax, (%rdx)
.L4:
	addq	$1, -24(%rbp)
.L3:
	movq	-24(%rbp), %rax
	cmpq	-16(%rbp), %rax
	jl	.L5
	subq	$1, -16(%rbp)
.L2:
	cmpq	$0, -16(%rbp)
	jg	.L6
	nop
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	bubble_a, .-bubble_a
	.section	.rodata
.LC0:
	.string	"Array before sorted : "
.LC1:
	.string	"%lld "
.LC2:
	.string	"Array after sorted : "
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$144, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	$10, -128(%rbp)
	movq	$15, -120(%rbp)
	movq	$2, -112(%rbp)
	movq	$6, -104(%rbp)
	movq	$1, -96(%rbp)
	movq	$7, -88(%rbp)
	movq	$8, -80(%rbp)
	movq	$9, -72(%rbp)
	movq	$3, -64(%rbp)
	movq	$5, -56(%rbp)
	movq	$4, -48(%rbp)
	movq	$11, -40(%rbp)
	movq	$12, -32(%rbp)
	movq	$13, -24(%rbp)
	movq	$14, -16(%rbp)
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -136(%rbp)
	jmp	.L8
.L9:
	movl	-136(%rbp), %eax
	cltq
	movq	-128(%rbp,%rax,8), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -136(%rbp)
.L8:
	cmpl	$14, -136(%rbp)
	jle	.L9
	movl	$10, %edi
	call	putchar@PLT
	leaq	-128(%rbp), %rax
	movl	$15, %esi
	movq	%rax, %rdi
	call	bubble_a
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -132(%rbp)
	jmp	.L10
.L11:
	movl	-132(%rbp), %eax
	cltq
	movq	-128(%rbp,%rax,8), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -132(%rbp)
.L10:
	cmpl	$14, -132(%rbp)
	jle	.L11
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L13
	call	__stack_chk_fail@PLT
.L13:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 13.3.0-6ubuntu2~24.04) 13.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
