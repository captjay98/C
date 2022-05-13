	.text
	.file	"tobase.c"
	.globl	main                            // -- Begin function main
	.p2align	2
	.type	main,@function
main:                                   // @main
	.cfi_startproc
// %bb.0:
	sub	sp, sp, #352
	stp	x29, x30, [sp, #320]            // 16-byte Folded Spill
	str	x28, [sp, #336]                 // 8-byte Folded Spill
	add	x29, sp, #320
	.cfi_def_cfa w29, 32
	.cfi_offset w28, -16
	.cfi_offset w30, -24
	.cfi_offset w29, -32
	stur	wzr, [x29, #-4]
	adrp	x8, .L__const.main.baseDigits
	add	x8, x8, :lo12:.L__const.main.baseDigits
	ldr	q0, [x8]
	stur	q0, [x29, #-32]
	str	wzr, [sp, #12]
	adrp	x0, .L.str
	add	x0, x0, :lo12:.L.str
	bl	puts
	adrp	x0, .L.str.1
	add	x0, x0, :lo12:.L.str.1
	add	x1, sp, #24
	bl	scanf
	adrp	x0, .L.str.2
	add	x0, x0, :lo12:.L.str.2
	bl	puts
	adrp	x0, .L.str.3
	add	x0, x0, :lo12:.L.str.3
	add	x1, sp, #16
	bl	scanf
	b	.LBB0_1
.LBB0_1:                                // =>This Inner Loop Header: Depth=1
	ldr	w8, [sp, #16]
	subs	w8, w8, #1
	b.le	.LBB0_3
	b	.LBB0_2
.LBB0_2:                                //   in Loop: Header=BB0_1 Depth=1
	ldr	w8, [sp, #16]
	subs	w8, w8, #16
	b.le	.LBB0_4
	b	.LBB0_3
.LBB0_3:
	adrp	x0, .L.str.4
	add	x0, x0, :lo12:.L.str.4
	bl	puts
	b	.LBB0_7
.LBB0_4:                                //   in Loop: Header=BB0_1 Depth=1
	ldr	x8, [sp, #24]
	ldrsw	x10, [sp, #16]
	sdiv	x9, x8, x10
	mul	x9, x9, x10
	subs	x9, x8, x9
	ldrsw	x10, [sp, #12]
	add	x8, sp, #32
                                        // kill: def $w9 killed $w9 killed $x9
	str	w9, [x8, x10, lsl #2]
	ldr	x1, [sp, #24]
	ldr	w2, [sp, #16]
	ldr	x9, [sp, #24]
	ldrsw	x10, [sp, #16]
	sdiv	x3, x9, x10
	ldrsw	x9, [sp, #12]
	ldr	w4, [x8, x9, lsl #2]
	adrp	x0, .L.str.5
	add	x0, x0, :lo12:.L.str.5
	bl	printf
	ldr	w8, [sp, #12]
	add	w8, w8, #1
	str	w8, [sp, #12]
	ldrsw	x9, [sp, #16]
	ldr	x8, [sp, #24]
	sdiv	x8, x8, x9
	str	x8, [sp, #24]
	b	.LBB0_5
.LBB0_5:                                //   in Loop: Header=BB0_1 Depth=1
	b	.LBB0_6
.LBB0_6:                                //   in Loop: Header=BB0_1 Depth=1
	ldr	x8, [sp, #24]
	cbnz	x8, .LBB0_1
	b	.LBB0_7
.LBB0_7:
	ldr	w8, [sp, #16]
	subs	w8, w8, #1
	b.le	.LBB0_9
	b	.LBB0_8
.LBB0_8:
	ldr	w8, [sp, #16]
	subs	w8, w8, #16
	b.le	.LBB0_10
	b	.LBB0_9
.LBB0_9:
	adrp	x0, .L.str.4
	add	x0, x0, :lo12:.L.str.4
	bl	puts
	b	.LBB0_15
.LBB0_10:
	adrp	x0, .L.str.6
	add	x0, x0, :lo12:.L.str.6
	bl	puts
	ldr	w8, [sp, #12]
	subs	w8, w8, #1
	str	w8, [sp, #12]
	b	.LBB0_11
.LBB0_11:                               // =>This Inner Loop Header: Depth=1
	ldr	w8, [sp, #12]
	tbnz	w8, #31, .LBB0_14
	b	.LBB0_12
.LBB0_12:                               //   in Loop: Header=BB0_11 Depth=1
	ldrsw	x9, [sp, #12]
	add	x8, sp, #32
	ldr	w8, [x8, x9, lsl #2]
	str	w8, [sp, #20]
	ldrsw	x9, [sp, #20]
	sub	x8, x29, #32
	ldrb	w1, [x8, x9]
	adrp	x0, .L.str.7
	add	x0, x0, :lo12:.L.str.7
	bl	printf
	b	.LBB0_13
.LBB0_13:                               //   in Loop: Header=BB0_11 Depth=1
	ldr	w8, [sp, #12]
	subs	w8, w8, #1
	str	w8, [sp, #12]
	b	.LBB0_11
.LBB0_14:
	adrp	x0, .L.str.8
	add	x0, x0, :lo12:.L.str.8
	bl	puts
	b	.LBB0_15
.LBB0_15:
	mov	w0, wzr
	ldr	x28, [sp, #336]                 // 8-byte Folded Reload
	ldp	x29, x30, [sp, #320]            // 16-byte Folded Reload
	add	sp, sp, #352
	ret
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
	.cfi_endproc
                                        // -- End function
	.type	.L__const.main.baseDigits,@object // @__const.main.baseDigits
	.section	.rodata.cst16,"aM",@progbits,16
.L__const.main.baseDigits:
	.ascii	"0123456789ABCDEF"
	.size	.L__const.main.baseDigits, 16

	.type	.L.str,@object                  // @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"Number to be Converted: "
	.size	.L.str, 25

	.type	.L.str.1,@object                // @.str.1
.L.str.1:
	.asciz	"%ld"
	.size	.L.str.1, 4

	.type	.L.str.2,@object                // @.str.2
.L.str.2:
	.asciz	"Base?"
	.size	.L.str.2, 6

	.type	.L.str.3,@object                // @.str.3
.L.str.3:
	.asciz	"%i"
	.size	.L.str.3, 3

	.type	.L.str.4,@object                // @.str.4
.L.str.4:
	.asciz	"Out of range"
	.size	.L.str.4, 13

	.type	.L.str.5,@object                // @.str.5
.L.str.5:
	.asciz	"\n%ld divided by %i = %ld remainder %i \n"
	.size	.L.str.5, 40

	.type	.L.str.6,@object                // @.str.6
.L.str.6:
	.asciz	"\nConverted Number ="
	.size	.L.str.6, 20

	.type	.L.str.7,@object                // @.str.7
.L.str.7:
	.asciz	"%c"
	.size	.L.str.7, 3

	.type	.L.str.8,@object                // @.str.8
.L.str.8:
	.asciz	"\n"
	.size	.L.str.8, 2

	.ident	"clang version 14.0.3"
	.section	".note.GNU-stack","",@progbits
