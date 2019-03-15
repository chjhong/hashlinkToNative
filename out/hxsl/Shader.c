﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void hxsl_Shader_initialize(hxsl__Shader r0) {
	String r8, r9;
	hl__Class r5;
	bool r1;
	hxsl__SharedShader r3;
	vdynamic *r4, *r6, *r7;
	r1 = true;
	r0->constModified = r1;
	r3 = r0->shader;
	if( !r3 ) goto label$761$5;
	return;
	label$761$5:
	r5 = Type_getClass(((vdynamic*)r0));
	r4 = ((vdynamic*)r5);
	if( r5 == NULL ) hl_null_access();
	r6 = (vdynamic*)hl_dyn_getp((vdynamic*)r5,505052489/*_SHADER*/,&type$9);
	r3 = (hxsl__SharedShader)hl_dyn_castp(&r6,&type$9,&type$143);
	r0->shader = r3;
	r3 = r0->shader;
	if( r3 ) goto label$761$45;
	r6 = ((vdynamic*)r5);
	label$761$14:
	if( !r6 ) goto label$761$23;
	if( r6 == NULL ) hl_null_access();
	r7 = (vdynamic*)hl_dyn_getp((vdynamic*)r6,4145860/*SRC*/,&type$9);
	if( r7 ) goto label$761$23;
	r5 = (hl__Class)hl_dyn_castp(&r6,&type$9,&type$12);
	r5 = Type_getSuperClass(r5);
	r6 = ((vdynamic*)r5);
	goto label$761$14;
	label$761$23:
	if( r6 ) goto label$761$29;
	r5 = (hl__Class)hl_dyn_castp(&r4,&type$9,&type$12);
	r8 = Type_getClassName(r5);
	r9 = (String)global$616;
	r8 = String___add__(r8,r9);
	hl_throw((vdynamic*)r8);
	label$761$29:
	if( r6 == NULL ) hl_null_access();
	r7 = (vdynamic*)hl_dyn_getp((vdynamic*)r6,505052489/*_SHADER*/,&type$9);
	r3 = (hxsl__SharedShader)hl_dyn_castp(&r7,&type$9,&type$143);
	r0->shader = r3;
	r3 = r0->shader;
	if( r3 ) goto label$761$45;
	r3 = (hxsl__SharedShader)hl_alloc_obj(hxsl__SharedShader__val);
	r7 = (vdynamic*)hl_dyn_getp((vdynamic*)r6,4145860/*SRC*/,&type$9);
	if( r7 ) goto label$761$40;
	r8 = NULL;
	goto label$761$41;
	label$761$40:
	r8 = Std_string(r7);
	label$761$41:
	hxsl_SharedShader_new(r3,r8);
	r0->shader = r3;
	r3 = r0->shader;
	hl_dyn_setp((vdynamic*)r6,505052489/*_SHADER*/,&type$143,r3);
	label$761$45:
	return;
}

void hxsl_Shader_setPriority(hxsl__Shader r0,int r1) {
	r0->priority = r1;
	return;
}

vdynamic* hxsl_Shader_getParamValue(hxsl__Shader r0,int r1) {
	String r2;
	r2 = (String)global$319;
	hl_throw((vdynamic*)r2);
}

double hxsl_Shader_getParamFloatValue(hxsl__Shader r0,int r1) {
	String r2;
	r2 = (String)global$319;
	hl_throw((vdynamic*)r2);
}

void hxsl_Shader_updateConstants(hxsl__Shader r0,hxsl__Globals r1) {
	String r2;
	r2 = (String)global$319;
	hl_throw((vdynamic*)r2);
}

void hxsl_Shader_updateConstantsFinal(hxsl__Shader r0,hxsl__Globals r1) {
	String r12, r14;
	vvirtual *r11, *r19;
	venum *r10, *r20, *r22, *r23, *r24, *r25;
	bool r18;
	hxsl__SharedShader r3;
	haxe__ds__IntMap r9;
	hxsl__ShaderInstance r27, r28;
	h3d__mat__$Texture r26;
	hxsl__ShaderConst r2, r5;
	int *r15;
	vdynamic *r8;
	h3d__mat__Texture r21;
	vbyte *r16;
	int r6, r7, r13, r17;
	r3 = r0->shader;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->consts;
	label$766$3:
	if( !r2 ) goto label$766$146;
	if( r2 == NULL ) hl_null_access();
	r6 = r2->globalId;
	r7 = 0;
	if( r6 != r7 ) goto label$766$12;
	r5 = r2->next;
	r2 = r5;
	goto label$766$3;
	label$766$12:
	if( r1 == NULL ) hl_null_access();
	r9 = r1->map;
	if( r9 == NULL ) hl_null_access();
	r6 = r2->globalId;
	r8 = haxe_ds_IntMap_get(r9,r6);
	r11 = r2->v;
	if( r11 == NULL ) hl_null_access();
	r10 = hl_vfields(r11)[5] ? (*(venum**)(hl_vfields(r11)[5])) : (venum*)hl_dyn_getp(r11->value,218690500/*type*/,&type$148);
	if( r10 == NULL ) hl_null_access();
	r6 = HL__ENUM_INDEX__(r10);
	switch(r6) {
		default:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
			r12 = (String)global$319;
			hl_throw((vdynamic*)r12);
		case 1:
			r6 = (int)hl_dyn_casti(&r8,&type$9,&type$3);
			r13 = r2->bits;
			r7 = ((unsigned)r6) >> r13;
			r13 = 0;
			if( r7 == r13 ) goto label$766$56;
			r12 = (String)global$617;
			r11 = r2->v;
			if( r11 == NULL ) hl_null_access();
			r14 = hl_vfields(r11)[2] ? (*(String*)(hl_vfields(r11)[2])) : (String)hl_dyn_getp(r11->value,150958933/*name*/,&type$13);
			r12 = String___add__(r12,r14);
			r14 = (String)global$618;
			r12 = String___add__(r12,r14);
			r7 = r6;
			r15 = &r7;
			r16 = hl_itos(r7,r15);
			r14 = String___alloc__(r16,r7);
			r12 = String___add__(r12,r14);
			r14 = (String)global$619;
			r12 = String___add__(r12,r14);
			r7 = 1;
			r13 = r2->bits;
			r7 = r7 << r13;
			r13 = 1;
			r7 = r7 - r13;
			r15 = &r7;
			r16 = hl_itos(r7,r15);
			r14 = String___alloc__(r16,r7);
			r12 = String___add__(r12,r14);
			r14 = (String)global$177;
			r12 = String___add__(r12,r14);
			hl_throw((vdynamic*)r12);
			label$766$56:
			r7 = r0->constBits;
			r17 = r2->pos;
			r13 = r6 << r17;
			r7 = r7 | r13;
			r0->constBits = r7;
			goto label$766$143;
		case 2:
			r18 = (bool)hl_dyn_casti(&r8,&type$9,&type$7);
			if( !r18 ) goto label$766$70;
			r6 = r0->constBits;
			r7 = 1;
			r13 = r2->pos;
			r7 = r7 << r13;
			r6 = r6 | r7;
			r0->constBits = r6;
			label$766$70:
			goto label$766$143;
		case 17:
			if( r8 ) goto label$766$75;
			r5 = r2->next;
			r2 = r5;
			goto label$766$3;
			label$766$75:
			r19 = hl_to_virtual(&type$2344,(vdynamic*)r8);
			if( r19 == NULL ) hl_null_access();
			r20 = hl_vfields(r19)[0] ? (*(venum**)(hl_vfields(r19)[0])) : (venum*)hl_dyn_getp(r19->value,-321781698/*channel*/,&type$573);
			r21 = hl_vfields(r19)[1] ? (*(h3d__mat__Texture*)(hl_vfields(r19)[1])) : (h3d__mat__Texture)hl_dyn_getp(r19->value,-18823348/*texture*/,&type$93);
			if( r21 ) goto label$766$83;
			r22 = (venum*)global$620;
			r20 = r22;
			goto label$766$131;
			label$766$83:
			if( !r20 ) goto label$766$86;
			r23 = (venum*)global$620;
			if( r20 != r23 ) goto label$766$131;
			label$766$86:
			r6 = ((hxsl_Type_TChannel*)r10)->p0;
			switch(r6) {
				default:
				case 0:
				case 2:
					r12 = (String)global$617;
					r11 = r2->v;
					if( r11 == NULL ) hl_null_access();
					r14 = hl_vfields(r11)[2] ? (*(String*)(hl_vfields(r11)[2])) : (String)hl_dyn_getp(r11->value,150958933/*name*/,&type$13);
					r12 = String___add__(r12,r14);
					r14 = (String)global$621;
					r12 = String___add__(r12,r14);
					hl_throw((vdynamic*)r12);
				case 1:
					r21 = hl_vfields(r19)[1] ? (*(h3d__mat__Texture*)(hl_vfields(r19)[1])) : (h3d__mat__Texture)hl_dyn_getp(r19->value,-18823348/*texture*/,&type$93);
					if( r21 == NULL ) hl_null_access();
					r24 = r21->format;
					r26 = (h3d__mat__$Texture)global$31;
					r25 = r26->nativeFormat;
					if( r24 != r25 ) goto label$766$105;
					r22 = (venum*)global$622;
					r20 = r22;
					goto label$766$113;
					label$766$105:
					r12 = (String)global$617;
					r11 = r2->v;
					if( r11 == NULL ) hl_null_access();
					r14 = hl_vfields(r11)[2] ? (*(String*)(hl_vfields(r11)[2])) : (String)hl_dyn_getp(r11->value,150958933/*name*/,&type$13);
					r12 = String___add__(r12,r14);
					r14 = (String)global$621;
					r12 = String___add__(r12,r14);
					hl_throw((vdynamic*)r12);
					label$766$113:
					goto label$766$131;
				case 3:
					r21 = hl_vfields(r19)[1] ? (*(h3d__mat__Texture*)(hl_vfields(r19)[1])) : (h3d__mat__Texture)hl_dyn_getp(r19->value,-18823348/*texture*/,&type$93);
					if( r21 == NULL ) hl_null_access();
					r24 = r21->format;
					r26 = (h3d__mat__$Texture)global$31;
					r25 = r26->nativeFormat;
					if( r24 != r25 ) goto label$766$123;
					r22 = (venum*)global$623;
					r20 = r22;
					goto label$766$131;
					label$766$123:
					r12 = (String)global$617;
					r11 = r2->v;
					if( r11 == NULL ) hl_null_access();
					r14 = hl_vfields(r11)[2] ? (*(String*)(hl_vfields(r11)[2])) : (String)hl_dyn_getp(r11->value,150958933/*name*/,&type$13);
					r12 = String___add__(r12,r14);
					r14 = (String)global$621;
					r12 = String___add__(r12,r14);
					hl_throw((vdynamic*)r12);
			}
			label$766$131:
			r6 = r0->constBits;
			r21 = hl_vfields(r19)[1] ? (*(h3d__mat__Texture*)(hl_vfields(r19)[1])) : (h3d__mat__Texture)hl_dyn_getp(r19->value,-18823348/*texture*/,&type$93);
			r7 = hxsl_Globals_allocChannelID(r1,r21);
			r13 = 3;
			r7 = r7 << r13;
			if( r20 == NULL ) hl_null_access();
			r13 = HL__ENUM_INDEX__(r20);
			r7 = r7 | r13;
			r13 = r2->pos;
			r7 = r7 << r13;
			r6 = r6 | r7;
			r0->constBits = r6;
	}
	label$766$143:
	r5 = r2->next;
	r2 = r5;
	goto label$766$3;
	label$766$146:
	r3 = r0->shader;
	r6 = r0->constBits;
	if( r3 == NULL ) hl_null_access();
	r9 = r3->instanceCache;
	if( r9 == NULL ) hl_null_access();
	r8 = haxe_ds_IntMap_get(r9,r6);
	r27 = (hxsl__ShaderInstance)r8;
	if( r27 ) goto label$766$156;
	r28 = hxsl_SharedShader_makeInstance(r3,r6);
	goto label$766$157;
	label$766$156:
	r28 = r27;
	label$766$157:
	r0->instance = r28;
	return;
}

hxsl__Shader hxsl_Shader_clone(hxsl__Shader r0) {
	return r0;
}

String hxsl_Shader_toString(hxsl__Shader r0) {
	String r1;
	hl__Class r2;
	r2 = Type_getClass(((vdynamic*)r0));
	r1 = Type_getClassName(r2);
	return r1;
}

vbyte* hxsl_Shader___string(hxsl__Shader r0) {
	String r2;
	vbyte *r1;
	r2 = hxsl_Shader_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

void hxsl_Shader_new(hxsl__Shader r0) {
	int r1;
	r1 = 0;
	r0->priority = r1;
	hxsl_Shader_initialize(r0);
	return;
}
