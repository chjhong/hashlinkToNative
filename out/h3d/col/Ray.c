﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

h3d__col__Ray h3d_col_Ray_clone(h3d__col__Ray r0) {
	h3d__col__Ray r1;
	double r3;
	r1 = (h3d__col__Ray)hl_alloc_obj(h3d__col__Ray__val);
	h3d_col_Ray_new(r1);
	r3 = r0->px;
	r1->px = r3;
	r3 = r0->py;
	r1->py = r3;
	r3 = r0->pz;
	r1->pz = r3;
	r3 = r0->lx;
	r1->lx = r3;
	r3 = r0->ly;
	r1->ly = r3;
	r3 = r0->lz;
	r1->lz = r3;
	return r1;
}

void h3d_col_Ray_load(h3d__col__Ray r0,h3d__col__Ray r1) {
	double r2;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->px;
	r0->px = r2;
	r2 = r1->py;
	r0->py = r2;
	r2 = r1->pz;
	r0->pz = r2;
	r2 = r1->lx;
	r0->lx = r2;
	r2 = r1->ly;
	r0->ly = r2;
	r2 = r1->lz;
	r0->lz = r2;
	return;
}

void h3d_col_Ray_normalize(h3d__col__Ray r0) {
	double r1, r2, r3;
	int r5;
	r1 = r0->lx;
	r2 = r0->lx;
	r1 = r1 * r2;
	r2 = r0->ly;
	r3 = r0->ly;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r2 = r0->lz;
	r3 = r0->lz;
	r2 = r2 * r3;
	r1 = r1 + r2;
	r3 = 1.;
	if( r1 != r3 ) goto label$1395$14;
	return;
	label$1395$14:
	r3 = 1e-010;
	if( !(r1 < r3) ) goto label$1395$20;
	r5 = 0;
	r2 = (double)r5;
	r1 = r2;
	goto label$1395$24;
	label$1395$20:
	r2 = 1.;
	r3 = hl_math_sqrt(r1);
	r2 = r2 / r3;
	r1 = r2;
	label$1395$24:
	r2 = r0->lx;
	r2 = r2 * r1;
	r0->lx = r2;
	r2 = r0->ly;
	r2 = r2 * r1;
	r0->ly = r2;
	r2 = r0->lz;
	r2 = r2 * r1;
	r0->lz = r2;
	return;
}

void h3d_col_Ray_transform(h3d__col__Ray r0,h3d__Matrix r1) {
	double r2, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17;
	r2 = r0->px;
	r4 = r0->py;
	r5 = r0->pz;
	if( r1 == NULL ) hl_null_access();
	r10 = r1->_11;
	r9 = r2 * r10;
	r11 = r1->_21;
	r10 = r4 * r11;
	r9 = r9 + r10;
	r11 = r1->_31;
	r10 = r5 * r11;
	r9 = r9 + r10;
	r10 = r1->_41;
	r9 = r9 + r10;
	r6 = r9;
	r10 = r1->_12;
	r9 = r2 * r10;
	r11 = r1->_22;
	r10 = r4 * r11;
	r9 = r9 + r10;
	r11 = r1->_32;
	r10 = r5 * r11;
	r9 = r9 + r10;
	r10 = r1->_42;
	r9 = r9 + r10;
	r7 = r9;
	r10 = r1->_13;
	r9 = r2 * r10;
	r11 = r1->_23;
	r10 = r4 * r11;
	r9 = r9 + r10;
	r11 = r1->_33;
	r10 = r5 * r11;
	r9 = r9 + r10;
	r10 = r1->_43;
	r9 = r9 + r10;
	r8 = r9;
	r0->px = r6;
	r0->py = r7;
	r0->pz = r8;
	r9 = r0->lx;
	r10 = r0->ly;
	r11 = r0->lz;
	r16 = r1->_11;
	r15 = r9 * r16;
	r17 = r1->_21;
	r16 = r10 * r17;
	r15 = r15 + r16;
	r17 = r1->_31;
	r16 = r11 * r17;
	r15 = r15 + r16;
	r12 = r15;
	r16 = r1->_12;
	r15 = r9 * r16;
	r17 = r1->_22;
	r16 = r10 * r17;
	r15 = r15 + r16;
	r17 = r1->_32;
	r16 = r11 * r17;
	r15 = r15 + r16;
	r13 = r15;
	r16 = r1->_13;
	r15 = r9 * r16;
	r17 = r1->_23;
	r16 = r10 * r17;
	r15 = r15 + r16;
	r17 = r1->_33;
	r16 = r11 * r17;
	r15 = r15 + r16;
	r14 = r15;
	r0->lx = r12;
	r0->ly = r13;
	r0->lz = r14;
	h3d_col_Ray_normalize(r0);
	return;
}

h3d__col__Point h3d_col_Ray_getPos(h3d__col__Ray r0) {
	double r2, r4, r6;
	h3d__col__Point r1;
	double *r3, *r5, *r7;
	r1 = (h3d__col__Point)hl_alloc_obj(h3d__col__Point__val);
	r2 = r0->px;
	r3 = &r2;
	r4 = r0->py;
	r5 = &r4;
	r6 = r0->pz;
	r7 = &r6;
	h3d_col_Point_new(r1,r3,r5,r7);
	return r1;
}

h3d__col__Point h3d_col_Ray_getDir(h3d__col__Ray r0) {
	double r2, r4, r6;
	h3d__col__Point r1;
	double *r3, *r5, *r7;
	r1 = (h3d__col__Point)hl_alloc_obj(h3d__col__Point__val);
	r2 = r0->lx;
	r3 = &r2;
	r4 = r0->ly;
	r5 = &r4;
	r6 = r0->lz;
	r7 = &r6;
	h3d_col_Point_new(r1,r3,r5,r7);
	return r1;
}

h3d__col__Point h3d_col_Ray_getPoint(h3d__col__Ray r0,double r1) {
	double r3, r4, r5, r7, r9;
	h3d__col__Point r2;
	double *r6, *r8, *r10;
	r2 = (h3d__col__Point)hl_alloc_obj(h3d__col__Point__val);
	r3 = r0->px;
	r5 = r0->lx;
	r4 = r1 * r5;
	r3 = r3 + r4;
	r6 = &r3;
	r4 = r0->py;
	r7 = r0->ly;
	r5 = r1 * r7;
	r4 = r4 + r5;
	r8 = &r4;
	r5 = r0->pz;
	r9 = r0->lz;
	r7 = r1 * r9;
	r5 = r5 + r7;
	r10 = &r5;
	h3d_col_Point_new(r2,r6,r8,r10);
	return r2;
}

String h3d_col_Ray_toString(h3d__col__Ray r0) {
	String r1, r2;
	double r4, r6, r8, r11, r12, r13;
	h3d__col__Point r3;
	double *r5, *r7, *r9;
	r1 = (String)global$491;
	r3 = (h3d__col__Point)hl_alloc_obj(h3d__col__Point__val);
	r4 = r0->px;
	r5 = &r4;
	r6 = r0->py;
	r7 = &r6;
	r8 = r0->pz;
	r9 = &r8;
	h3d_col_Point_new(r3,r5,r7,r9);
	r2 = Std_string(((vdynamic*)r3));
	r1 = String___add__(r1,r2);
	r2 = (String)global$438;
	r1 = String___add__(r1,r2);
	r3 = (h3d__col__Point)hl_alloc_obj(h3d__col__Point__val);
	r11 = r0->lx;
	r5 = &r11;
	r12 = r0->ly;
	r7 = &r12;
	r13 = r0->lz;
	r9 = &r13;
	h3d_col_Point_new(r3,r5,r7,r9);
	r2 = Std_string(((vdynamic*)r3));
	r1 = String___add__(r1,r2);
	r2 = (String)global$446;
	r1 = String___add__(r1,r2);
	return r1;
}

h3d__col__Point h3d_col_Ray_intersect(h3d__col__Ray r0,h3d__col__Plane r1) {
	h3d__col__Point r9;
	double r2, r3, r4, r6, r7, r13, r14, r15, r16, r17;
	double *r10, *r11, *r12;
	int r8;
	r2 = r0->lx;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->nx;
	r2 = r2 * r3;
	r3 = r0->ly;
	r4 = r1->ny;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->lz;
	r4 = r1->nz;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r1->d;
	r4 = r0->px;
	r6 = r1->nx;
	r4 = r4 * r6;
	r6 = r0->py;
	r7 = r1->ny;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r6 = r0->pz;
	r7 = r1->nz;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r3 = r3 - r4;
	r8 = 0;
	r6 = (double)r8;
	if( !(r2 < r6) ) goto label$1401$30;
	r4 = -r2;
	goto label$1401$31;
	label$1401$30:
	r4 = r2;
	label$1401$31:
	r6 = 1e-010;
	if( !(r4 < r6) ) goto label$1401$52;
	r8 = 0;
	r6 = (double)r8;
	if( !(r3 < r6) ) goto label$1401$38;
	r4 = -r3;
	goto label$1401$39;
	label$1401$38:
	r4 = r3;
	label$1401$39:
	r6 = 1e-010;
	if( !(r4 < r6) ) goto label$1401$50;
	r9 = (h3d__col__Point)hl_alloc_obj(h3d__col__Point__val);
	r4 = r0->px;
	r10 = &r4;
	r6 = r0->py;
	r11 = &r6;
	r7 = r0->pz;
	r12 = &r7;
	h3d_col_Point_new(r9,r10,r11,r12);
	return r9;
	label$1401$50:
	r9 = NULL;
	return r9;
	label$1401$52:
	r13 = r3 / r2;
	r9 = (h3d__col__Point)hl_alloc_obj(h3d__col__Point__val);
	r14 = r0->px;
	r15 = r0->lx;
	r15 = r15 * r13;
	r14 = r14 + r15;
	r10 = &r14;
	r15 = r0->py;
	r16 = r0->ly;
	r16 = r16 * r13;
	r15 = r15 + r16;
	r11 = &r15;
	r16 = r0->pz;
	r17 = r0->lz;
	r17 = r17 * r13;
	r16 = r16 + r17;
	r12 = &r16;
	h3d_col_Point_new(r9,r10,r11,r12);
	return r9;
}

bool h3d_col_Ray_collideFrustum(h3d__col__Ray r0,h3d__Matrix r1) {
	bool r34;
	double r2, r3, r4, r5, r6, r7, r8, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31, r32, r33, r35;
	int r9;
	r2 = r0->px;
	r3 = r0->py;
	r4 = r0->pz;
	r9 = 1;
	r8 = (double)r9;
	if( r1 == NULL ) hl_null_access();
	r11 = r1->_14;
	r10 = r2 * r11;
	r12 = r1->_24;
	r11 = r3 * r12;
	r10 = r10 + r11;
	r12 = r1->_34;
	r11 = r4 * r12;
	r10 = r10 + r11;
	r11 = r1->_44;
	r10 = r10 + r11;
	r8 = r8 / r10;
	r11 = r1->_11;
	r10 = r2 * r11;
	r12 = r1->_21;
	r11 = r3 * r12;
	r10 = r10 + r11;
	r12 = r1->_31;
	r11 = r4 * r12;
	r10 = r10 + r11;
	r11 = r1->_41;
	r10 = r10 + r11;
	r10 = r10 * r8;
	r5 = r10;
	r11 = r1->_12;
	r10 = r2 * r11;
	r12 = r1->_22;
	r11 = r3 * r12;
	r10 = r10 + r11;
	r12 = r1->_32;
	r11 = r4 * r12;
	r10 = r10 + r11;
	r11 = r1->_42;
	r10 = r10 + r11;
	r10 = r10 * r8;
	r6 = r10;
	r11 = r1->_13;
	r10 = r2 * r11;
	r12 = r1->_23;
	r11 = r3 * r12;
	r10 = r10 + r11;
	r12 = r1->_33;
	r11 = r4 * r12;
	r10 = r10 + r11;
	r11 = r1->_43;
	r10 = r10 + r11;
	r10 = r10 * r8;
	r7 = r10;
	r8 = r0->px;
	r10 = r0->lx;
	r8 = r8 + r10;
	r10 = r0->py;
	r11 = r0->ly;
	r10 = r10 + r11;
	r11 = r0->pz;
	r12 = r0->lz;
	r11 = r11 + r12;
	r9 = 1;
	r15 = (double)r9;
	r17 = r1->_14;
	r16 = r8 * r17;
	r18 = r1->_24;
	r17 = r10 * r18;
	r16 = r16 + r17;
	r18 = r1->_34;
	r17 = r11 * r18;
	r16 = r16 + r17;
	r17 = r1->_44;
	r16 = r16 + r17;
	r15 = r15 / r16;
	r17 = r1->_11;
	r16 = r8 * r17;
	r18 = r1->_21;
	r17 = r10 * r18;
	r16 = r16 + r17;
	r18 = r1->_31;
	r17 = r11 * r18;
	r16 = r16 + r17;
	r17 = r1->_41;
	r16 = r16 + r17;
	r16 = r16 * r15;
	r12 = r16;
	r17 = r1->_12;
	r16 = r8 * r17;
	r18 = r1->_22;
	r17 = r10 * r18;
	r16 = r16 + r17;
	r18 = r1->_32;
	r17 = r11 * r18;
	r16 = r16 + r17;
	r17 = r1->_42;
	r16 = r16 + r17;
	r16 = r16 * r15;
	r13 = r16;
	r17 = r1->_13;
	r16 = r8 * r17;
	r18 = r1->_23;
	r17 = r10 * r18;
	r16 = r16 + r17;
	r18 = r1->_33;
	r17 = r11 * r18;
	r16 = r16 + r17;
	r17 = r1->_43;
	r16 = r16 + r17;
	r16 = r16 * r15;
	r14 = r16;
	r9 = 1;
	r15 = (double)r9;
	r16 = r12 - r5;
	r15 = r15 / r16;
	r9 = 1;
	r16 = (double)r9;
	r17 = r13 - r6;
	r16 = r16 / r17;
	r9 = 1;
	r17 = (double)r9;
	r18 = r14 - r7;
	r17 = r17 / r18;
	r9 = -1;
	r18 = (double)r9;
	r18 = r18 - r5;
	r18 = r18 * r15;
	r9 = 1;
	r19 = (double)r9;
	r19 = r19 - r5;
	r19 = r19 * r15;
	r9 = -1;
	r20 = (double)r9;
	r20 = r20 - r6;
	r20 = r20 * r16;
	r9 = 1;
	r21 = (double)r9;
	r21 = r21 - r6;
	r21 = r21 * r16;
	r9 = 0;
	r22 = (double)r9;
	r22 = r22 - r7;
	r22 = r22 * r17;
	r9 = 1;
	r23 = (double)r9;
	r23 = r23 - r7;
	r23 = r23 * r17;
	if( !(r19 < r18) ) goto label$1402$150;
	r24 = r19;
	goto label$1402$151;
	label$1402$150:
	r24 = r18;
	label$1402$151:
	if( !(r21 < r20) ) goto label$1402$154;
	r25 = r21;
	goto label$1402$155;
	label$1402$154:
	r25 = r20;
	label$1402$155:
	if( !(r24 < r25) ) goto label$1402$158;
	r26 = r25;
	goto label$1402$159;
	label$1402$158:
	r26 = r24;
	label$1402$159:
	if( !(r23 < r22) ) goto label$1402$162;
	r27 = r23;
	goto label$1402$163;
	label$1402$162:
	r27 = r22;
	label$1402$163:
	if( !(r18 < r19) ) goto label$1402$166;
	r28 = r19;
	goto label$1402$167;
	label$1402$166:
	r28 = r18;
	label$1402$167:
	if( !(r20 < r21) ) goto label$1402$170;
	r29 = r21;
	goto label$1402$171;
	label$1402$170:
	r29 = r20;
	label$1402$171:
	if( !(r29 < r28) ) goto label$1402$174;
	r30 = r29;
	goto label$1402$175;
	label$1402$174:
	r30 = r28;
	label$1402$175:
	if( !(r22 < r23) ) goto label$1402$178;
	r31 = r23;
	goto label$1402$179;
	label$1402$178:
	r31 = r22;
	label$1402$179:
	if( !(r31 < r30) ) goto label$1402$182;
	r32 = r31;
	goto label$1402$183;
	label$1402$182:
	r32 = r30;
	label$1402$183:
	r9 = 0;
	r35 = (double)r9;
	if( r32 < r35 ) goto label$1402$193;
	if( !(r26 < r27) ) goto label$1402$189;
	r33 = r27;
	goto label$1402$190;
	label$1402$189:
	r33 = r26;
	label$1402$190:
	if( r32 < r33 ) goto label$1402$193;
	r34 = false;
	goto label$1402$194;
	label$1402$193:
	r34 = true;
	label$1402$194:
	r34 = !r34;
	return r34;
}

bool h3d_col_Ray_collide(h3d__col__Ray r0,h3d__col__Bounds r1) {
	bool r23;
	double r2, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22;
	int r3;
	r3 = 1;
	r2 = (double)r3;
	r4 = r0->lx;
	r2 = r2 / r4;
	r3 = 1;
	r4 = (double)r3;
	r5 = r0->ly;
	r4 = r4 / r5;
	r3 = 1;
	r5 = (double)r3;
	r6 = r0->lz;
	r5 = r5 / r6;
	if( r1 == NULL ) hl_null_access();
	r6 = r1->xMin;
	r7 = r0->px;
	r6 = r6 - r7;
	r6 = r6 * r2;
	r7 = r1->xMax;
	r8 = r0->px;
	r7 = r7 - r8;
	r7 = r7 * r2;
	r8 = r1->yMin;
	r9 = r0->py;
	r8 = r8 - r9;
	r8 = r8 * r4;
	r9 = r1->yMax;
	r10 = r0->py;
	r9 = r9 - r10;
	r9 = r9 * r4;
	r10 = r1->zMin;
	r11 = r0->pz;
	r10 = r10 - r11;
	r10 = r10 * r5;
	r11 = r1->zMax;
	r12 = r0->pz;
	r11 = r11 - r12;
	r11 = r11 * r5;
	if( !(r7 < r6) ) goto label$1403$40;
	r12 = r7;
	goto label$1403$41;
	label$1403$40:
	r12 = r6;
	label$1403$41:
	if( !(r9 < r8) ) goto label$1403$44;
	r13 = r9;
	goto label$1403$45;
	label$1403$44:
	r13 = r8;
	label$1403$45:
	if( !(r12 < r13) ) goto label$1403$48;
	r14 = r13;
	goto label$1403$49;
	label$1403$48:
	r14 = r12;
	label$1403$49:
	if( !(r11 < r10) ) goto label$1403$52;
	r15 = r11;
	goto label$1403$53;
	label$1403$52:
	r15 = r10;
	label$1403$53:
	if( !(r6 < r7) ) goto label$1403$56;
	r16 = r7;
	goto label$1403$57;
	label$1403$56:
	r16 = r6;
	label$1403$57:
	if( !(r8 < r9) ) goto label$1403$60;
	r17 = r9;
	goto label$1403$61;
	label$1403$60:
	r17 = r8;
	label$1403$61:
	if( !(r17 < r16) ) goto label$1403$64;
	r18 = r17;
	goto label$1403$65;
	label$1403$64:
	r18 = r16;
	label$1403$65:
	if( !(r10 < r11) ) goto label$1403$68;
	r19 = r11;
	goto label$1403$69;
	label$1403$68:
	r19 = r10;
	label$1403$69:
	if( !(r19 < r18) ) goto label$1403$72;
	r20 = r19;
	goto label$1403$73;
	label$1403$72:
	r20 = r18;
	label$1403$73:
	r3 = 0;
	r22 = (double)r3;
	if( !(r20 < r22) ) goto label$1403$78;
	r23 = false;
	return r23;
	label$1403$78:
	if( !(r14 < r15) ) goto label$1403$81;
	r21 = r15;
	goto label$1403$82;
	label$1403$81:
	r21 = r14;
	label$1403$82:
	if( !(r20 < r21) ) goto label$1403$85;
	r23 = false;
	return r23;
	label$1403$85:
	r23 = true;
	return r23;
}

vbyte* h3d_col_Ray___string(h3d__col__Ray r0) {
	String r2;
	vbyte *r1;
	r2 = h3d_col_Ray_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

void h3d_col_Ray_new(h3d__col__Ray r0) {
	return;
}

h3d__col__Ray h3d_col_Ray_fromValues(double r0,double r1,double r2,double r3,double r4,double r5) {
	h3d__col__Ray r6;
	r6 = (h3d__col__Ray)hl_alloc_obj(h3d__col__Ray__val);
	h3d_col_Ray_new(r6);
	r6->px = r0;
	r6->py = r1;
	r6->pz = r2;
	r6->lx = r3;
	r6->ly = r4;
	r6->lz = r5;
	h3d_col_Ray_normalize(r6);
	return r6;
}

h3d__col__Ray h3d_col_Ray_fromPoints(h3d__col__Point r0,h3d__col__Point r1) {
	h3d__col__Ray r2;
	double r4, r5;
	r2 = (h3d__col__Ray)hl_alloc_obj(h3d__col__Ray__val);
	h3d_col_Ray_new(r2);
	if( r0 == NULL ) hl_null_access();
	r4 = r0->x;
	r2->px = r4;
	r4 = r0->y;
	r2->py = r4;
	r4 = r0->z;
	r2->pz = r4;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->x;
	r5 = r0->x;
	r4 = r4 - r5;
	r2->lx = r4;
	r4 = r1->y;
	r5 = r0->y;
	r4 = r4 - r5;
	r2->ly = r4;
	r4 = r1->z;
	r5 = r0->z;
	r4 = r4 - r5;
	r2->lz = r4;
	h3d_col_Ray_normalize(r2);
	return r2;
}
