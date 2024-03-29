﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void h3d_anim_Skin_setJoints(h3d__anim__Skin r0,hl__types__ArrayObj r1,hl__types__ArrayObj r2) {
	String r10;
	h3d__anim__Joint r7;
	haxe__ds__StringMap r3;
	vdynamic *r8;
	varray *r9;
	int r5, r6;
	r0->rootJoints = r2;
	r0->allJoints = r1;
	r3 = (haxe__ds__StringMap)hl_alloc_obj(haxe__ds__StringMap__val);
	haxe_ds_StringMap_new(r3);
	r0->namedJoints = r3;
	r5 = 0;
	label$1627$6:
	if( r1 == NULL ) hl_null_access();
	r6 = r1->length;
	if( r5 >= r6 ) goto label$1627$26;
	r6 = r1->length;
	if( ((unsigned)r5) < ((unsigned)r6) ) goto label$1627$14;
	r7 = NULL;
	goto label$1627$17;
	label$1627$14:
	r9 = r1->array;
	r8 = ((vdynamic**)(r9 + 1))[r5];
	r7 = (h3d__anim__Joint)r8;
	label$1627$17:
	++r5;
	if( r7 == NULL ) hl_null_access();
	r10 = r7->name;
	if( !r10 ) goto label$1627$25;
	r3 = r0->namedJoints;
	if( r3 == NULL ) hl_null_access();
	r10 = r7->name;
	haxe_ds_StringMap_set(r3,r10,((vdynamic*)r7));
	label$1627$25:
	goto label$1627$6;
	label$1627$26:
	return;
}

void h3d_anim_Skin_addInfluence(h3d__anim__Skin r0,int r1,h3d__anim__Joint r2,double r3) {
	hl__types__ArrayObj r4, r10, r11;
	hl_type *r12;
	h3d__anim___Skin__Influence r13;
	vdynamic *r7;
	varray *r8;
	int r5, r6;
	r4 = r0->envelop;
	if( r4 == NULL ) hl_null_access();
	r6 = r4->length;
	if( ((unsigned)r1) < ((unsigned)r6) ) goto label$1628$6;
	r4 = NULL;
	goto label$1628$9;
	label$1628$6:
	r8 = r4->array;
	r7 = ((vdynamic**)(r8 + 1))[r1];
	r4 = (hl__types__ArrayObj)hl_dyn_castp(&r7,&type$9,&type$46);
	label$1628$9:
	if( r4 ) goto label$1628$22;
	r10 = r0->envelop;
	if( r10 == NULL ) hl_null_access();
	r12 = &type$1905;
	r6 = 0;
	r8 = hl_alloc_array(r12,r6);
	r11 = hl_types_ArrayObj_alloc(r8);
	r6 = r10->length;
	if( ((unsigned)r1) < ((unsigned)r6) ) goto label$1628$19;
	hl_types_ArrayObj___expand(r10,r1);
	label$1628$19:
	r8 = r10->array;
	((hl__types__ArrayObj*)(r8 + 1))[r1] = r11;
	r4 = r11;
	label$1628$22:
	if( r4 == NULL ) hl_null_access();
	r13 = (h3d__anim___Skin__Influence)hl_alloc_obj(h3d__anim___Skin__Influence__val);
	h3d_anim__Skin_Influence_new(r13,r2,r3);
	r5 = hl_types_ArrayObj_push(r4,((vdynamic*)r13));
	return;
}

int h3d_anim_Skin_sortInfluences(h3d__anim__Skin r0,h3d__anim___Skin__Influence r1,h3d__anim___Skin__Influence r2) {
	double r3, r4;
	int r5;
	if( r2 == NULL ) hl_null_access();
	r3 = r2->w;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->w;
	if( !(r4 < r3) ) goto label$1629$7;
	r5 = 1;
	return r5;
	label$1629$7:
	r5 = -1;
	return r5;
}

bool h3d_anim_Skin_isSplit(h3d__anim__Skin r0) {
	hl__types__ArrayObj r2, r3;
	bool r1;
	r2 = r0->splitJoints;
	r3 = NULL;
	if( r2 != r3 ) goto label$1630$5;
	r1 = false;
	goto label$1630$6;
	label$1630$5:
	r1 = true;
	label$1630$6:
	return r1;
}

void h3d_anim_Skin_initWeights(h3d__anim__Skin r0) {
	h3d__anim__Joint r27;
	hl__types__ArrayObj r1, r11;
	hl_type *r3;
	hl__types__ArrayBytes_Int r23;
	h3d__anim___Skin__Influence r21;
	hl__types__ArrayBase r15;
	hl__types__ArrayBytes_Float r26;
	double r17, r19, r20;
	vclosure *r13, *r14;
	hl__types__ArrayDyn r12;
	vdynamic *r10, *r16;
	vbyte *r25;
	int r4, r6, r7, r8, r9, r18, r22, r24;
	varray *r2;
	r3 = &type$1871;
	r4 = 0;
	r2 = hl_alloc_array(r3,r4);
	r1 = hl_types_ArrayObj_alloc(r2);
	r0->boundJoints = r1;
	r4 = 0;
	r6 = 0;
	r7 = r0->vertexCount;
	label$1631$8:
	if( r6 >= r7 ) goto label$1631$147;
	r1 = r0->envelop;
	if( r1 == NULL ) hl_null_access();
	r8 = r6;
	++r6;
	r9 = r1->length;
	if( ((unsigned)r8) < ((unsigned)r9) ) goto label$1631$18;
	r1 = NULL;
	goto label$1631$21;
	label$1631$18:
	r2 = r1->array;
	r10 = ((vdynamic**)(r2 + 1))[r8];
	r1 = (hl__types__ArrayObj)hl_dyn_castp(&r10,&type$9,&type$46);
	label$1631$21:
	if( r1 ) goto label$1631$27;
	r3 = &type$1905;
	r8 = 0;
	r2 = hl_alloc_array(r3,r8);
	r11 = hl_types_ArrayObj_alloc(r2);
	r1 = r11;
	label$1631$27:
	r12 = (hl__types__ArrayDyn)hl_dyn_castp(&r1,&type$46,&type$321);
	r13 = hl_alloc_closure_ptr(&type$1909,h3d_anim_Skin_sortInfluences,r0);
	if( r13 ) goto label$1631$32;
	r14 = NULL;
	goto label$1631$33;
	label$1631$32:
	r14 = hl_alloc_closure_ptr(&type$1911,fun$2583,r13);
	label$1631$33:
	haxe_ds_ArraySort_sort(r12,r14);
	if( r1 == NULL ) hl_null_access();
	r8 = r1->length;
	r9 = r0->bonesPerVertex;
	if( r9 >= r8 ) goto label$1631$44;
	r8 = 0;
	r9 = r0->bonesPerVertex;
	r16 = hl_alloc_dynamic(&type$3);
	r16->v.i = r9;
	r15 = hl_types_ArrayObj_slice(r1,r8,r16);
	r11 = (hl__types__ArrayObj)hl_dyn_castp(&r15,&type$32,&type$46);
	r1 = r11;
	label$1631$44:
	r17 = 0.;
	r8 = 0;
	label$1631$46:
	if( r1 == NULL ) hl_null_access();
	r18 = r1->length;
	if( r8 >= r18 ) goto label$1631$64;
	r9 = r8;
	++r8;
	r18 = r1->length;
	if( ((unsigned)r9) < ((unsigned)r18) ) goto label$1631$56;
	r21 = NULL;
	goto label$1631$59;
	label$1631$56:
	r2 = r1->array;
	r10 = ((vdynamic**)(r2 + 1))[r9];
	r21 = (h3d__anim___Skin__Influence)r10;
	label$1631$59:
	if( r21 == NULL ) hl_null_access();
	r20 = r21->w;
	r19 = r17 + r20;
	r17 = r19;
	goto label$1631$46;
	label$1631$64:
	r8 = 1;
	r19 = (double)r8;
	r19 = r19 / r17;
	r17 = r19;
	r8 = 0;
	r9 = r0->bonesPerVertex;
	label$1631$70:
	if( r8 >= r9 ) goto label$1631$146;
	if( r1 == NULL ) hl_null_access();
	r18 = r8;
	++r8;
	r22 = r1->length;
	if( ((unsigned)r18) < ((unsigned)r22) ) goto label$1631$79;
	r21 = NULL;
	goto label$1631$82;
	label$1631$79:
	r2 = r1->array;
	r10 = ((vdynamic**)(r2 + 1))[r18];
	r21 = (h3d__anim___Skin__Influence)r10;
	label$1631$82:
	if( r21 ) goto label$1631$105;
	r23 = r0->vertexJoints;
	if( r23 == NULL ) hl_null_access();
	r22 = 0;
	r24 = r23->length;
	if( ((unsigned)r4) < ((unsigned)r24) ) goto label$1631$89;
	hl_types_ArrayBytes_Int___expand(r23,r4);
	label$1631$89:
	r25 = r23->bytes;
	r24 = 2;
	r24 = r4 << r24;
	*(int*)(r25 + r24) = r22;
	r26 = r0->vertexWeights;
	if( r26 == NULL ) hl_null_access();
	r22 = 0;
	r19 = (double)r22;
	r22 = r26->length;
	if( ((unsigned)r4) < ((unsigned)r22) ) goto label$1631$100;
	hl_types_ArrayBytes_Float___expand(r26,r4);
	label$1631$100:
	r25 = r26->bytes;
	r22 = 3;
	r22 = r4 << r22;
	*(double*)(r25 + r22) = r19;
	goto label$1631$144;
	label$1631$105:
	if( r21 == NULL ) hl_null_access();
	r27 = r21->j;
	if( r27 == NULL ) hl_null_access();
	r18 = r27->bindIndex;
	r22 = -1;
	if( r18 != r22 ) goto label$1631$121;
	r27 = r21->j;
	if( r27 == NULL ) hl_null_access();
	r11 = r0->boundJoints;
	if( r11 == NULL ) hl_null_access();
	r18 = r11->length;
	r27->bindIndex = r18;
	r11 = r0->boundJoints;
	if( r11 == NULL ) hl_null_access();
	r27 = r21->j;
	r18 = hl_types_ArrayObj_push(r11,((vdynamic*)r27));
	label$1631$121:
	r23 = r0->vertexJoints;
	if( r23 == NULL ) hl_null_access();
	r27 = r21->j;
	if( r27 == NULL ) hl_null_access();
	r22 = r27->bindIndex;
	r24 = r23->length;
	if( ((unsigned)r4) < ((unsigned)r24) ) goto label$1631$129;
	hl_types_ArrayBytes_Int___expand(r23,r4);
	label$1631$129:
	r25 = r23->bytes;
	r24 = 2;
	r24 = r4 << r24;
	*(int*)(r25 + r24) = r22;
	r26 = r0->vertexWeights;
	if( r26 == NULL ) hl_null_access();
	r19 = r21->w;
	r19 = r19 * r17;
	r22 = r26->length;
	if( ((unsigned)r4) < ((unsigned)r22) ) goto label$1631$140;
	hl_types_ArrayBytes_Float___expand(r26,r4);
	label$1631$140:
	r25 = r26->bytes;
	r22 = 3;
	r22 = r4 << r22;
	*(double*)(r25 + r22) = r19;
	label$1631$144:
	++r4;
	goto label$1631$70;
	label$1631$146:
	goto label$1631$8;
	label$1631$147:
	r1 = NULL;
	r0->envelop = r1;
	return;
}

int h3d_anim_Skin_sortByBindIndex(h3d__anim__Skin r0,h3d__anim__Joint r1,h3d__anim__Joint r2) {
	int r3, r4;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->bindIndex;
	if( r2 == NULL ) hl_null_access();
	r4 = r2->bindIndex;
	r3 = r3 - r4;
	return r3;
}

bool h3d_anim_Skin_isSub(h3d__anim__Skin r0,hl__types__ArrayObj r1,hl__types__ArrayObj r2) {
	h3d__anim__Joint r8, r11;
	bool r12;
	vdynamic *r9;
	varray *r10;
	int r3, r4, r5, r6, r7;
	r3 = 0;
	if( r2 == NULL ) hl_null_access();
	r4 = r2->length;
	r5 = 0;
	label$1633$4:
	if( r1 == NULL ) hl_null_access();
	r7 = r1->length;
	if( r5 >= r7 ) goto label$1633$34;
	r6 = r5;
	++r5;
	r7 = r1->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$1633$14;
	r8 = NULL;
	goto label$1633$17;
	label$1633$14:
	r10 = r1->array;
	r9 = ((vdynamic**)(r10 + 1))[r6];
	r8 = (h3d__anim__Joint)r9;
	label$1633$17:
	if( r2 == NULL ) hl_null_access();
	r6 = r3;
	++r3;
	r7 = r2->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$1633$25;
	r11 = NULL;
	goto label$1633$28;
	label$1633$25:
	r10 = r2->array;
	r9 = ((vdynamic**)(r10 + 1))[r6];
	r11 = (h3d__anim__Joint)r9;
	label$1633$28:
	if( r8 == r11 ) goto label$1633$33;
	if( r3 < r4 ) goto label$1633$32;
	r12 = false;
	return r12;
	label$1633$32:
	goto label$1633$17;
	label$1633$33:
	goto label$1633$4;
	label$1633$34:
	r12 = true;
	return r12;
}

bool h3d_anim_Skin_merge(h3d__anim__Skin r0,hl__types__ArrayObj r1) {
	hl__types__ArrayObj r5, r12;
	bool r11;
	hl__types__ArrayBytes_Int r13, r15;
	h3d__anim___Skin__Permut r6, r10;
	vdynamic *r7;
	vbyte *r16;
	varray *r8;
	int r2, r3, r4, r9, r14;
	r2 = 0;
	label$1634$1:
	if( r1 == NULL ) hl_null_access();
	r4 = r1->length;
	if( r2 >= r4 ) goto label$1634$63;
	r4 = r1->length;
	if( ((unsigned)r2) < ((unsigned)r4) ) goto label$1634$9;
	r6 = NULL;
	goto label$1634$12;
	label$1634$9:
	r8 = r1->array;
	r7 = ((vdynamic**)(r8 + 1))[r2];
	r6 = (h3d__anim___Skin__Permut)r7;
	label$1634$12:
	++r2;
	r3 = 0;
	label$1634$14:
	if( r1 == NULL ) hl_null_access();
	r9 = r1->length;
	if( r3 >= r9 ) goto label$1634$62;
	r9 = r1->length;
	if( ((unsigned)r3) < ((unsigned)r9) ) goto label$1634$22;
	r10 = NULL;
	goto label$1634$25;
	label$1634$22:
	r8 = r1->array;
	r7 = ((vdynamic**)(r8 + 1))[r3];
	r10 = (h3d__anim___Skin__Permut)r7;
	label$1634$25:
	++r3;
	if( r6 == r10 ) goto label$1634$61;
	if( r6 == NULL ) hl_null_access();
	r4 = r6->material;
	if( r10 == NULL ) hl_null_access();
	r9 = r10->material;
	if( r4 != r9 ) goto label$1634$61;
	r5 = r6->joints;
	r12 = r10->joints;
	r11 = h3d_anim_Skin_isSub(r0,r5,r12);
	if( !r11 ) goto label$1634$61;
	r4 = 0;
	r13 = r6->triangles;
	label$1634$38:
	if( r13 == NULL ) hl_null_access();
	r14 = r13->length;
	if( r4 >= r14 ) goto label$1634$57;
	if( r10 == NULL ) hl_null_access();
	r15 = r10->triangles;
	if( r15 == NULL ) hl_null_access();
	r9 = r4;
	++r4;
	r14 = r13->length;
	if( ((unsigned)r9) < ((unsigned)r14) ) goto label$1634$51;
	r9 = 0;
	goto label$1634$55;
	label$1634$51:
	r16 = r13->bytes;
	r14 = 2;
	r14 = r9 << r14;
	r9 = *(int*)(r16 + r14);
	label$1634$55:
	r9 = hl_types_ArrayBytes_Int_push(r15,r9);
	goto label$1634$38;
	label$1634$57:
	if( r1 == NULL ) hl_null_access();
	r11 = hl_types_ArrayObj_remove(r1,((vdynamic*)r6));
	r11 = true;
	return r11;
	label$1634$61:
	goto label$1634$14;
	label$1634$62:
	goto label$1634$1;
	label$1634$63:
	r11 = false;
	return r11;
}

int h3d_anim_Skin_jointsDiff(h3d__anim__Skin r0,h3d__anim___Skin__Permut r1,h3d__anim___Skin__Permut r2) {
	h3d__anim__Joint r11, r14;
	hl__types__ArrayObj r7;
	vdynamic *r12;
	varray *r13;
	int r3, r4, r5, r6, r8, r9, r10;
	r3 = 0;
	r4 = 0;
	r5 = 0;
	if( r1 == NULL ) hl_null_access();
	r7 = r1->joints;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->length;
	if( r2 == NULL ) hl_null_access();
	r7 = r2->joints;
	if( r7 == NULL ) hl_null_access();
	r8 = r7->length;
	label$1635$11:
	if( r4 >= r6 ) goto label$1635$48;
	if( r5 >= r8 ) goto label$1635$48;
	if( r1 == NULL ) hl_null_access();
	r7 = r1->joints;
	if( r7 == NULL ) hl_null_access();
	r10 = r7->length;
	if( ((unsigned)r4) < ((unsigned)r10) ) goto label$1635$21;
	r11 = NULL;
	goto label$1635$24;
	label$1635$21:
	r13 = r7->array;
	r12 = ((vdynamic**)(r13 + 1))[r4];
	r11 = (h3d__anim__Joint)r12;
	label$1635$24:
	if( r2 == NULL ) hl_null_access();
	r7 = r2->joints;
	if( r7 == NULL ) hl_null_access();
	r10 = r7->length;
	if( ((unsigned)r5) < ((unsigned)r10) ) goto label$1635$31;
	r14 = NULL;
	goto label$1635$34;
	label$1635$31:
	r13 = r7->array;
	r12 = ((vdynamic**)(r13 + 1))[r5];
	r14 = (h3d__anim__Joint)r12;
	label$1635$34:
	if( r11 != r14 ) goto label$1635$38;
	++r4;
	++r5;
	goto label$1635$47;
	label$1635$38:
	++r3;
	if( r11 == NULL ) hl_null_access();
	r9 = r11->bindIndex;
	if( r14 == NULL ) hl_null_access();
	r10 = r14->bindIndex;
	if( r9 >= r10 ) goto label$1635$46;
	++r4;
	goto label$1635$47;
	label$1635$46:
	++r5;
	label$1635$47:
	goto label$1635$11;
	label$1635$48:
	r10 = r6 - r4;
	r9 = r3 + r10;
	r10 = r8 - r5;
	r9 = r9 + r10;
	return r9;
}

bool h3d_anim_Skin_split(h3d__anim__Skin r0,int r1,hl__types__ArrayBytes_Int r2,hl__types__ArrayBytes_Int r3) {
	String r48;
	h3d__anim__Joint r33, r34;
	vvirtual *r45, *r49;
	hl__types__ArrayObj r5, r23, r32, r39, r43;
	hl_type *r11;
	bool r6, r47;
	hl__types__ArrayBytes_Int r13, r17, r42;
	h3d__anim___Skin__Permut r37, r38, r40, r41;
	hl__types__ArrayBytes_Float r29;
	vclosure *r35, *r36, *r46;
	double r12, r14, r19, r31;
	vdynamic *r7, *r44;
	vbyte *r15;
	varray *r10;
	int r8, r9, r16, r18, r20, r21, r22, r24, r25, r26, r27, r28, r30;
	r5 = r0->splitJoints;
	if( !r5 ) goto label$1636$4;
	r6 = true;
	return r6;
	label$1636$4:
	r5 = r0->boundJoints;
	if( r5 == NULL ) hl_null_access();
	r8 = r5->length;
	if( r1 < r8 ) goto label$1636$10;
	r6 = false;
	return r6;
	label$1636$10:
	r11 = &type$1924;
	r8 = 0;
	r10 = hl_alloc_array(r11,r8);
	r5 = hl_types_ArrayObj_alloc(r10);
	r0->splitJoints = r5;
	if( r2 == NULL ) hl_null_access();
	r8 = r2->length;
	r12 = (double)r8;
	r8 = 3;
	r14 = (double)r8;
	r12 = r12 / r14;
	r8 = (int)r12;
	r9 = 0;
	r15 = hl_alloc_bytes(r9);
	r9 = 0;
	r9 = 0;
	r13 = hl_types_ArrayBase_allocI32(r15,r9);
	r16 = 0;
	if( r16 >= r8 ) goto label$1636$41;
	if( r13 == NULL ) hl_null_access();
	r16 = 1;
	r9 = r8 - r16;
	r7 = NULL;
	r16 = (int)hl_dyn_casti(&r7,&type$9,&type$3);
	r18 = r13->length;
	if( ((unsigned)r9) < ((unsigned)r18) ) goto label$1636$37;
	hl_types_ArrayBytes_Int___expand(r13,r9);
	label$1636$37:
	r15 = r13->bytes;
	r18 = 2;
	r18 = r9 << r18;
	*(int*)(r15 + r18) = r16;
	label$1636$41:
	r0->triangleGroups = r13;
	r5 = (hl__types__ArrayObj)hl_alloc_obj(hl__types__ArrayObj__val);
	hl_types_ArrayObj_new(r5);
	r9 = 0;
	r16 = r2->length;
	r14 = (double)r16;
	r16 = 3;
	r19 = (double)r16;
	r14 = r14 / r19;
	r16 = (int)r14;
	label$1636$51:
	if( r9 >= r16 ) goto label$1636$219;
	r18 = r9;
	++r9;
	r21 = 3;
	r20 = r18 * r21;
	if( r3 ) goto label$1636$60;
	r21 = 0;
	goto label$1636$69;
	label$1636$60:
	if( r3 == NULL ) hl_null_access();
	r22 = r3->length;
	if( ((unsigned)r18) < ((unsigned)r22) ) goto label$1636$65;
	r21 = 0;
	goto label$1636$69;
	label$1636$65:
	r15 = r3->bytes;
	r22 = 2;
	r22 = r18 << r22;
	r21 = *(int*)(r15 + r22);
	label$1636$69:
	r11 = &type$1871;
	r22 = 0;
	r10 = hl_alloc_array(r11,r22);
	r23 = hl_types_ArrayObj_alloc(r10);
	r22 = 0;
	label$1636$74:
	r25 = 3;
	if( r22 >= r25 ) goto label$1636$139;
	if( r2 == NULL ) hl_null_access();
	r25 = r22;
	++r22;
	r24 = r20 + r25;
	r25 = r2->length;
	if( ((unsigned)r24) < ((unsigned)r25) ) goto label$1636$85;
	r24 = 0;
	goto label$1636$89;
	label$1636$85:
	r15 = r2->bytes;
	r25 = 2;
	r25 = r24 << r25;
	r24 = *(int*)(r15 + r25);
	label$1636$89:
	r25 = 0;
	r26 = r0->bonesPerVertex;
	label$1636$91:
	if( r25 >= r26 ) goto label$1636$138;
	r28 = r0->bonesPerVertex;
	r27 = r24 * r28;
	r28 = r25;
	++r25;
	r27 = r27 + r28;
	r29 = r0->vertexWeights;
	if( r29 == NULL ) hl_null_access();
	r30 = r29->length;
	if( ((unsigned)r27) < ((unsigned)r30) ) goto label$1636$104;
	r19 = 0.;
	goto label$1636$108;
	label$1636$104:
	r15 = r29->bytes;
	r30 = 3;
	r30 = r27 << r30;
	r19 = *(double*)(r15 + r30);
	label$1636$108:
	r28 = 0;
	r31 = (double)r28;
	if( r19 != r31 ) goto label$1636$112;
	goto label$1636$91;
	label$1636$112:
	r32 = r0->boundJoints;
	if( r32 == NULL ) hl_null_access();
	r17 = r0->vertexJoints;
	if( r17 == NULL ) hl_null_access();
	r30 = r17->length;
	if( ((unsigned)r27) < ((unsigned)r30) ) goto label$1636$120;
	r28 = 0;
	goto label$1636$124;
	label$1636$120:
	r15 = r17->bytes;
	r30 = 2;
	r30 = r27 << r30;
	r28 = *(int*)(r15 + r30);
	label$1636$124:
	r30 = r32->length;
	if( ((unsigned)r28) < ((unsigned)r30) ) goto label$1636$128;
	r33 = NULL;
	goto label$1636$131;
	label$1636$128:
	r10 = r32->array;
	r7 = ((vdynamic**)(r10 + 1))[r28];
	r33 = (h3d__anim__Joint)r7;
	label$1636$131:
	if( r33 == NULL ) hl_null_access();
	r28 = r33->splitIndex;
	if( r28 == r20 ) goto label$1636$137;
	r33->splitIndex = r20;
	if( r23 == NULL ) hl_null_access();
	r28 = hl_types_ArrayObj_push(r23,((vdynamic*)r33));
	label$1636$137:
	goto label$1636$91;
	label$1636$138:
	goto label$1636$74;
	label$1636$139:
	if( r23 == NULL ) hl_null_access();
	r35 = hl_alloc_closure_ptr(&type$1914,h3d_anim_Skin_sortByBindIndex,r0);
	if( r35 ) goto label$1636$144;
	r36 = NULL;
	goto label$1636$145;
	label$1636$144:
	r36 = hl_alloc_closure_ptr(&type$1918,fun$2584,r35);
	label$1636$145:
	hl_types_ArrayObj_sort(r23,r36);
	r22 = 0;
	label$1636$147:
	if( r5 == NULL ) hl_null_access();
	r25 = r5->length;
	if( r22 >= r25 ) goto label$1636$172;
	r25 = r5->length;
	if( ((unsigned)r22) < ((unsigned)r25) ) goto label$1636$155;
	r37 = NULL;
	goto label$1636$158;
	label$1636$155:
	r10 = r5->array;
	r7 = ((vdynamic**)(r10 + 1))[r22];
	r37 = (h3d__anim___Skin__Permut)r7;
	label$1636$158:
	++r22;
	if( r37 == NULL ) hl_null_access();
	r24 = r37->material;
	if( r24 != r21 ) goto label$1636$171;
	r39 = r37->joints;
	r6 = h3d_anim_Skin_isSub(r0,r23,r39);
	if( !r6 ) goto label$1636$171;
	r17 = r37->triangles;
	if( r17 == NULL ) hl_null_access();
	r24 = hl_types_ArrayBytes_Int_push(r17,r18);
	r32 = NULL;
	r23 = r32;
	goto label$1636$172;
	label$1636$171:
	goto label$1636$147;
	label$1636$172:
	if( r23 ) goto label$1636$174;
	goto label$1636$51;
	label$1636$174:
	r22 = 0;
	label$1636$175:
	if( r5 == NULL ) hl_null_access();
	r25 = r5->length;
	if( r22 >= r25 ) goto label$1636$201;
	r25 = r5->length;
	if( ((unsigned)r22) < ((unsigned)r25) ) goto label$1636$183;
	r37 = NULL;
	goto label$1636$186;
	label$1636$183:
	r10 = r5->array;
	r7 = ((vdynamic**)(r10 + 1))[r22];
	r37 = (h3d__anim___Skin__Permut)r7;
	label$1636$186:
	++r22;
	if( r37 == NULL ) hl_null_access();
	r24 = r37->material;
	if( r24 != r21 ) goto label$1636$200;
	r32 = r37->joints;
	r6 = h3d_anim_Skin_isSub(r0,r32,r23);
	if( !r6 ) goto label$1636$200;
	r37->joints = r23;
	r17 = r37->triangles;
	if( r17 == NULL ) hl_null_access();
	r24 = hl_types_ArrayBytes_Int_push(r17,r18);
	r32 = NULL;
	r23 = r32;
	goto label$1636$201;
	label$1636$200:
	goto label$1636$175;
	label$1636$201:
	if( r23 ) goto label$1636$203;
	goto label$1636$51;
	label$1636$203:
	r37 = (h3d__anim___Skin__Permut)hl_alloc_obj(h3d__anim___Skin__Permut__val);
	h3d_anim__Skin_Permut_new(r37);
	r37->joints = r23;
	r22 = 4;
	r15 = hl_alloc_bytes(r22);
	r22 = 0;
	r25 = 2;
	r25 = r22 << r25;
	*(int*)(r15 + r25) = r18;
	++r22;
	r22 = 1;
	r17 = hl_types_ArrayBase_allocI32(r15,r22);
	r37->triangles = r17;
	r37->material = r21;
	r22 = hl_types_ArrayObj_push(r5,((vdynamic*)r37));
	goto label$1636$51;
	label$1636$219:
	r6 = true;
	if( !r6 ) goto label$1636$360;
	label$1636$222:
	r6 = h3d_anim_Skin_merge(r0,r5);
	if( !r6 ) goto label$1636$226;
	goto label$1636$222;
	label$1636$226:
	r9 = 100000;
	r16 = 100000;
	r37 = NULL;
	r38 = NULL;
	r18 = 0;
	if( r5 == NULL ) hl_null_access();
	r20 = r5->length;
	label$1636$233:
	if( r18 >= r20 ) goto label$1636$299;
	r21 = r18;
	++r18;
	if( r5 == NULL ) hl_null_access();
	r24 = r5->length;
	if( ((unsigned)r21) < ((unsigned)r24) ) goto label$1636$242;
	r40 = NULL;
	goto label$1636$245;
	label$1636$242:
	r10 = r5->array;
	r7 = ((vdynamic**)(r10 + 1))[r21];
	r40 = (h3d__anim___Skin__Permut)r7;
	label$1636$245:
	if( r40 == NULL ) hl_null_access();
	r23 = r40->joints;
	if( r23 == NULL ) hl_null_access();
	r22 = r23->length;
	if( r22 != r1 ) goto label$1636$251;
	goto label$1636$233;
	label$1636$251:
	r24 = 1;
	r22 = r21 + r24;
	r24 = r5->length;
	label$1636$254:
	if( r22 >= r24 ) goto label$1636$298;
	if( r5 == NULL ) hl_null_access();
	r25 = r22;
	++r22;
	r26 = r5->length;
	if( ((unsigned)r25) < ((unsigned)r26) ) goto label$1636$263;
	r41 = NULL;
	goto label$1636$266;
	label$1636$263:
	r10 = r5->array;
	r7 = ((vdynamic**)(r10 + 1))[r25];
	r41 = (h3d__anim___Skin__Permut)r7;
	label$1636$266:
	if( r41 == NULL ) hl_null_access();
	r23 = r41->joints;
	if( r23 == NULL ) hl_null_access();
	r25 = r23->length;
	if( r25 == r1 ) goto label$1636$275;
	if( r40 == NULL ) hl_null_access();
	r25 = r40->material;
	r26 = r41->material;
	if( r25 == r26 ) goto label$1636$276;
	label$1636$275:
	goto label$1636$254;
	label$1636$276:
	r25 = h3d_anim_Skin_jointsDiff(r0,r40,r41);
	r23 = r40->joints;
	if( r23 == NULL ) hl_null_access();
	r27 = r23->length;
	r23 = r41->joints;
	if( r23 == NULL ) hl_null_access();
	r28 = r23->length;
	r27 = r27 + r28;
	r27 = r27 - r25;
	r28 = 1;
	r27 = r27 >> r28;
	r26 = r25 + r27;
	if( r1 < r26 ) goto label$1636$292;
	if( r16 < r26 ) goto label$1636$292;
	if( r26 != r16 ) goto label$1636$293;
	if( r9 >= r25 ) goto label$1636$293;
	label$1636$292:
	goto label$1636$254;
	label$1636$293:
	r9 = r25;
	r16 = r26;
	r37 = r40;
	r38 = r41;
	goto label$1636$254;
	label$1636$298:
	goto label$1636$233;
	label$1636$299:
	if( r37 ) goto label$1636$301;
	goto label$1636$360;
	label$1636$301:
	r40 = r37;
	r41 = r38;
	r18 = 0;
	if( r37 == NULL ) hl_null_access();
	r23 = r37->joints;
	label$1636$306:
	if( r23 == NULL ) hl_null_access();
	r21 = r23->length;
	if( r18 >= r21 ) goto label$1636$326;
	r21 = r23->length;
	if( ((unsigned)r18) < ((unsigned)r21) ) goto label$1636$314;
	r33 = NULL;
	goto label$1636$317;
	label$1636$314:
	r10 = r23->array;
	r7 = ((vdynamic**)(r10 + 1))[r18];
	r33 = (h3d__anim__Joint)r7;
	label$1636$317:
	++r18;
	if( r41 == NULL ) hl_null_access();
	r32 = r41->joints;
	if( r32 == NULL ) hl_null_access();
	r6 = hl_types_ArrayObj_remove(r32,((vdynamic*)r33));
	r32 = r41->joints;
	if( r32 == NULL ) hl_null_access();
	r20 = hl_types_ArrayObj_push(r32,((vdynamic*)r33));
	goto label$1636$306;
	label$1636$326:
	if( r41 == NULL ) hl_null_access();
	r23 = r41->joints;
	if( r23 == NULL ) hl_null_access();
	r35 = hl_alloc_closure_ptr(&type$1914,h3d_anim_Skin_sortByBindIndex,r0);
	if( r35 ) goto label$1636$333;
	r36 = NULL;
	goto label$1636$334;
	label$1636$333:
	r36 = hl_alloc_closure_ptr(&type$1918,fun$2584,r35);
	label$1636$334:
	hl_types_ArrayObj_sort(r23,r36);
	r18 = 0;
	if( r40 == NULL ) hl_null_access();
	r17 = r40->triangles;
	label$1636$338:
	if( r17 == NULL ) hl_null_access();
	r21 = r17->length;
	if( r18 >= r21 ) goto label$1636$357;
	if( r41 == NULL ) hl_null_access();
	r42 = r41->triangles;
	if( r42 == NULL ) hl_null_access();
	r20 = r18;
	++r18;
	r21 = r17->length;
	if( ((unsigned)r20) < ((unsigned)r21) ) goto label$1636$351;
	r20 = 0;
	goto label$1636$355;
	label$1636$351:
	r15 = r17->bytes;
	r21 = 2;
	r21 = r20 << r21;
	r20 = *(int*)(r15 + r21);
	label$1636$355:
	r20 = hl_types_ArrayBytes_Int_push(r42,r20);
	goto label$1636$338;
	label$1636$357:
	if( r5 == NULL ) hl_null_access();
	r6 = hl_types_ArrayObj_remove(r5,((vdynamic*)r40));
	goto label$1636$219;
	label$1636$360:
	r9 = 0;
	if( r5 == NULL ) hl_null_access();
	r16 = r5->length;
	label$1636$363:
	if( r9 >= r16 ) goto label$1636$403;
	r18 = r9;
	++r9;
	r20 = 0;
	if( r5 == NULL ) hl_null_access();
	r22 = r5->length;
	if( ((unsigned)r18) < ((unsigned)r22) ) goto label$1636$373;
	r37 = NULL;
	goto label$1636$376;
	label$1636$373:
	r10 = r5->array;
	r7 = ((vdynamic**)(r10 + 1))[r18];
	r37 = (h3d__anim___Skin__Permut)r7;
	label$1636$376:
	if( r37 == NULL ) hl_null_access();
	r17 = r37->triangles;
	label$1636$378:
	if( r17 == NULL ) hl_null_access();
	r22 = r17->length;
	if( r20 >= r22 ) goto label$1636$402;
	r42 = r0->triangleGroups;
	if( r42 == NULL ) hl_null_access();
	r21 = r20;
	++r20;
	r22 = r17->length;
	if( ((unsigned)r21) < ((unsigned)r22) ) goto label$1636$390;
	r21 = 0;
	goto label$1636$394;
	label$1636$390:
	r15 = r17->bytes;
	r22 = 2;
	r22 = r21 << r22;
	r21 = *(int*)(r15 + r22);
	label$1636$394:
	r24 = r42->length;
	if( ((unsigned)r21) < ((unsigned)r24) ) goto label$1636$397;
	hl_types_ArrayBytes_Int___expand(r42,r21);
	label$1636$397:
	r15 = r42->bytes;
	r24 = 2;
	r24 = r21 << r24;
	*(int*)(r15 + r24) = r18;
	goto label$1636$378;
	label$1636$402:
	goto label$1636$363;
	label$1636$403:
	r11 = &type$1921;
	r9 = 0;
	r10 = hl_alloc_array(r11,r9);
	r23 = hl_types_ArrayObj_alloc(r10);
	r9 = 0;
	r32 = r0->boundJoints;
	label$1636$409:
	if( r32 == NULL ) hl_null_access();
	r18 = r32->length;
	if( r9 >= r18 ) goto label$1636$454;
	r18 = r32->length;
	if( ((unsigned)r9) < ((unsigned)r18) ) goto label$1636$417;
	r33 = NULL;
	goto label$1636$420;
	label$1636$417:
	r10 = r32->array;
	r7 = ((vdynamic**)(r10 + 1))[r9];
	r33 = (h3d__anim__Joint)r7;
	label$1636$420:
	++r9;
	r11 = &type$1903;
	r16 = 0;
	r10 = hl_alloc_array(r11,r16);
	r39 = hl_types_ArrayObj_alloc(r10);
	r16 = 0;
	label$1636$426:
	if( r5 == NULL ) hl_null_access();
	r20 = r5->length;
	if( r16 >= r20 ) goto label$1636$448;
	r20 = r5->length;
	if( ((unsigned)r16) < ((unsigned)r20) ) goto label$1636$434;
	r37 = NULL;
	goto label$1636$437;
	label$1636$434:
	r10 = r5->array;
	r7 = ((vdynamic**)(r10 + 1))[r16];
	r37 = (h3d__anim___Skin__Permut)r7;
	label$1636$437:
	++r16;
	if( r37 == NULL ) hl_null_access();
	r43 = r37->joints;
	if( r43 == NULL ) hl_null_access();
	r44 = NULL;
	r18 = hl_types_ArrayObj_indexOf(r43,((vdynamic*)r33),r44);
	r20 = 0;
	if( r18 < r20 ) goto label$1636$447;
	if( r39 == NULL ) hl_null_access();
	r18 = hl_types_ArrayObj_push(r39,((vdynamic*)r37));
	label$1636$447:
	goto label$1636$426;
	label$1636$448:
	if( r23 == NULL ) hl_null_access();
	r45 = hl_alloc_virtual(&type$1921);
	if( hl_vfields(r45)[0] ) *(h3d__anim__Joint*)(hl_vfields(r45)[0]) = (h3d__anim__Joint)r33; else hl_dyn_setp(r45->value,106/*j*/,&type$1871,r33);
	if( hl_vfields(r45)[1] ) *(hl__types__ArrayObj*)(hl_vfields(r45)[1]) = (hl__types__ArrayObj)r39; else hl_dyn_setp(r45->value,25084/*pl*/,&type$46,r39);
	r16 = hl_types_ArrayObj_push(r23,((vdynamic*)r45));
	goto label$1636$409;
	label$1636$454:
	if( r23 == NULL ) hl_null_access();
	r46 = &cl$2585;
	if( r46 ) goto label$1636$459;
	r36 = NULL;
	goto label$1636$460;
	label$1636$459:
	r36 = hl_alloc_closure_ptr(&type$1922,fun$2586,r46);
	label$1636$460:
	hl_types_ArrayObj_sort(r23,r36);
	r9 = 0;
	label$1636$462:
	if( r5 == NULL ) hl_null_access();
	r18 = r5->length;
	if( r9 >= r18 ) goto label$1636$482;
	r16 = r9;
	++r9;
	r18 = r5->length;
	if( ((unsigned)r16) < ((unsigned)r18) ) goto label$1636$472;
	r37 = NULL;
	goto label$1636$475;
	label$1636$472:
	r10 = r5->array;
	r7 = ((vdynamic**)(r10 + 1))[r16];
	r37 = (h3d__anim___Skin__Permut)r7;
	label$1636$475:
	if( r37 == NULL ) hl_null_access();
	r11 = &type$1871;
	r16 = 0;
	r10 = hl_alloc_array(r11,r16);
	r32 = hl_types_ArrayObj_alloc(r10);
	r37->indexedJoints = r32;
	goto label$1636$462;
	label$1636$482:
	r9 = 0;
	label$1636$483:
	if( r23 == NULL ) hl_null_access();
	r18 = r23->length;
	if( r9 >= r18 ) goto label$1636$580;
	r18 = r23->length;
	if( ((unsigned)r9) < ((unsigned)r18) ) goto label$1636$491;
	r45 = NULL;
	goto label$1636$494;
	label$1636$491:
	r10 = r23->array;
	r7 = ((vdynamic**)(r10 + 1))[r9];
	r45 = hl_to_virtual(&type$1921,(vdynamic*)r7);
	label$1636$494:
	++r9;
	if( r45 == NULL ) hl_null_access();
	r33 = hl_vfields(r45)[0] ? (*(h3d__anim__Joint*)(hl_vfields(r45)[0])) : (h3d__anim__Joint)hl_dyn_getp(r45->value,106/*j*/,&type$1871);
	if( r33 == NULL ) hl_null_access();
	r16 = -1;
	r33->splitIndex = r16;
	r16 = 0;
	r18 = r1;
	label$1636$502:
	if( r16 >= r18 ) goto label$1636$571;
	r20 = r16;
	++r16;
	r6 = true;
	r21 = 0;
	if( r45 == NULL ) hl_null_access();
	r32 = hl_vfields(r45)[1] ? (*(hl__types__ArrayObj*)(hl_vfields(r45)[1])) : (hl__types__ArrayObj)hl_dyn_getp(r45->value,25084/*pl*/,&type$46);
	label$1636$510:
	if( r32 == NULL ) hl_null_access();
	r24 = r32->length;
	if( r21 >= r24 ) goto label$1636$538;
	r22 = r21;
	++r21;
	r24 = r32->length;
	if( ((unsigned)r22) < ((unsigned)r24) ) goto label$1636$520;
	r37 = NULL;
	goto label$1636$523;
	label$1636$520:
	r10 = r32->array;
	r7 = ((vdynamic**)(r10 + 1))[r22];
	r37 = (h3d__anim___Skin__Permut)r7;
	label$1636$523:
	if( r37 == NULL ) hl_null_access();
	r39 = r37->indexedJoints;
	if( r39 == NULL ) hl_null_access();
	r24 = r39->length;
	if( ((unsigned)r20) < ((unsigned)r24) ) goto label$1636$530;
	r33 = NULL;
	goto label$1636$533;
	label$1636$530:
	r10 = r39->array;
	r7 = ((vdynamic**)(r10 + 1))[r20];
	r33 = (h3d__anim__Joint)r7;
	label$1636$533:
	if( !r33 ) goto label$1636$537;
	r47 = false;
	r6 = r47;
	goto label$1636$538;
	label$1636$537:
	goto label$1636$510;
	label$1636$538:
	if( !r6 ) goto label$1636$570;
	if( r45 == NULL ) hl_null_access();
	r33 = hl_vfields(r45)[0] ? (*(h3d__anim__Joint*)(hl_vfields(r45)[0])) : (h3d__anim__Joint)hl_dyn_getp(r45->value,106/*j*/,&type$1871);
	if( r33 == NULL ) hl_null_access();
	r33->splitIndex = r20;
	r21 = 0;
	r32 = hl_vfields(r45)[1] ? (*(hl__types__ArrayObj*)(hl_vfields(r45)[1])) : (hl__types__ArrayObj)hl_dyn_getp(r45->value,25084/*pl*/,&type$46);
	label$1636$545:
	if( r32 == NULL ) hl_null_access();
	r24 = r32->length;
	if( r21 >= r24 ) goto label$1636$569;
	r22 = r21;
	++r21;
	r24 = r32->length;
	if( ((unsigned)r22) < ((unsigned)r24) ) goto label$1636$555;
	r37 = NULL;
	goto label$1636$558;
	label$1636$555:
	r10 = r32->array;
	r7 = ((vdynamic**)(r10 + 1))[r22];
	r37 = (h3d__anim___Skin__Permut)r7;
	label$1636$558:
	if( r37 == NULL ) hl_null_access();
	r39 = r37->indexedJoints;
	if( r39 == NULL ) hl_null_access();
	if( r45 == NULL ) hl_null_access();
	r33 = hl_vfields(r45)[0] ? (*(h3d__anim__Joint*)(hl_vfields(r45)[0])) : (h3d__anim__Joint)hl_dyn_getp(r45->value,106/*j*/,&type$1871);
	r24 = r39->length;
	if( ((unsigned)r20) < ((unsigned)r24) ) goto label$1636$566;
	hl_types_ArrayObj___expand(r39,r20);
	label$1636$566:
	r10 = r39->array;
	((h3d__anim__Joint*)(r10 + 1))[r20] = r33;
	goto label$1636$545;
	label$1636$569:
	goto label$1636$571;
	label$1636$570:
	goto label$1636$502;
	label$1636$571:
	if( r45 == NULL ) hl_null_access();
	r33 = hl_vfields(r45)[0] ? (*(h3d__anim__Joint*)(hl_vfields(r45)[0])) : (h3d__anim__Joint)hl_dyn_getp(r45->value,106/*j*/,&type$1871);
	if( r33 == NULL ) hl_null_access();
	r16 = r33->splitIndex;
	r18 = 0;
	if( r16 >= r18 ) goto label$1636$579;
	r48 = (String)global$476;
	hl_throw((vdynamic*)r48);
	label$1636$579:
	goto label$1636$483;
	label$1636$580:
	r11 = &type$1924;
	r9 = 0;
	r10 = hl_alloc_array(r11,r9);
	r32 = hl_types_ArrayObj_alloc(r10);
	r0->splitJoints = r32;
	r9 = 0;
	label$1636$586:
	if( r5 == NULL ) hl_null_access();
	r18 = r5->length;
	if( r9 >= r18 ) goto label$1636$645;
	r18 = r5->length;
	if( ((unsigned)r9) < ((unsigned)r18) ) goto label$1636$594;
	r37 = NULL;
	goto label$1636$597;
	label$1636$594:
	r10 = r5->array;
	r7 = ((vdynamic**)(r10 + 1))[r9];
	r37 = (h3d__anim___Skin__Permut)r7;
	label$1636$597:
	++r9;
	r11 = &type$1871;
	r16 = 0;
	r10 = hl_alloc_array(r11,r16);
	r32 = hl_types_ArrayObj_alloc(r10);
	r16 = 0;
	if( r37 == NULL ) hl_null_access();
	r39 = r37->indexedJoints;
	if( r39 == NULL ) hl_null_access();
	r18 = r39->length;
	label$1636$607:
	if( r16 >= r18 ) goto label$1636$636;
	if( r37 == NULL ) hl_null_access();
	r39 = r37->indexedJoints;
	if( r39 == NULL ) hl_null_access();
	r20 = r16;
	++r16;
	r21 = r39->length;
	if( ((unsigned)r20) < ((unsigned)r21) ) goto label$1636$618;
	r33 = NULL;
	goto label$1636$621;
	label$1636$618:
	r10 = r39->array;
	r7 = ((vdynamic**)(r10 + 1))[r20];
	r33 = (h3d__anim__Joint)r7;
	label$1636$621:
	if( r33 ) goto label$1636$633;
	r39 = r0->boundJoints;
	if( r39 == NULL ) hl_null_access();
	r20 = 0;
	r21 = r39->length;
	if( ((unsigned)r20) < ((unsigned)r21) ) goto label$1636$629;
	r34 = NULL;
	goto label$1636$632;
	label$1636$629:
	r10 = r39->array;
	r7 = ((vdynamic**)(r10 + 1))[r20];
	r34 = (h3d__anim__Joint)r7;
	label$1636$632:
	r33 = r34;
	label$1636$633:
	if( r32 == NULL ) hl_null_access();
	r20 = hl_types_ArrayObj_push(r32,((vdynamic*)r33));
	goto label$1636$607;
	label$1636$636:
	r39 = r0->splitJoints;
	if( r39 == NULL ) hl_null_access();
	r49 = hl_alloc_virtual(&type$1924);
	if( r37 == NULL ) hl_null_access();
	r16 = r37->material;
	if( hl_vfields(r49)[1] ) *(int*)(hl_vfields(r49)[1]) = (int)r16; else hl_dyn_seti(r49->value,-257598297/*material*/,&type$3,r16);
	if( hl_vfields(r49)[0] ) *(hl__types__ArrayObj*)(hl_vfields(r49)[0]) = (hl__types__ArrayObj)r32; else hl_dyn_setp(r49->value,-251009446/*joints*/,&type$46,r32);
	r16 = hl_types_ArrayObj_push(r39,((vdynamic*)r49));
	goto label$1636$586;
	label$1636$645:
	r9 = 0;
	r17 = r0->vertexJoints;
	if( r17 == NULL ) hl_null_access();
	r16 = r17->length;
	label$1636$649:
	if( r9 >= r16 ) goto label$1636$684;
	r18 = r9;
	++r9;
	r17 = r0->vertexJoints;
	if( r17 == NULL ) hl_null_access();
	r32 = r0->boundJoints;
	if( r32 == NULL ) hl_null_access();
	r42 = r0->vertexJoints;
	if( r42 == NULL ) hl_null_access();
	r22 = r42->length;
	if( ((unsigned)r18) < ((unsigned)r22) ) goto label$1636$663;
	r21 = 0;
	goto label$1636$667;
	label$1636$663:
	r15 = r42->bytes;
	r22 = 2;
	r22 = r18 << r22;
	r21 = *(int*)(r15 + r22);
	label$1636$667:
	r22 = r32->length;
	if( ((unsigned)r21) < ((unsigned)r22) ) goto label$1636$671;
	r33 = NULL;
	goto label$1636$674;
	label$1636$671:
	r10 = r32->array;
	r7 = ((vdynamic**)(r10 + 1))[r21];
	r33 = (h3d__anim__Joint)r7;
	label$1636$674:
	if( r33 == NULL ) hl_null_access();
	r21 = r33->splitIndex;
	r22 = r17->length;
	if( ((unsigned)r18) < ((unsigned)r22) ) goto label$1636$679;
	hl_types_ArrayBytes_Int___expand(r17,r18);
	label$1636$679:
	r15 = r17->bytes;
	r22 = 2;
	r22 = r18 << r22;
	*(int*)(r15 + r22) = r21;
	goto label$1636$649;
	label$1636$684:
	r6 = true;
	return r6;
}

void h3d_anim_Skin_new(h3d__anim__Skin r0,String r1,int r2,int r3) {
	hl__types__ArrayObj r14;
	hl_type *r16;
	hl__types__ArrayBytes_Int r7;
	hl__types__ArrayBytes_Float r12;
	double r13;
	vdynamic *r10;
	varray *r15;
	vbyte *r8;
	int r4, r6, r9, r11;
	r0->name = r1;
	r0->vertexCount = r2;
	r0->bonesPerVertex = r3;
	r6 = 0;
	if( r6 >= r2 ) goto label$1639$52;
	r4 = r2 * r3;
	r6 = 0;
	r8 = hl_alloc_bytes(r6);
	r6 = 0;
	r6 = 0;
	r7 = hl_types_ArrayBase_allocI32(r8,r6);
	r9 = 0;
	if( r9 >= r4 ) goto label$1639$25;
	if( r7 == NULL ) hl_null_access();
	r9 = 1;
	r6 = r4 - r9;
	r10 = NULL;
	r9 = (int)hl_dyn_casti(&r10,&type$9,&type$3);
	r11 = r7->length;
	if( ((unsigned)r6) < ((unsigned)r11) ) goto label$1639$21;
	hl_types_ArrayBytes_Int___expand(r7,r6);
	label$1639$21:
	r8 = r7->bytes;
	r11 = 2;
	r11 = r6 << r11;
	*(int*)(r8 + r11) = r9;
	label$1639$25:
	r0->vertexJoints = r7;
	r6 = r2 * r3;
	r9 = 0;
	r8 = hl_alloc_bytes(r9);
	r9 = 0;
	r9 = 0;
	r12 = hl_types_ArrayBase_allocF64(r8,r9);
	r11 = 0;
	if( r11 >= r6 ) goto label$1639$46;
	if( r12 == NULL ) hl_null_access();
	r11 = 1;
	r9 = r6 - r11;
	r10 = NULL;
	r13 = (double)hl_dyn_castd(&r10,&type$9);
	r11 = r12->length;
	if( ((unsigned)r9) < ((unsigned)r11) ) goto label$1639$42;
	hl_types_ArrayBytes_Float___expand(r12,r9);
	label$1639$42:
	r8 = r12->bytes;
	r11 = 3;
	r11 = r9 << r11;
	*(double*)(r8 + r11) = r13;
	label$1639$46:
	r0->vertexWeights = r12;
	r16 = &type$46;
	r9 = 0;
	r15 = hl_alloc_array(r16,r9);
	r14 = hl_types_ArrayObj_alloc(r15);
	r0->envelop = r14;
	label$1639$52:
	return;
}

