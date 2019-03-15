﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

h3d__Matrix hxd_fmt_fbx_DefaultMatrixes_toMatrix(hxd__fmt__fbx__DefaultMatrixes r0,bool r1) {
	double r5, r7, r9, r11, r12, r13, r14;
	h3d__col__Point r4;
	double *r6, *r8, *r10;
	h3d__Matrix r2;
	r2 = (h3d__Matrix)hl_alloc_obj(h3d__Matrix__val);
	h3d_Matrix_new(r2);
	h3d_Matrix_identity(r2);
	r4 = r0->scale;
	if( !r4 ) goto label$3363$18;
	r4 = r0->scale;
	if( r4 == NULL ) hl_null_access();
	r5 = r4->x;
	r6 = &r5;
	r4 = r0->scale;
	if( r4 == NULL ) hl_null_access();
	r7 = r4->y;
	r8 = &r7;
	r4 = r0->scale;
	if( r4 == NULL ) hl_null_access();
	r9 = r4->z;
	r10 = &r9;
	h3d_Matrix_scale(r2,r6,r8,r10);
	label$3363$18:
	r4 = r0->rotate;
	if( !r4 ) goto label$3363$30;
	r4 = r0->rotate;
	if( r4 == NULL ) hl_null_access();
	r11 = r4->x;
	r4 = r0->rotate;
	if( r4 == NULL ) hl_null_access();
	r12 = r4->y;
	r4 = r0->rotate;
	if( r4 == NULL ) hl_null_access();
	r13 = r4->z;
	h3d_Matrix_rotate(r2,r11,r12,r13);
	label$3363$30:
	r4 = r0->preRot;
	if( !r4 ) goto label$3363$42;
	r4 = r0->preRot;
	if( r4 == NULL ) hl_null_access();
	r11 = r4->x;
	r4 = r0->preRot;
	if( r4 == NULL ) hl_null_access();
	r12 = r4->y;
	r4 = r0->preRot;
	if( r4 == NULL ) hl_null_access();
	r13 = r4->z;
	h3d_Matrix_rotate(r2,r11,r12,r13);
	label$3363$42:
	r4 = r0->trans;
	if( !r4 ) goto label$3363$57;
	r4 = r0->trans;
	if( r4 == NULL ) hl_null_access();
	r11 = r4->x;
	r6 = &r11;
	r4 = r0->trans;
	if( r4 == NULL ) hl_null_access();
	r12 = r4->y;
	r8 = &r12;
	r4 = r0->trans;
	if( r4 == NULL ) hl_null_access();
	r13 = r4->z;
	r10 = &r13;
	h3d_Matrix_translate(r2,r6,r8,r10);
	label$3363$57:
	if( !r1 ) goto label$3363$73;
	r14 = r2->_12;
	r14 = -r14;
	r2->_12 = r14;
	r14 = r2->_13;
	r14 = -r14;
	r2->_13 = r14;
	r14 = r2->_21;
	r14 = -r14;
	r2->_21 = r14;
	r14 = r2->_31;
	r14 = -r14;
	r2->_31 = r14;
	r14 = r2->_41;
	r14 = -r14;
	r2->_41 = r14;
	label$3363$73:
	return r2;
}

h3d__Quat hxd_fmt_fbx_DefaultMatrixes_toQuaternion(hxd__fmt__fbx__DefaultMatrixes r0,bool r1) {
	h3d__Quat r8;
	double r5, r6, r7;
	h3d__col__Point r4;
	double *r9, *r10, *r11, *r12;
	h3d__Matrix r2;
	r2 = (h3d__Matrix)hl_alloc_obj(h3d__Matrix__val);
	h3d_Matrix_new(r2);
	h3d_Matrix_identity(r2);
	r4 = r0->rotate;
	if( !r4 ) goto label$3364$15;
	r4 = r0->rotate;
	if( r4 == NULL ) hl_null_access();
	r5 = r4->x;
	r4 = r0->rotate;
	if( r4 == NULL ) hl_null_access();
	r6 = r4->y;
	r4 = r0->rotate;
	if( r4 == NULL ) hl_null_access();
	r7 = r4->z;
	h3d_Matrix_rotate(r2,r5,r6,r7);
	label$3364$15:
	r4 = r0->preRot;
	if( !r4 ) goto label$3364$27;
	r4 = r0->preRot;
	if( r4 == NULL ) hl_null_access();
	r5 = r4->x;
	r4 = r0->preRot;
	if( r4 == NULL ) hl_null_access();
	r6 = r4->y;
	r4 = r0->preRot;
	if( r4 == NULL ) hl_null_access();
	r7 = r4->z;
	h3d_Matrix_rotate(r2,r5,r6,r7);
	label$3364$27:
	if( !r1 ) goto label$3364$43;
	r5 = r2->_12;
	r5 = -r5;
	r2->_12 = r5;
	r5 = r2->_13;
	r5 = -r5;
	r2->_13 = r5;
	r5 = r2->_21;
	r5 = -r5;
	r2->_21 = r5;
	r5 = r2->_31;
	r5 = -r5;
	r2->_31 = r5;
	r5 = r2->_41;
	r5 = -r5;
	r2->_41 = r5;
	label$3364$43:
	r8 = (h3d__Quat)hl_alloc_obj(h3d__Quat__val);
	r9 = NULL;
	r10 = NULL;
	r11 = NULL;
	r12 = NULL;
	h3d_Quat_new(r8,r9,r10,r11,r12);
	h3d_Quat_initRotateMatrix(r8,r2);
	return r8;
}

void hxd_fmt_fbx_DefaultMatrixes_new(hxd__fmt__fbx__DefaultMatrixes r0) {
	return;
}

void hxd_fmt_fbx_DefaultMatrixes_rightHandToLeft(h3d__Matrix r0) {
	double r1;
	if( r0 == NULL ) hl_null_access();
	r1 = r0->_12;
	r1 = -r1;
	r0->_12 = r1;
	r1 = r0->_13;
	r1 = -r1;
	r0->_13 = r1;
	r1 = r0->_21;
	r1 = -r1;
	r0->_21 = r1;
	r1 = r0->_31;
	r1 = -r1;
	r0->_31 = r1;
	r1 = r0->_41;
	r1 = -r1;
	r0->_41 = r1;
	return;
}

