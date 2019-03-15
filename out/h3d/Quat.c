﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void h3d_Quat_set(h3d__Quat r0,double r1,double r2,double r3,double r4) {
	r0->x = r1;
	r0->y = r2;
	r0->z = r3;
	r0->w = r4;
	return;
}

void h3d_Quat_identity(h3d__Quat r0) {
	double r2;
	int r1;
	r1 = 0;
	r2 = (double)r1;
	r0->z = r2;
	r0->y = r2;
	r0->x = r2;
	r1 = 1;
	r2 = (double)r1;
	r0->w = r2;
	return;
}

double h3d_Quat_lengthSq(h3d__Quat r0) {
	double r1, r2, r3;
	r1 = r0->x;
	r2 = r0->x;
	r1 = r1 * r2;
	r2 = r0->y;
	r3 = r0->y;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r2 = r0->z;
	r3 = r0->z;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r2 = r0->w;
	r3 = r0->w;
	r2 = r2 * r3;
	r1 = r1 + r2;
	return r1;
}

double h3d_Quat_length(h3d__Quat r0) {
	double r1, r2, r3;
	r1 = r0->x;
	r2 = r0->x;
	r1 = r1 * r2;
	r2 = r0->y;
	r3 = r0->y;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r2 = r0->z;
	r3 = r0->z;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r2 = r0->w;
	r3 = r0->w;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r1 = hl_math_sqrt(r1);
	return r1;
}

void h3d_Quat_load(h3d__Quat r0,h3d__Quat r1) {
	double r2;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->x;
	r0->x = r2;
	r2 = r1->y;
	r0->y = r2;
	r2 = r1->z;
	r0->z = r2;
	r2 = r1->w;
	r0->w = r2;
	return;
}

h3d__Quat h3d_Quat_clone(h3d__Quat r0) {
	double r2, r4, r6, r8;
	h3d__Quat r1;
	double *r3, *r5, *r7, *r9;
	r1 = (h3d__Quat)hl_alloc_obj(h3d__Quat__val);
	r2 = r0->x;
	r3 = &r2;
	r4 = r0->y;
	r5 = &r4;
	r6 = r0->z;
	r7 = &r6;
	r8 = r0->w;
	r9 = &r8;
	h3d_Quat_new(r1,r3,r5,r7,r9);
	return r1;
}

void h3d_Quat_initMoveTo(h3d__Quat r0,h3d__Vector r1,h3d__Vector r2) {
	double r3, r4, r6, r7, r8;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->x;
	if( r2 == NULL ) hl_null_access();
	r4 = r2->x;
	r3 = r3 + r4;
	r4 = r1->y;
	r6 = r2->y;
	r4 = r4 + r6;
	r6 = r1->z;
	r7 = r2->z;
	r6 = r6 + r7;
	r7 = r3 * r3;
	r8 = r4 * r4;
	r7 = r7 + r8;
	r8 = r6 * r6;
	r7 = r7 + r8;
	r7 = hl_math_sqrt(r7);
	r7 = r1->y;
	r7 = r7 * r6;
	r8 = r1->z;
	r8 = r8 * r4;
	r7 = r7 - r8;
	r0->x = r7;
	r7 = r1->z;
	r7 = r7 * r3;
	r8 = r1->x;
	r8 = r8 * r6;
	r7 = r7 - r8;
	r0->y = r7;
	r7 = r1->x;
	r7 = r7 * r4;
	r8 = r1->y;
	r8 = r8 * r3;
	r7 = r7 - r8;
	r0->z = r7;
	r7 = r1->x;
	r7 = r7 * r3;
	r8 = r1->y;
	r8 = r8 * r4;
	r7 = r7 + r8;
	r8 = r1->z;
	r8 = r8 * r6;
	r7 = r7 + r8;
	r0->w = r7;
	h3d_Quat_normalize(r0);
	return;
}

void h3d_Quat_initDirection(h3d__Quat r0,h3d__Vector r1) {
	double r2, r4, r5, r6, r7, r8, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26;
	int r9;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->x;
	r4 = r1->y;
	r5 = r1->z;
	r6 = r2 * r2;
	r7 = r4 * r4;
	r6 = r6 + r7;
	r7 = r5 * r5;
	r6 = r6 + r7;
	r8 = 1e-010;
	if( !(r6 < r8) ) goto label$1503$15;
	r9 = 0;
	r7 = (double)r9;
	r6 = r7;
	goto label$1503$19;
	label$1503$15:
	r7 = 1.;
	r8 = hl_math_sqrt(r6);
	r7 = r7 / r8;
	r6 = r7;
	label$1503$19:
	r7 = r2 * r6;
	r8 = r4 * r6;
	r10 = r5 * r6;
	r11 = -r8;
	r9 = 0;
	r12 = (double)r9;
	r13 = r11 * r11;
	r14 = r7 * r7;
	r13 = r13 + r14;
	r14 = r12 * r12;
	r13 = r13 + r14;
	r15 = 1e-010;
	if( !(r13 < r15) ) goto label$1503$36;
	r9 = 0;
	r14 = (double)r9;
	r13 = r14;
	goto label$1503$40;
	label$1503$36:
	r14 = 1.;
	r15 = hl_math_sqrt(r13);
	r14 = r14 / r15;
	r13 = r14;
	label$1503$40:
	r14 = r11 * r13;
	r15 = r7 * r13;
	r16 = r12 * r13;
	r17 = r14;
	r18 = r15;
	r19 = r16;
	r20 = r14 * r14;
	r21 = r15 * r15;
	r20 = r20 + r21;
	r21 = r16 * r16;
	r20 = r20 + r21;
	r21 = 1e-010;
	if( !(r20 < r21) ) goto label$1503$56;
	r17 = r8;
	r18 = r10;
	r19 = r7;
	label$1503$56:
	r20 = r8 * r19;
	r21 = r10 * r18;
	r20 = r20 - r21;
	r21 = r10 * r17;
	r22 = r7 * r19;
	r21 = r21 - r22;
	r22 = r7 * r18;
	r23 = r8 * r17;
	r22 = r22 - r23;
	r23 = r7 + r18;
	r23 = r23 + r22;
	r9 = 0;
	r25 = (double)r9;
	if( !(r25 < r23) ) goto label$1503$92;
	r25 = 1.;
	r24 = r23 + r25;
	r24 = hl_math_sqrt(r24);
	r9 = 2;
	r25 = (double)r9;
	r24 = r24 * r25;
	r9 = 1;
	r25 = (double)r9;
	r25 = r25 / r24;
	r26 = r19 - r21;
	r26 = r26 * r25;
	r0->x = r26;
	r26 = r20 - r10;
	r26 = r26 * r25;
	r0->y = r26;
	r26 = r8 - r17;
	r26 = r26 * r25;
	r0->z = r26;
	r26 = 0.25;
	r26 = r26 * r24;
	r0->w = r26;
	goto label$1503$166;
	label$1503$92:
	if( !(r18 < r7) ) goto label$1503$118;
	if( !(r22 < r7) ) goto label$1503$118;
	r24 = 1.;
	r24 = r24 + r7;
	r24 = r24 - r18;
	r24 = r24 - r22;
	r24 = hl_math_sqrt(r24);
	r9 = 2;
	r25 = (double)r9;
	r24 = r24 * r25;
	r9 = 1;
	r25 = (double)r9;
	r25 = r25 / r24;
	r26 = 0.25;
	r26 = r26 * r24;
	r0->x = r26;
	r26 = r17 + r8;
	r26 = r26 * r25;
	r0->y = r26;
	r26 = r20 + r10;
	r26 = r26 * r25;
	r0->z = r26;
	r26 = r19 - r21;
	r26 = r26 * r25;
	r0->w = r26;
	goto label$1503$166;
	label$1503$118:
	if( !(r22 < r18) ) goto label$1503$143;
	r24 = 1.;
	r24 = r24 + r18;
	r24 = r24 - r7;
	r24 = r24 - r22;
	r24 = hl_math_sqrt(r24);
	r9 = 2;
	r25 = (double)r9;
	r24 = r24 * r25;
	r9 = 1;
	r25 = (double)r9;
	r25 = r25 / r24;
	r26 = r17 + r8;
	r26 = r26 * r25;
	r0->x = r26;
	r26 = 0.25;
	r26 = r26 * r24;
	r0->y = r26;
	r26 = r21 + r19;
	r26 = r26 * r25;
	r0->z = r26;
	r26 = r20 - r10;
	r26 = r26 * r25;
	r0->w = r26;
	goto label$1503$166;
	label$1503$143:
	r24 = 1.;
	r24 = r24 + r22;
	r24 = r24 - r7;
	r24 = r24 - r18;
	r24 = hl_math_sqrt(r24);
	r9 = 2;
	r25 = (double)r9;
	r24 = r24 * r25;
	r9 = 1;
	r25 = (double)r9;
	r25 = r25 / r24;
	r26 = r20 + r10;
	r26 = r26 * r25;
	r0->x = r26;
	r26 = r21 + r19;
	r26 = r26 * r25;
	r0->y = r26;
	r26 = 0.25;
	r26 = r26 * r24;
	r0->z = r26;
	r26 = r8 - r17;
	r26 = r26 * r25;
	r0->w = r26;
	label$1503$166:
	return;
}

void h3d_Quat_initRotateAxis(h3d__Quat r0,double r1,double r2,double r3,double r4) {
	double r5, r7, r9, r10, r11;
	int r6;
	r6 = 2;
	r7 = (double)r6;
	r5 = r4 / r7;
	r5 = hl_math_sin(r5);
	r6 = 2;
	r9 = (double)r6;
	r7 = r4 / r9;
	r7 = hl_math_cos(r7);
	r9 = r1 * r5;
	r0->x = r9;
	r9 = r2 * r5;
	r0->y = r9;
	r9 = r3 * r5;
	r0->z = r9;
	r10 = r1 * r1;
	r11 = r2 * r2;
	r10 = r10 + r11;
	r11 = r3 * r3;
	r10 = r10 + r11;
	r10 = hl_math_sqrt(r10);
	r9 = r7 * r10;
	r0->w = r9;
	h3d_Quat_normalize(r0);
	return;
}

void h3d_Quat_initRotateMatrix(h3d__Quat r0,h3d__Matrix r1) {
	double r2, r3, r6, r7, r8;
	int r5;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->_11;
	r3 = r1->_22;
	r2 = r2 + r3;
	r3 = r1->_33;
	r2 = r2 + r3;
	r5 = 0;
	r6 = (double)r5;
	if( !(r6 < r2) ) goto label$1505$37;
	r6 = 1.;
	r3 = r2 + r6;
	r3 = hl_math_sqrt(r3);
	r5 = 2;
	r6 = (double)r5;
	r3 = r3 * r6;
	r5 = 1;
	r6 = (double)r5;
	r6 = r6 / r3;
	r7 = r1->_23;
	r8 = r1->_32;
	r7 = r7 - r8;
	r7 = r7 * r6;
	r0->x = r7;
	r7 = r1->_31;
	r8 = r1->_13;
	r7 = r7 - r8;
	r7 = r7 * r6;
	r0->y = r7;
	r7 = r1->_12;
	r8 = r1->_21;
	r7 = r7 - r8;
	r7 = r7 * r6;
	r0->z = r7;
	r7 = 0.25;
	r7 = r7 * r3;
	r0->w = r7;
	goto label$1505$144;
	label$1505$37:
	r3 = r1->_11;
	r6 = r1->_22;
	if( !(r6 < r3) ) goto label$1505$76;
	r3 = r1->_11;
	r6 = r1->_33;
	if( !(r6 < r3) ) goto label$1505$76;
	r3 = 1.;
	r6 = r1->_11;
	r3 = r3 + r6;
	r6 = r1->_22;
	r3 = r3 - r6;
	r6 = r1->_33;
	r3 = r3 - r6;
	r3 = hl_math_sqrt(r3);
	r5 = 2;
	r6 = (double)r5;
	r3 = r3 * r6;
	r5 = 1;
	r6 = (double)r5;
	r6 = r6 / r3;
	r7 = 0.25;
	r7 = r7 * r3;
	r0->x = r7;
	r7 = r1->_21;
	r8 = r1->_12;
	r7 = r7 + r8;
	r7 = r7 * r6;
	r0->y = r7;
	r7 = r1->_31;
	r8 = r1->_13;
	r7 = r7 + r8;
	r7 = r7 * r6;
	r0->z = r7;
	r7 = r1->_23;
	r8 = r1->_32;
	r7 = r7 - r8;
	r7 = r7 * r6;
	r0->w = r7;
	goto label$1505$144;
	label$1505$76:
	r3 = r1->_22;
	r6 = r1->_33;
	if( !(r6 < r3) ) goto label$1505$112;
	r3 = 1.;
	r6 = r1->_22;
	r3 = r3 + r6;
	r6 = r1->_11;
	r3 = r3 - r6;
	r6 = r1->_33;
	r3 = r3 - r6;
	r3 = hl_math_sqrt(r3);
	r5 = 2;
	r6 = (double)r5;
	r3 = r3 * r6;
	r5 = 1;
	r6 = (double)r5;
	r6 = r6 / r3;
	r7 = r1->_21;
	r8 = r1->_12;
	r7 = r7 + r8;
	r7 = r7 * r6;
	r0->x = r7;
	r7 = 0.25;
	r7 = r7 * r3;
	r0->y = r7;
	r7 = r1->_32;
	r8 = r1->_23;
	r7 = r7 + r8;
	r7 = r7 * r6;
	r0->z = r7;
	r7 = r1->_31;
	r8 = r1->_13;
	r7 = r7 - r8;
	r7 = r7 * r6;
	r0->w = r7;
	goto label$1505$144;
	label$1505$112:
	r3 = 1.;
	r6 = r1->_33;
	r3 = r3 + r6;
	r6 = r1->_11;
	r3 = r3 - r6;
	r6 = r1->_22;
	r3 = r3 - r6;
	r3 = hl_math_sqrt(r3);
	r5 = 2;
	r6 = (double)r5;
	r3 = r3 * r6;
	r5 = 1;
	r6 = (double)r5;
	r6 = r6 / r3;
	r7 = r1->_31;
	r8 = r1->_13;
	r7 = r7 + r8;
	r7 = r7 * r6;
	r0->x = r7;
	r7 = r1->_32;
	r8 = r1->_23;
	r7 = r7 + r8;
	r7 = r7 * r6;
	r0->y = r7;
	r7 = 0.25;
	r7 = r7 * r3;
	r0->z = r7;
	r7 = r1->_12;
	r8 = r1->_21;
	r7 = r7 - r8;
	r7 = r7 * r6;
	r0->w = r7;
	label$1505$144:
	return;
}

void h3d_Quat_normalize(h3d__Quat r0) {
	double r1, r2, r3;
	int r5;
	r1 = r0->x;
	r2 = r0->x;
	r1 = r1 * r2;
	r2 = r0->y;
	r3 = r0->y;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r2 = r0->z;
	r3 = r0->z;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r2 = r0->w;
	r3 = r0->w;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r3 = 1e-010;
	if( !(r1 < r3) ) goto label$1506$26;
	r5 = 0;
	r2 = (double)r5;
	r0->z = r2;
	r0->y = r2;
	r0->x = r2;
	r5 = 1;
	r2 = (double)r5;
	r0->w = r2;
	goto label$1506$41;
	label$1506$26:
	r2 = 1.;
	r3 = hl_math_sqrt(r1);
	r2 = r2 / r3;
	r3 = r0->x;
	r3 = r3 * r2;
	r0->x = r3;
	r3 = r0->y;
	r3 = r3 * r2;
	r0->y = r3;
	r3 = r0->z;
	r3 = r3 * r2;
	r0->z = r3;
	r3 = r0->w;
	r3 = r3 * r2;
	r0->w = r3;
	label$1506$41:
	return;
}

void h3d_Quat_initRotation(h3d__Quat r0,double r1,double r2,double r3) {
	double r4, r5, r7, r8, r9, r10, r11, r12, r13, r14;
	r5 = 0.5;
	r4 = r1 * r5;
	r4 = hl_math_sin(r4);
	r7 = 0.5;
	r5 = r1 * r7;
	r5 = hl_math_cos(r5);
	r8 = 0.5;
	r7 = r2 * r8;
	r7 = hl_math_sin(r7);
	r9 = 0.5;
	r8 = r2 * r9;
	r8 = hl_math_cos(r8);
	r10 = 0.5;
	r9 = r3 * r10;
	r9 = hl_math_sin(r9);
	r11 = 0.5;
	r10 = r3 * r11;
	r10 = hl_math_cos(r10);
	r11 = r8 * r10;
	r12 = r7 * r9;
	r13 = r4 * r11;
	r14 = r5 * r12;
	r13 = r13 - r14;
	r0->x = r13;
	r13 = r5 * r7;
	r13 = r13 * r10;
	r14 = r4 * r8;
	r14 = r14 * r9;
	r13 = r13 + r14;
	r0->y = r13;
	r13 = r5 * r8;
	r13 = r13 * r9;
	r14 = r4 * r7;
	r14 = r14 * r10;
	r13 = r13 - r14;
	r0->z = r13;
	r13 = r5 * r11;
	r14 = r4 * r12;
	r13 = r13 + r14;
	r0->w = r13;
	return;
}

void h3d_Quat_multiply(h3d__Quat r0,h3d__Quat r1,h3d__Quat r2) {
	double r3, r4, r5, r7, r8, r9;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->w;
	if( r2 == NULL ) hl_null_access();
	r4 = r2->y;
	r3 = r3 * r4;
	r4 = r1->x;
	r5 = r2->z;
	r4 = r4 * r5;
	r3 = r3 - r4;
	r4 = r1->y;
	r5 = r2->w;
	r4 = r4 * r5;
	r3 = r3 + r4;
	r4 = r1->z;
	r5 = r2->x;
	r4 = r4 * r5;
	r3 = r3 + r4;
	r4 = r1->w;
	r5 = r2->z;
	r4 = r4 * r5;
	r5 = r1->x;
	r7 = r2->y;
	r5 = r5 * r7;
	r4 = r4 + r5;
	r5 = r1->y;
	r7 = r2->x;
	r5 = r5 * r7;
	r4 = r4 - r5;
	r5 = r1->z;
	r7 = r2->w;
	r5 = r5 * r7;
	r4 = r4 + r5;
	r5 = r1->w;
	r7 = r2->w;
	r5 = r5 * r7;
	r7 = r1->x;
	r8 = r2->x;
	r7 = r7 * r8;
	r5 = r5 - r7;
	r7 = r1->y;
	r8 = r2->y;
	r7 = r7 * r8;
	r5 = r5 - r7;
	r7 = r1->z;
	r8 = r2->z;
	r7 = r7 * r8;
	r5 = r5 - r7;
	r7 = r1->x;
	r8 = r2->w;
	r7 = r7 * r8;
	r8 = r1->w;
	r9 = r2->x;
	r8 = r8 * r9;
	r7 = r7 + r8;
	r8 = r1->y;
	r9 = r2->z;
	r8 = r8 * r9;
	r7 = r7 + r8;
	r8 = r1->z;
	r9 = r2->y;
	r8 = r8 * r9;
	r7 = r7 - r8;
	r0->x = r7;
	r0->y = r3;
	r0->z = r4;
	r0->w = r5;
	return;
}

h3d__Vector h3d_Quat_toEuler(h3d__Quat r0) {
	h3d__Vector r1;
	h3d__Matrix r2;
	r2 = NULL;
	r2 = h3d_Quat_toMatrix(r0,r2);
	if( r2 == NULL ) hl_null_access();
	r1 = h3d_Matrix_getEulerAngles(r2);
	return r1;
}

void h3d_Quat_lerp(h3d__Quat r0,h3d__Quat r1,h3d__Quat r2,double r3,bool* r4) {
	bool r5;
	double r7, r8, r9;
	int r10;
	if( r4 ) goto label$1510$3;
	r5 = false;
	goto label$1510$4;
	label$1510$3:
	r5 = *r4;
	label$1510$4:
	if( !r5 ) goto label$1510$30;
	if( r1 == NULL ) hl_null_access();
	r7 = r1->x;
	if( r2 == NULL ) hl_null_access();
	r8 = r2->x;
	r7 = r7 * r8;
	r8 = r1->y;
	r9 = r2->y;
	r8 = r8 * r9;
	r7 = r7 + r8;
	r8 = r1->z;
	r9 = r2->z;
	r8 = r8 * r9;
	r7 = r7 + r8;
	r8 = r1->w;
	r9 = r2->w;
	r8 = r8 * r9;
	r7 = r7 + r8;
	r10 = 0;
	r8 = (double)r10;
	if( !(r7 < r8) ) goto label$1510$30;
	r10 = 1;
	r9 = (double)r10;
	r8 = r3 - r9;
	r7 = r8;
	goto label$1510$34;
	label$1510$30:
	r10 = 1;
	r8 = (double)r10;
	r8 = r8 - r3;
	r7 = r8;
	label$1510$34:
	if( r1 == NULL ) hl_null_access();
	r8 = r1->x;
	r8 = r8 * r3;
	if( r2 == NULL ) hl_null_access();
	r9 = r2->x;
	r9 = r9 * r7;
	r8 = r8 + r9;
	r0->x = r8;
	r8 = r1->y;
	r8 = r8 * r3;
	r9 = r2->y;
	r9 = r9 * r7;
	r8 = r8 + r9;
	r0->y = r8;
	r8 = r1->z;
	r8 = r8 * r3;
	r9 = r2->z;
	r9 = r9 * r7;
	r8 = r8 + r9;
	r0->z = r8;
	r8 = r1->w;
	r8 = r8 * r3;
	r9 = r2->w;
	r9 = r9 * r7;
	r8 = r8 + r9;
	r0->w = r8;
	return;
}

void h3d_Quat_slerp(h3d__Quat r0,h3d__Quat r1,h3d__Quat r2,double r3) {
	double r4, r5, r6, r9, r10, r11, r12;
	int r8;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->x;
	if( r2 == NULL ) hl_null_access();
	r5 = r2->x;
	r4 = r4 * r5;
	r5 = r1->y;
	r6 = r2->y;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r5 = r1->z;
	r6 = r2->z;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r5 = r1->w;
	r6 = r2->w;
	r5 = r5 * r6;
	r4 = r4 + r5;
	r8 = 0;
	r6 = (double)r8;
	if( !(r4 < r6) ) goto label$1511$22;
	r5 = -r4;
	goto label$1511$23;
	label$1511$22:
	r5 = r4;
	label$1511$23:
	r8 = 1;
	r6 = (double)r8;
	if( !(r5 >= r6) ) goto label$1511$35;
	r5 = r1->x;
	r0->x = r5;
	r5 = r1->y;
	r0->y = r5;
	r5 = r1->z;
	r0->z = r5;
	r5 = r1->w;
	r0->w = r5;
	return;
	label$1511$35:
	r5 = hl_math_acos(r4);
	r6 = 1.;
	r8 = 1;
	r9 = (double)r8;
	r10 = r4 * r4;
	r9 = r9 - r10;
	r9 = hl_math_sqrt(r9);
	r6 = r6 / r9;
	r8 = 0;
	r10 = (double)r8;
	if( !(r6 < r10) ) goto label$1511$48;
	r9 = -r6;
	goto label$1511$49;
	label$1511$48:
	r9 = r6;
	label$1511$49:
	r10 = 1000.;
	if( !(r10 < r9) ) goto label$1511$103;
	r9 = r1->x;
	r10 = r2->x;
	r9 = r9 * r10;
	r10 = r1->y;
	r11 = r2->y;
	r10 = r10 * r11;
	r9 = r9 + r10;
	r10 = r1->z;
	r11 = r2->z;
	r10 = r10 * r11;
	r9 = r9 + r10;
	r10 = r1->w;
	r11 = r2->w;
	r10 = r10 * r11;
	r9 = r9 + r10;
	r8 = 0;
	r10 = (double)r8;
	if( !(r9 < r10) ) goto label$1511$72;
	r10 = -0.5;
	r9 = r10;
	goto label$1511$74;
	label$1511$72:
	r10 = 0.5;
	r9 = r10;
	label$1511$74:
	r10 = r1->x;
	r11 = 0.5;
	r10 = r10 * r11;
	r11 = r2->x;
	r11 = r11 * r9;
	r10 = r10 + r11;
	r0->x = r10;
	r10 = r1->y;
	r11 = 0.5;
	r10 = r10 * r11;
	r11 = r2->y;
	r11 = r11 * r9;
	r10 = r10 + r11;
	r0->y = r10;
	r10 = r1->z;
	r11 = 0.5;
	r10 = r10 * r11;
	r11 = r2->z;
	r11 = r11 * r9;
	r10 = r10 + r11;
	r0->z = r10;
	r10 = r1->w;
	r11 = 0.5;
	r10 = r10 * r11;
	r11 = r2->w;
	r11 = r11 * r9;
	r10 = r10 + r11;
	r0->w = r10;
	return;
	label$1511$103:
	r8 = 1;
	r9 = (double)r8;
	r9 = r9 - r3;
	r9 = r9 * r5;
	r9 = hl_math_sin(r9);
	r9 = r9 * r6;
	r10 = r3 * r5;
	r10 = hl_math_sin(r10);
	r10 = r10 * r6;
	r8 = 0;
	r12 = (double)r8;
	if( !(r4 < r12) ) goto label$1511$117;
	r8 = -1;
	goto label$1511$118;
	label$1511$117:
	r8 = 1;
	label$1511$118:
	r11 = (double)r8;
	r10 = r10 * r11;
	r11 = r1->x;
	r11 = r11 * r9;
	r12 = r2->x;
	r12 = r12 * r10;
	r11 = r11 + r12;
	r0->x = r11;
	r11 = r1->y;
	r11 = r11 * r9;
	r12 = r2->y;
	r12 = r12 * r10;
	r11 = r11 + r12;
	r0->y = r11;
	r11 = r1->z;
	r11 = r11 * r9;
	r12 = r2->z;
	r12 = r12 * r10;
	r11 = r11 + r12;
	r0->z = r11;
	r11 = r1->w;
	r11 = r11 * r9;
	r12 = r2->w;
	r12 = r12 * r10;
	r11 = r11 + r12;
	r0->w = r11;
	return;
}

void h3d_Quat_conjugate(h3d__Quat r0) {
	double r1;
	r1 = r0->x;
	r1 = -r1;
	r0->x = r1;
	r1 = r0->y;
	r1 = -r1;
	r0->y = r1;
	r1 = r0->z;
	r1 = -r1;
	r0->z = r1;
	return;
}

void h3d_Quat_negate(h3d__Quat r0) {
	double r1;
	r1 = r0->x;
	r1 = -r1;
	r0->x = r1;
	r1 = r0->y;
	r1 = -r1;
	r0->y = r1;
	r1 = r0->z;
	r1 = -r1;
	r0->z = r1;
	r1 = r0->w;
	r1 = -r1;
	r0->w = r1;
	return;
}

double h3d_Quat_dot(h3d__Quat r0,h3d__Quat r1) {
	double r2, r3, r4;
	r2 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->x;
	r2 = r2 * r3;
	r3 = r0->y;
	r4 = r1->y;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->z;
	r4 = r1->z;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->w;
	r4 = r1->w;
	r3 = r3 * r4;
	r2 = r2 + r3;
	return r2;
}

h3d__Vector h3d_Quat_getDirection(h3d__Quat r0) {
	h3d__Vector r1;
	double r2, r4, r5, r6, r7, r10;
	double *r8, *r9, *r11, *r12;
	int r3;
	r1 = (h3d__Vector)hl_alloc_obj(h3d__Vector__val);
	r3 = 1;
	r2 = (double)r3;
	r3 = 2;
	r4 = (double)r3;
	r5 = r0->y;
	r6 = r0->y;
	r5 = r5 * r6;
	r6 = r0->z;
	r7 = r0->z;
	r6 = r6 * r7;
	r5 = r5 + r6;
	r4 = r4 * r5;
	r2 = r2 - r4;
	r8 = &r2;
	r3 = 2;
	r4 = (double)r3;
	r5 = r0->x;
	r6 = r0->y;
	r5 = r5 * r6;
	r6 = r0->z;
	r7 = r0->w;
	r6 = r6 * r7;
	r5 = r5 - r6;
	r4 = r4 * r5;
	r9 = &r4;
	r3 = 2;
	r5 = (double)r3;
	r6 = r0->x;
	r7 = r0->z;
	r6 = r6 * r7;
	r7 = r0->y;
	r10 = r0->w;
	r7 = r7 * r10;
	r6 = r6 + r7;
	r5 = r5 * r6;
	r11 = &r5;
	r12 = NULL;
	h3d_Vector_new(r1,r8,r9,r11,r12);
	return r1;
}

h3d__Matrix h3d_Quat_toMatrix(h3d__Quat r0,h3d__Matrix r1) {
	double r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r15, r16;
	int r14;
	h3d__Matrix r3;
	if( r1 ) goto label$1516$4;
	r3 = (h3d__Matrix)hl_alloc_obj(h3d__Matrix__val);
	h3d_Matrix_new(r3);
	r1 = r3;
	label$1516$4:
	r4 = r0->x;
	r5 = r0->x;
	r4 = r4 * r5;
	r5 = r0->x;
	r6 = r0->y;
	r5 = r5 * r6;
	r6 = r0->x;
	r7 = r0->z;
	r6 = r6 * r7;
	r7 = r0->x;
	r8 = r0->w;
	r7 = r7 * r8;
	r8 = r0->y;
	r9 = r0->y;
	r8 = r8 * r9;
	r9 = r0->y;
	r10 = r0->z;
	r9 = r9 * r10;
	r10 = r0->y;
	r11 = r0->w;
	r10 = r10 * r11;
	r11 = r0->z;
	r12 = r0->z;
	r11 = r11 * r12;
	r12 = r0->z;
	r13 = r0->w;
	r12 = r12 * r13;
	if( r1 == NULL ) hl_null_access();
	r14 = 1;
	r13 = (double)r14;
	r14 = 2;
	r15 = (double)r14;
	r16 = r8 + r11;
	r15 = r15 * r16;
	r13 = r13 - r15;
	r1->_11 = r13;
	r14 = 2;
	r13 = (double)r14;
	r15 = r5 + r12;
	r13 = r13 * r15;
	r1->_12 = r13;
	r14 = 2;
	r13 = (double)r14;
	r15 = r6 - r10;
	r13 = r13 * r15;
	r1->_13 = r13;
	r14 = 0;
	r13 = (double)r14;
	r1->_14 = r13;
	r14 = 2;
	r13 = (double)r14;
	r15 = r5 - r12;
	r13 = r13 * r15;
	r1->_21 = r13;
	r14 = 1;
	r13 = (double)r14;
	r14 = 2;
	r15 = (double)r14;
	r16 = r4 + r11;
	r15 = r15 * r16;
	r13 = r13 - r15;
	r1->_22 = r13;
	r14 = 2;
	r13 = (double)r14;
	r15 = r9 + r7;
	r13 = r13 * r15;
	r1->_23 = r13;
	r14 = 0;
	r13 = (double)r14;
	r1->_24 = r13;
	r14 = 2;
	r13 = (double)r14;
	r15 = r6 + r10;
	r13 = r13 * r15;
	r1->_31 = r13;
	r14 = 2;
	r13 = (double)r14;
	r15 = r9 - r7;
	r13 = r13 * r15;
	r1->_32 = r13;
	r14 = 1;
	r13 = (double)r14;
	r14 = 2;
	r15 = (double)r14;
	r16 = r4 + r8;
	r15 = r15 * r16;
	r13 = r13 - r15;
	r1->_33 = r13;
	r14 = 0;
	r13 = (double)r14;
	r1->_34 = r13;
	r14 = 0;
	r13 = (double)r14;
	r1->_41 = r13;
	r14 = 0;
	r13 = (double)r14;
	r1->_42 = r13;
	r14 = 0;
	r13 = (double)r14;
	r1->_43 = r13;
	r14 = 1;
	r13 = (double)r14;
	r1->_44 = r13;
	return r1;
}

String h3d_Quat_toString(h3d__Quat r0) {
	String r1, r6;
	double r2;
	int *r4;
	vbyte *r5;
	int r3;
	r1 = (String)global$445;
	r2 = r0->x;
	r2 = hxd_Math_fmt(r2);
	r4 = &r3;
	r5 = hl_ftos(r2,r4);
	r6 = String___alloc__(r5,r3);
	r1 = String___add__(r1,r6);
	r6 = (String)global$438;
	r1 = String___add__(r1,r6);
	r2 = r0->y;
	r2 = hxd_Math_fmt(r2);
	r4 = &r3;
	r5 = hl_ftos(r2,r4);
	r6 = String___alloc__(r5,r3);
	r1 = String___add__(r1,r6);
	r6 = (String)global$438;
	r1 = String___add__(r1,r6);
	r2 = r0->z;
	r2 = hxd_Math_fmt(r2);
	r4 = &r3;
	r5 = hl_ftos(r2,r4);
	r6 = String___alloc__(r5,r3);
	r1 = String___add__(r1,r6);
	r6 = (String)global$438;
	r1 = String___add__(r1,r6);
	r2 = r0->w;
	r2 = hxd_Math_fmt(r2);
	r4 = &r3;
	r5 = hl_ftos(r2,r4);
	r6 = String___alloc__(r5,r3);
	r1 = String___add__(r1,r6);
	r6 = (String)global$446;
	r1 = String___add__(r1,r6);
	return r1;
}

vbyte* h3d_Quat___string(h3d__Quat r0) {
	String r2;
	vbyte *r1;
	r2 = h3d_Quat_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

void h3d_Quat_new(h3d__Quat r0,double* r1,double* r2,double* r3,double* r4) {
	double r5, r6, r7, r8;
	if( r1 ) goto label$1519$3;
	r5 = 0.;
	goto label$1519$4;
	label$1519$3:
	r5 = *r1;
	label$1519$4:
	if( r2 ) goto label$1519$7;
	r6 = 0.;
	goto label$1519$8;
	label$1519$7:
	r6 = *r2;
	label$1519$8:
	if( r3 ) goto label$1519$11;
	r7 = 0.;
	goto label$1519$12;
	label$1519$11:
	r7 = *r3;
	label$1519$12:
	if( r4 ) goto label$1519$15;
	r8 = 1.;
	goto label$1519$16;
	label$1519$15:
	r8 = *r4;
	label$1519$16:
	r0->x = r5;
	r0->y = r6;
	r0->z = r7;
	r0->w = r8;
	return;
}
