﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

h3d__Matrix h3d_anim_LinearFrame_toMatrix(h3d__anim__LinearFrame r0) {
	double r5, r7, r9, r11, r13, r14, r15, r16, r17, r18;
	h3d__Quat r4;
	double *r6, *r8, *r10, *r12;
	h3d__Matrix r1, r3;
	r1 = (h3d__Matrix)hl_alloc_obj(h3d__Matrix__val);
	h3d_Matrix_new(r1);
	r4 = (h3d__Quat)hl_alloc_obj(h3d__Quat__val);
	r5 = r0->qx;
	r6 = &r5;
	r7 = r0->qy;
	r8 = &r7;
	r9 = r0->qz;
	r10 = &r9;
	r11 = r0->qw;
	r12 = &r11;
	h3d_Quat_new(r4,r6,r8,r10,r12);
	r3 = h3d_Quat_toMatrix(r4,r1);
	r13 = r0->sx;
	r6 = &r13;
	r14 = r0->sy;
	r8 = &r14;
	r15 = r0->sz;
	r10 = &r15;
	h3d_Matrix_prependScale(r1,r6,r8,r10);
	r16 = r0->tx;
	r6 = &r16;
	r17 = r0->ty;
	r8 = &r17;
	r18 = r0->tz;
	r10 = &r18;
	h3d_Matrix_translate(r1,r6,r8,r10);
	return r1;
}

void h3d_anim_LinearFrame_new(h3d__anim__LinearFrame r0) {
	return;
}

