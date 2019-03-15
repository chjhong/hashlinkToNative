﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

venum* h3d_pass_Shadows_set_mode(h3d__pass__Shadows r0,venum* r1) {
	String r3, r4;
	venum *r2;
	h3d__scene__Light r5;
	r2 = (venum*)global$646;
	if( r1 == r2 ) goto label$2761$11;
	r3 = (String)global$649;
	r4 = Std_string(((vdynamic*)r1));
	r3 = String___add__(r3,r4);
	r4 = (String)global$650;
	r3 = String___add__(r3,r4);
	r5 = r0->light;
	r4 = Std_string(((vdynamic*)r5));
	r3 = String___add__(r3,r4);
	hl_throw((vdynamic*)r3);
	label$2761$11:
	r0->mode = r1;
	return r1;
}

int h3d_pass_Shadows_set_size(h3d__pass__Shadows r0,int r1) {
	h3d__mat__Texture r4;
	int r3;
	r3 = r0->size;
	if( r1 == r3 ) goto label$2762$9;
	r4 = r0->staticTexture;
	if( !r4 ) goto label$2762$9;
	r4 = r0->staticTexture;
	if( r4 == NULL ) hl_null_access();
	h3d_mat_Texture_dispose(r4);
	r4 = NULL;
	r0->staticTexture = r4;
	label$2762$9:
	r0->size = r1;
	return r1;
}

void h3d_pass_Shadows_dispose(h3d__pass__Shadows r0) {
	h3d__pass__Blur r2;
	h3d__mat__Texture r3;
	h3d_pass_Base_dispose(((h3d__pass__Base)r0));
	r2 = r0->blur;
	if( r2 == NULL ) hl_null_access();
	h3d_pass_ScreenFx_dispose(((h3d__pass__ScreenFx)r2));
	r3 = r0->staticTexture;
	if( !r3 ) goto label$2763$9;
	r3 = r0->staticTexture;
	if( r3 == NULL ) hl_null_access();
	h3d_mat_Texture_dispose(r3);
	label$2763$9:
	return;
}

h3d__Matrix h3d_pass_Shadows_getShadowProj(h3d__pass__Shadows r0) {
	h3d__Camera r2;
	h3d__Matrix r1;
	r2 = r0->lightCamera;
	if( r2 == NULL ) hl_null_access();
	r1 = r2->m;
	return r1;
}

h3d__mat__Texture h3d_pass_Shadows_getShadowTex(h3d__pass__Shadows r0) {
	h3d__mat__Texture r1;
	r1 = NULL;
	return r1;
}

bool h3d_pass_Shadows_isUsingWorldDist(h3d__pass__Shadows r0) {
	bool r1;
	r1 = false;
	return r1;
}

hl__types__ArrayObj h3d_pass_Shadows_getOutputs(h3d__pass__Shadows r0) {
	String r7;
	hl__types__ArrayObj r2;
	venum *r6, *r10, *r11, *r12;
	hl_type *r4;
	bool r1;
	h3d__mat__$Texture r13;
	vdynamic *r8;
	int r5;
	varray *r3, *r9;
	r1 = h3d_pass_Shadows_isUsingWorldDist(r0);
	if( !r1 ) goto label$2767$30;
	r4 = &type$2397;
	r5 = 1;
	r3 = hl_alloc_array(r4,r5);
	r7 = (String)global$651;
	r5 = 1;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	r6 = hl_alloc_enum(&type$2397,1);
	((hxsl_Output_Value*)r6)->p0 = r7;
	((hxsl_Output_Value*)r6)->p1 = r8;
	r4 = &type$582;
	r5 = 4;
	r9 = hl_alloc_array(r4,r5);
	r10 = (venum*)global$652;
	r5 = 0;
	((venum**)(r9 + 1))[r5] = r10;
	r10 = (venum*)global$652;
	r5 = 1;
	((venum**)(r9 + 1))[r5] = r10;
	r10 = (venum*)global$652;
	r5 = 2;
	((venum**)(r9 + 1))[r5] = r10;
	r10 = (venum*)global$652;
	r5 = 3;
	((venum**)(r9 + 1))[r5] = r10;
	r2 = hl_types_ArrayObj_alloc(r9);
	{ venum *tmp;
	tmp = hl_alloc_enum(&type$2397,7);
	((hxsl_Output_Swiz*)tmp)->p0 = r6;
	((hxsl_Output_Swiz*)tmp)->p1 = r2;
	r6 = tmp; };
	r5 = 0;
	((venum**)(r3 + 1))[r5] = r6;
	r2 = hl_types_ArrayObj_alloc(r3);
	return r2;
	label$2767$30:
	r11 = r0->format;
	r13 = (h3d__mat__$Texture)global$31;
	r12 = r13->nativeFormat;
	if( r11 != r12 ) goto label$2767$45;
	r4 = &type$2397;
	r5 = 1;
	r3 = hl_alloc_array(r4,r5);
	r7 = (String)global$653;
	r8 = NULL;
	r6 = hl_alloc_enum(&type$2397,1);
	((hxsl_Output_Value*)r6)->p0 = r7;
	((hxsl_Output_Value*)r6)->p1 = r8;
	{ venum *tmp;
	tmp = hl_alloc_enum(&type$2397,3);
	((hxsl_Output_PackFloat*)tmp)->p0 = r6;
	r6 = tmp; };
	r5 = 0;
	((venum**)(r3 + 1))[r5] = r6;
	r2 = hl_types_ArrayObj_alloc(r3);
	return r2;
	label$2767$45:
	r4 = &type$2397;
	r5 = 1;
	r3 = hl_alloc_array(r4,r5);
	r7 = (String)global$653;
	r5 = 1;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	r6 = hl_alloc_enum(&type$2397,1);
	((hxsl_Output_Value*)r6)->p0 = r7;
	((hxsl_Output_Value*)r6)->p1 = r8;
	r4 = &type$582;
	r5 = 4;
	r9 = hl_alloc_array(r4,r5);
	r10 = (venum*)global$652;
	r5 = 0;
	((venum**)(r9 + 1))[r5] = r10;
	r10 = (venum*)global$652;
	r5 = 1;
	((venum**)(r9 + 1))[r5] = r10;
	r10 = (venum*)global$652;
	r5 = 2;
	((venum**)(r9 + 1))[r5] = r10;
	r10 = (venum*)global$652;
	r5 = 3;
	((venum**)(r9 + 1))[r5] = r10;
	r2 = hl_types_ArrayObj_alloc(r9);
	{ venum *tmp;
	tmp = hl_alloc_enum(&type$2397,7);
	((hxsl_Output_Swiz*)tmp)->p0 = r6;
	((hxsl_Output_Swiz*)tmp)->p1 = r2;
	r6 = tmp; };
	r5 = 0;
	((venum**)(r3 + 1))[r5] = r6;
	r2 = hl_types_ArrayObj_alloc(r3);
	return r2;
}

bool h3d_pass_Shadows_loadStaticData(h3d__pass__Shadows r0,haxe__io__Bytes r1) {
	bool r2;
	r2 = false;
	return r2;
}

haxe__io__Bytes h3d_pass_Shadows_saveStaticData(h3d__pass__Shadows r0) {
	haxe__io__Bytes r1;
	r1 = NULL;
	return r1;
}

void h3d_pass_Shadows_computeStatic(h3d__pass__Shadows r0,h3d__pass__Object r1) {
	String r2;
	r2 = (String)global$484;
	hl_throw((vdynamic*)r2);
}

h3d__pass__Object h3d_pass_Shadows_filterPasses(h3d__pass__Shadows r0,h3d__pass__Object r1) {
	venum *r3;
	bool r5, r7;
	h3d__pass__Object r4, r8, r9, r10, r11, r13;
	h3d__mat__Pass r12;
	h3d__scene__RenderContext r6;
	int r2;
	r3 = r0->mode;
	if( r3 == NULL ) hl_null_access();
	r2 = HL__ENUM_INDEX__(r3);
	switch(r2) {
		default:
			goto label$2771$27;
		case 0:
			r4 = NULL;
			return r4;
		case 1:
			r6 = r0->ctx;
			if( r6 == NULL ) hl_null_access();
			r5 = r6->computingStatic;
			if( r5 ) goto label$2771$13;
			r4 = NULL;
			return r4;
			label$2771$13:
			r7 = true;
			r5 = r7;
			goto label$2771$27;
		case 2:
			r6 = r0->ctx;
			if( r6 == NULL ) hl_null_access();
			r7 = r6->computingStatic;
			if( !r7 ) goto label$2771$22;
			r4 = NULL;
			return r4;
			label$2771$22:
			return r1;
		case 3:
			r6 = r0->ctx;
			if( r6 == NULL ) hl_null_access();
			r7 = r6->computingStatic;
			r5 = r7;
	}
	label$2771$27:
	r4 = NULL;
	r8 = NULL;
	r9 = NULL;
	r10 = r1;
	label$2771$31:
	if( !r10 ) goto label$2771$55;
	if( r10 == NULL ) hl_null_access();
	r12 = r10->pass;
	if( r12 == NULL ) hl_null_access();
	r7 = r12->isStatic;
	if( r7 != r5 ) goto label$2771$46;
	if( r4 ) goto label$2771$42;
	r8 = r10;
	r4 = r10;
	goto label$2771$45;
	label$2771$42:
	if( r8 == NULL ) hl_null_access();
	r8->next = r10;
	r8 = r10;
	label$2771$45:
	goto label$2771$52;
	label$2771$46:
	if( r9 ) goto label$2771$49;
	r9 = r10;
	goto label$2771$52;
	label$2771$49:
	if( r9 == NULL ) hl_null_access();
	r9->next = r10;
	r9 = r10;
	label$2771$52:
	r11 = r10->next;
	r10 = r11;
	goto label$2771$31;
	label$2771$55:
	if( !r9 ) goto label$2771$58;
	if( r9 == NULL ) hl_null_access();
	r9->next = r4;
	label$2771$58:
	if( !r8 ) goto label$2771$62;
	if( r8 == NULL ) hl_null_access();
	r13 = NULL;
	r8->next = r13;
	label$2771$62:
	return r4;
}

void h3d_pass_Shadows_new(h3d__pass__Shadows r0,h3d__scene__Light r1) {
	String r12;
	h3d__shader__ScreenShader r19;
	venum *r4, *r6, *r21;
	bool r7;
	h3d__mat__$Texture r11;
	h3d__Engine r9;
	h3d__$Engine r10;
	h3d__shader__Blur r20;
	h3d__pass__Blur r13;
	double r2, r18;
	double *r14, *r15, *r16, *r17;
	h3d__impl__Driver r8;
	int r3;
	r2 = 0.01;
	r0->bias = r2;
	r2 = 30.;
	r0->power = r2;
	r3 = 1024;
	r0->size = r3;
	r4 = (venum*)global$646;
	r0->mode = r4;
	r6 = r0->format;
	if( r6 ) goto label$2772$12;
	r6 = (venum*)global$647;
	r0->format = r6;
	label$2772$12:
	r10 = (h3d__$Engine)global$38;
	r9 = r10->CURRENT;
	if( r9 == NULL ) hl_null_access();
	r8 = r9->driver;
	if( r8 == NULL ) hl_null_access();
	r6 = r0->format;
	r7 = ((bool (*)(h3d__impl__Driver,venum*))r8->$type->vobj_proto[1])(r8,r6);
	if( r7 ) goto label$2772$23;
	r11 = (h3d__mat__$Texture)global$31;
	r6 = r11->nativeFormat;
	r0->format = r6;
	label$2772$23:
	r12 = (String)global$648;
	h3d_pass_Default_new(((h3d__pass__Default)r0),r12);
	r0->light = r1;
	r13 = (h3d__pass__Blur)hl_alloc_obj(h3d__pass__Blur__val);
	r3 = 5;
	r2 = (double)r3;
	r14 = &r2;
	r15 = NULL;
	r16 = NULL;
	r17 = NULL;
	h3d_pass_Blur_new(r13,r14,r15,r16,r17);
	r0->blur = r13;
	r13 = r0->blur;
	if( r13 == NULL ) hl_null_access();
	r18 = 0.5;
	r18 = h3d_pass_Blur_set_quality(r13,r18);
	r13 = r0->blur;
	if( r13 == NULL ) hl_null_access();
	r19 = r13->shader;
	r20 = (h3d__shader__Blur)r19;
	if( r20 == NULL ) hl_null_access();
	r7 = true;
	r20->constModified = r7;
	r6 = r0->format;
	r11 = (h3d__mat__$Texture)global$31;
	r21 = r11->nativeFormat;
	if( r6 == r21 ) goto label$2772$52;
	r7 = false;
	goto label$2772$53;
	label$2772$52:
	r7 = true;
	label$2772$53:
	r20->isDepth__ = r7;
	return;
}
