﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

bool h2d_Drawable_set_tileWrap(h2d__Drawable r0,bool r1) {
	r0->tileWrap = r1;
	return r1;
}

h3d__Vector h2d_Drawable_get_colorAdd(h2d__Drawable r0) {
	h3d__shader__$ColorAdd r2;
	h3d__shader__ColorAdd r3;
	hxsl__Shader r1;
	h3d__Vector r4;
	r2 = (h3d__shader__$ColorAdd)global$397;
	r1 = h2d_Drawable_getShader(r0,((hl__Class)r2));
	r3 = (h3d__shader__ColorAdd)r1;
	if( r3 ) goto label$746$6;
	r4 = NULL;
	return r4;
	label$746$6:
	if( r3 == NULL ) hl_null_access();
	r4 = r3->color__;
	return r4;
}

h3d__Vector h2d_Drawable_set_colorAdd(h2d__Drawable r0,h3d__Vector r1) {
	h3d__shader__$ColorAdd r3;
	bool r8;
	h3d__shader__ColorAdd r4, r6;
	hxsl__Shader r2;
	int *r7;
	r3 = (h3d__shader__$ColorAdd)global$397;
	r2 = h2d_Drawable_getShader(r0,((hl__Class)r3));
	r4 = (h3d__shader__ColorAdd)r2;
	if( r4 ) goto label$747$13;
	if( !r1 ) goto label$747$12;
	r6 = (h3d__shader__ColorAdd)hl_alloc_obj(h3d__shader__ColorAdd__val);
	r7 = NULL;
	h3d_shader_ColorAdd_new(r6,r7);
	r2 = h2d_Drawable_addShader(r0,((hxsl__Shader)r6));
	r6 = (h3d__shader__ColorAdd)r2;
	if( r6 == NULL ) hl_null_access();
	r6->color__ = r1;
	label$747$12:
	goto label$747$18;
	label$747$13:
	if( r1 ) goto label$747$16;
	r8 = h2d_Drawable_removeShader(r0,((hxsl__Shader)r4));
	goto label$747$18;
	label$747$16:
	if( r4 == NULL ) hl_null_access();
	r4->color__ = r1;
	label$747$18:
	return r1;
}

vdynamic* h2d_Drawable_set_colorKey(h2d__Drawable r0,vdynamic* r1) {
	h3d__shader__$ColorKey r3;
	h3d__shader__ColorKey r4, r6;
	bool r10;
	hxsl__Shader r2;
	h3d__Vector r11;
	double r13, r15;
	int *r9;
	int r7, r8, r12, r14;
	r3 = (h3d__shader__$ColorKey)global$398;
	r2 = h2d_Drawable_getShader(r0,((hl__Class)r3));
	r4 = (h3d__shader__ColorKey)r2;
	if( r4 ) goto label$748$14;
	if( !r1 ) goto label$748$13;
	r6 = (h3d__shader__ColorKey)hl_alloc_obj(h3d__shader__ColorKey__val);
	r7 = -16777216;
	r8 = r1 ? r1->v.i : 0;
	r7 = r7 | r8;
	r9 = &r7;
	h3d_shader_ColorKey_new(r6,r9);
	r2 = h2d_Drawable_addShader(r0,((hxsl__Shader)r6));
	r6 = (h3d__shader__ColorKey)r2;
	label$748$13:
	goto label$748$55;
	label$748$14:
	if( r1 ) goto label$748$17;
	r10 = h2d_Drawable_removeShader(r0,((hxsl__Shader)r4));
	goto label$748$55;
	label$748$17:
	if( r4 == NULL ) hl_null_access();
	r11 = r4->colorKey__;
	r8 = -16777216;
	r12 = r1 ? r1->v.i : 0;
	r8 = r8 | r12;
	if( r11 == NULL ) hl_null_access();
	r14 = 16;
	r12 = r8 >> r14;
	r14 = 255;
	r12 = r12 & r14;
	r13 = (double)r12;
	r12 = 255;
	r15 = (double)r12;
	r13 = r13 / r15;
	r11->x = r13;
	r14 = 8;
	r12 = r8 >> r14;
	r14 = 255;
	r12 = r12 & r14;
	r13 = (double)r12;
	r12 = 255;
	r15 = (double)r12;
	r13 = r13 / r15;
	r11->y = r13;
	r14 = 255;
	r12 = r8 & r14;
	r13 = (double)r12;
	r12 = 255;
	r15 = (double)r12;
	r13 = r13 / r15;
	r11->z = r13;
	r14 = 24;
	r12 = ((unsigned)r8) >> r14;
	r13 = (double)r12;
	r12 = 255;
	r15 = (double)r12;
	r13 = r13 / r15;
	r11->w = r13;
	label$748$55:
	r0->colorKey = r1;
	return r1;
}

void h2d_Drawable_adjustColor(h2d__Drawable r0,vvirtual* r1) {
	vvirtual *r7;
	double r6;
	vdynamic *r5;
	int r8;
	h3d__Matrix r3, r4;
	if( r1 ) goto label$749$4;
	r3 = NULL;
	r3 = h2d_Drawable_set_colorMatrix(r0,r3);
	goto label$749$42;
	label$749$4:
	r3 = h2d_Drawable_get_colorMatrix(r0);
	if( r3 ) goto label$749$10;
	r4 = (h3d__Matrix)hl_alloc_obj(h3d__Matrix__val);
	h3d_Matrix_new(r4);
	r3 = r4;
	r4 = h2d_Drawable_set_colorMatrix(r0,r4);
	label$749$10:
	if( r3 == NULL ) hl_null_access();
	h3d_Matrix_identity(r3);
	if( r1 == NULL ) hl_null_access();
	r5 = hl_vfields(r1)[2] ? (*(vdynamic**)(hl_vfields(r1)[2])) : (vdynamic*)hl_dyn_getp(r1->value,5198008/*hue*/,&type$100);
	if( !r5 ) goto label$749$18;
	r5 = hl_vfields(r1)[2] ? (*(vdynamic**)(hl_vfields(r1)[2])) : (vdynamic*)hl_dyn_getp(r1->value,5198008/*hue*/,&type$100);
	r6 = r5 ? r5->v.d : 0;
	h3d_Matrix_colorHue(r3,r6);
	label$749$18:
	r5 = hl_vfields(r1)[4] ? (*(vdynamic**)(hl_vfields(r1)[4])) : (vdynamic*)hl_dyn_getp(r1->value,-157166638/*saturation*/,&type$100);
	if( !r5 ) goto label$749$23;
	r5 = hl_vfields(r1)[4] ? (*(vdynamic**)(hl_vfields(r1)[4])) : (vdynamic*)hl_dyn_getp(r1->value,-157166638/*saturation*/,&type$100);
	r6 = r5 ? r5->v.d : 0;
	h3d_Matrix_colorSaturate(r3,r6);
	label$749$23:
	r5 = hl_vfields(r1)[0] ? (*(vdynamic**)(hl_vfields(r1)[0])) : (vdynamic*)hl_dyn_getp(r1->value,397536647/*contrast*/,&type$100);
	if( !r5 ) goto label$749$28;
	r5 = hl_vfields(r1)[0] ? (*(vdynamic**)(hl_vfields(r1)[0])) : (vdynamic*)hl_dyn_getp(r1->value,397536647/*contrast*/,&type$100);
	r6 = r5 ? r5->v.d : 0;
	h3d_Matrix_colorContrast(r3,r6);
	label$749$28:
	r5 = hl_vfields(r1)[3] ? (*(vdynamic**)(hl_vfields(r1)[3])) : (vdynamic*)hl_dyn_getp(r1->value,-146328600/*lightness*/,&type$100);
	if( !r5 ) goto label$749$33;
	r5 = hl_vfields(r1)[3] ? (*(vdynamic**)(hl_vfields(r1)[3])) : (vdynamic*)hl_dyn_getp(r1->value,-146328600/*lightness*/,&type$100);
	r6 = r5 ? r5->v.d : 0;
	h3d_Matrix_colorLightness(r3,r6);
	label$749$33:
	r7 = hl_vfields(r1)[1] ? (*(vvirtual**)(hl_vfields(r1)[1])) : (vvirtual*)hl_dyn_getp(r1->value,73331081/*gain*/,&type$1494);
	if( !r7 ) goto label$749$42;
	r7 = hl_vfields(r1)[1] ? (*(vvirtual**)(hl_vfields(r1)[1])) : (vvirtual*)hl_dyn_getp(r1->value,73331081/*gain*/,&type$1494);
	if( r7 == NULL ) hl_null_access();
	r8 = hl_vfields(r7)[1] ? (*(int*)(hl_vfields(r7)[1])) : (int)hl_dyn_geti(r7->value,173830765/*color*/,&type$3);
	r7 = hl_vfields(r1)[1] ? (*(vvirtual**)(hl_vfields(r1)[1])) : (vvirtual*)hl_dyn_getp(r1->value,73331081/*gain*/,&type$1494);
	if( r7 == NULL ) hl_null_access();
	r6 = hl_vfields(r7)[0] ? (*(double*)(hl_vfields(r7)[0])) : (double)hl_dyn_getd(r7->value,26650595/*alpha*/);
	h3d_Matrix_colorGain(r3,r8,r6);
	label$749$42:
	return;
}

h3d__Matrix h2d_Drawable_get_colorMatrix(h2d__Drawable r0) {
	h3d__shader__$ColorMatrix r2;
	hxsl__Shader r1;
	h3d__shader__ColorMatrix r3;
	h3d__Matrix r4;
	r2 = (h3d__shader__$ColorMatrix)global$399;
	r1 = h2d_Drawable_getShader(r0,((hl__Class)r2));
	r3 = (h3d__shader__ColorMatrix)r1;
	if( r3 ) goto label$750$6;
	r4 = NULL;
	return r4;
	label$750$6:
	if( r3 == NULL ) hl_null_access();
	r4 = r3->matrix__;
	return r4;
}

h3d__Matrix h2d_Drawable_set_colorMatrix(h2d__Drawable r0,h3d__Matrix r1) {
	bool r8;
	h3d__shader__$ColorMatrix r3;
	hxsl__Shader r2;
	hl__types__ArrayBytes_Float r7;
	h3d__shader__ColorMatrix r4, r6;
	r3 = (h3d__shader__$ColorMatrix)global$399;
	r2 = h2d_Drawable_getShader(r0,((hl__Class)r3));
	r4 = (h3d__shader__ColorMatrix)r2;
	if( r4 ) goto label$751$13;
	if( !r1 ) goto label$751$12;
	r6 = (h3d__shader__ColorMatrix)hl_alloc_obj(h3d__shader__ColorMatrix__val);
	r7 = NULL;
	h3d_shader_ColorMatrix_new(r6,r7);
	r2 = h2d_Drawable_addShader(r0,((hxsl__Shader)r6));
	r6 = (h3d__shader__ColorMatrix)r2;
	if( r6 == NULL ) hl_null_access();
	r6->matrix__ = r1;
	label$751$12:
	goto label$751$18;
	label$751$13:
	if( r1 ) goto label$751$16;
	r8 = h2d_Drawable_removeShader(r0,((hxsl__Shader)r4));
	goto label$751$18;
	label$751$16:
	if( r4 == NULL ) hl_null_access();
	r4->matrix__ = r1;
	label$751$18:
	return r1;
}

String h2d_Drawable_getDebugShaderCode(h2d__Drawable r0,bool* r1) {
	String r12, r13;
	hxsl__RuntimeShader r6;
	vvirtual *r14;
	hxsl__RuntimeShaderData r15;
	h3d__pass__ShaderManager r7;
	bool r2;
	h3d__Engine r17;
	h3d__shader__Base2d r9;
	h2d__RenderContext r3;
	h3d__$Engine r18;
	hxsl__ShaderList r8, r10;
	vclosure *r11;
	h3d__impl__Driver r16;
	h2d__Scene r4;
	if( r1 ) goto label$752$3;
	r2 = true;
	goto label$752$4;
	label$752$3:
	r2 = *r1;
	label$752$4:
	r4 = h2d_Object_getScene(((h2d__Object)r0));
	if( r4 == NULL ) hl_null_access();
	r3 = r4->ctx;
	if( r3 == NULL ) hl_null_access();
	r7 = r3->manager;
	if( r7 == NULL ) hl_null_access();
	r8 = (hxsl__ShaderList)hl_alloc_obj(hxsl__ShaderList__val);
	r9 = r3->baseShader;
	r10 = r0->shaders;
	hxsl_ShaderList_new(r8,((hxsl__Shader)r9),r10);
	r6 = h3d_pass_ShaderManager_compileShaders(r7,r8);
	if( !r2 ) goto label$752$33;
	r11 = &cl$2379;
	r12 = (String)global$400;
	if( r11 == NULL ) hl_null_access();
	if( r6 == NULL ) hl_null_access();
	r15 = r6->vertex;
	if( r15 == NULL ) hl_null_access();
	r14 = r15->data;
	r13 = r11->hasValue ? ((String (*)(vdynamic*,vvirtual*))r11->fun)((vdynamic*)r11->value,r14) : ((String (*)(vvirtual*))r11->fun)(r14);
	r12 = String___add__(r12,r13);
	r13 = (String)global$401;
	r12 = String___add__(r12,r13);
	r15 = r6->fragment;
	if( r15 == NULL ) hl_null_access();
	r14 = r15->data;
	r13 = r11->hasValue ? ((String (*)(vdynamic*,vvirtual*))r11->fun)((vdynamic*)r11->value,r14) : ((String (*)(vvirtual*))r11->fun)(r14);
	r12 = String___add__(r12,r13);
	return r12;
	label$752$33:
	r18 = (h3d__$Engine)global$38;
	r17 = r18->CURRENT;
	if( r17 == NULL ) hl_null_access();
	r16 = r17->driver;
	if( r16 == NULL ) hl_null_access();
	r12 = ((String (*)(h3d__impl__Driver,hxsl__RuntimeShader))r16->$type->vobj_proto[6])(r16,r6);
	return r12;
}

hxsl__Shader h2d_Drawable_getShader(h2d__Drawable r0,hl__Class r1) {
	bool r7;
	hxsl__Shader r5, r6;
	hxsl__ShaderList r2, r3, r4;
	r2 = r0->shaders;
	if( !r2 ) goto label$753$18;
	r2 = r0->shaders;
	r3 = NULL;
	label$753$4:
	if( r2 == r3 ) goto label$753$18;
	if( r2 == NULL ) hl_null_access();
	r5 = r2->s;
	r4 = r2->next;
	r2 = r4;
	r7 = hl_BaseType_check(((hl__BaseType)r1),((vdynamic*)r5));
	if( !r7 ) goto label$753$14;
	r6 = r5;
	goto label$753$15;
	label$753$14:
	r6 = NULL;
	label$753$15:
	if( !r6 ) goto label$753$17;
	return r6;
	label$753$17:
	goto label$753$4;
	label$753$18:
	r5 = NULL;
	return r5;
}

hxsl___ShaderList__ShaderIterator h2d_Drawable_getShaders(h2d__Drawable r0) {
	hxsl___ShaderList__ShaderIterator r1;
	hxsl__ShaderList r2, r3;
	r1 = (hxsl___ShaderList__ShaderIterator)hl_alloc_obj(hxsl___ShaderList__ShaderIterator__val);
	r2 = r0->shaders;
	r3 = NULL;
	hxsl__ShaderList_ShaderIterator_new(r1,r2,r3);
	return r1;
}

hxsl__Shader h2d_Drawable_addShader(h2d__Drawable r0,hxsl__Shader r1) {
	String r2;
	hxsl__ShaderList r3;
	if( r1 ) goto label$755$3;
	r2 = (String)global$403;
	hl_throw((vdynamic*)r2);
	label$755$3:
	r3 = r0->shaders;
	r3 = hxsl_ShaderList_addSort(r1,r3);
	r0->shaders = r3;
	return r1;
}

bool h2d_Drawable_removeShader(h2d__Drawable r0,hxsl__Shader r1) {
	vvirtual *r2, *r6;
	bool r7;
	hxsl__Shader r5;
	hxsl__ShaderList r3, r4;
	r2 = NULL;
	r3 = r0->shaders;
	label$756$2:
	if( !r3 ) goto label$756$21;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->s;
	if( r5 != r1 ) goto label$756$16;
	if( r2 ) goto label$756$11;
	r4 = r3->next;
	r0->shaders = r4;
	goto label$756$14;
	label$756$11:
	if( r2 == NULL ) hl_null_access();
	r4 = r3->next;
	if( hl_vfields(r2)[0] ) *(hxsl__ShaderList*)(hl_vfields(r2)[0]) = (hxsl__ShaderList)r4; else hl_dyn_setp(r2->value,151160317/*next*/,&type$141,r4);
	label$756$14:
	r7 = true;
	return r7;
	label$756$16:
	r6 = hl_to_virtual(&type$1504,(vdynamic*)r3);
	r2 = r6;
	r4 = r3->next;
	r3 = r4;
	goto label$756$2;
	label$756$21:
	r7 = false;
	return r7;
}

void h2d_Drawable_emitTile(h2d__Drawable r0,h2d__RenderContext r1,h2d__Tile r2) {
	bool r12;
	h2d__Tile r4;
	int *r10, *r11;
	int r6, r7, r8, r9;
	h3d__mat__Texture r5;
	if( r2 ) goto label$757$11;
	r4 = (h2d__Tile)hl_alloc_obj(h2d__Tile__val);
	r5 = NULL;
	r6 = 0;
	r7 = 0;
	r8 = 5;
	r9 = 5;
	r10 = NULL;
	r11 = NULL;
	h2d_Tile_new(r4,r5,r6,r7,r8,r9,r10,r11);
	r2 = r4;
	label$757$11:
	if( r1 == NULL ) hl_null_access();
	r12 = h2d_RenderContext_drawTile(r1,r0,r2);
	if( r12 ) goto label$757$15;
	return;
	label$757$15:
	return;
}

void h2d_Drawable_new(h2d__Drawable r0,h2d__Object r1) {
	venum *r3;
	h3d__Vector r4;
	double r6, r8, r10, r12;
	double *r7, *r9, *r11, *r13;
	int r5;
	h2d_Object_new(((h2d__Object)r0),r1);
	r3 = (venum*)global$396;
	r0->blendMode = r3;
	r4 = (h3d__Vector)hl_alloc_obj(h3d__Vector__val);
	r5 = 1;
	r6 = (double)r5;
	r7 = &r6;
	r5 = 1;
	r8 = (double)r5;
	r9 = &r8;
	r5 = 1;
	r10 = (double)r5;
	r11 = &r10;
	r5 = 1;
	r12 = (double)r5;
	r13 = &r12;
	h3d_Vector_new(r4,r7,r9,r11,r13);
	r0->color = r4;
	return;
}

