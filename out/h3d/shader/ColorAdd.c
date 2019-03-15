﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

h3d__Vector h3d_shader_ColorAdd_get_color(h3d__shader__ColorAdd r0) {
	h3d__Vector r1;
	r1 = r0->color__;
	return r1;
}

h3d__Vector h3d_shader_ColorAdd_set_color(h3d__shader__ColorAdd r0,h3d__Vector r1) {
	r0->color__ = r1;
	return r1;
}

void h3d_shader_ColorAdd_updateConstants(h3d__shader__ColorAdd r0,hxsl__Globals r1) {
	int r2;
	r2 = 0;
	r0->constBits = r2;
	hxsl_Shader_updateConstantsFinal(((hxsl__Shader)r0),r1);
	return;
}

vdynamic* h3d_shader_ColorAdd_getParamValue(h3d__shader__ColorAdd r0,int r1) {
	h3d__Vector r3;
	vdynamic *r4;
	int r2;
	r2 = 0;
	if( r1 != r2 ) goto label$2361$4;
	r3 = r0->color__;
	return ((vdynamic*)r3);
	label$2361$4:
	r4 = NULL;
	return r4;
}

double h3d_shader_ColorAdd_getParamFloatValue(h3d__shader__ColorAdd r0,int r1) {
	double r2;
	r2 = 0.;
	return r2;
}

hxsl__Shader h3d_shader_ColorAdd_clone(h3d__shader__ColorAdd r0) {
	h3d__shader__$ColorAdd r2;
	h3d__shader__ColorAdd r3;
	hxsl__SharedShader r4;
	h3d__Vector r5;
	vdynamic *r1;
	r2 = (h3d__shader__$ColorAdd)global$397;
	r1 = Type_createEmptyInstance(((hl__Class)r2));
	r3 = (h3d__shader__ColorAdd)hl_dyn_castp(&r1,&type$9,&type$1488);
	if( r3 == NULL ) hl_null_access();
	r4 = r0->shader;
	r3->shader = r4;
	r5 = r0->color__;
	r3->color__ = r5;
	return ((hxsl__Shader)r3);
}

void h3d_shader_ColorAdd_new(h3d__shader__ColorAdd r0,int* r1) {
	h3d__Vector r3;
	double r9, r12;
	double *r4, *r5, *r6, *r7;
	int r2, r10, r11;
	if( r1 ) goto label$2364$3;
	r2 = 0;
	goto label$2364$4;
	label$2364$3:
	r2 = *r1;
	label$2364$4:
	r3 = (h3d__Vector)hl_alloc_obj(h3d__Vector__val);
	r4 = NULL;
	r5 = NULL;
	r6 = NULL;
	r7 = NULL;
	h3d_Vector_new(r3,r4,r5,r6,r7);
	r0->color__ = r3;
	hxsl_Shader_new(((hxsl__Shader)r0));
	r3 = r0->color__;
	if( r3 == NULL ) hl_null_access();
	r11 = 16;
	r10 = r2 >> r11;
	r11 = 255;
	r10 = r10 & r11;
	r9 = (double)r10;
	r10 = 255;
	r12 = (double)r10;
	r9 = r9 / r12;
	r3->x = r9;
	r11 = 8;
	r10 = r2 >> r11;
	r11 = 255;
	r10 = r10 & r11;
	r9 = (double)r10;
	r10 = 255;
	r12 = (double)r10;
	r9 = r9 / r12;
	r3->y = r9;
	r11 = 255;
	r10 = r2 & r11;
	r9 = (double)r10;
	r10 = 255;
	r12 = (double)r10;
	r9 = r9 / r12;
	r3->z = r9;
	r11 = 24;
	r10 = ((unsigned)r2) >> r11;
	r9 = (double)r10;
	r10 = 255;
	r12 = (double)r10;
	r9 = r9 / r12;
	r3->w = r9;
	return;
}
