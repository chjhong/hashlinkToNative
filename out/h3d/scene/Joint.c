﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

h3d__scene__Object h3d_scene_Joint_getObjectByName(h3d__scene__Joint r0,String r1) {
	String r7;
	h3d__anim__Joint r8, r9, r15, r16;
	hl__types__ArrayObj r11;
	haxe__ds__StringMap r6;
	h3d__anim__Skin r2;
	h3d__scene__Skin r3;
	h3d__scene__Joint r10;
	vdynamic *r5;
	varray *r14;
	int r12, r13;
	r3 = r0->skin;
	if( r3 == NULL ) hl_null_access();
	r2 = h3d_scene_Skin_getSkinData(r3);
	if( r2 == NULL ) hl_null_access();
	r6 = r2->namedJoints;
	if( r6 == NULL ) hl_null_access();
	r5 = haxe_ds_StringMap_get(r6,r1);
	r8 = (h3d__anim__Joint)r5;
	if( r8 ) goto label$2551$11;
	r10 = NULL;
	return ((h3d__scene__Object)r10);
	label$2551$11:
	r11 = r2->allJoints;
	if( r11 == NULL ) hl_null_access();
	r12 = r0->index;
	r13 = r11->length;
	if( ((unsigned)r12) < ((unsigned)r13) ) goto label$2551$18;
	r9 = NULL;
	goto label$2551$21;
	label$2551$18:
	r14 = r11->array;
	r5 = ((vdynamic**)(r14 + 1))[r12];
	r9 = (h3d__anim__Joint)r5;
	label$2551$21:
	if( r9 == NULL ) hl_null_access();
	r12 = r9->index;
	r13 = r0->index;
	if( r12 == r13 ) goto label$2551$27;
	r7 = (String)global$319;
	hl_throw((vdynamic*)r7);
	label$2551$27:
	if( r8 == NULL ) hl_null_access();
	r15 = r8->parent;
	label$2551$29:
	if( !r15 ) goto label$2551$41;
	if( r15 != r9 ) goto label$2551$37;
	r10 = (h3d__scene__Joint)hl_alloc_obj(h3d__scene__Joint__val);
	r3 = r0->skin;
	h3d_scene_Joint_new(r10,r3,r8);
	r10->parent = ((h3d__scene__Object)r0);
	return ((h3d__scene__Object)r10);
	label$2551$37:
	if( r15 == NULL ) hl_null_access();
	r16 = r15->parent;
	r15 = r16;
	goto label$2551$29;
	label$2551$41:
	r10 = NULL;
	return ((h3d__scene__Object)r10);
}

void h3d_scene_Joint_syncPos(h3d__scene__Joint r0) {
	hl__types__ArrayObj r11;
	h3d__scene__Skin r7;
	double r8, r9;
	vdynamic *r12;
	varray *r13;
	h3d__Matrix r6, r10, r14;
	int r4, r5;
	h3d__scene__Object r1, r3;
	r1 = r0->parent;
	label$2552$1:
	if( !r1 ) goto label$2552$48;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->flags;
	r5 = 1;
	r4 = r4 & r5;
	r5 = 0;
	if( r4 == r5 ) goto label$2552$45;
	r7 = r0->skin;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->jointsAbsPosInv;
	if( r6 ) goto label$2552$23;
	r7 = r0->skin;
	if( r7 == NULL ) hl_null_access();
	r6 = (h3d__Matrix)hl_alloc_obj(h3d__Matrix__val);
	h3d_Matrix_new(r6);
	r7->jointsAbsPosInv = r6;
	r7 = r0->skin;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->jointsAbsPosInv;
	if( r6 == NULL ) hl_null_access();
	h3d_Matrix_zero(r6);
	label$2552$23:
	r7 = r0->skin;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->jointsAbsPosInv;
	if( r6 == NULL ) hl_null_access();
	r8 = r6->_44;
	r4 = 0;
	r9 = (double)r4;
	if( r8 != r9 ) goto label$2552$39;
	r7 = r0->skin;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->jointsAbsPosInv;
	if( r6 == NULL ) hl_null_access();
	r3 = r0->parent;
	if( r3 == NULL ) hl_null_access();
	r10 = r3->absPos;
	h3d_Matrix_inverse3x4(r6,r10);
	label$2552$39:
	r3 = r0->parent;
	if( r3 == NULL ) hl_null_access();
	((void (*)(h3d__scene__Object))r3->$type->vobj_proto[12])(r3);
	r4 = -1;
	r0->lastFrame = r4;
	goto label$2552$48;
	label$2552$45:
	r3 = r1->parent;
	r1 = r3;
	goto label$2552$1;
	label$2552$48:
	r4 = r0->lastFrame;
	r7 = r0->skin;
	if( r7 == NULL ) hl_null_access();
	r5 = r7->lastFrame;
	if( r4 == r5 ) goto label$2552$98;
	r7 = r0->skin;
	if( r7 == NULL ) hl_null_access();
	r4 = r7->lastFrame;
	r0->lastFrame = r4;
	r6 = r0->absPos;
	if( r6 == NULL ) hl_null_access();
	r7 = r0->skin;
	if( r7 == NULL ) hl_null_access();
	r11 = r7->currentAbsPose;
	if( r11 == NULL ) hl_null_access();
	r4 = r0->index;
	r5 = r11->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$2552$68;
	r10 = NULL;
	goto label$2552$71;
	label$2552$68:
	r13 = r11->array;
	r12 = ((vdynamic**)(r13 + 1))[r4];
	r10 = (h3d__Matrix)r12;
	label$2552$71:
	h3d_Matrix_load(r6,r10);
	r7 = r0->skin;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->jointsAbsPosInv;
	if( !r6 ) goto label$2552$98;
	r7 = r0->skin;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->jointsAbsPosInv;
	if( r6 == NULL ) hl_null_access();
	r8 = r6->_44;
	r4 = 0;
	r9 = (double)r4;
	if( r8 == r9 ) goto label$2552$98;
	r6 = r0->absPos;
	if( r6 == NULL ) hl_null_access();
	r10 = r0->absPos;
	r7 = r0->skin;
	if( r7 == NULL ) hl_null_access();
	r14 = r7->jointsAbsPosInv;
	h3d_Matrix_multiply3x4(r6,r10,r14);
	r6 = r0->absPos;
	if( r6 == NULL ) hl_null_access();
	r10 = r0->absPos;
	r3 = r0->parent;
	if( r3 == NULL ) hl_null_access();
	r14 = r3->absPos;
	h3d_Matrix_multiply3x4(r6,r10,r14);
	label$2552$98:
	return;
}

void h3d_scene_Joint_new(h3d__scene__Joint r0,h3d__scene__Skin r1,h3d__anim__Joint r2) {
	String r5;
	int r6;
	h3d__scene__Object r4;
	r4 = NULL;
	h3d_scene_Object_new(((h3d__scene__Object)r0),r4);
	if( r2 == NULL ) hl_null_access();
	r5 = r2->name;
	r0->name = r5;
	r0->skin = r1;
	r0->parent = ((h3d__scene__Object)r1);
	r6 = r2->index;
	r0->index = r6;
	return;
}

