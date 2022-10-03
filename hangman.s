	.file	"hangman.c"
	.text
	.section	.rodata
.LC0:
	.string	"\n***HANGMAN***\n"
	.align 8
.LC1:
	.string	"TIP! Name of Popular Operating Systems\n"
.LC2:
	.string	"\nYou Have %i Lives Left\n"
.LC3:
	.string	"-"
.LC4:
	.string	"Number correct so Far = %i\n"
.LC5:
	.string	"Guess a Letter\n"
.LC6:
	.string	"quit"
.LC7:
	.string	"Letter Entered %c\n"
.LC8:
	.string	"Sorry, Wrong Guess!\n"
.LC9:
	.string	"Correct Guess, You Rock!!!"
.LC10:
	.string	"Player is a Loser\n"
	.align 8
.LC11:
	.string	"You are out of Lives, the Correct word was %s\n"
.LC12:
	.string	"Hurray!!! You Win!!!"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$192, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, %edi
	movl	$0, %eax
	call	time@PLT
	movl	%eax, %edi
	call	srand@PLT
	movabsq	$129142929842773, %rax
	movl	$0, %edx
	movq	%rax, -128(%rbp)
	movq	%rdx, -120(%rbp)
	movabsq	$32500942631758167, %rax
	movl	$0, %edx
	movq	%rax, -112(%rbp)
	movq	%rdx, -104(%rbp)
	movabsq	$28263425052536417, %rax
	movl	$0, %edx
	movq	%rax, -96(%rbp)
	movq	%rdx, -88(%rbp)
	movq	$7565161, -80(%rbp)
	movq	$0, -72(%rbp)
	movabsq	$31069352688974195, %rax
	movl	$0, %edx
	movq	%rax, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movabsq	$495790416235, %rax
	movl	$0, %edx
	movq	%rax, -48(%rbp)
	movq	%rdx, -40(%rbp)
	call	rand@PLT
	movl	%eax, %edx
	movslq	%edx, %rax
	imulq	$715827883, %rax, %rax
	shrq	$32, %rax
	movq	%rax, %rcx
	movl	%edx, %eax
	sarl	$31, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	movl	%eax, -168(%rbp)
	movl	-168(%rbp), %ecx
	movl	%ecx, %eax
	addl	%eax, %eax
	addl	%ecx, %eax
	addl	%eax, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -168(%rbp)
	movl	$5, -188(%rbp)
	movl	$0, -184(%rbp)
	movl	$0, -180(%rbp)
	leaq	-128(%rbp), %rax
	movl	-168(%rbp), %edx
	movslq	%edx, %rdx
	salq	$4, %rdx
	addq	%rdx, %rax
	movq	%rax, %rdi
	call	strlen@PLT
	movl	%eax, -164(%rbp)
	movq	$0, -160(%rbp)
	movq	$0, -152(%rbp)
	movq	$0, -144(%rbp)
	movq	$0, -136(%rbp)
	movl	$0, -176(%rbp)
	movl	$0, -172(%rbp)
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	leaq	.LC1(%rip), %rdi
	call	puts@PLT
	jmp	.L2
.L15:
	movl	-180(%rbp), %eax
	cmpl	-184(%rbp), %eax
	jne	.L3
	movl	-188(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L3:
	movl	$0, -172(%rbp)
	jmp	.L4
.L7:
	movl	-172(%rbp), %eax
	cltq
	movl	-160(%rbp,%rax,4), %eax
	cmpl	$1, %eax
	jne	.L5
	movl	-172(%rbp), %eax
	cltq
	movl	-168(%rbp), %edx
	movslq	%edx, %rdx
	salq	$4, %rdx
	addq	%rbp, %rdx
	addq	%rdx, %rax
	addq	$-128, %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	putchar@PLT
	jmp	.L6
.L5:
	leaq	.LC3(%rip), %rdi
	call	puts@PLT
.L6:
	addl	$1, -172(%rbp)
.L4:
	movl	-172(%rbp), %eax
	cmpl	-164(%rbp), %eax
	jl	.L7
	movl	-184(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	.LC5(%rip), %rdi
	call	puts@PLT
	movq	stdin(%rip), %rdx
	leaq	-32(%rbp), %rax
	movl	$16, %esi
	movq	%rax, %rdi
	call	fgets@PLT
	leaq	-32(%rbp), %rax
	movl	$4, %edx
	leaq	.LC6(%rip), %rsi
	movq	%rax, %rdi
	call	strncmp@PLT
	testl	%eax, %eax
	jne	.L8
	movl	$1, -176(%rbp)
	jmp	.L9
.L8:
	movzbl	-32(%rbp), %eax
	movb	%al, -189(%rbp)
	movsbl	-189(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC7(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-184(%rbp), %eax
	movl	%eax, -180(%rbp)
	movl	$0, -172(%rbp)
	jmp	.L10
.L13:
	movl	-172(%rbp), %eax
	cltq
	movl	-160(%rbp,%rax,4), %eax
	cmpl	$1, %eax
	je	.L21
	movl	-172(%rbp), %eax
	cltq
	movl	-168(%rbp), %edx
	movslq	%edx, %rdx
	salq	$4, %rdx
	addq	%rbp, %rdx
	addq	%rdx, %rax
	addq	$-128, %rax
	movzbl	(%rax), %eax
	cmpb	%al, -189(%rbp)
	jne	.L12
	movl	-172(%rbp), %eax
	cltq
	movl	$1, -160(%rbp,%rax,4)
	addl	$1, -184(%rbp)
	jmp	.L12
.L21:
	nop
.L12:
	addl	$1, -172(%rbp)
.L10:
	movl	-172(%rbp), %eax
	cmpl	-164(%rbp), %eax
	jl	.L13
	movl	-180(%rbp), %eax
	cmpl	-184(%rbp), %eax
	jne	.L14
	subl	$1, -188(%rbp)
	leaq	.LC8(%rip), %rdi
	call	puts@PLT
	cmpl	$0, -188(%rbp)
	jne	.L2
	jmp	.L9
.L14:
	leaq	.LC9(%rip), %rdi
	call	puts@PLT
.L2:
	movl	-184(%rbp), %eax
	cmpl	-164(%rbp), %eax
	jl	.L15
.L9:
	cmpl	$1, -176(%rbp)
	jne	.L16
	leaq	.LC10(%rip), %rdi
	call	puts@PLT
	jmp	.L17
.L16:
	cmpl	$0, -188(%rbp)
	jne	.L18
	leaq	-128(%rbp), %rax
	movl	-168(%rbp), %edx
	movslq	%edx, %rdx
	salq	$4, %rdx
	addq	%rdx, %rax
	movq	%rax, %rsi
	leaq	.LC11(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L17
.L18:
	leaq	.LC12(%rip), %rdi
	call	puts@PLT
.L17:
	movl	$0, %eax
	movq	-8(%rbp), %rsi
	xorq	%fs:40, %rsi
	je	.L20
	call	__stack_chk_fail@PLT
.L20:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
