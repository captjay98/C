	.file	"Basics.c"
	.text
	.section	.rodata
.LC1:
	.string	"I am %s\n"
.LC2:
	.string	"I am %d years old\n"
.LC3:
	.string	"My iq grade is %c\n"
.LC4:
	.string	"Your average score is %f\n"
.LC6:
	.string	"%0.16lf\n"
.LC7:
	.string	"this is %d\n"
.LC8:
	.string	"%c%d\n"
.LC9:
	.string	"%d%c\n"
.LC10:
	.string	"%d\n"
.LC11:
	.string	"%u\n"
.LC12:
	.string	"%lld\n"
.LC13:
	.string	"%llu\n"
.LC14:
	.string	"What's your name?"
.LC15:
	.string	"My name is %s\n"
.LC16:
	.string	"How old are you %s?\n"
.LC17:
	.string	"%d"
.LC21:
	.string	"item 1: $%-8.2f\n"
.LC22:
	.string	"item 2: $%8.2f\n"
.LC23:
	.string	"item 3: $%-8.2f\n"
.LC24:
	.string	"%f\n"
.LC26:
	.string	"Square root of 25 is %lf \n"
.LC28:
	.string	"Raised to the power = %lf\n"
.LC29:
	.string	"rounded = %d\n"
.LC30:
	.string	"Rounded up = %d\n"
.LC31:
	.string	"Rounded Down = %d\n"
.LC33:
	.string	"Rounded to = %lf\n"
.LC35:
	.string	"log of 3 =%lf\n"
.LC37:
	.string	"Sin of 45 = %lf\n"
.LC39:
	.string	"cos of 45 = %lf\n"
.LC41:
	.string	"tan of  = %lf\n"
.LC42:
	.string	"Enter Side A: "
.LC43:
	.string	"%lf"
.LC44:
	.string	"Enter Side B: "
.LC45:
	.string	"Side C: %lf"
.LC46:
	.string	"\nHow old are you?"
.LC47:
	.string	"You have passed the age check"
.LC48:
	.string	"You really should'nt be here"
.LC49:
	.string	"You have failed the age check"
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
	subq	$480, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$98, -460(%rbp)
	movl	$1998, -456(%rbp)
	movl	$23, -452(%rbp)
	movss	.LC0(%rip), %xmm0
	movss	%xmm0, -448(%rbp)
	movb	$66, -476(%rbp)
	movl	$1634558282, -278(%rbp)
	movw	$108, -274(%rbp)
	leaq	-278(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-452(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movsbl	-476(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	cvtss2sd	-448(%rbp), %xmm0
	leaq	.LC4(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movsd	.LC5(%rip), %xmm0
	movsd	%xmm0, -368(%rbp)
	movq	-368(%rbp), %rax
	movq	%rax, %xmm0
	leaq	.LC6(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movb	$1, -475(%rbp)
	movzbl	-475(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC7(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movb	$97, -474(%rbp)
	movsbl	-474(%rbp), %edx
	movsbl	-474(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC8(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movb	$69, -473(%rbp)
	movzbl	-473(%rbp), %edx
	movzbl	-473(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC9(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movw	$32500, -472(%rbp)
	movswl	-472(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC10(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movw	$6500, -470(%rbp)
	movzwl	-470(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC11(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$699999999, -444(%rbp)
	movl	-444(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC10(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movabsq	$779769997897898776, %rax
	movq	%rax, -360(%rbp)
	movq	-360(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC12(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movabsq	$-5272764500353355792, %rax
	movq	%rax, -352(%rbp)
	movq	-352(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC13(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	.LC14(%rip), %rdi
	call	puts@PLT
	movq	stdin(%rip), %rdx
	leaq	-272(%rbp), %rax
	movl	$25, %esi
	movq	%rax, %rdi
	call	fgets@PLT
	leaq	-272(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC15(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-272(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC16(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-468(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC17(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-468(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movss	.LC18(%rip), %xmm0
	movss	%xmm0, -440(%rbp)
	movss	.LC19(%rip), %xmm0
	movss	%xmm0, -436(%rbp)
	movss	.LC20(%rip), %xmm0
	movss	%xmm0, -432(%rbp)
	cvtss2sd	-440(%rbp), %xmm0
	leaq	.LC21(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	cvtss2sd	-436(%rbp), %xmm0
	leaq	.LC22(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	cvtss2sd	-432(%rbp), %xmm0
	leaq	.LC23(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movl	$4, -428(%rbp)
	movl	$3, -424(%rbp)
	addl	$1, -428(%rbp)
	subl	$1, -424(%rbp)
	movl	-428(%rbp), %edx
	movl	-424(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -420(%rbp)
	movl	-428(%rbp), %eax
	subl	-424(%rbp), %eax
	movl	%eax, -416(%rbp)
	movl	-428(%rbp), %eax
	imull	-424(%rbp), %eax
	movl	%eax, -412(%rbp)
	movl	-428(%rbp), %eax
	cltd
	idivl	-424(%rbp)
	movl	%eax, -408(%rbp)
	cvtsi2ssl	-428(%rbp), %xmm0
	cvtsi2ssl	-424(%rbp), %xmm1
	divss	%xmm1, %xmm0
	movss	%xmm0, -404(%rbp)
	movl	-428(%rbp), %eax
	cltd
	idivl	-424(%rbp)
	movl	%edx, -400(%rbp)
	addl	$1, -428(%rbp)
	subl	$1, -424(%rbp)
	movl	-420(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC10(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-416(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC10(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-412(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC10(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-408(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC10(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	cvtss2sd	-404(%rbp), %xmm0
	leaq	.LC24(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movl	-400(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC10(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-428(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC10(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-424(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC10(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movsd	.LC25(%rip), %xmm0
	movsd	%xmm0, -344(%rbp)
	movq	-344(%rbp), %rax
	movq	%rax, %xmm0
	leaq	.LC26(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movsd	.LC27(%rip), %xmm0
	movsd	%xmm0, -336(%rbp)
	movq	-336(%rbp), %rax
	movq	%rax, %xmm0
	leaq	.LC28(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movl	$3, -396(%rbp)
	movl	-396(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC29(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$4, -392(%rbp)
	movl	-392(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC30(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$3, -388(%rbp)
	movl	-388(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC31(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movsd	.LC32(%rip), %xmm0
	movsd	%xmm0, -328(%rbp)
	movq	-328(%rbp), %rax
	movq	%rax, %xmm0
	leaq	.LC33(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movsd	.LC34(%rip), %xmm0
	movsd	%xmm0, -320(%rbp)
	movq	-320(%rbp), %rax
	movq	%rax, %xmm0
	leaq	.LC35(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movsd	.LC36(%rip), %xmm0
	movsd	%xmm0, -312(%rbp)
	movq	-312(%rbp), %rax
	movq	%rax, %xmm0
	leaq	.LC37(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movsd	.LC38(%rip), %xmm0
	movsd	%xmm0, -304(%rbp)
	movq	-304(%rbp), %rax
	movq	%rax, %xmm0
	leaq	.LC39(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movsd	.LC40(%rip), %xmm0
	movsd	%xmm0, -296(%rbp)
	movq	-296(%rbp), %rax
	movq	%rax, %xmm0
	leaq	.LC41(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	leaq	.LC42(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-384(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC43(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	.LC44(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-376(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC43(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movsd	-384(%rbp), %xmm1
	movsd	-384(%rbp), %xmm0
	mulsd	%xmm0, %xmm1
	movsd	-376(%rbp), %xmm2
	movsd	-376(%rbp), %xmm0
	mulsd	%xmm2, %xmm0
	addsd	%xmm1, %xmm0
	call	sqrt@PLT
	movq	%xmm0, %rax
	movq	%rax, -288(%rbp)
	movq	-288(%rbp), %rax
	movq	%rax, %xmm0
	leaq	.LC45(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	leaq	.LC46(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-464(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC17(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-464(%rbp), %eax
	cmpl	$17, %eax
	jle	.L2
	leaq	.LC47(%rip), %rdi
	call	puts@PLT
	jmp	.L3
.L2:
	movl	-464(%rbp), %eax
	cmpl	$4, %eax
	jg	.L4
	leaq	.LC48(%rip), %rdi
	call	puts@PLT
	jmp	.L3
.L4:
	leaq	.LC49(%rip), %rdi
	call	puts@PLT
.L3:
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
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
.LC0:
	.long	1118437376
	.align 8
.LC5:
	.long	1926914592
	.long	1075230528
	.align 4
.LC18:
	.long	1085800448
	.align 4
.LC19:
	.long	1092616192
	.align 4
.LC20:
	.long	1132068864
	.align 8
.LC25:
	.long	0
	.long	1075052544
	.align 8
.LC27:
	.long	0
	.long	1076887552
	.align 8
.LC32:
	.long	1717986918
	.long	1074554470
	.align 8
.LC34:
	.long	2058158859
	.long	1072796650
	.align 8
.LC36:
	.long	121477891
	.long	1072380570
	.align 8
.LC38:
	.long	255520831
	.long	1071697776
	.align 8
.LC40:
	.long	1675895037
	.long	1073343129
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
