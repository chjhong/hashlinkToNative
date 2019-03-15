﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void h3d_col_Point_scale(h3d__col__Point r0,double r1) {
	double r2;
	r2 = r0->x;
	r2 = r2 * r1;
	r0->x = r2;
	r2 = r0->y;
	r2 = r2 * r1;
	r0->y = r2;
	r2 = r0->z;
	r2 = r2 * r1;
	r0->z = r2;
	return;
}

bool h3d_col_Point_inFrustum(h3d__col__Point r0,h3d__Matrix r1) {
	bool r6;
	double r2, r3, r4;
	int r5;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->_14;
	r3 = r1->_11;
	r2 = r2 + r3;
	r3 = r0->x;
	r2 = r2 * r3;
	r3 = r1->_24;
	r4 = r1->_21;
	r3 = r3 + r4;
	r4 = r0->y;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r1->_34;
	r4 = r1->_31;
	r3 = r3 + r4;
	r4 = r0->z;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r1->_44;
	r4 = r1->_41;
	r3 = r3 + r4;
	r3 = -r3;
	r2 = r2 - r3;
	r5 = 0;
	r3 = (double)r5;
	if( r2 >= r3 ) goto label$1372$28;
	r6 = false;
	return r6;
	label$1372$28:
	r2 = r1->_14;
	r3 = r1->_11;
	r2 = r2 - r3;
	r3 = r0->x;
	r2 = r2 * r3;
	r3 = r1->_24;
	r4 = r1->_21;
	r3 = r3 - r4;
	r4 = r0->y;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r1->_34;
	r4 = r1->_31;
	r3 = r3 - r4;
	r4 = r0->z;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r1->_41;
	r4 = r1->_44;
	r3 = r3 - r4;
	r2 = r2 - r3;
	r5 = 0;
	r3 = (double)r5;
	if( r2 >= r3 ) goto label$1372$54;
	r6 = false;
	return r6;
	label$1372$54:
	r2 = r1->_14;
	r3 = r1->_12;
	r2 = r2 + r3;
	r3 = r0->x;
	r2 = r2 * r3;
	r3 = r1->_24;
	r4 = r1->_22;
	r3 = r3 + r4;
	r4 = r0->y;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r1->_34;
	r4 = r1->_32;
	r3 = r3 + r4;
	r4 = r0->z;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r1->_44;
	r4 = r1->_42;
	r3 = r3 + r4;
	r3 = -r3;
	r2 = r2 - r3;
	r5 = 0;
	r3 = (double)r5;
	if( r2 >= r3 ) goto label$1372$81;
	r6 = false;
	return r6;
	label$1372$81:
	r2 = r1->_14;
	r3 = r1->_12;
	r2 = r2 - r3;
	r3 = r0->x;
	r2 = r2 * r3;
	r3 = r1->_24;
	r4 = r1->_22;
	r3 = r3 - r4;
	r4 = r0->y;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r1->_34;
	r4 = r1->_32;
	r3 = r3 - r4;
	r4 = r0->z;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r1->_42;
	r4 = r1->_44;
	r3 = r3 - r4;
	r2 = r2 - r3;
	r5 = 0;
	r3 = (double)r5;
	if( r2 >= r3 ) goto label$1372$107;
	r6 = false;
	return r6;
	label$1372$107:
	r2 = r1->_13;
	r3 = r0->x;
	r2 = r2 * r3;
	r3 = r1->_23;
	r4 = r0->y;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r1->_33;
	r4 = r0->z;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r1->_43;
	r3 = -r3;
	r2 = r2 - r3;
	r5 = 0;
	r3 = (double)r5;
	if( r2 >= r3 ) goto label$1372$126;
	r6 = false;
	return r6;
	label$1372$126:
	r2 = r1->_14;
	r3 = r1->_13;
	r2 = r2 - r3;
	r3 = r0->x;
	r2 = r2 * r3;
	r3 = r1->_24;
	r4 = r1->_23;
	r3 = r3 - r4;
	r4 = r0->y;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r1->_34;
	r4 = r1->_33;
	r3 = r3 - r4;
	r4 = r0->z;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r1->_43;
	r4 = r1->_44;
	r3 = r3 - r4;
	r2 = r2 - r3;
	r5 = 0;
	r3 = (double)r5;
	if( r2 >= r3 ) goto label$1372$152;
	r6 = false;
	return r6;
	label$1372$152:
	r6 = true;
	return r6;
}

void h3d_col_Point_set(h3d__col__Point r0,double r1,double r2,double r3) {
	r0->x = r1;
	r0->y = r2;
	r0->z = r3;
	return;
}

h3d__col__Point h3d_col_Point_sub(h3d__col__Point r0,h3d__col__Point r1) {
	double r3, r4, r6, r8;
	h3d__col__Point r2;
	double *r5, *r7, *r9;
	r2 = (h3d__col__Point)hl_alloc_obj(h3d__col__Point__val);
	r3 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->x;
	r3 = r3 - r4;
	r5 = &r3;
	r4 = r0->y;
	r6 = r1->y;
	r4 = r4 - r6;
	r7 = &r4;
	r6 = r0->z;
	r8 = r1->z;
	r6 = r6 - r8;
	r9 = &r6;
	h3d_col_Point_new(r2,r5,r7,r9);
	return r2;
}

h3d__col__Point h3d_col_Point_add(h3d__col__Point r0,h3d__col__Point r1) {
	double r3, r4, r6, r8;
	h3d__col__Point r2;
	double *r5, *r7, *r9;
	r2 = (h3d__col__Point)hl_alloc_obj(h3d__col__Point__val);
	r3 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->x;
	r3 = r3 + r4;
	r5 = &r3;
	r4 = r0->y;
	r6 = r1->y;
	r4 = r4 + r6;
	r7 = &r4;
	r6 = r0->z;
	r8 = r1->z;
	r6 = r6 + r8;
	r9 = &r6;
	h3d_col_Point_new(r2,r5,r7,r9);
	return r2;
}

h3d__col__Point h3d_col_Point_cross(h3d__col__Point r0,h3d__col__Point r1) {
	double r3, r4, r5, r7, r9;
	h3d__col__Point r2;
	double *r6, *r8, *r10;
	r2 = (h3d__col__Point)hl_alloc_obj(h3d__col__Point__val);
	r3 = r0->y;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->z;
	r3 = r3 * r4;
	r4 = r0->z;
	r5 = r1->y;
	r4 = r4 * r5;
	r3 = r3 - r4;
	r6 = &r3;
	r4 = r0->z;
	r5 = r1->x;
	r4 = r4 * r5;
	r5 = r0->x;
	r7 = r1->z;
	r5 = r5 * r7;
	r4 = r4 - r5;
	r8 = &r4;
	r5 = r0->x;
	r7 = r1->y;
	r5 = r5 * r7;
	r7 = r0->y;
	r9 = r1->x;
	r7 = r7 * r9;
	r5 = r5 - r7;
	r10 = &r5;
	h3d_col_Point_new(r2,r6,r8,r10);
	return r2;
}

double h3d_col_Point_lengthSq(h3d__col__Point r0) {
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
	return r1;
}

void h3d_col_Point_setLength(h3d__col__Point r0,double r1) {
	double r2, r3, r4;
	r2 = r0->x;
	r3 = r0->x;
	r2 = r2 * r3;
	r3 = r0->y;
	r4 = r0->y;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->z;
	r4 = r0->z;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = 1.;
	r4 = hl_math_sqrt(r2);
	r3 = r3 / r4;
	r2 = r3;
	r3 = r0->x;
	r3 = r3 * r2;
	r0->x = r3;
	r3 = r0->y;
	r3 = r3 * r2;
	r0->y = r3;
	r3 = r0->z;
	r3 = r3 * r2;
	r0->z = r3;
	r2 = r0->x;
	r2 = r2 * r1;
	r0->x = r2;
	r2 = r0->y;
	r2 = r2 * r1;
	r0->y = r2;
	r2 = r0->z;
	r2 = r2 * r1;
	r0->z = r2;
	return;
}

double h3d_col_Point_length(h3d__col__Point r0) {
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
	r1 = hl_math_sqrt(r1);
	return r1;
}

double h3d_col_Point_dot(h3d__col__Point r0,h3d__col__Point r1) {
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
	return r2;
}

double h3d_col_Point_distanceSq(h3d__col__Point r0,h3d__col__Point r1) {
	double r2, r3, r4, r5, r6;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->x;
	r3 = r0->x;
	r2 = r2 - r3;
	r3 = r1->y;
	r4 = r0->y;
	r3 = r3 - r4;
	r4 = r1->z;
	r5 = r0->z;
	r4 = r4 - r5;
	r5 = r2 * r2;
	r6 = r3 * r3;
	r5 = r5 + r6;
	r6 = r4 * r4;
	r5 = r5 + r6;
	return r5;
}

double h3d_col_Point_distance(h3d__col__Point r0,h3d__col__Point r1) {
	double r2, r3, r4, r5, r6;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->x;
	r3 = r0->x;
	r2 = r2 - r3;
	r3 = r1->y;
	r4 = r0->y;
	r3 = r3 - r4;
	r4 = r1->z;
	r5 = r0->z;
	r4 = r4 - r5;
	r5 = r2 * r2;
	r6 = r3 * r3;
	r5 = r5 + r6;
	r6 = r4 * r4;
	r5 = r5 + r6;
	r5 = hl_math_sqrt(r5);
	return r5;
}

void h3d_col_Point_normalize(h3d__col__Point r0) {
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
	r3 = 1e-010;
	if( !(r1 < r3) ) goto label$1383$17;
	r5 = 0;
	r2 = (double)r5;
	r1 = r2;
	goto label$1383$21;
	label$1383$17:
	r2 = 1.;
	r3 = hl_math_sqrt(r1);
	r2 = r2 / r3;
	r1 = r2;
	label$1383$21:
	r2 = r0->x;
	r2 = r2 * r1;
	r0->x = r2;
	r2 = r0->y;
	r2 = r2 * r1;
	r0->y = r2;
	r2 = r0->z;
	r2 = r2 * r1;
	r0->z = r2;
	return;
}

void h3d_col_Point_normalizeFast(h3d__col__Point r0) {
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
	r2 = 1.;
	r3 = hl_math_sqrt(r1);
	r2 = r2 / r3;
	r1 = r2;
	r2 = r0->x;
	r2 = r2 * r1;
	r0->x = r2;
	r2 = r0->y;
	r2 = r2 * r1;
	r0->y = r2;
	r2 = r0->z;
	r2 = r2 * r1;
	r0->z = r2;
	return;
}

void h3d_col_Point_transform(h3d__col__Point r0,h3d__Matrix r1) {
	double r2, r3, r4, r6, r7;
	r2 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->_12;
	r2 = r2 * r3;
	r3 = r0->y;
	r4 = r1->_22;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->z;
	r4 = r1->_32;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r1->_42;
	r2 = r2 + r3;
	r3 = r0->x;
	r4 = r1->_13;
	r3 = r3 * r4;
	r4 = r0->y;
	r6 = r1->_23;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r0->z;
	r6 = r1->_33;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r1->_43;
	r3 = r3 + r4;
	r4 = r0->x;
	r6 = r1->_11;
	r4 = r4 * r6;
	r6 = r0->y;
	r7 = r1->_21;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r6 = r0->z;
	r7 = r1->_31;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r6 = r1->_41;
	r4 = r4 + r6;
	r0->x = r4;
	r0->y = r2;
	r0->z = r3;
	return;
}

void h3d_col_Point_transform3x3(h3d__col__Point r0,h3d__Matrix r1) {
	double r2, r3, r4, r6, r7;
	r2 = r0->x;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->_12;
	r2 = r2 * r3;
	r3 = r0->y;
	r4 = r1->_22;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->z;
	r4 = r1->_32;
	r3 = r3 * r4;
	r2 = r2 + r3;
	r3 = r0->x;
	r4 = r1->_13;
	r3 = r3 * r4;
	r4 = r0->y;
	r6 = r1->_23;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r0->z;
	r6 = r1->_33;
	r4 = r4 * r6;
	r3 = r3 + r4;
	r4 = r0->x;
	r6 = r1->_11;
	r4 = r4 * r6;
	r6 = r0->y;
	r7 = r1->_21;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r6 = r0->z;
	r7 = r1->_31;
	r6 = r6 * r7;
	r4 = r4 + r6;
	r0->x = r4;
	r0->y = r2;
	r0->z = r3;
	return;
}

h3d__Vector h3d_col_Point_toVector(h3d__col__Point r0) {
	h3d__Vector r1;
	double r2, r4, r6;
	double *r3, *r5, *r7, *r8;
	r1 = (h3d__Vector)hl_alloc_obj(h3d__Vector__val);
	r2 = r0->x;
	r3 = &r2;
	r4 = r0->y;
	r5 = &r4;
	r6 = r0->z;
	r7 = &r6;
	r8 = NULL;
	h3d_Vector_new(r1,r3,r5,r7,r8);
	return r1;
}

h3d__col__Point h3d_col_Point_clone(h3d__col__Point r0) {
	double r2, r4, r6;
	h3d__col__Point r1;
	double *r3, *r5, *r7;
	r1 = (h3d__col__Point)hl_alloc_obj(h3d__col__Point__val);
	r2 = r0->x;
	r3 = &r2;
	r4 = r0->y;
	r5 = &r4;
	r6 = r0->z;
	r7 = &r6;
	h3d_col_Point_new(r1,r3,r5,r7);
	return r1;
}

void h3d_col_Point_load(h3d__col__Point r0,h3d__col__Point r1) {
	double r2;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->x;
	r0->x = r2;
	r2 = r1->y;
	r0->y = r2;
	r2 = r1->z;
	r0->z = r2;
	return;
}

String h3d_col_Point_toString(h3d__col__Point r0) {
	String r1, r6;
	double r2;
	int *r4;
	vbyte *r5;
	int r3;
	r1 = (String)global$486;
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
	r6 = (String)global$446;
	r1 = String___add__(r1,r6);
	return r1;
}

vbyte* h3d_col_Point___string(h3d__col__Point r0) {
	String r2;
	vbyte *r1;
	r2 = h3d_col_Point_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

void h3d_col_Point_new(h3d__col__Point r0,double* r1,double* r2,double* r3) {
	double r4, r5, r6;
	if( r1 ) goto label$1392$3;
	r4 = 0.;
	goto label$1392$4;
	label$1392$3:
	r4 = *r1;
	label$1392$4:
	if( r2 ) goto label$1392$7;
	r5 = 0.;
	goto label$1392$8;
	label$1392$7:
	r5 = *r2;
	label$1392$8:
	if( r3 ) goto label$1392$11;
	r6 = 0.;
	goto label$1392$12;
	label$1392$11:
	r6 = *r3;
	label$1392$12:
	r0->x = r4;
	r0->y = r5;
	r0->z = r6;
	return;
}

