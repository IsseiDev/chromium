@ This file was created from a .asm file
@  using the ads2gas.pl script.
	.equ DO1STROUNDING, 0
@
@  Copyright (c) 2013 The WebM project authors. All Rights Reserved.
@
@  Use of this source code is governed by a BSD-style license and patent
@  grant that can be found in the LICENSE file in the root of the source
@  tree. All contributing project authors may be found in the AUTHORS
@  file in the root of the source tree.
@

    .global vpx_idct32x32_1_add_neon 
	.type vpx_idct32x32_1_add_neon, function
   .arm
   .eabi_attribute 24, 1 @Tag_ABI_align_needed
   .eabi_attribute 25, 1 @Tag_ABI_align_preserved

.text
.p2align 2

    @TODO(hkuang): put the following macros in a seperate
    @file so other idct function could also use them.
.macro    LD_16x8          src, stride
    vld1.8           {q8}, [\src], \stride
    vld1.8           {q9}, [\src], \stride
    vld1.8           {q10}, [\src], \stride
    vld1.8           {q11}, [\src], \stride
    vld1.8           {q12}, [\src], \stride
    vld1.8           {q13}, [\src], \stride
    vld1.8           {q14}, [\src], \stride
    vld1.8           {q15}, [\src], \stride
    .endm

.macro    ADD_DIFF_16x8    diff
    vqadd.u8         q8, q8, \diff
    vqadd.u8         q9, q9, \diff
    vqadd.u8         q10, q10, \diff
    vqadd.u8         q11, q11, \diff
    vqadd.u8         q12, q12, \diff
    vqadd.u8         q13, q13, \diff
    vqadd.u8         q14, q14, \diff
    vqadd.u8         q15, q15, \diff
    .endm

.macro    SUB_DIFF_16x8    diff
    vqsub.u8         q8, q8, \diff
    vqsub.u8         q9, q9, \diff
    vqsub.u8         q10, q10, \diff
    vqsub.u8         q11, q11, \diff
    vqsub.u8         q12, q12, \diff
    vqsub.u8         q13, q13, \diff
    vqsub.u8         q14, q14, \diff
    vqsub.u8         q15, q15, \diff
    .endm

.macro    ST_16x8          dst, stride
    vst1.8           {q8}, [\dst], \stride
    vst1.8           {q9}, [\dst], \stride
    vst1.8           {q10},[\dst], \stride
    vst1.8           {q11},[\dst], \stride
    vst1.8           {q12},[\dst], \stride
    vst1.8           {q13},[\dst], \stride
    vst1.8           {q14},[\dst], \stride
    vst1.8           {q15},[\dst], \stride
    .endm

@void vpx_idct32x32_1_add_neon(int16_t *input, uint8_t *dest,
@                              int dest_stride)
@
@ r0  int16_t input
@ r1  uint8_t *dest
@ r2  int dest_stride

_vpx_idct32x32_1_add_neon:
	vpx_idct32x32_1_add_neon: @ PROC
    push             {lr}
    pld              [r1]
    add              r3, r1, #16               @ r3 dest + 16 for second loop
    ldrsh            r0, [r0]

    @ generate cospi_16_64 = 11585
    mov              r12, #0x2d00
    add              r12, #0x41

    @ out = dct_const_round_shift(input[0] * cospi_16_64)
    mul              r0, r0, r12               @ input[0] * cospi_16_64
    add              r0, r0, #0x2000           @ +(1 << ((DCT_CONST_BITS) - 1))
    asr              r0, r0, #14               @ >> DCT_CONST_BITS

    @ out = dct_const_round_shift(out * cospi_16_64)
    mul              r0, r0, r12               @ out * cospi_16_64
    mov              r12, r1                   @ save dest
    add              r0, r0, #0x2000           @ +(1 << ((DCT_CONST_BITS) - 1))
    asr              r0, r0, #14               @ >> DCT_CONST_BITS

    @ a1 = ROUND_POWER_OF_TWO(out, 6)
    add              r0, r0, #32               @ + (1 <<((6) - 1))
    asrs             r0, r0, #6                @ >> 6
    bge              diff_positive_32_32

diff_negative_32_32:
    neg              r0, r0
    usat             r0, #8, r0
    vdup.u8          q0, r0
    mov              r0, #4

diff_negative_32_32_loop:
    sub              r0, #1
    LD_16x8          r1, r2
    SUB_DIFF_16x8    q0
    ST_16x8          r12, r2

    LD_16x8          r1, r2
    SUB_DIFF_16x8    q0
    ST_16x8          r12, r2
    cmp              r0, #2
    moveq            r1, r3
    moveq            r12, r3
    cmp              r0, #0
    bne              diff_negative_32_32_loop
    pop              {pc}

diff_positive_32_32:
    usat             r0, #8, r0
    vdup.u8          q0, r0
    mov              r0, #4

diff_positive_32_32_loop:
    sub              r0, #1
    LD_16x8          r1, r2
    ADD_DIFF_16x8    q0
    ST_16x8          r12, r2

    LD_16x8          r1, r2
    ADD_DIFF_16x8    q0
    ST_16x8          r12, r2
    cmp              r0, #2
    moveq            r1, r3
    moveq            r12, r3
    cmp              r0, #0
    bne              diff_positive_32_32_loop
    pop              {pc}

	.size vpx_idct32x32_1_add_neon, .-vpx_idct32x32_1_add_neon    @ ENDP             @ |vpx_idct32x32_1_add_neon|
	.section	.note.GNU-stack,"",%progbits
