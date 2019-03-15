﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void h3d_anim_LinearAnimation_addCurve(h3d__anim__LinearAnimation r0,String r1,hl__types__ArrayObj r2,bool r3,bool r4) {
	hl__types__ArrayObj r7;
	h3d__anim__LinearObject r5;
	int r8;
	r5 = (h3d__anim__LinearObject)hl_alloc_obj(h3d__anim__LinearObject__val);
	h3d_anim_LinearObject_new(r5,r1);
	r5->frames = r2;
	r5->hasRotation = r3;
	r5->hasScale = r4;
	r7 = r0->objects;
	if( r7 == NULL ) hl_null_access();
	r8 = hl_types_ArrayObj_push(r7,((vdynamic*)r5));
	return;
}

void h3d_anim_LinearAnimation_addAlphaCurve(h3d__anim__LinearAnimation r0,String r1,hl__types__ArrayBytes_Float r2) {
	hl__types__ArrayObj r6;
	h3d__anim__LinearObject r3;
	int r5;
	r3 = (h3d__anim__LinearObject)hl_alloc_obj(h3d__anim__LinearObject__val);
	h3d_anim_LinearObject_new(r3,r1);
	r3->alphas = r2;
	r6 = r0->objects;
	if( r6 == NULL ) hl_null_access();
	r5 = hl_types_ArrayObj_push(r6,((vdynamic*)r3));
	return;
}

void h3d_anim_LinearAnimation_addUVCurve(h3d__anim__LinearAnimation r0,String r1,hl__types__ArrayBytes_Float r2) {
	hl__types__ArrayObj r6;
	h3d__anim__LinearObject r3;
	int r5;
	r3 = (h3d__anim__LinearObject)hl_alloc_obj(h3d__anim__LinearObject__val);
	h3d_anim_LinearObject_new(r3,r1);
	r3->uvs = r2;
	r6 = r0->objects;
	if( r6 == NULL ) hl_null_access();
	r5 = hl_types_ArrayObj_push(r6,((vdynamic*)r3));
	return;
}

void h3d_anim_LinearAnimation_addPropCurve(h3d__anim__LinearAnimation r0,String r1,String r2,hl__types__ArrayBytes_Float r3) {
	hl__types__ArrayObj r7;
	h3d__anim__LinearObject r4;
	int r6;
	r4 = (h3d__anim__LinearObject)hl_alloc_obj(h3d__anim__LinearObject__val);
	h3d_anim_LinearObject_new(r4,r1);
	r4->propName = r2;
	r4->propValues = r3;
	r7 = r0->objects;
	if( r7 == NULL ) hl_null_access();
	r6 = hl_types_ArrayObj_push(r7,((vdynamic*)r4));
	return;
}

vdynamic* h3d_anim_LinearAnimation_getPropValue(h3d__anim__LinearAnimation r0,String r1,String r2) {
	String r9;
	hl__types__ArrayObj r4;
	h3d__anim__LinearObject r6;
	double r10;
	vdynamic *r7, *r11;
	varray *r8;
	int r3, r5;
	r3 = 0;
	r4 = r0->objects;
	label$2563$2:
	if( r4 == NULL ) hl_null_access();
	r5 = r4->length;
	if( r3 >= r5 ) goto label$2563$23;
	r5 = r4->length;
	if( ((unsigned)r3) < ((unsigned)r5) ) goto label$2563$10;
	r6 = NULL;
	goto label$2563$13;
	label$2563$10:
	r8 = r4->array;
	r7 = ((vdynamic**)(r8 + 1))[r3];
	r6 = (h3d__anim__LinearObject)r7;
	label$2563$13:
	++r3;
	if( r6 == NULL ) hl_null_access();
	r9 = r6->objectName;
	if( r9 != r1 && (!r9 || !r1 || String___compare(r9,(vdynamic*)r1) != 0) ) goto label$2563$22;
	r9 = r6->propName;
	if( r9 != r2 && (!r9 || !r2 || String___compare(r9,(vdynamic*)r2) != 0) ) goto label$2563$22;
	r10 = r6->propCurrentValue;
	r11 = hl_alloc_dynamic(&type$6);
	r11->v.d = r10;
	return r11;
	label$2563$22:
	goto label$2563$2;
	label$2563$23:
	r11 = NULL;
	return r11;
}

hl__types__ArrayObj h3d_anim_LinearAnimation_getFrames(h3d__anim__LinearAnimation r0) {
	hl__types__ArrayObj r1;
	r1 = r0->objects;
	return r1;
}

h3d__anim__Animation h3d_anim_LinearAnimation_clone(h3d__anim__LinearAnimation r0,h3d__anim__Animation r1) {
	h3d__anim__$LinearAnimation r8;
	String r5;
	bool r9;
	double r7;
	h3d__anim__LinearAnimation r4;
	h3d__anim__Animation r3;
	int r6;
	if( r1 ) goto label$2565$7;
	r4 = (h3d__anim__LinearAnimation)hl_alloc_obj(h3d__anim__LinearAnimation__val);
	r5 = r0->name;
	r6 = r0->frameCount;
	r7 = r0->sampling;
	h3d_anim_LinearAnimation_new(r4,r5,r6,r7);
	r1 = ((h3d__anim__Animation)r4);
	label$2565$7:
	r3 = h3d_anim_Animation_clone(((h3d__anim__Animation)r0),r1);
	r8 = (h3d__anim__$LinearAnimation)global$471;
	r9 = hl_BaseType_check(((hl__BaseType)r8),((vdynamic*)r1));
	if( !r9 ) goto label$2565$13;
	r4 = (h3d__anim__LinearAnimation)r1;
	goto label$2565$14;
	label$2565$13:
	r4 = NULL;
	label$2565$14:
	if( r4 == NULL ) hl_null_access();
	r5 = r0->resPath;
	r4->resPath = r5;
	return r1;
}

int h3d_anim_LinearAnimation_endFrame(h3d__anim__LinearAnimation r0) {
	bool r1;
	int r2, r3;
	r1 = r0->loop;
	if( !r1 ) goto label$2566$4;
	r2 = r0->frameCount;
	return r2;
	label$2566$4:
	r2 = r0->frameCount;
	r3 = 1;
	r2 = r2 - r3;
	return r2;
}

void h3d_anim_LinearAnimation_initInstance(h3d__anim__LinearAnimation r0) {
	String r16, r17;
	hl__types__ArrayObj r2;
	h3d__anim__LinearObject r6;
	bool r15;
	h3d__scene__Mesh r14;
	h3d__scene__$Mesh r13;
	hl__types__ArrayBytes_Float r9;
	vclosure *r19, *r20;
	double r10;
	vdynamic *r7;
	h3d__Matrix r18;
	h3d__scene__Object r12;
	vbyte *r11;
	varray *r8;
	int r3, r4, r5;
	h3d_anim_Animation_initInstance(((h3d__anim__Animation)r0));
	r2 = r0->objects;
	r3 = 0;
	label$2567$3:
	if( r2 == NULL ) hl_null_access();
	r5 = r2->length;
	if( r3 >= r5 ) goto label$2567$59;
	r5 = r2->length;
	if( ((unsigned)r3) < ((unsigned)r5) ) goto label$2567$11;
	r6 = NULL;
	goto label$2567$14;
	label$2567$11:
	r8 = r2->array;
	r7 = ((vdynamic**)(r8 + 1))[r3];
	r6 = (h3d__anim__LinearObject)r7;
	label$2567$14:
	++r3;
	if( r6 == NULL ) hl_null_access();
	r9 = r6->propValues;
	if( !r9 ) goto label$2567$31;
	r9 = r6->propValues;
	if( r9 == NULL ) hl_null_access();
	r4 = 0;
	r5 = r9->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$2567$25;
	r10 = 0.;
	goto label$2567$29;
	label$2567$25:
	r11 = r9->bytes;
	r5 = 3;
	r5 = r4 << r5;
	r10 = *(double*)(r11 + r5);
	label$2567$29:
	r6->propCurrentValue = r10;
	goto label$2567$3;
	label$2567$31:
	r9 = r6->alphas;
	if( !r9 ) goto label$2567$47;
	r12 = r6->targetObject;
	if( !r12 ) goto label$2567$43;
	r12 = r6->targetObject;
	r13 = (h3d__scene__$Mesh)global$119;
	r15 = hl_BaseType_check(((hl__BaseType)r13),((vdynamic*)r12));
	if( !r15 ) goto label$2567$41;
	r14 = (h3d__scene__Mesh)r12;
	goto label$2567$42;
	label$2567$41:
	r14 = NULL;
	label$2567$42:
	if( r14 ) goto label$2567$47;
	label$2567$43:
	r16 = r6->objectName;
	r17 = (String)global$472;
	r16 = String___add__(r16,r17);
	hl_throw((vdynamic*)r16);
	label$2567$47:
	r9 = r6->uvs;
	if( r9 ) goto label$2567$51;
	r9 = r6->alphas;
	if( !r9 ) goto label$2567$52;
	label$2567$51:
	goto label$2567$3;
	label$2567$52:
	r18 = (h3d__Matrix)hl_alloc_obj(h3d__Matrix__val);
	h3d_Matrix_new(r18);
	r6->matrix = r18;
	r18 = r6->matrix;
	if( r18 == NULL ) hl_null_access();
	h3d_Matrix_identity(r18);
	goto label$2567$3;
	label$2567$59:
	r19 = hl_alloc_closure_ptr(&type$1897,h3d_anim_LinearAnimation_sortByFrameCountDesc,r0);
	if( r19 ) goto label$2567$63;
	r20 = NULL;
	goto label$2567$64;
	label$2567$63:
	r20 = hl_alloc_closure_ptr(&type$1894,fun$2571,r19);
	label$2567$64:
	hl_types_ArrayObj_sort(r2,r20);
	return;
}

int h3d_anim_LinearAnimation_sortByFrameCountDesc(h3d__anim__LinearAnimation r0,h3d__anim__LinearObject r1,h3d__anim__LinearObject r2) {
	hl__types__ArrayObj r4;
	int r3, r5;
	if( r2 == NULL ) hl_null_access();
	r4 = r2->frames;
	if( r4 ) goto label$2568$5;
	r3 = 10;
	goto label$2568$8;
	label$2568$5:
	r4 = r2->frames;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->length;
	label$2568$8:
	if( r1 == NULL ) hl_null_access();
	r4 = r1->frames;
	if( r4 ) goto label$2568$13;
	r5 = 10;
	goto label$2568$16;
	label$2568$13:
	r4 = r1->frames;
	if( r4 == NULL ) hl_null_access();
	r5 = r4->length;
	label$2568$16:
	r3 = r3 - r5;
	return r3;
}

double h3d_anim_LinearAnimation_uvLerp(h3d__anim__LinearAnimation r0,double r1,double r2,double r3) {
	double r4, r5, r6;
	int r7;
	r5 = 1.;
	r4 = fmod(r1,r5);
	r1 = r4;
	r5 = 1.;
	r4 = fmod(r2,r5);
	r2 = r4;
	r6 = 0.5;
	r5 = r2 - r6;
	if( !(r1 < r5) ) goto label$2569$12;
	r4 = 1.;
	r1 = r1 + r4;
	goto label$2569$17;
	label$2569$12:
	r6 = 0.5;
	r5 = r2 + r6;
	if( !(r5 < r1) ) goto label$2569$17;
	r4 = 1.;
	r1 = r1 - r4;
	label$2569$17:
	r7 = 1;
	r5 = (double)r7;
	r5 = r5 - r3;
	r4 = r1 * r5;
	r5 = r2 * r3;
	r4 = r4 + r5;
	return r4;
}

void h3d_anim_LinearAnimation_sync(h3d__anim__LinearAnimation r0,bool* r1) {
	hl__types__ArrayObj r16, r18;
	h3d__shader__$UVDelta r34;
	venum *r26, *r27, *r41;
	h3d__anim__LinearObject r19;
	bool r2, r6;
	h3d__mat__Material r24;
	h3d__scene__Skin r22;
	h3d__scene__Mesh r25;
	hxsl__Shader r32;
	h3d__shader__UVDelta r35, r36;
	h3d__shader__BaseMesh r29;
	h3d__Vector r28;
	h3d__mat__Pass r33;
	hl__types__ArrayBytes_Float r23;
	double r4, r5, r12, r13, r15, r31, r43, r44, r45, r46, r53, r54, r55, r56, r57, r58, r59, r60, r61, r62, r63, r64;
	h3d__anim__LinearFrame r49, r50;
	double *r37, *r38, *r39, *r40;
	vdynamic *r7;
	h3d__Matrix r51, r52;
	h3d__mat__Texture r42;
	vbyte *r30;
	h3d__scene__Object r21;
	varray *r20;
	int r8, r9, r10, r11, r14, r17, r47, r48;
	if( r1 ) goto label$2570$3;
	r2 = false;
	goto label$2570$4;
	label$2570$3:
	r2 = *r1;
	label$2570$4:
	r4 = r0->frame;
	r5 = r0->syncFrame;
	if( r4 != r5 ) goto label$2570$9;
	if( r2 ) goto label$2570$9;
	return;
	label$2570$9:
	r4 = r0->frame;
	r8 = (int)r4;
	r10 = h3d_anim_LinearAnimation_endFrame(r0);
	if( r8 != r10 ) goto label$2570$14;
	--r8;
	label$2570$14:
	r9 = r8;
	r11 = 1;
	r10 = r8 + r11;
	r11 = r0->frameCount;
	r10 = r11 == 0 ? 0 : r10 % r11;
	r5 = r0->frame;
	r12 = (double)r8;
	r5 = r5 - r12;
	r11 = 1;
	r12 = (double)r11;
	r12 = r12 - r5;
	r14 = 0;
	if( r8 >= r14 ) goto label$2570$31;
	r11 = 0;
	r10 = r11;
	r9 = r11;
	goto label$2570$49;
	label$2570$31:
	r13 = r0->frame;
	r11 = r0->frameCount;
	r15 = (double)r11;
	if( !(r13 >= r15) ) goto label$2570$41;
	r11 = r0->frameCount;
	r14 = 1;
	r11 = r11 - r14;
	r10 = r11;
	r9 = r11;
	goto label$2570$49;
	label$2570$41:
	r6 = r0->loop;
	if( r6 ) goto label$2570$49;
	r14 = 0;
	if( r10 != r14 ) goto label$2570$49;
	r11 = r0->frameCount;
	r14 = 1;
	r11 = r11 - r14;
	r10 = r11;
	label$2570$49:
	r13 = r0->frame;
	r0->syncFrame = r13;
	if( !r2 ) goto label$2570$54;
	r6 = false;
	r0->isSync = r6;
	label$2570$54:
	r11 = 0;
	r16 = r0->objects;
	label$2570$56:
	if( r16 == NULL ) hl_null_access();
	r17 = r16->length;
	if( r11 >= r17 ) goto label$2570$610;
	r17 = r16->length;
	if( ((unsigned)r11) < ((unsigned)r17) ) goto label$2570$64;
	r19 = NULL;
	goto label$2570$67;
	label$2570$64:
	r20 = r16->array;
	r7 = ((vdynamic**)(r20 + 1))[r11];
	r19 = (h3d__anim__LinearObject)r7;
	label$2570$67:
	++r11;
	if( r19 == NULL ) hl_null_access();
	r21 = r19->targetObject;
	if( r21 ) goto label$2570$74;
	r22 = r19->targetSkin;
	if( r22 ) goto label$2570$74;
	goto label$2570$56;
	label$2570$74:
	r23 = r19->alphas;
	if( !r23 ) goto label$2570$116;
	r21 = r19->targetObject;
	if( r21 == NULL ) hl_null_access();
	r25 = h3d_scene_Object_toMesh(r21);
	if( r25 == NULL ) hl_null_access();
	r24 = r25->material;
	if( r24 == NULL ) hl_null_access();
	r26 = r24->blendMode;
	r27 = (venum*)global$473;
	if( r26 != r27 ) goto label$2570$87;
	r26 = (venum*)global$396;
	r26 = h3d_mat_Material_set_blendMode(r24,r26);
	label$2570$87:
	r29 = r24->mshader;
	if( r29 == NULL ) hl_null_access();
	r28 = r29->color__;
	if( r28 == NULL ) hl_null_access();
	r23 = r19->alphas;
	if( r23 == NULL ) hl_null_access();
	r17 = r23->length;
	if( ((unsigned)r9) < ((unsigned)r17) ) goto label$2570$97;
	r13 = 0.;
	goto label$2570$101;
	label$2570$97:
	r30 = r23->bytes;
	r17 = 3;
	r17 = r9 << r17;
	r13 = *(double*)(r30 + r17);
	label$2570$101:
	r13 = r13 * r12;
	r23 = r19->alphas;
	if( r23 == NULL ) hl_null_access();
	r17 = r23->length;
	if( ((unsigned)r10) < ((unsigned)r17) ) goto label$2570$108;
	r15 = 0.;
	goto label$2570$112;
	label$2570$108:
	r30 = r23->bytes;
	r17 = 3;
	r17 = r10 << r17;
	r15 = *(double*)(r30 + r17);
	label$2570$112:
	r15 = r15 * r5;
	r13 = r13 + r15;
	r28->w = r13;
	goto label$2570$56;
	label$2570$116:
	r23 = r19->uvs;
	if( !r23 ) goto label$2570$251;
	r21 = r19->targetObject;
	if( r21 == NULL ) hl_null_access();
	r25 = h3d_scene_Object_toMesh(r21);
	if( r25 == NULL ) hl_null_access();
	r24 = r25->material;
	if( r24 == NULL ) hl_null_access();
	r33 = r24->passes;
	if( r33 == NULL ) hl_null_access();
	r34 = (h3d__shader__$UVDelta)global$474;
	r32 = h3d_mat_Pass_getShader(r33,((hl__Class)r34));
	r35 = (h3d__shader__UVDelta)r32;
	if( r35 ) goto label$2570$145;
	r33 = r24->passes;
	if( r33 == NULL ) hl_null_access();
	r36 = (h3d__shader__UVDelta)hl_alloc_obj(h3d__shader__UVDelta__val);
	r37 = NULL;
	r38 = NULL;
	r39 = NULL;
	r40 = NULL;
	h3d_shader_UVDelta_new(r36,r37,r38,r39,r40);
	r32 = h3d_mat_Pass_addShader(r33,((hxsl__Shader)r36));
	r36 = (h3d__shader__UVDelta)r32;
	r35 = r36;
	r42 = h3d_mat_Material_get_texture(r24);
	if( r42 == NULL ) hl_null_access();
	r41 = (venum*)global$426;
	r41 = h3d_mat_Texture_set_wrap(r42,r41);
	label$2570$145:
	r23 = r19->uvs;
	if( r23 == NULL ) hl_null_access();
	r17 = 1;
	r14 = r9 << r17;
	r17 = r23->length;
	if( ((unsigned)r14) < ((unsigned)r17) ) goto label$2570$153;
	r13 = 0.;
	goto label$2570$157;
	label$2570$153:
	r30 = r23->bytes;
	r17 = 3;
	r17 = r14 << r17;
	r13 = *(double*)(r30 + r17);
	label$2570$157:
	r23 = r19->uvs;
	if( r23 == NULL ) hl_null_access();
	r17 = 1;
	r14 = r10 << r17;
	r17 = r23->length;
	if( ((unsigned)r14) < ((unsigned)r17) ) goto label$2570$165;
	r15 = 0.;
	goto label$2570$169;
	label$2570$165:
	r30 = r23->bytes;
	r17 = 3;
	r17 = r14 << r17;
	r15 = *(double*)(r30 + r17);
	label$2570$169:
	r43 = 1.;
	r31 = fmod(r13,r43);
	r13 = r31;
	r43 = 1.;
	r31 = fmod(r15,r43);
	r15 = r31;
	r44 = 0.5;
	r43 = r15 - r44;
	if( !(r13 < r43) ) goto label$2570$181;
	r31 = 1.;
	r13 = r13 + r31;
	goto label$2570$186;
	label$2570$181:
	r44 = 0.5;
	r43 = r15 + r44;
	if( !(r43 < r13) ) goto label$2570$186;
	r31 = 1.;
	r13 = r13 - r31;
	label$2570$186:
	if( r35 == NULL ) hl_null_access();
	r28 = r35->uvDelta__;
	if( r28 == NULL ) hl_null_access();
	r14 = 1;
	r43 = (double)r14;
	r43 = r43 - r5;
	r31 = r13 * r43;
	r43 = r15 * r5;
	r31 = r31 + r43;
	r28->x = r31;
	r23 = r19->uvs;
	if( r23 == NULL ) hl_null_access();
	r17 = 1;
	r14 = r9 << r17;
	r17 = 1;
	r14 = r14 | r17;
	r17 = r23->length;
	if( ((unsigned)r14) < ((unsigned)r17) ) goto label$2570$206;
	r31 = 0.;
	goto label$2570$210;
	label$2570$206:
	r30 = r23->bytes;
	r17 = 3;
	r17 = r14 << r17;
	r31 = *(double*)(r30 + r17);
	label$2570$210:
	r23 = r19->uvs;
	if( r23 == NULL ) hl_null_access();
	r17 = 1;
	r14 = r10 << r17;
	r17 = 1;
	r14 = r14 | r17;
	r17 = r23->length;
	if( ((unsigned)r14) < ((unsigned)r17) ) goto label$2570$220;
	r43 = 0.;
	goto label$2570$224;
	label$2570$220:
	r30 = r23->bytes;
	r17 = 3;
	r17 = r14 << r17;
	r43 = *(double*)(r30 + r17);
	label$2570$224:
	r45 = 1.;
	r44 = fmod(r31,r45);
	r31 = r44;
	r45 = 1.;
	r44 = fmod(r43,r45);
	r43 = r44;
	r46 = 0.5;
	r45 = r43 - r46;
	if( !(r31 < r45) ) goto label$2570$236;
	r44 = 1.;
	r31 = r31 + r44;
	goto label$2570$241;
	label$2570$236:
	r46 = 0.5;
	r45 = r43 + r46;
	if( !(r45 < r31) ) goto label$2570$241;
	r44 = 1.;
	r31 = r31 - r44;
	label$2570$241:
	r28 = r35->uvDelta__;
	if( r28 == NULL ) hl_null_access();
	r14 = 1;
	r45 = (double)r14;
	r45 = r45 - r5;
	r44 = r31 * r45;
	r45 = r43 * r5;
	r44 = r44 + r45;
	r28->y = r44;
	goto label$2570$56;
	label$2570$251:
	r23 = r19->propValues;
	if( !r23 ) goto label$2570$278;
	r23 = r19->propValues;
	if( r23 == NULL ) hl_null_access();
	r17 = r23->length;
	if( ((unsigned)r9) < ((unsigned)r17) ) goto label$2570$259;
	r13 = 0.;
	goto label$2570$263;
	label$2570$259:
	r30 = r23->bytes;
	r17 = 3;
	r17 = r9 << r17;
	r13 = *(double*)(r30 + r17);
	label$2570$263:
	r13 = r13 * r12;
	r23 = r19->propValues;
	if( r23 == NULL ) hl_null_access();
	r17 = r23->length;
	if( ((unsigned)r10) < ((unsigned)r17) ) goto label$2570$270;
	r15 = 0.;
	goto label$2570$274;
	label$2570$270:
	r30 = r23->bytes;
	r17 = 3;
	r17 = r10 << r17;
	r15 = *(double*)(r30 + r17);
	label$2570$274:
	r15 = r15 * r5;
	r13 = r13 + r15;
	r19->propCurrentValue = r13;
	goto label$2570$56;
	label$2570$278:
	r14 = r9;
	r17 = r10;
	r18 = r19->frames;
	if( r18 == NULL ) hl_null_access();
	r47 = r18->length;
	r48 = 1;
	if( r47 != r48 ) goto label$2570$291;
	r6 = r0->isSync;
	if( !r6 ) goto label$2570$288;
	goto label$2570$610;
	label$2570$288:
	r47 = 0;
	r17 = r47;
	r14 = r47;
	label$2570$291:
	r18 = r19->frames;
	if( r18 == NULL ) hl_null_access();
	r48 = r18->length;
	if( ((unsigned)r14) < ((unsigned)r48) ) goto label$2570$297;
	r49 = NULL;
	goto label$2570$300;
	label$2570$297:
	r20 = r18->array;
	r7 = ((vdynamic**)(r20 + 1))[r14];
	r49 = (h3d__anim__LinearFrame)r7;
	label$2570$300:
	r18 = r19->frames;
	if( r18 == NULL ) hl_null_access();
	r48 = r18->length;
	if( ((unsigned)r17) < ((unsigned)r48) ) goto label$2570$306;
	r50 = NULL;
	goto label$2570$309;
	label$2570$306:
	r20 = r18->array;
	r7 = ((vdynamic**)(r20 + 1))[r17];
	r50 = (h3d__anim__LinearFrame)r7;
	label$2570$309:
	r51 = r19->matrix;
	if( r51 == NULL ) hl_null_access();
	if( r49 == NULL ) hl_null_access();
	r13 = r49->tx;
	r13 = r13 * r12;
	if( r50 == NULL ) hl_null_access();
	r15 = r50->tx;
	r15 = r15 * r5;
	r13 = r13 + r15;
	r51->_41 = r13;
	r13 = r49->ty;
	r13 = r13 * r12;
	r15 = r50->ty;
	r15 = r15 * r5;
	r13 = r13 + r15;
	r51->_42 = r13;
	r13 = r49->tz;
	r13 = r13 * r12;
	r15 = r50->tz;
	r15 = r15 * r5;
	r13 = r13 + r15;
	r51->_43 = r13;
	r6 = r19->hasRotation;
	if( !r6 ) goto label$2570$537;
	r13 = r49->qx;
	r15 = r50->qx;
	r13 = r13 * r15;
	r15 = r49->qy;
	r31 = r50->qy;
	r15 = r15 * r31;
	r13 = r13 + r15;
	r15 = r49->qz;
	r31 = r50->qz;
	r15 = r15 * r31;
	r13 = r13 + r15;
	r15 = r49->qw;
	r31 = r50->qw;
	r15 = r15 * r31;
	r13 = r13 + r15;
	r47 = 0;
	r15 = (double)r47;
	if( !(r13 < r15) ) goto label$2570$353;
	r13 = -r5;
	goto label$2570$354;
	label$2570$353:
	r13 = r5;
	label$2570$354:
	r15 = r49->qx;
	r15 = r15 * r12;
	r31 = r50->qx;
	r31 = r31 * r13;
	r15 = r15 + r31;
	r31 = r49->qy;
	r31 = r31 * r12;
	r43 = r50->qy;
	r43 = r43 * r13;
	r31 = r31 + r43;
	r43 = r49->qz;
	r43 = r43 * r12;
	r44 = r50->qz;
	r44 = r44 * r13;
	r43 = r43 + r44;
	r44 = r49->qw;
	r44 = r44 * r12;
	r45 = r50->qw;
	r45 = r45 * r13;
	r44 = r44 + r45;
	r47 = 1;
	r45 = (double)r47;
	r46 = r15 * r15;
	r53 = r31 * r31;
	r46 = r46 + r53;
	r53 = r43 * r43;
	r46 = r46 + r53;
	r53 = r44 * r44;
	r46 = r46 + r53;
	r46 = hl_math_sqrt(r46);
	r45 = r45 / r46;
	r46 = r15 * r45;
	r15 = r46;
	r46 = r31 * r45;
	r31 = r46;
	r46 = r43 * r45;
	r43 = r46;
	r46 = r44 * r45;
	r44 = r46;
	if( !r2 ) goto label$2570$429;
	r51->_12 = r15;
	r51->_13 = r31;
	r51->_21 = r43;
	r51->_23 = r44;
	r6 = r19->hasScale;
	if( !r6 ) goto label$2570$419;
	r46 = r49->sx;
	r46 = r46 * r12;
	r53 = r50->sx;
	r53 = r53 * r5;
	r46 = r46 + r53;
	r51->_11 = r46;
	r46 = r49->sy;
	r46 = r46 * r12;
	r53 = r50->sy;
	r53 = r53 * r5;
	r46 = r46 + r53;
	r51->_22 = r46;
	r46 = r49->sz;
	r46 = r46 * r12;
	r53 = r50->sz;
	r53 = r53 * r5;
	r46 = r46 + r53;
	r51->_33 = r46;
	goto label$2570$428;
	label$2570$419:
	r47 = 1;
	r46 = (double)r47;
	r51->_11 = r46;
	r47 = 1;
	r46 = (double)r47;
	r51->_22 = r46;
	r47 = 1;
	r46 = (double)r47;
	r51->_33 = r46;
	label$2570$428:
	goto label$2570$536;
	label$2570$429:
	r46 = r15 * r15;
	r53 = r15 * r31;
	r54 = r15 * r43;
	r55 = r15 * r44;
	r56 = r31 * r31;
	r57 = r31 * r43;
	r58 = r31 * r44;
	r59 = r43 * r43;
	r60 = r43 * r44;
	r47 = 1;
	r61 = (double)r47;
	r47 = 2;
	r62 = (double)r47;
	r63 = r56 + r59;
	r62 = r62 * r63;
	r61 = r61 - r62;
	r51->_11 = r61;
	r47 = 2;
	r61 = (double)r47;
	r62 = r53 + r60;
	r61 = r61 * r62;
	r51->_12 = r61;
	r47 = 2;
	r61 = (double)r47;
	r62 = r54 - r58;
	r61 = r61 * r62;
	r51->_13 = r61;
	r47 = 2;
	r61 = (double)r47;
	r62 = r53 - r60;
	r61 = r61 * r62;
	r51->_21 = r61;
	r47 = 1;
	r61 = (double)r47;
	r47 = 2;
	r62 = (double)r47;
	r63 = r46 + r59;
	r62 = r62 * r63;
	r61 = r61 - r62;
	r51->_22 = r61;
	r47 = 2;
	r61 = (double)r47;
	r62 = r57 + r55;
	r61 = r61 * r62;
	r51->_23 = r61;
	r47 = 2;
	r61 = (double)r47;
	r62 = r54 + r58;
	r61 = r61 * r62;
	r51->_31 = r61;
	r47 = 2;
	r61 = (double)r47;
	r62 = r57 - r55;
	r61 = r61 * r62;
	r51->_32 = r61;
	r47 = 1;
	r61 = (double)r47;
	r47 = 2;
	r62 = (double)r47;
	r63 = r46 + r56;
	r62 = r62 * r63;
	r61 = r61 - r62;
	r51->_33 = r61;
	r6 = r19->hasScale;
	if( !r6 ) goto label$2570$536;
	r61 = r49->sx;
	r61 = r61 * r12;
	r62 = r50->sx;
	r62 = r62 * r5;
	r61 = r61 + r62;
	r62 = r49->sy;
	r62 = r62 * r12;
	r63 = r50->sy;
	r63 = r63 * r5;
	r62 = r62 + r63;
	r63 = r49->sz;
	r63 = r63 * r12;
	r64 = r50->sz;
	r64 = r64 * r5;
	r63 = r63 + r64;
	r64 = r51->_11;
	r64 = r64 * r61;
	r51->_11 = r64;
	r64 = r51->_12;
	r64 = r64 * r61;
	r51->_12 = r64;
	r64 = r51->_13;
	r64 = r64 * r61;
	r51->_13 = r64;
	r64 = r51->_21;
	r64 = r64 * r62;
	r51->_21 = r64;
	r64 = r51->_22;
	r64 = r64 * r62;
	r51->_22 = r64;
	r64 = r51->_23;
	r64 = r64 * r62;
	r51->_23 = r64;
	r64 = r51->_31;
	r64 = r64 * r63;
	r51->_31 = r64;
	r64 = r51->_32;
	r64 = r64 * r63;
	r51->_32 = r64;
	r64 = r51->_33;
	r64 = r64 * r63;
	r51->_33 = r64;
	label$2570$536:
	goto label$2570$583;
	label$2570$537:
	r47 = 0;
	r13 = (double)r47;
	r51->_12 = r13;
	r47 = 0;
	r13 = (double)r47;
	r51->_13 = r13;
	r47 = 0;
	r13 = (double)r47;
	r51->_21 = r13;
	if( !r2 ) goto label$2570$550;
	r47 = 1;
	r13 = (double)r47;
	goto label$2570$552;
	label$2570$550:
	r47 = 0;
	r13 = (double)r47;
	label$2570$552:
	r51->_23 = r13;
	r6 = r19->hasScale;
	if( !r6 ) goto label$2570$574;
	r13 = r49->sx;
	r13 = r13 * r12;
	r15 = r50->sx;
	r15 = r15 * r5;
	r13 = r13 + r15;
	r51->_11 = r13;
	r13 = r49->sy;
	r13 = r13 * r12;
	r15 = r50->sy;
	r15 = r15 * r5;
	r13 = r13 + r15;
	r51->_22 = r13;
	r13 = r49->sz;
	r13 = r13 * r12;
	r15 = r50->sz;
	r15 = r15 * r5;
	r13 = r13 + r15;
	r51->_33 = r13;
	goto label$2570$583;
	label$2570$574:
	r47 = 1;
	r13 = (double)r47;
	r51->_11 = r13;
	r47 = 1;
	r13 = (double)r47;
	r51->_22 = r13;
	r47 = 1;
	r13 = (double)r47;
	r51->_33 = r13;
	label$2570$583:
	r22 = r19->targetSkin;
	if( !r22 ) goto label$2570$601;
	r22 = r19->targetSkin;
	if( r22 == NULL ) hl_null_access();
	r18 = r22->currentRelPose;
	if( r18 == NULL ) hl_null_access();
	r47 = r19->targetJoint;
	r52 = r19->matrix;
	r48 = r18->length;
	if( ((unsigned)r47) < ((unsigned)r48) ) goto label$2570$594;
	hl_types_ArrayObj___expand(r18,r47);
	label$2570$594:
	r20 = r18->array;
	((h3d__Matrix*)(r20 + 1))[r47] = r52;
	r22 = r19->targetSkin;
	if( r22 == NULL ) hl_null_access();
	r6 = true;
	r22->jointsUpdated = r6;
	goto label$2570$609;
	label$2570$601:
	r21 = r19->targetObject;
	if( r21 == NULL ) hl_null_access();
	r52 = r19->matrix;
	r21->defaultTransform = r52;
	r47 = 1;
	r48 = r21->flags;
	r48 = r48 | r47;
	r21->flags = r48;
	label$2570$609:
	goto label$2570$56;
	label$2570$610:
	if( r2 ) goto label$2570$613;
	r6 = true;
	r0->isSync = r6;
	label$2570$613:
	return;
}

void h3d_anim_LinearAnimation_new(h3d__anim__LinearAnimation r0,String r1,int r2,double r3) {
	double r6;
	int r5;
	h3d_anim_Animation_new(((h3d__anim__Animation)r0),r1,r2,r3);
	r5 = -1;
	r6 = (double)r5;
	r0->syncFrame = r6;
	return;
}

