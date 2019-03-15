﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void h3d_shader_Skin_updateConstants(h3d__shader__Skin r0,hxsl__Globals r1) {
	String r6, r7;
	int *r8;
	vbyte *r9;
	int r2, r4, r5;
	r2 = 0;
	r0->constBits = r2;
	r2 = r0->MaxBones__;
	r5 = 8;
	r4 = ((unsigned)r2) >> r5;
	r5 = 0;
	if( r4 == r5 ) goto label$3051$23;
	r6 = (String)global$742;
	r7 = (String)global$738;
	r6 = String___add__(r6,r7);
	r4 = r2;
	r8 = &r4;
	r9 = hl_itos(r4,r8);
	r7 = String___alloc__(r9,r4);
	r6 = String___add__(r6,r7);
	r7 = (String)global$739;
	r6 = String___add__(r6,r7);
	r4 = 255;
	r8 = &r4;
	r9 = hl_itos(r4,r8);
	r7 = String___alloc__(r9,r4);
	r6 = String___add__(r6,r7);
	hl_throw((vdynamic*)r6);
	label$3051$23:
	r4 = r0->constBits;
	r4 = r4 | r2;
	r0->constBits = r4;
	hxsl_Shader_updateConstantsFinal(((hxsl__Shader)r0),r1);
	return;
}

vdynamic* h3d_shader_Skin_getParamValue(h3d__shader__Skin r0,int r1) {
	hl__types__ArrayObj r4;
	vdynamic *r3;
	int r2;
	switch(r1) {
		default:
			goto label$3052$7;
		case 0:
			r2 = r0->MaxBones__;
			r3 = hl_alloc_dynamic(&type$3);
			r3->v.i = r2;
			return r3;
		case 1:
			r4 = r0->bonesMatrixes__;
			return ((vdynamic*)r4);
	}
	label$3052$7:
	r3 = NULL;
	return r3;
}

double h3d_shader_Skin_getParamFloatValue(h3d__shader__Skin r0,int r1) {
	double r2;
	r2 = 0.;
	return r2;
}

hxsl__Shader h3d_shader_Skin_clone(h3d__shader__Skin r0) {
	h3d__shader__$Skin r2;
	hl__types__ArrayObj r6;
	hxsl__SharedShader r4;
	h3d__shader__Skin r3;
	vdynamic *r1;
	int r5;
	r2 = (h3d__shader__$Skin)global$735;
	r1 = Type_createEmptyInstance(((hl__Class)r2));
	r3 = (h3d__shader__Skin)hl_dyn_castp(&r1,&type$9,&type$2696);
	if( r3 == NULL ) hl_null_access();
	r4 = r0->shader;
	r3->shader = r4;
	r5 = r0->MaxBones__;
	r3->MaxBones__ = r5;
	r6 = r0->bonesMatrixes__;
	r3->bonesMatrixes__ = r6;
	return ((hxsl__Shader)r3);
}

void h3d_shader_Skin_new(h3d__shader__Skin r0) {
	h3d_shader_SkinBase_new(((h3d__shader__SkinBase)r0));
	return;
}
