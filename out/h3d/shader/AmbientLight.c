﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

bool h3d_shader_AmbientLight_get_additive(h3d__shader__AmbientLight r0) {
	bool r1;
	r1 = r0->additive__;
	return r1;
}

bool h3d_shader_AmbientLight_set_additive(h3d__shader__AmbientLight r0,bool r1) {
	bool r2;
	r2 = true;
	r0->constModified = r2;
	r0->additive__ = r1;
	return r1;
}

void h3d_shader_AmbientLight_updateConstants(h3d__shader__AmbientLight r0,hxsl__Globals r1) {
	bool r4;
	int r2, r5;
	r2 = 0;
	r0->constBits = r2;
	r4 = r0->additive__;
	if( !r4 ) goto label$3035$8;
	r2 = r0->constBits;
	r5 = 2;
	r2 = r2 | r5;
	r0->constBits = r2;
	label$3035$8:
	hxsl_Shader_updateConstantsFinal(((hxsl__Shader)r0),r1);
	return;
}

vdynamic* h3d_shader_AmbientLight_getParamValue(h3d__shader__AmbientLight r0,int r1) {
	bool r3;
	vdynamic *r4;
	int r2;
	r2 = 0;
	if( r1 != r2 ) goto label$3036$5;
	r3 = r0->additive__;
	r4 = hl_alloc_dynbool(r3);
	return r4;
	label$3036$5:
	r4 = NULL;
	return r4;
}

double h3d_shader_AmbientLight_getParamFloatValue(h3d__shader__AmbientLight r0,int r1) {
	double r2;
	r2 = 0.;
	return r2;
}

hxsl__Shader h3d_shader_AmbientLight_clone(h3d__shader__AmbientLight r0) {
	bool r5;
	hxsl__SharedShader r4;
	h3d__shader__AmbientLight r3;
	h3d__shader__$AmbientLight r2;
	vdynamic *r1;
	r2 = (h3d__shader__$AmbientLight)global$730;
	r1 = Type_createEmptyInstance(((hl__Class)r2));
	r3 = (h3d__shader__AmbientLight)hl_dyn_castp(&r1,&type$9,&type$2640);
	if( r3 == NULL ) hl_null_access();
	r4 = r0->shader;
	r3->shader = r4;
	r5 = r0->additive__;
	r3->additive__ = r5;
	return ((hxsl__Shader)r3);
}

void h3d_shader_AmbientLight_new(h3d__shader__AmbientLight r0) {
	hxsl_Shader_new(((hxsl__Shader)r0));
	return;
}

