﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

h3d__mat__Texture h3d_pass__Copy_CopyShader_get_texture(h3d__pass___Copy__CopyShader r0) {
	h3d__mat__Texture r1;
	r1 = r0->texture__;
	return r1;
}

h3d__mat__Texture h3d_pass__Copy_CopyShader_set_texture(h3d__pass___Copy__CopyShader r0,h3d__mat__Texture r1) {
	r0->texture__ = r1;
	return r1;
}

void h3d_pass__Copy_CopyShader_updateConstants(h3d__pass___Copy__CopyShader r0,hxsl__Globals r1) {
	int r2;
	r2 = 0;
	r0->constBits = r2;
	hxsl_Shader_updateConstantsFinal(((hxsl__Shader)r0),r1);
	return;
}

vdynamic* h3d_pass__Copy_CopyShader_getParamValue(h3d__pass___Copy__CopyShader r0,int r1) {
	double r2;
	vdynamic *r3;
	h3d__mat__Texture r4;
	switch(r1) {
		default:
			goto label$2900$7;
		case 0:
			r2 = r0->flipY__;
			r3 = hl_alloc_dynamic(&type$6);
			r3->v.d = r2;
			return r3;
		case 1:
			r4 = r0->texture__;
			return ((vdynamic*)r4);
	}
	label$2900$7:
	r3 = NULL;
	return r3;
}

double h3d_pass__Copy_CopyShader_getParamFloatValue(h3d__pass___Copy__CopyShader r0,int r1) {
	double r3;
	int r2;
	r2 = 0;
	if( r1 != r2 ) goto label$2901$4;
	r3 = r0->flipY__;
	return r3;
	label$2901$4:
	r3 = 0.;
	return r3;
}

hxsl__Shader h3d_pass__Copy_CopyShader_clone(h3d__pass___Copy__CopyShader r0) {
	h3d__pass___Copy__$CopyShader r2;
	hxsl__SharedShader r4;
	double r5;
	vdynamic *r1;
	h3d__mat__Texture r6;
	h3d__pass___Copy__CopyShader r3;
	r2 = (h3d__pass___Copy__$CopyShader)global$626;
	r1 = Type_createEmptyInstance(((hl__Class)r2));
	r3 = (h3d__pass___Copy__CopyShader)hl_dyn_castp(&r1,&type$9,&type$2370);
	if( r3 == NULL ) hl_null_access();
	r4 = r0->shader;
	r3->shader = r4;
	r5 = r0->flipY__;
	r3->flipY__ = r5;
	r6 = r0->texture__;
	r3->texture__ = r6;
	return ((hxsl__Shader)r3);
}

void h3d_pass__Copy_CopyShader_new(h3d__pass___Copy__CopyShader r0) {
	h3d_shader_ScreenShader_new(((h3d__shader__ScreenShader)r0));
	return;
}
