	.text
	.file	"RPS.c"
	.globl	main                            // -- Begin function main
	.p2align	2
	.type	main,@function
main:                                   // @main
	.cfi_startproc
// %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             // 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	wzr, [x29, #-4]
	stur	wzr, [x29, #-12]
	str	wzr, [sp, #16]
	str	wzr, [sp, #12]
	mov	w8, #1
	strb	w8, [sp, #5]
	b	.LBB0_1
.LBB0_1:                                // =>This Loop Header: Depth=1
                                        //     Child Loop BB0_3 Depth 2
	ldrb	w8, [sp, #5]
	tbz	w8, #0, .LBB0_56
	b	.LBB0_2
.LBB0_2:                                //   in Loop: Header=BB0_1 Depth=1
	ldr	w1, [sp, #16]
	ldur	w2, [x29, #-12]
	ldr	w3, [sp, #12]
	adrp	x0, .L.str
	add	x0, x0, :lo12:.L.str
	bl	printf
	bl	makeRand
	str	w0, [sp, #8]
	b	.LBB0_3
.LBB0_3:                                //   Parent Loop BB0_1 Depth=1
                                        // =>  This Inner Loop Header: Depth=2
	ldrb	w8, [sp, #5]
	tbz	w8, #0, .LBB0_13
	b	.LBB0_4
.LBB0_4:                                //   in Loop: Header=BB0_3 Depth=2
	adrp	x0, .L.str.1
	add	x0, x0, :lo12:.L.str.1
	bl	puts
	adrp	x0, .L.str.2
	add	x0, x0, :lo12:.L.str.2
	add	x1, sp, #7
	bl	scanf
	ldrb	w0, [sp, #7]
	bl	toupper
	strb	w0, [sp, #7]
	bl	getchar
	adrp	x0, .L.str.3
	add	x0, x0, :lo12:.L.str.3
	bl	puts
	ldrb	w8, [sp, #7]
	subs	w8, w8, #81
	b.ne	.LBB0_6
	b	.LBB0_5
.LBB0_5:
	mov	w0, wzr
	bl	exit
.LBB0_6:                                //   in Loop: Header=BB0_3 Depth=2
	ldrb	w8, [sp, #7]
	subs	w8, w8, #82
	b.eq	.LBB0_9
	b	.LBB0_7
.LBB0_7:                                //   in Loop: Header=BB0_3 Depth=2
	ldrb	w8, [sp, #7]
	subs	w8, w8, #80
	b.eq	.LBB0_9
	b	.LBB0_8
.LBB0_8:                                //   in Loop: Header=BB0_3 Depth=2
	ldrb	w8, [sp, #7]
	subs	w8, w8, #83
	b.ne	.LBB0_10
	b	.LBB0_9
.LBB0_9:                                //   in Loop: Header=BB0_1 Depth=1
	b	.LBB0_13
.LBB0_10:                               //   in Loop: Header=BB0_3 Depth=2
	adrp	x0, .L.str.4
	add	x0, x0, :lo12:.L.str.4
	bl	puts
	b	.LBB0_11
.LBB0_11:                               //   in Loop: Header=BB0_3 Depth=2
	b	.LBB0_12
.LBB0_12:                               //   in Loop: Header=BB0_3 Depth=2
	b	.LBB0_3
.LBB0_13:                               //   in Loop: Header=BB0_1 Depth=1
	ldrb	w8, [sp, #7]
	subs	w8, w8, #82
	b.ne	.LBB0_15
	b	.LBB0_14
.LBB0_14:                               //   in Loop: Header=BB0_1 Depth=1
	adrp	x0, .L.str.5
	add	x0, x0, :lo12:.L.str.5
	bl	puts
	b	.LBB0_21
.LBB0_15:                               //   in Loop: Header=BB0_1 Depth=1
	ldrb	w8, [sp, #7]
	subs	w8, w8, #80
	b.ne	.LBB0_17
	b	.LBB0_16
.LBB0_16:                               //   in Loop: Header=BB0_1 Depth=1
	adrp	x0, .L.str.6
	add	x0, x0, :lo12:.L.str.6
	bl	puts
	b	.LBB0_20
.LBB0_17:                               //   in Loop: Header=BB0_1 Depth=1
	ldrb	w8, [sp, #7]
	subs	w8, w8, #83
	b.ne	.LBB0_19
	b	.LBB0_18
.LBB0_18:                               //   in Loop: Header=BB0_1 Depth=1
	adrp	x0, .L.str.7
	add	x0, x0, :lo12:.L.str.7
	bl	puts
	b	.LBB0_19
.LBB0_19:                               //   in Loop: Header=BB0_1 Depth=1
	b	.LBB0_20
.LBB0_20:                               //   in Loop: Header=BB0_1 Depth=1
	b	.LBB0_21
.LBB0_21:                               //   in Loop: Header=BB0_1 Depth=1
	ldr	w8, [sp, #8]
	cbnz	w8, .LBB0_23
	b	.LBB0_22
.LBB0_22:                               //   in Loop: Header=BB0_1 Depth=1
	mov	w8, #82
	strb	w8, [sp, #6]
	adrp	x0, .L.str.8
	add	x0, x0, :lo12:.L.str.8
	bl	puts
	b	.LBB0_29
.LBB0_23:                               //   in Loop: Header=BB0_1 Depth=1
	ldr	w8, [sp, #8]
	subs	w8, w8, #1
	b.ne	.LBB0_25
	b	.LBB0_24
.LBB0_24:                               //   in Loop: Header=BB0_1 Depth=1
	mov	w8, #83
	strb	w8, [sp, #6]
	adrp	x0, .L.str.9
	add	x0, x0, :lo12:.L.str.9
	bl	puts
	b	.LBB0_28
.LBB0_25:                               //   in Loop: Header=BB0_1 Depth=1
	ldr	w8, [sp, #8]
	subs	w8, w8, #2
	b.ne	.LBB0_27
	b	.LBB0_26
.LBB0_26:                               //   in Loop: Header=BB0_1 Depth=1
	mov	w8, #80
	strb	w8, [sp, #6]
	adrp	x0, .L.str.10
	add	x0, x0, :lo12:.L.str.10
	bl	puts
	b	.LBB0_27
.LBB0_27:                               //   in Loop: Header=BB0_1 Depth=1
	b	.LBB0_28
.LBB0_28:                               //   in Loop: Header=BB0_1 Depth=1
	b	.LBB0_29
.LBB0_29:                               //   in Loop: Header=BB0_1 Depth=1
	ldrb	w8, [sp, #6]
	ldrb	w9, [sp, #7]
	subs	w8, w8, w9
	b.ne	.LBB0_31
	b	.LBB0_30
.LBB0_30:                               //   in Loop: Header=BB0_1 Depth=1
	adrp	x0, .L.str.11
	add	x0, x0, :lo12:.L.str.11
	bl	puts
	ldr	w8, [sp, #16]
	add	w8, w8, #1
	str	w8, [sp, #16]
	b	.LBB0_55
.LBB0_31:                               //   in Loop: Header=BB0_1 Depth=1
	ldrb	w8, [sp, #7]
	subs	w8, w8, #83
	b.ne	.LBB0_34
	b	.LBB0_32
.LBB0_32:                               //   in Loop: Header=BB0_1 Depth=1
	ldrb	w8, [sp, #6]
	subs	w8, w8, #80
	b.ne	.LBB0_34
	b	.LBB0_33
.LBB0_33:                               //   in Loop: Header=BB0_1 Depth=1
	adrp	x0, .L.str.12
	add	x0, x0, :lo12:.L.str.12
	bl	puts
	ldur	w8, [x29, #-12]
	add	w8, w8, #1
	stur	w8, [x29, #-12]
	b	.LBB0_54
.LBB0_34:                               //   in Loop: Header=BB0_1 Depth=1
	ldrb	w8, [sp, #7]
	subs	w8, w8, #80
	b.ne	.LBB0_37
	b	.LBB0_35
.LBB0_35:                               //   in Loop: Header=BB0_1 Depth=1
	ldrb	w8, [sp, #6]
	subs	w8, w8, #83
	b.ne	.LBB0_37
	b	.LBB0_36
.LBB0_36:                               //   in Loop: Header=BB0_1 Depth=1
	adrp	x0, .L.str.13
	add	x0, x0, :lo12:.L.str.13
	bl	puts
	ldr	w8, [sp, #12]
	add	w8, w8, #1
	str	w8, [sp, #12]
	b	.LBB0_53
.LBB0_37:                               //   in Loop: Header=BB0_1 Depth=1
	ldrb	w8, [sp, #7]
	subs	w8, w8, #80
	b.ne	.LBB0_40
	b	.LBB0_38
.LBB0_38:                               //   in Loop: Header=BB0_1 Depth=1
	ldrb	w8, [sp, #6]
	subs	w8, w8, #82
	b.ne	.LBB0_40
	b	.LBB0_39
.LBB0_39:                               //   in Loop: Header=BB0_1 Depth=1
	adrp	x0, .L.str.12
	add	x0, x0, :lo12:.L.str.12
	bl	puts
	ldur	w8, [x29, #-12]
	add	w8, w8, #1
	stur	w8, [x29, #-12]
	b	.LBB0_52
.LBB0_40:                               //   in Loop: Header=BB0_1 Depth=1
	ldrb	w8, [sp, #7]
	subs	w8, w8, #82
	b.ne	.LBB0_43
	b	.LBB0_41
.LBB0_41:                               //   in Loop: Header=BB0_1 Depth=1
	ldrb	w8, [sp, #6]
	subs	w8, w8, #80
	b.ne	.LBB0_43
	b	.LBB0_42
.LBB0_42:                               //   in Loop: Header=BB0_1 Depth=1
	adrp	x0, .L.str.13
	add	x0, x0, :lo12:.L.str.13
	bl	puts
	ldr	w8, [sp, #12]
	add	w8, w8, #1
	str	w8, [sp, #12]
	b	.LBB0_51
.LBB0_43:                               //   in Loop: Header=BB0_1 Depth=1
	ldrb	w8, [sp, #7]
	subs	w8, w8, #82
	b.ne	.LBB0_46
	b	.LBB0_44
.LBB0_44:                               //   in Loop: Header=BB0_1 Depth=1
	ldrb	w8, [sp, #6]
	subs	w8, w8, #83
	b.ne	.LBB0_46
	b	.LBB0_45
.LBB0_45:                               //   in Loop: Header=BB0_1 Depth=1
	adrp	x0, .L.str.12
	add	x0, x0, :lo12:.L.str.12
	bl	puts
	ldur	w8, [x29, #-12]
	add	w8, w8, #1
	stur	w8, [x29, #-12]
	b	.LBB0_50
.LBB0_46:                               //   in Loop: Header=BB0_1 Depth=1
	ldrb	w8, [sp, #7]
	subs	w8, w8, #83
	b.ne	.LBB0_49
	b	.LBB0_47
.LBB0_47:                               //   in Loop: Header=BB0_1 Depth=1
	ldrb	w8, [sp, #6]
	subs	w8, w8, #82
	b.ne	.LBB0_49
	b	.LBB0_48
.LBB0_48:                               //   in Loop: Header=BB0_1 Depth=1
	adrp	x0, .L.str.13
	add	x0, x0, :lo12:.L.str.13
	bl	puts
	ldr	w8, [sp, #12]
	add	w8, w8, #1
	str	w8, [sp, #12]
	b	.LBB0_49
.LBB0_49:                               //   in Loop: Header=BB0_1 Depth=1
	b	.LBB0_50
.LBB0_50:                               //   in Loop: Header=BB0_1 Depth=1
	b	.LBB0_51
.LBB0_51:                               //   in Loop: Header=BB0_1 Depth=1
	b	.LBB0_52
.LBB0_52:                               //   in Loop: Header=BB0_1 Depth=1
	b	.LBB0_53
.LBB0_53:                               //   in Loop: Header=BB0_1 Depth=1
	b	.LBB0_54
.LBB0_54:                               //   in Loop: Header=BB0_1 Depth=1
	b	.LBB0_55
.LBB0_55:                               //   in Loop: Header=BB0_1 Depth=1
	b	.LBB0_1
.LBB0_56:
	mov	w0, wzr
	ldp	x29, x30, [sp, #32]             // 16-byte Folded Reload
	add	sp, sp, #48
	ret
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
	.cfi_endproc
                                        // -- End function
	.globl	makeRand                        // -- Begin function makeRand
	.p2align	2
	.type	makeRand,@function
makeRand:                               // @makeRand
	.cfi_startproc
// %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             // 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	wzr, [x29, #-8]
	mov	w8, #2
	stur	w8, [x29, #-12]
	mov	w8, #1
	str	w8, [sp, #16]
	mov	x0, xzr
	bl	time
                                        // kill: def $w0 killed $w0 killed $x0
	bl	srand
	str	wzr, [sp, #12]
	b	.LBB1_1
.LBB1_1:                                // =>This Inner Loop Header: Depth=1
	ldr	w8, [sp, #12]
	ldr	w9, [sp, #16]
	subs	w8, w8, w9
	b.ge	.LBB1_4
	b	.LBB1_2
.LBB1_2:                                //   in Loop: Header=BB1_1 Depth=1
	bl	rand
	ldur	w8, [x29, #-12]
	ldur	w9, [x29, #-8]
	subs	w8, w8, w9
	add	w9, w8, #1
	sdiv	w8, w0, w9
	mul	w8, w8, w9
	subs	w8, w0, w8
	ldur	w9, [x29, #-8]
	add	w8, w8, w9
	stur	w8, [x29, #-4]
	b	.LBB1_3
.LBB1_3:                                //   in Loop: Header=BB1_1 Depth=1
	ldr	w8, [sp, #12]
	add	w8, w8, #1
	str	w8, [sp, #12]
	b	.LBB1_1
.LBB1_4:
	ldur	w0, [x29, #-4]
	ldp	x29, x30, [sp, #32]             // 16-byte Folded Reload
	add	sp, sp, #48
	ret
.Lfunc_end1:
	.size	makeRand, .Lfunc_end1-makeRand
	.cfi_endproc
                                        // -- End function
	.p2align	2                               // -- Begin function toupper
	.type	toupper,@function
toupper:                                // @toupper
	.cfi_startproc
// %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             // 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	w0, [sp, #8]
	ldr	w8, [sp, #8]
	subs	w8, w8, #97
	b.lt	.LBB2_3
	b	.LBB2_1
.LBB2_1:
	ldr	w8, [sp, #8]
	subs	w8, w8, #122
	b.gt	.LBB2_3
	b	.LBB2_2
.LBB2_2:
	ldr	w0, [sp, #8]
	bl	_toupper
	stur	w0, [x29, #-4]
	b	.LBB2_4
.LBB2_3:
	ldr	w8, [sp, #8]
	stur	w8, [x29, #-4]
	b	.LBB2_4
.LBB2_4:
	ldur	w0, [x29, #-4]
	ldp	x29, x30, [sp, #16]             // 16-byte Folded Reload
	add	sp, sp, #32
	ret
.Lfunc_end2:
	.size	toupper, .Lfunc_end2-toupper
	.cfi_endproc
                                        // -- End function
	.p2align	2                               // -- Begin function _toupper
	.type	_toupper,@function
_toupper:                               // @_toupper
	.cfi_startproc
// %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	w0, [sp, #12]
	ldr	w8, [sp, #12]
	eor	w0, w8, #0x20
	add	sp, sp, #16
	ret
.Lfunc_end3:
	.size	_toupper, .Lfunc_end3-_toupper
	.cfi_endproc
                                        // -- End function
	.type	.L.str,@object                  // @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"\n| Ties = %i | Wins = %i | Losses %i | \n\n"
	.size	.L.str, 42

	.type	.L.str.1,@object                // @.str.1
.L.str.1:
	.asciz	"Your Move: (R)ock (P)aper (S)cissors\n"
	.size	.L.str.1, 38

	.type	.L.str.2,@object                // @.str.2
.L.str.2:
	.asciz	"%c"
	.size	.L.str.2, 3

	.type	.L.str.3,@object                // @.str.3
.L.str.3:
	.asciz	"\n"
	.size	.L.str.3, 2

	.type	.L.str.4,@object                // @.str.4
.L.str.4:
	.asciz	"Enter R, P, S or Q\n"
	.size	.L.str.4, 20

	.type	.L.str.5,@object                // @.str.5
.L.str.5:
	.asciz	"ROCK \n vs"
	.size	.L.str.5, 10

	.type	.L.str.6,@object                // @.str.6
.L.str.6:
	.asciz	"PAPER \n vs"
	.size	.L.str.6, 11

	.type	.L.str.7,@object                // @.str.7
.L.str.7:
	.asciz	"SCISSORS \n vs"
	.size	.L.str.7, 14

	.type	.L.str.8,@object                // @.str.8
.L.str.8:
	.asciz	"ROCK"
	.size	.L.str.8, 5

	.type	.L.str.9,@object                // @.str.9
.L.str.9:
	.asciz	"SCISSORS"
	.size	.L.str.9, 9

	.type	.L.str.10,@object               // @.str.10
.L.str.10:
	.asciz	"PAPER"
	.size	.L.str.10, 6

	.type	.L.str.11,@object               // @.str.11
.L.str.11:
	.asciz	"TIE!!!"
	.size	.L.str.11, 7

	.type	.L.str.12,@object               // @.str.12
.L.str.12:
	.asciz	"You Win!!"
	.size	.L.str.12, 10

	.type	.L.str.13,@object               // @.str.13
.L.str.13:
	.asciz	"You Lost!"
	.size	.L.str.13, 10

	.ident	"clang version 14.0.3"
	.section	".note.GNU-stack","",@progbits
