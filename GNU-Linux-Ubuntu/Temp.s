	.file	"Temp.c"
	.text
	.section	.rodata
.LC0:
	.string	"Enter Unit: "
.LC1:
	.string	"%c"
	.align 8
.LC2:
	.string	"Enter the Temperature in Celsius"
.LC3:
	.string	"%f"
	.align 8
.LC7:
	.string	"\nThe temp in Farenheit is:%.1f"
	.align 8
.LC8:
	.string	"Enter the Temperature in Farenheit"
.LC9:
	.string	"\nThe temp in Celcius is: %.1f"
	.align 8
.LC10:
	.string	" %c is incorrect, Enter an Appropiate Unit please."
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	leaq	-13(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movzbl	-13(%rbp), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	toupper@PLT
	movb	%al, -13(%rbp)
	movzbl	-13(%rbp), %eax
	cmpb	$67, %al
	jne	.L2
	leaq	.LC2(%rip), %rdi
	call	puts@PLT
	leaq	-12(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movss	-12(%rbp), %xmm1
	movss	.LC4(%rip), %xmm0
	mulss	%xmm1, %xmm0
	movss	.LC5(%rip), %xmm1
	divss	%xmm1, %xmm0
	movaps	%xmm0, %xmm1
	movss	.LC6(%rip), %xmm0
	addss	%xmm1, %xmm0
	movss	%xmm0, -12(%rbp)
	movss	-12(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm0
	leaq	.LC7(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	jmp	.L3
.L2:
	movzbl	-13(%rbp), %eax
	cmpb	$70, %al
	jne	.L4
	leaq	.LC8(%rip), %rdi
	call	puts@PLT
	leaq	-12(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movss	-12(%rbp), %xmm0
	movss	.LC6(%rip), %xmm1
	subss	%xmm1, %xmm0
	movaps	%xmm0, %xmm1
	movss	.LC5(%rip), %xmm0
	mulss	%xmm1, %xmm0
	movss	.LC4(%rip), %xmm1
	divss	%xmm1, %xmm0
	movss	%xmm0, -12(%rbp)
	movss	-12(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm0
	leaq	.LC9(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	jmp	.L3
.L4:
	movzbl	-13(%rbp), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	leaq	.LC10(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L3:
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L6
	call	__stack_chk_fail@PLT
.L6:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 4
.LC4:
	.long	1091567616
	.align 4
.LC5:
	.long	1084227584
	.align 4
.LC6:
	.long	1107296256
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
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
