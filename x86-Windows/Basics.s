	.file	"Basics.c"
	.text
	.def	scanf;	.scl	3;	.type	32;	.endef
	.seh_proc	scanf
scanf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	48(%rsp), %rbp
	.seh_setframe	%rbp, 48
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	%r8, 48(%rbp)
	movq	%r9, 56(%rbp)
	leaq	40(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rbx
	movl	$0, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
	movq	%rbx, %r8
	movq	32(%rbp), %rdx
	movq	%rax, %rcx
	call	__mingw_vfscanf
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.def	printf;	.scl	3;	.type	32;	.endef
	.seh_proc	printf
printf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	48(%rsp), %rbp
	.seh_setframe	%rbp, 48
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	%r8, 48(%rbp)
	movq	%r9, 56(%rbp)
	leaq	40(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rbx
	movl	$1, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
	movq	%rbx, %r8
	movq	32(%rbp), %rdx
	movq	%rax, %rcx
	call	__mingw_vfprintf
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC1:
	.ascii "I am %s\12\0"
.LC2:
	.ascii "I am %d years old\12\0"
.LC3:
	.ascii "My iq grade is %c\12\0"
.LC4:
	.ascii "Your average score is %f\12\0"
.LC6:
	.ascii "%0.16lf\12\0"
.LC7:
	.ascii "this is %d\12\0"
.LC8:
	.ascii "%c%d\12\0"
.LC9:
	.ascii "%d%c\12\0"
.LC10:
	.ascii "%d\12\0"
.LC11:
	.ascii "%u\12\0"
.LC12:
	.ascii "%lld\12\0"
.LC13:
	.ascii "%llu\12\0"
.LC14:
	.ascii "What's your name?\12\0"
.LC15:
	.ascii "My name is %s\12\0"
.LC16:
	.ascii "How old are you %s?\12\0"
.LC17:
	.ascii "%d\0"
.LC21:
	.ascii "item 1: $%-8.2f\12\0"
.LC22:
	.ascii "item 2: $%8.2f\12\0"
.LC23:
	.ascii "item 3: $%-8.2f\12\0"
.LC24:
	.ascii "%f\12\0"
.LC26:
	.ascii "Square root of 25 is %lf \12\0"
.LC28:
	.ascii "Raised to the power = %lf\12\0"
.LC29:
	.ascii "rounded = %d\12\0"
.LC30:
	.ascii "Rounded up = %d\12\0"
.LC31:
	.ascii "Rounded Down = %d\12\0"
.LC33:
	.ascii "Rounded to = %lf\12\0"
.LC35:
	.ascii "log of 3 =%lf\12\0"
.LC37:
	.ascii "Sin of 45 = %lf\12\0"
.LC39:
	.ascii "cos of 45 = %lf\12\0"
.LC41:
	.ascii "tan of  = %lf\12\0"
.LC42:
	.ascii "Enter Side A: \0"
.LC43:
	.ascii "%lf\0"
.LC44:
	.ascii "Enter Side B: \0"
.LC45:
	.ascii "Side C: %lf\0"
.LC46:
	.ascii "\12How old are you?\0"
	.align 8
.LC47:
	.ascii "You have passed the age check\12\0"
.LC48:
	.ascii "You really should'nt be here\12\0"
	.align 8
.LC49:
	.ascii "You have failed the age check\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	subq	$528, %rsp
	.seh_stackalloc	528
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	call	__main
	movl	$98, 396(%rbp)
	movl	$1998, 392(%rbp)
	movl	$23, 388(%rbp)
	movss	.LC0(%rip), %xmm0
	movss	%xmm0, 384(%rbp)
	movb	$66, 383(%rbp)
	movl	$1634558282, 202(%rbp)
	movw	$108, 206(%rbp)
	leaq	202(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC1(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	388(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC2(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movsbl	383(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC3(%rip), %rax
	movq	%rax, %rcx
	call	printf
	pxor	%xmm0, %xmm0
	cvtss2sd	384(%rbp), %xmm0
	movq	%xmm0, %rax
	movq	%rax, %rdx
	movq	%rdx, %xmm0
	movapd	%xmm0, %xmm1
	movq	%rax, %rdx
	leaq	.LC4(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movsd	.LC5(%rip), %xmm0
	movsd	%xmm0, 368(%rbp)
	movsd	368(%rbp), %xmm0
	movq	368(%rbp), %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %rdx
	leaq	.LC6(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movb	$1, 367(%rbp)
	movzbl	367(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC7(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movb	$97, 366(%rbp)
	movsbl	366(%rbp), %edx
	movsbl	366(%rbp), %eax
	movl	%edx, %r8d
	movl	%eax, %edx
	leaq	.LC8(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movb	$69, 365(%rbp)
	movzbl	365(%rbp), %edx
	movzbl	365(%rbp), %eax
	movl	%edx, %r8d
	movl	%eax, %edx
	leaq	.LC9(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movw	$32500, 362(%rbp)
	movswl	362(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC10(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movw	$6500, 360(%rbp)
	movzwl	360(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC11(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$699999999, 356(%rbp)
	movl	356(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC10(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movabsq	$779769997897898776, %rax
	movq	%rax, 344(%rbp)
	movq	344(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movabsq	$-5272764500353355792, %rax
	movq	%rax, 336(%rbp)
	movq	336(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC13(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	.LC14(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$0, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
	movq	%rax, %rdx
	leaq	-64(%rbp), %rax
	movq	%rdx, %r8
	movl	$25, %edx
	movq	%rax, %rcx
	call	fgets
	leaq	-64(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC15(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	-64(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC16(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	-68(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC17(%rip), %rax
	movq	%rax, %rcx
	call	scanf
	movl	-68(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC2(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movss	.LC18(%rip), %xmm0
	movss	%xmm0, 332(%rbp)
	movss	.LC19(%rip), %xmm0
	movss	%xmm0, 328(%rbp)
	movss	.LC20(%rip), %xmm0
	movss	%xmm0, 324(%rbp)
	pxor	%xmm0, %xmm0
	cvtss2sd	332(%rbp), %xmm0
	movq	%xmm0, %rax
	movq	%rax, %rdx
	movq	%rdx, %xmm0
	movapd	%xmm0, %xmm1
	movq	%rax, %rdx
	leaq	.LC21(%rip), %rax
	movq	%rax, %rcx
	call	printf
	pxor	%xmm0, %xmm0
	cvtss2sd	328(%rbp), %xmm0
	movq	%xmm0, %rax
	movq	%rax, %rdx
	movq	%rdx, %xmm0
	movapd	%xmm0, %xmm1
	movq	%rax, %rdx
	leaq	.LC22(%rip), %rax
	movq	%rax, %rcx
	call	printf
	pxor	%xmm0, %xmm0
	cvtss2sd	324(%rbp), %xmm0
	movq	%xmm0, %rax
	movq	%rax, %rdx
	movq	%rdx, %xmm0
	movapd	%xmm0, %xmm1
	movq	%rax, %rdx
	leaq	.LC23(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$4, 320(%rbp)
	movl	$3, 316(%rbp)
	addl	$1, 320(%rbp)
	subl	$1, 316(%rbp)
	movl	320(%rbp), %edx
	movl	316(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, 312(%rbp)
	movl	320(%rbp), %eax
	subl	316(%rbp), %eax
	movl	%eax, 308(%rbp)
	movl	320(%rbp), %eax
	imull	316(%rbp), %eax
	movl	%eax, 304(%rbp)
	movl	320(%rbp), %eax
	cltd
	idivl	316(%rbp)
	movl	%eax, 300(%rbp)
	pxor	%xmm0, %xmm0
	cvtsi2ssl	320(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	cvtsi2ssl	316(%rbp), %xmm1
	divss	%xmm1, %xmm0
	movss	%xmm0, 296(%rbp)
	movl	320(%rbp), %eax
	cltd
	idivl	316(%rbp)
	movl	%edx, 292(%rbp)
	addl	$1, 320(%rbp)
	subl	$1, 316(%rbp)
	movl	312(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC10(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	308(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC10(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	304(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC10(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	300(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC10(%rip), %rax
	movq	%rax, %rcx
	call	printf
	pxor	%xmm0, %xmm0
	cvtss2sd	296(%rbp), %xmm0
	movq	%xmm0, %rax
	movq	%rax, %rdx
	movq	%rdx, %xmm0
	movapd	%xmm0, %xmm1
	movq	%rax, %rdx
	leaq	.LC24(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	292(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC10(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	320(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC10(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	316(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC10(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movsd	.LC25(%rip), %xmm0
	movsd	%xmm0, 280(%rbp)
	movsd	280(%rbp), %xmm0
	movq	280(%rbp), %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %rdx
	leaq	.LC26(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movsd	.LC27(%rip), %xmm0
	movsd	%xmm0, 272(%rbp)
	movsd	272(%rbp), %xmm0
	movq	272(%rbp), %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %rdx
	leaq	.LC28(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$3, 268(%rbp)
	movl	268(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC29(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$4, 264(%rbp)
	movl	264(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC30(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$3, 260(%rbp)
	movl	260(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC31(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movsd	.LC32(%rip), %xmm0
	movsd	%xmm0, 248(%rbp)
	movsd	248(%rbp), %xmm0
	movq	248(%rbp), %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %rdx
	leaq	.LC33(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movsd	.LC34(%rip), %xmm0
	movsd	%xmm0, 240(%rbp)
	movsd	240(%rbp), %xmm0
	movq	240(%rbp), %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %rdx
	leaq	.LC35(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movsd	.LC36(%rip), %xmm0
	movsd	%xmm0, 232(%rbp)
	movsd	232(%rbp), %xmm0
	movq	232(%rbp), %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %rdx
	leaq	.LC37(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movsd	.LC38(%rip), %xmm0
	movsd	%xmm0, 224(%rbp)
	movsd	224(%rbp), %xmm0
	movq	224(%rbp), %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %rdx
	leaq	.LC39(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movsd	.LC40(%rip), %xmm0
	movsd	%xmm0, 216(%rbp)
	movsd	216(%rbp), %xmm0
	movq	216(%rbp), %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %rdx
	leaq	.LC41(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	.LC42(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	-80(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC43(%rip), %rax
	movq	%rax, %rcx
	call	scanf
	leaq	.LC44(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	-88(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC43(%rip), %rax
	movq	%rax, %rcx
	call	scanf
	movsd	-80(%rbp), %xmm1
	movsd	-80(%rbp), %xmm0
	mulsd	%xmm0, %xmm1
	movsd	-88(%rbp), %xmm2
	movsd	-88(%rbp), %xmm0
	mulsd	%xmm2, %xmm0
	addsd	%xmm0, %xmm1
	movq	%xmm1, %rax
	movq	%rax, %xmm0
	call	sqrt
	movq	%xmm0, %rax
	movq	%rax, 208(%rbp)
	movsd	208(%rbp), %xmm0
	movq	208(%rbp), %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %rdx
	leaq	.LC45(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	.LC46(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	-92(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC17(%rip), %rax
	movq	%rax, %rcx
	call	scanf
	movl	-92(%rbp), %eax
	cmpl	$17, %eax
	jle	.L6
	leaq	.LC47(%rip), %rax
	movq	%rax, %rcx
	call	printf
	jmp	.L7
.L6:
	movl	-92(%rbp), %eax
	cmpl	$4, %eax
	jg	.L8
	leaq	.LC48(%rip), %rax
	movq	%rax, %rcx
	call	printf
	jmp	.L7
.L8:
	leaq	.LC49(%rip), %rax
	movq	%rax, %rcx
	call	printf
.L7:
	movl	$0, %eax
	addq	$528, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
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
	.ident	"GCC: (GNU) 11.2.0"
	.def	__mingw_vfscanf;	.scl	2;	.type	32;	.endef
	.def	__mingw_vfprintf;	.scl	2;	.type	32;	.endef
	.def	fgets;	.scl	2;	.type	32;	.endef
	.def	sqrt;	.scl	2;	.type	32;	.endef
