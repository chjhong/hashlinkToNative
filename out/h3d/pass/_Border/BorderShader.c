﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

h3d__Vector h3d_pass__Border_BorderShader_get_color(h3d__pass___Border__BorderShader r0) {
	h3d__Vector r1;
	r1 = r0->color__;
	return r1;
}

h3d__Vector h3d_pass__Border_BorderShader_set_color(h3d__pass___Border__BorderShader r0,h3d__Vector r1) {
	r0->color__ = r1;
	return r1;
}

void h3d_pass__Border_BorderShader_updateConstants(h3d__pass___Border__BorderShader r0,hxsl__Globals r1) {
	int r2;
	r2 = 0;
	r0->constBits = r2;
	hxsl_Shader_updateConstantsFinal(((hxsl__Shader)r0),r1);
	return;
}

vdynamic* h3d_pass__Border_BorderShader_getParamValue(h3d__pass___Border__BorderShader r0,int r1) {
	h3d__Vector r4;
	double r2;
	vdynamic *r3;
	switch(r1) {
		default:
			goto label$2888$7;
		case 0:
			r2 = r0->flipY__;
			r3 = hl_alloc_dynamic(&type$6);
			r3->v.d = r2;
			return r3;
		case 1:
			r4 = r0->color__;
			return ((vdynamic*)r4);
	}
	label$2888$7:
	r3 = NULL;
	return r3;
}

double h3d_pass__Border_BorderShader_getParamFloatValue(h3d__pass___Border__BorderShader r0,int r1) {
	double r3;
	int r2;
	r2 = 0;
	if( r1 != r2 ) goto label$2889$4;
	r3 = r0->flipY__;
	return r3;
	label$2889$4:
	r3 = 0.;
	return r3;
}

hxsl__Shader h3d_pass__Border_BorderShader_clone(h3d__pass___Border__BorderShader r0) {
	hxsl__SharedShader r4;
	h3d__Vector r6;
	double r5;
	vdynamic *r1;
	h3d__pass___Border__BorderShader r3;
	h3d__pass___Border__$BorderShader r2;
	r2 = (h3d__pass___Border__$BorderShader)global$624;
	r1 = Type_createEmptyInstance(((hl__Class)r2));
	r3 = (h3d__pass___Border__BorderShader)hl_dyn_castp(&r1,&type$9,&type$2355);
	if( r3 == NULL ) hl_null_access();
	r4 = r0->shader;
	r3->shader = r4;
	r5 = r0->flipY__;
	r3->flipY__ = r5;
	r6 = r0->color__;
	r3->color__ = r6;
	return ((hxsl__Shader)r3);
}

void h3d_pass__Border_BorderShader_new(h3d__pass___Border__BorderShader r0) {
	h3d__Vector r1;
	double *r2, *r3, *r4, *r5;
	r1 = (h3d__Vector)hl_alloc_obj(h3d__Vector__val);
	r2 = NULL;
	r3 = NULL;
	r4 = NULL;
	r5 = NULL;
	h3d_Vector_new(r1,r2,r3,r4,r5);
	r0->color__ = r1;
	h3d_shader_ScreenShader_new(((h3d__shader__ScreenShader)r0));
	return;
}

