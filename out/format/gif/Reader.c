﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

vvirtual* format_gif_Reader_read(format__gif__Reader r0) {
	String r5;
	vvirtual *r17, *r26;
	venum *r6, *r7, *r10, *r24, *r25;
	haxe__io__Bytes r21, r22;
	bool r18;
	haxe__ds__List r23;
	double r14, r15, r16;
	haxe__io__Input r3;
	vbyte *r8, *r9;
	int r2, r4, r11, r12, r13, r19, r20;
	r3 = r0->i;
	if( r3 == NULL ) hl_null_access();
	r2 = ((int (*)(haxe__io__Input))r3->$type->vobj_proto[0])(r3);
	r4 = 71;
	if( r2 == r4 ) goto label$2212$7;
	r5 = (String)global$243;
	hl_throw((vdynamic*)r5);
	label$2212$7:
	r3 = r0->i;
	if( r3 == NULL ) hl_null_access();
	r2 = ((int (*)(haxe__io__Input))r3->$type->vobj_proto[0])(r3);
	r4 = 73;
	if( r2 == r4 ) goto label$2212$14;
	r5 = (String)global$243;
	hl_throw((vdynamic*)r5);
	label$2212$14:
	r3 = r0->i;
	if( r3 == NULL ) hl_null_access();
	r2 = ((int (*)(haxe__io__Input))r3->$type->vobj_proto[0])(r3);
	r4 = 70;
	if( r2 == r4 ) goto label$2212$21;
	r5 = (String)global$243;
	hl_throw((vdynamic*)r5);
	label$2212$21:
	r3 = r0->i;
	if( r3 == NULL ) hl_null_access();
	r2 = 3;
	r6 = NULL;
	r5 = haxe_io_Input_readString(r3,r2,r6);
	r7 = (venum*)global$244;
	if( !r5 ) goto label$2212$36;
	r2 = r5->length;
	r4 = 3;
	if( r2 != r4 ) goto label$2212$36;
	r8 = r5->bytes;
	r9 = (vbyte*)USTR("87a");
	r2 = hl_string_compare(r8,r9,r2);
	r4 = 0;
	if( r2 == r4 ) goto label$2212$48;
	label$2212$36:
	if( !r5 ) goto label$2212$45;
	r2 = r5->length;
	r4 = 3;
	if( r2 != r4 ) goto label$2212$45;
	r8 = r5->bytes;
	r9 = (vbyte*)USTR("89a");
	r2 = hl_string_compare(r8,r9,r2);
	r4 = 0;
	if( r2 == r4 ) goto label$2212$51;
	label$2212$45:
	r10 = hl_alloc_enum(&type$403,2);
	((format_gif_Version_Unknown*)r10)->p0 = r5;
	r7 = r10;
	goto label$2212$53;
	label$2212$48:
	r10 = (venum*)global$245;
	r7 = r10;
	goto label$2212$53;
	label$2212$51:
	r10 = (venum*)global$244;
	r7 = r10;
	label$2212$53:
	r3 = r0->i;
	if( r3 == NULL ) hl_null_access();
	r2 = haxe_io_Input_readUInt16(r3);
	r3 = r0->i;
	if( r3 == NULL ) hl_null_access();
	r4 = haxe_io_Input_readUInt16(r3);
	r3 = r0->i;
	if( r3 == NULL ) hl_null_access();
	r11 = ((int (*)(haxe__io__Input))r3->$type->vobj_proto[0])(r3);
	r3 = r0->i;
	if( r3 == NULL ) hl_null_access();
	r12 = ((int (*)(haxe__io__Input))r3->$type->vobj_proto[0])(r3);
	r3 = r0->i;
	if( r3 == NULL ) hl_null_access();
	r13 = ((int (*)(haxe__io__Input))r3->$type->vobj_proto[0])(r3);
	r14 = (double)r13;
	r13 = 0;
	r16 = (double)r13;
	if( r14 == r16 ) goto label$2212$79;
	r13 = 15;
	r16 = (double)r13;
	r15 = r14 + r16;
	r13 = 64;
	r16 = (double)r13;
	r15 = r15 / r16;
	goto label$2212$81;
	label$2212$79:
	r13 = 1;
	r15 = (double)r13;
	label$2212$81:
	r17 = hl_alloc_virtual(&type$421);
	if( hl_vfields(r17)[7] ) *(int*)(hl_vfields(r17)[7]) = (int)r2; else hl_dyn_seti(r17->value,-362629759/*width*/,&type$3,r2);
	if( hl_vfields(r17)[4] ) *(int*)(hl_vfields(r17)[4]) = (int)r4; else hl_dyn_seti(r17->value,38537191/*height*/,&type$3,r4);
	r19 = 128;
	r13 = r11 & r19;
	r19 = 128;
	if( r13 == r19 ) goto label$2212$90;
	r18 = false;
	goto label$2212$91;
	label$2212$90:
	r18 = true;
	label$2212$91:
	if( hl_vfields(r17)[3] ) *(bool*)(hl_vfields(r17)[3]) = (bool)r18; else hl_dyn_seti(r17->value,460173303/*hasGlobalColorTable*/,&type$7,r18);
	r19 = 112;
	r13 = r11 & r19;
	r19 = 4;
	r13 = ((unsigned)r13) >> r19;
	if( hl_vfields(r17)[1] ) *(int*)(hl_vfields(r17)[1]) = (int)r13; else hl_dyn_seti(r17->value,-55483547/*colorResolution*/,&type$3,r13);
	r19 = 8;
	r13 = r11 & r19;
	r19 = 8;
	if( r13 == r19 ) goto label$2212$103;
	r18 = false;
	goto label$2212$104;
	label$2212$103:
	r18 = true;
	label$2212$104:
	if( hl_vfields(r17)[6] ) *(bool*)(hl_vfields(r17)[6]) = (bool)r18; else hl_dyn_seti(r17->value,272077762/*sorted*/,&type$7,r18);
	r13 = 2;
	r20 = 7;
	r19 = r11 & r20;
	r13 = r13 << r19;
	if( hl_vfields(r17)[2] ) *(int*)(hl_vfields(r17)[2]) = (int)r13; else hl_dyn_seti(r17->value,-302016192/*globalColorTableSize*/,&type$3,r13);
	if( hl_vfields(r17)[0] ) *(int*)(hl_vfields(r17)[0]) = (int)r12; else hl_dyn_seti(r17->value,200065218/*backgroundColorIndex*/,&type$3,r12);
	if( hl_vfields(r17)[5] ) *(double*)(hl_vfields(r17)[5]) = (double)r15; else hl_dyn_setd(r17->value,-449850845/*pixelAspectRatio*/,r15);
	r21 = NULL;
	r18 = hl_vfields(r17)[3] ? (*(bool*)(hl_vfields(r17)[3])) : (bool)hl_dyn_geti(r17->value,460173303/*hasGlobalColorTable*/,&type$7);
	if( !r18 ) goto label$2212$118;
	r13 = hl_vfields(r17)[2] ? (*(int*)(hl_vfields(r17)[2])) : (int)hl_dyn_geti(r17->value,-302016192/*globalColorTableSize*/,&type$3);
	r22 = format_gif_Reader_readColorTable(r0,r13);
	r21 = r22;
	label$2212$118:
	r23 = (haxe__ds__List)hl_alloc_obj(haxe__ds__List__val);
	haxe_ds_List_new(r23);
	label$2212$120:
	r18 = true;
	if( !r18 ) goto label$2212$130;
	r24 = format_gif_Reader_readBlock(r0);
	if( r23 == NULL ) hl_null_access();
	haxe_ds_List_add(r23,((vdynamic*)r24));
	r25 = (venum*)global$250;
	if( r24 != r25 ) goto label$2212$129;
	goto label$2212$130;
	label$2212$129:
	goto label$2212$120;
	label$2212$130:
	r26 = hl_alloc_virtual(&type$420);
	if( hl_vfields(r26)[3] ) *(venum**)(hl_vfields(r26)[3]) = (venum*)r7; else hl_dyn_setp(r26->value,485615783/*version*/,&type$403,r7);
	if( hl_vfields(r26)[2] ) *(vvirtual**)(hl_vfields(r26)[2]) = (vvirtual*)r17; else hl_dyn_setp(r26->value,-114719004/*logicalScreenDescriptor*/,&type$421,r17);
	if( hl_vfields(r26)[1] ) *(haxe__io__Bytes*)(hl_vfields(r26)[1]) = (haxe__io__Bytes)r21; else hl_dyn_setp(r26->value,-390218401/*globalColorTable*/,&type$75,r21);
	if( hl_vfields(r26)[0] ) *(haxe__ds__List*)(hl_vfields(r26)[0]) = (haxe__ds__List)r23; else hl_dyn_setp(r26->value,-404083332/*blocks*/,&type$113,r23);
	return r26;
}

venum* format_gif_Reader_readBlock(format__gif__Reader r0) {
	venum *r3;
	haxe__io__Input r2;
	int r1;
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r1 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
	switch(r1) {
		default:
		case 0:
		case 1:
		case 2:
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
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			goto label$2213$11;
		case 33:
			r3 = format_gif_Reader_readExtension(r0);
			return r3;
		case 44:
			r3 = format_gif_Reader_readImage(r0);
			return r3;
		case 59:
			r3 = (venum*)global$250;
			return r3;
	}
	label$2213$11:
	r3 = (venum*)global$250;
	return r3;
}

venum* format_gif_Reader_readImage(format__gif__Reader r0) {
	vvirtual *r16;
	venum *r15;
	haxe__io__Bytes r12, r14;
	bool r7, r10, r13;
	haxe__io__Input r2;
	int r1, r3, r4, r5, r6, r8, r9, r11;
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r1 = haxe_io_Input_readUInt16(r2);
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r3 = haxe_io_Input_readUInt16(r2);
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r4 = haxe_io_Input_readUInt16(r2);
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r5 = haxe_io_Input_readUInt16(r2);
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r6 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
	r9 = 128;
	r8 = r6 & r9;
	r9 = 128;
	if( r8 == r9 ) goto label$2214$21;
	r7 = false;
	goto label$2214$22;
	label$2214$21:
	r7 = true;
	label$2214$22:
	r9 = 64;
	r8 = r6 & r9;
	r9 = 64;
	if( r8 == r9 ) goto label$2214$28;
	r10 = false;
	goto label$2214$29;
	label$2214$28:
	r10 = true;
	label$2214$29:
	r8 = 2;
	r11 = 7;
	r9 = r6 & r11;
	r8 = r8 << r9;
	r12 = NULL;
	if( !r7 ) goto label$2214$37;
	r14 = format_gif_Reader_readColorTable(r0,r8);
	r12 = r14;
	label$2214$37:
	r16 = hl_alloc_virtual(&type$409);
	if( hl_vfields(r16)[8] ) *(int*)(hl_vfields(r16)[8]) = (int)r1; else hl_dyn_seti(r16->value,120/*x*/,&type$3,r1);
	if( hl_vfields(r16)[9] ) *(int*)(hl_vfields(r16)[9]) = (int)r3; else hl_dyn_seti(r16->value,121/*y*/,&type$3,r3);
	if( hl_vfields(r16)[7] ) *(int*)(hl_vfields(r16)[7]) = (int)r4; else hl_dyn_seti(r16->value,-362629759/*width*/,&type$3,r4);
	if( hl_vfields(r16)[1] ) *(int*)(hl_vfields(r16)[1]) = (int)r5; else hl_dyn_seti(r16->value,38537191/*height*/,&type$3,r5);
	if( hl_vfields(r16)[3] ) *(bool*)(hl_vfields(r16)[3]) = (bool)r7; else hl_dyn_seti(r16->value,-367153172/*localColorTable*/,&type$7,r7);
	if( hl_vfields(r16)[2] ) *(bool*)(hl_vfields(r16)[2]) = (bool)r10; else hl_dyn_seti(r16->value,-109524212/*interlaced*/,&type$7,r10);
	r11 = 32;
	r9 = r6 & r11;
	r11 = 32;
	if( r9 == r11 ) goto label$2214$50;
	r13 = false;
	goto label$2214$51;
	label$2214$50:
	r13 = true;
	label$2214$51:
	if( hl_vfields(r16)[6] ) *(bool*)(hl_vfields(r16)[6]) = (bool)r13; else hl_dyn_seti(r16->value,272077762/*sorted*/,&type$7,r13);
	if( hl_vfields(r16)[4] ) *(int*)(hl_vfields(r16)[4]) = (int)r8; else hl_dyn_seti(r16->value,-25874350/*localColorTableSize*/,&type$3,r8);
	r14 = format_gif_Reader_readPixels(r0,r4,r5,r10);
	if( hl_vfields(r16)[5] ) *(haxe__io__Bytes*)(hl_vfields(r16)[5]) = (haxe__io__Bytes)r14; else hl_dyn_setp(r16->value,-324407906/*pixels*/,&type$75,r14);
	if( hl_vfields(r16)[0] ) *(haxe__io__Bytes*)(hl_vfields(r16)[0]) = (haxe__io__Bytes)r12; else hl_dyn_setp(r16->value,256888880/*colorTable*/,&type$75,r12);
	r15 = hl_alloc_enum(&type$408,0);
	((format_gif_Block_BFrame*)r15)->p0 = r16;
	return r15;
}

haxe__io__Bytes format_gif_Reader_readPixels(format__gif__Reader r0,int r1,int r2,bool r3) {
	String r33, r35;
	hl__types__ArrayObj r18, r21, r29;
	haxe__io__Bytes r8, r36;
	hl__types__ArrayBytes_Int r22, r30, r32;
	int *r34;
	vdynamic *r31;
	haxe__io__Input r4;
	varray *r27;
	vbyte *r23;
	int r6, r7, r9, r10, r11, r12, r13, r14, r15, r16, r17, r19, r20, r24, r25, r26, r28, r37;
	r4 = r0->i;
	r6 = r1 * r2;
	r8 = haxe_io_Bytes_alloc(r6);
	if( r4 == NULL ) hl_null_access();
	r7 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	r9 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	r10 = 1;
	r9 = r9 - r10;
	r10 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	r11 = 8;
	r12 = 1;
	r12 = r12 << r7;
	r14 = 1;
	r13 = r12 + r14;
	r15 = 1;
	r14 = r7 + r15;
	r15 = 1;
	r15 = r15 << r14;
	r17 = 1;
	r16 = r15 - r17;
	r18 = (hl__types__ArrayObj)hl_alloc_obj(hl__types__ArrayObj__val);
	hl_types_ArrayObj_new(r18);
	r17 = 0;
	label$2215$23:
	if( r17 >= r12 ) goto label$2215$43;
	r19 = r17;
	++r17;
	if( r18 == NULL ) hl_null_access();
	r24 = 4;
	r23 = hl_alloc_bytes(r24);
	r24 = 0;
	r26 = 2;
	r26 = r24 << r26;
	*(int*)(r23 + r26) = r19;
	++r24;
	r24 = 1;
	r22 = hl_types_ArrayBase_allocI32(r23,r24);
	r24 = r18->length;
	if( ((unsigned)r19) < ((unsigned)r24) ) goto label$2215$40;
	hl_types_ArrayObj___expand(r18,r19);
	label$2215$40:
	r27 = r18->array;
	((hl__types__ArrayBytes_Int*)(r27 + 1))[r19] = r22;
	goto label$2215$23;
	label$2215$43:
	r21 = (hl__types__ArrayObj)hl_alloc_obj(hl__types__ArrayObj__val);
	hl_types_ArrayObj_new(r21);
	r19 = 2;
	r17 = r12 + r19;
	r19 = 0;
	r20 = 0;
	label$2215$49:
	if( r19 >= r6 ) goto label$2215$218;
	r24 = r20;
	label$2215$52:
	if( r11 >= r14 ) goto label$2215$71;
	r26 = 0;
	if( r9 != r26 ) goto label$2215$57;
	goto label$2215$71;
	label$2215$57:
	if( r4 == NULL ) hl_null_access();
	r26 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	r26 = r26 << r11;
	r25 = r10 | r26;
	r10 = r25;
	r26 = 8;
	r25 = r11 + r26;
	r11 = r25;
	--r9;
	r26 = 0;
	if( r9 != r26 ) goto label$2215$70;
	r25 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	r9 = r25;
	label$2215$70:
	goto label$2215$52;
	label$2215$71:
	r25 = r10 & r16;
	r20 = r25;
	r25 = r10 >> r14;
	r10 = r25;
	r25 = r11 - r14;
	r11 = r25;
	if( r20 != r12 ) goto label$2215$94;
	if( r18 == NULL ) hl_null_access();
	r29 = hl_types_ArrayObj_copy(r18);
	r21 = r29;
	r26 = 2;
	r25 = r12 + r26;
	r17 = r25;
	r26 = 1;
	r25 = r7 + r26;
	r14 = r25;
	r25 = 1;
	r25 = r25 << r14;
	r15 = r25;
	r26 = 1;
	r25 = r25 - r26;
	r16 = r25;
	goto label$2215$49;
	label$2215$94:
	if( r20 != r13 ) goto label$2215$96;
	goto label$2215$218;
	label$2215$96:
	if( r20 >= r17 ) goto label$2215$135;
	if( r24 == r12 ) goto label$2215$134;
	if( r21 == NULL ) hl_null_access();
	r26 = r21->length;
	if( ((unsigned)r24) < ((unsigned)r26) ) goto label$2215$103;
	r30 = NULL;
	goto label$2215$106;
	label$2215$103:
	r27 = r21->array;
	r31 = ((vdynamic**)(r27 + 1))[r24];
	r30 = (hl__types__ArrayBytes_Int)hl_dyn_castp(&r31,&type$9,&type$33);
	label$2215$106:
	if( r30 == NULL ) hl_null_access();
	r30 = hl_types_ArrayBytes_Int_copy(r30);
	if( r30 == NULL ) hl_null_access();
	r26 = r21->length;
	if( ((unsigned)r20) < ((unsigned)r26) ) goto label$2215$113;
	r32 = NULL;
	goto label$2215$116;
	label$2215$113:
	r27 = r21->array;
	r31 = ((vdynamic**)(r27 + 1))[r20];
	r32 = (hl__types__ArrayBytes_Int)hl_dyn_castp(&r31,&type$9,&type$33);
	label$2215$116:
	if( r32 == NULL ) hl_null_access();
	r25 = 0;
	r26 = r32->length;
	if( ((unsigned)r25) < ((unsigned)r26) ) goto label$2215$122;
	r25 = 0;
	goto label$2215$126;
	label$2215$122:
	r23 = r32->bytes;
	r26 = 2;
	r26 = r25 << r26;
	r25 = *(int*)(r23 + r26);
	label$2215$126:
	r25 = hl_types_ArrayBytes_Int_push(r30,r25);
	r25 = r17;
	++r17;
	r26 = r21->length;
	if( ((unsigned)r25) < ((unsigned)r26) ) goto label$2215$132;
	hl_types_ArrayObj___expand(r21,r25);
	label$2215$132:
	r27 = r21->array;
	((hl__types__ArrayBytes_Int*)(r27 + 1))[r25] = r30;
	label$2215$134:
	goto label$2215$178;
	label$2215$135:
	if( r20 == r17 ) goto label$2215$150;
	r33 = (String)global$251;
	r25 = r17;
	r34 = &r25;
	r23 = hl_itos(r25,r34);
	r35 = String___alloc__(r23,r25);
	r33 = String___add__(r33,r35);
	r35 = (String)global$252;
	r33 = String___add__(r33,r35);
	r25 = r20;
	r34 = &r25;
	r23 = hl_itos(r25,r34);
	r35 = String___alloc__(r23,r25);
	r33 = String___add__(r33,r35);
	hl_throw((vdynamic*)r33);
	label$2215$150:
	if( r21 == NULL ) hl_null_access();
	r26 = r21->length;
	if( ((unsigned)r24) < ((unsigned)r26) ) goto label$2215$155;
	r30 = NULL;
	goto label$2215$158;
	label$2215$155:
	r27 = r21->array;
	r31 = ((vdynamic**)(r27 + 1))[r24];
	r30 = (hl__types__ArrayBytes_Int)hl_dyn_castp(&r31,&type$9,&type$33);
	label$2215$158:
	if( r30 == NULL ) hl_null_access();
	r30 = hl_types_ArrayBytes_Int_copy(r30);
	if( r30 == NULL ) hl_null_access();
	r25 = 0;
	r26 = r30->length;
	if( ((unsigned)r25) < ((unsigned)r26) ) goto label$2215$166;
	r25 = 0;
	goto label$2215$170;
	label$2215$166:
	r23 = r30->bytes;
	r26 = 2;
	r26 = r25 << r26;
	r25 = *(int*)(r23 + r26);
	label$2215$170:
	r25 = hl_types_ArrayBytes_Int_push(r30,r25);
	r25 = r17;
	++r17;
	r26 = r21->length;
	if( ((unsigned)r25) < ((unsigned)r26) ) goto label$2215$176;
	hl_types_ArrayObj___expand(r21,r25);
	label$2215$176:
	r27 = r21->array;
	((hl__types__ArrayBytes_Int*)(r27 + 1))[r25] = r30;
	label$2215$178:
	if( r21 == NULL ) hl_null_access();
	r26 = r21->length;
	if( ((unsigned)r20) < ((unsigned)r26) ) goto label$2215$183;
	r30 = NULL;
	goto label$2215$186;
	label$2215$183:
	r27 = r21->array;
	r31 = ((vdynamic**)(r27 + 1))[r20];
	r30 = (hl__types__ArrayBytes_Int)hl_dyn_castp(&r31,&type$9,&type$33);
	label$2215$186:
	r22 = r30;
	r25 = 0;
	label$2215$188:
	if( r22 == NULL ) hl_null_access();
	r28 = r22->length;
	if( r25 >= r28 ) goto label$2215$207;
	if( r8 == NULL ) hl_null_access();
	r26 = r19;
	++r19;
	r28 = r25;
	++r25;
	r37 = r22->length;
	if( ((unsigned)r28) < ((unsigned)r37) ) goto label$2215$201;
	r28 = 0;
	goto label$2215$205;
	label$2215$201:
	r23 = r22->bytes;
	r37 = 2;
	r37 = r28 << r37;
	r28 = *(int*)(r23 + r37);
	label$2215$205:
	haxe_io_Bytes_set(r8,r26,r28);
	goto label$2215$188;
	label$2215$207:
	if( r17 != r15 ) goto label$2215$217;
	r26 = 12;
	if( r14 >= r26 ) goto label$2215$217;
	++r14;
	r25 = 1;
	r25 = r25 << r14;
	r15 = r25;
	r26 = 1;
	r25 = r25 - r26;
	r16 = r25;
	label$2215$217:
	goto label$2215$49;
	label$2215$218:
	r26 = 0;
	if( r26 >= r9 ) goto label$2215$229;
	if( r4 == NULL ) hl_null_access();
	r25 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	--r9;
	r26 = 0;
	if( r9 != r26 ) goto label$2215$228;
	r25 = ((int (*)(haxe__io__Input))r4->$type->vobj_proto[0])(r4);
	r9 = r25;
	label$2215$228:
	goto label$2215$218;
	label$2215$229:
	if( r19 >= r6 ) goto label$2215$237;
	if( r8 == NULL ) hl_null_access();
	r25 = r19;
	++r19;
	r26 = 0;
	haxe_io_Bytes_set(r8,r25,r26);
	goto label$2215$229;
	label$2215$237:
	if( !r3 ) goto label$2215$255;
	r36 = haxe_io_Bytes_alloc(r6);
	r25 = 8;
	r26 = 0;
	r28 = 0;
	r25 = format_gif_Reader_deinterlace(r0,r8,r36,r25,r26,r28,r1,r2);
	r26 = 8;
	r28 = 4;
	r26 = format_gif_Reader_deinterlace(r0,r8,r36,r26,r28,r25,r1,r2);
	r25 = r26;
	r26 = 4;
	r28 = 2;
	r26 = format_gif_Reader_deinterlace(r0,r8,r36,r26,r28,r25,r1,r2);
	r25 = r26;
	r26 = 2;
	r28 = 1;
	r26 = format_gif_Reader_deinterlace(r0,r8,r36,r26,r28,r25,r1,r2);
	r8 = r36;
	label$2215$255:
	return r8;
}

int format_gif_Reader_deinterlace(format__gif__Reader r0,haxe__io__Bytes r1,haxe__io__Bytes r2,int r3,int r4,int r5,int r6,int r7) {
	int r8;
	label$2216$0:
	if( r4 >= r7 ) goto label$2216$10;
	if( r2 == NULL ) hl_null_access();
	r8 = r4 * r6;
	haxe_io_Bytes_blit(r2,r8,r1,r5,r6);
	r8 = r5 + r6;
	r5 = r8;
	r8 = r4 + r3;
	r4 = r8;
	goto label$2216$0;
	label$2216$10:
	return r5;
}

venum* format_gif_Reader_readExtension(format__gif__Reader r0) {
	String r12;
	vvirtual *r21, *r23;
	venum *r10, *r11, *r22;
	bool r24;
	haxe__io__Bytes r6, r9;
	haxe__io__BytesOutput r5;
	haxe__io__Input r2;
	int r1, r4, r7, r8, r13, r14, r15, r16, r17, r18, r19, r20;
	r2 = r0->i;
	if( r2 == NULL ) hl_null_access();
	r1 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
	switch(r1) {
		default:
		case 0:
		case 2:
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
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
		case 172:
		case 173:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 181:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 187:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 222:
		case 223:
		case 224:
		case 225:
		case 226:
		case 227:
		case 228:
		case 229:
		case 230:
		case 231:
		case 232:
		case 233:
		case 234:
		case 235:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 250:
		case 251:
		case 252:
		case 253:
			r5 = (haxe__io__BytesOutput)hl_alloc_obj(haxe__io__BytesOutput__val);
			haxe_io_BytesOutput_new(r5);
			r4 = 255;
			r6 = haxe_io_Bytes_alloc(r4);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r4 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			label$2217$11:
			r8 = 0;
			if( r4 == r8 ) goto label$2217$26;
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r7 = 0;
			r7 = ((int (*)(haxe__io__Input,haxe__io__Bytes,int,int))r2->$type->vobj_proto[1])(r2,r6,r7,r4);
			if( r5 == NULL ) hl_null_access();
			r7 = 0;
			r7 = haxe_io_BytesOutput_writeBytes(r5,r6,r7,r4);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r7 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			r4 = r7;
			goto label$2217$11;
			label$2217$26:
			if( r5 == NULL ) hl_null_access();
			haxe_io_Output_flush(((haxe__io__Output)r5));
			r9 = haxe_io_BytesOutput_getBytes(r5);
			haxe_io_Output_close(((haxe__io__Output)r5));
			r11 = hl_alloc_enum(&type$410,4);
			((format_gif_Extension_EUnknown*)r11)->p0 = r1;
			((format_gif_Extension_EUnknown*)r11)->p1 = r9;
			r10 = hl_alloc_enum(&type$408,1);
			((format_gif_Block_BExtension*)r10)->p0 = r11;
			return r10;
		case 1:
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r4 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			r7 = 12;
			if( r4 == r7 ) goto label$2217$40;
			r12 = (String)global$256;
			hl_throw((vdynamic*)r12);
			label$2217$40:
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r4 = haxe_io_Input_readUInt16(r2);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r7 = haxe_io_Input_readUInt16(r2);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r8 = haxe_io_Input_readUInt16(r2);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r13 = haxe_io_Input_readUInt16(r2);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r14 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r15 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r16 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r17 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			r5 = (haxe__io__BytesOutput)hl_alloc_obj(haxe__io__BytesOutput__val);
			haxe_io_BytesOutput_new(r5);
			r18 = 255;
			r6 = haxe_io_Bytes_alloc(r18);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r18 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			label$2217$71:
			r20 = 0;
			if( r18 == r20 ) goto label$2217$86;
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r19 = 0;
			r19 = ((int (*)(haxe__io__Input,haxe__io__Bytes,int,int))r2->$type->vobj_proto[1])(r2,r6,r19,r18);
			if( r5 == NULL ) hl_null_access();
			r19 = 0;
			r19 = haxe_io_BytesOutput_writeBytes(r5,r6,r19,r18);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r19 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			r18 = r19;
			goto label$2217$71;
			label$2217$86:
			if( r5 == NULL ) hl_null_access();
			haxe_io_Output_flush(((haxe__io__Output)r5));
			r9 = haxe_io_BytesOutput_getBytes(r5);
			haxe_io_Output_close(((haxe__io__Output)r5));
			r21 = hl_alloc_virtual(&type$413);
			if( hl_vfields(r21)[7] ) *(int*)(hl_vfields(r21)[7]) = (int)r4; else hl_dyn_seti(r21->value,316516202/*textGridX*/,&type$3,r4);
			if( hl_vfields(r21)[8] ) *(int*)(hl_vfields(r21)[8]) = (int)r7; else hl_dyn_seti(r21->value,316516203/*textGridY*/,&type$3,r7);
			if( hl_vfields(r21)[6] ) *(int*)(hl_vfields(r21)[6]) = (int)r8; else hl_dyn_seti(r21->value,381196418/*textGridWidth*/,&type$3,r8);
			if( hl_vfields(r21)[5] ) *(int*)(hl_vfields(r21)[5]) = (int)r13; else hl_dyn_seti(r21->value,18544351/*textGridHeight*/,&type$3,r13);
			if( hl_vfields(r21)[1] ) *(int*)(hl_vfields(r21)[1]) = (int)r14; else hl_dyn_seti(r21->value,31706958/*charCellWidth*/,&type$3,r14);
			if( hl_vfields(r21)[0] ) *(int*)(hl_vfields(r21)[0]) = (int)r15; else hl_dyn_seti(r21->value,465637033/*charCellHeight*/,&type$3,r15);
			if( hl_vfields(r21)[4] ) *(int*)(hl_vfields(r21)[4]) = (int)r16; else hl_dyn_seti(r21->value,130154542/*textForegroundColorIndex*/,&type$3,r16);
			if( hl_vfields(r21)[3] ) *(int*)(hl_vfields(r21)[3]) = (int)r17; else hl_dyn_seti(r21->value,-447464453/*textBackgroundColorIndex*/,&type$3,r17);
			if( r9 == NULL ) hl_null_access();
			r12 = haxe_io_Bytes_toString(r9);
			if( hl_vfields(r21)[2] ) *(String*)(hl_vfields(r21)[2]) = (String)r12; else hl_dyn_setp(r21->value,217697719/*text*/,&type$13,r12);
			r11 = hl_alloc_enum(&type$410,2);
			((format_gif_Extension_EText*)r11)->p0 = r21;
			r10 = hl_alloc_enum(&type$408,1);
			((format_gif_Block_BExtension*)r10)->p0 = r11;
			return r10;
		case 249:
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r4 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			r7 = 4;
			if( r4 == r7 ) goto label$2217$112;
			r12 = (String)global$257;
			hl_throw((vdynamic*)r12);
			label$2217$112:
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r4 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			r8 = 28;
			r7 = r4 & r8;
			r8 = 2;
			r7 = r7 >> r8;
			switch(r7) {
				default:
					r8 = 28;
					r7 = r4 & r8;
					r8 = 2;
					r7 = r7 >> r8;
					r22 = hl_alloc_enum(&type$412,4);
					((format_gif_DisposalMethod_UNDEFINED*)r22)->p0 = r7;
					goto label$2217$133;
				case 0:
					r22 = (venum*)global$258;
					goto label$2217$133;
				case 1:
					r22 = (venum*)global$259;
					goto label$2217$133;
				case 2:
					r22 = (venum*)global$260;
					goto label$2217$133;
				case 3:
					r22 = (venum*)global$261;
			}
			label$2217$133:
			r23 = hl_alloc_virtual(&type$411);
			if( hl_vfields(r23)[1] ) *(venum**)(hl_vfields(r23)[1]) = (venum*)r22; else hl_dyn_setp(r23->value,164371895/*disposalMethod*/,&type$412,r22);
			r8 = 2;
			r7 = r4 & r8;
			r8 = 2;
			if( r7 == r8 ) goto label$2217$141;
			r24 = false;
			goto label$2217$142;
			label$2217$141:
			r24 = true;
			label$2217$142:
			if( hl_vfields(r23)[4] ) *(bool*)(hl_vfields(r23)[4]) = (bool)r24; else hl_dyn_seti(r23->value,133198670/*userInput*/,&type$7,r24);
			r8 = 1;
			r7 = r4 & r8;
			r8 = 1;
			if( r7 == r8 ) goto label$2217$149;
			r24 = false;
			goto label$2217$150;
			label$2217$149:
			r24 = true;
			label$2217$150:
			if( hl_vfields(r23)[2] ) *(bool*)(hl_vfields(r23)[2]) = (bool)r24; else hl_dyn_seti(r23->value,-318285023/*hasTransparentColor*/,&type$7,r24);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r7 = haxe_io_Input_readUInt16(r2);
			if( hl_vfields(r23)[0] ) *(int*)(hl_vfields(r23)[0]) = (int)r7; else hl_dyn_seti(r23->value,-148449538/*delay*/,&type$3,r7);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r7 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			if( hl_vfields(r23)[3] ) *(int*)(hl_vfields(r23)[3]) = (int)r7; else hl_dyn_seti(r23->value,235902693/*transparentIndex*/,&type$3,r7);
			r11 = hl_alloc_enum(&type$410,0);
			((format_gif_Extension_EGraphicControl*)r11)->p0 = r23;
			r10 = hl_alloc_enum(&type$408,1);
			((format_gif_Block_BExtension*)r10)->p0 = r11;
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r7 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			return r10;
		case 254:
			r5 = (haxe__io__BytesOutput)hl_alloc_obj(haxe__io__BytesOutput__val);
			haxe_io_BytesOutput_new(r5);
			r4 = 255;
			r6 = haxe_io_Bytes_alloc(r4);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r4 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			label$2217$172:
			r8 = 0;
			if( r4 == r8 ) goto label$2217$187;
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r7 = 0;
			r7 = ((int (*)(haxe__io__Input,haxe__io__Bytes,int,int))r2->$type->vobj_proto[1])(r2,r6,r7,r4);
			if( r5 == NULL ) hl_null_access();
			r7 = 0;
			r7 = haxe_io_BytesOutput_writeBytes(r5,r6,r7,r4);
			r2 = r0->i;
			if( r2 == NULL ) hl_null_access();
			r7 = ((int (*)(haxe__io__Input))r2->$type->vobj_proto[0])(r2);
			r4 = r7;
			goto label$2217$172;
			label$2217$187:
			if( r5 == NULL ) hl_null_access();
			haxe_io_Output_flush(((haxe__io__Output)r5));
			r9 = haxe_io_BytesOutput_getBytes(r5);
			haxe_io_Output_close(((haxe__io__Output)r5));
			if( r9 == NULL ) hl_null_access();
			r12 = haxe_io_Bytes_toString(r9);
			r11 = hl_alloc_enum(&type$410,1);
			((format_gif_Extension_EComment*)r11)->p0 = r12;
			r10 = hl_alloc_enum(&type$408,1);
			((format_gif_Block_BExtension*)r10)->p0 = r11;
			return r10;
		case 255:
			r10 = format_gif_Reader_readApplicationExtension(r0);
			return r10;
	}
}

venum* format_gif_Reader_readApplicationExtension(format__gif__Reader r0) {
	String r5, r7, r12;
	venum *r6, *r13, *r14, *r15;
	haxe__io__Bytes r9, r11;
	haxe__io__BytesOutput r8;
	haxe__io__Input r3;
	int r2, r4, r10, r16;
	r3 = r0->i;
	if( r3 == NULL ) hl_null_access();
	r2 = ((int (*)(haxe__io__Input))r3->$type->vobj_proto[0])(r3);
	r4 = 11;
	if( r2 == r4 ) goto label$2218$7;
	r5 = (String)global$262;
	hl_throw((vdynamic*)r5);
	label$2218$7:
	r3 = r0->i;
	if( r3 == NULL ) hl_null_access();
	r2 = 8;
	r6 = NULL;
	r5 = haxe_io_Input_readString(r3,r2,r6);
	r3 = r0->i;
	if( r3 == NULL ) hl_null_access();
	r2 = 3;
	r6 = NULL;
	r7 = haxe_io_Input_readString(r3,r2,r6);
	r8 = (haxe__io__BytesOutput)hl_alloc_obj(haxe__io__BytesOutput__val);
	haxe_io_BytesOutput_new(r8);
	r2 = 255;
	r9 = haxe_io_Bytes_alloc(r2);
	r3 = r0->i;
	if( r3 == NULL ) hl_null_access();
	r2 = ((int (*)(haxe__io__Input))r3->$type->vobj_proto[0])(r3);
	label$2218$24:
	r10 = 0;
	if( r2 == r10 ) goto label$2218$39;
	r3 = r0->i;
	if( r3 == NULL ) hl_null_access();
	r4 = 0;
	r4 = ((int (*)(haxe__io__Input,haxe__io__Bytes,int,int))r3->$type->vobj_proto[1])(r3,r9,r4,r2);
	if( r8 == NULL ) hl_null_access();
	r4 = 0;
	r4 = haxe_io_BytesOutput_writeBytes(r8,r9,r4,r2);
	r3 = r0->i;
	if( r3 == NULL ) hl_null_access();
	r4 = ((int (*)(haxe__io__Input))r3->$type->vobj_proto[0])(r3);
	r2 = r4;
	goto label$2218$24;
	label$2218$39:
	if( r8 == NULL ) hl_null_access();
	haxe_io_Output_flush(((haxe__io__Output)r8));
	r11 = haxe_io_BytesOutput_getBytes(r8);
	haxe_io_Output_close(((haxe__io__Output)r8));
	r12 = (String)global$263;
	if( r5 != r12 && (!r5 || !r12 || String___compare(r5,(vdynamic*)r12) != 0) ) goto label$2218$63;
	r12 = (String)global$264;
	if( r7 != r12 && (!r7 || !r12 || String___compare(r7,(vdynamic*)r12) != 0) ) goto label$2218$63;
	if( r11 == NULL ) hl_null_access();
	r4 = 0;
	r4 = haxe_io_Bytes_get(r11,r4);
	r10 = 1;
	if( r4 != r10 ) goto label$2218$63;
	r4 = 1;
	r4 = haxe_io_Bytes_get(r11,r4);
	r10 = 2;
	r10 = haxe_io_Bytes_get(r11,r10);
	r16 = 8;
	r10 = r10 << r16;
	r4 = r4 | r10;
	r15 = hl_alloc_enum(&type$414,0);
	((format_gif_ApplicationExtension_AENetscapeLooping*)r15)->p0 = r4;
	r14 = hl_alloc_enum(&type$410,3);
	((format_gif_Extension_EApplicationExtension*)r14)->p0 = r15;
	r13 = hl_alloc_enum(&type$408,1);
	((format_gif_Block_BExtension*)r13)->p0 = r14;
	return r13;
	label$2218$63:
	r15 = hl_alloc_enum(&type$414,1);
	((format_gif_ApplicationExtension_AEUnknown*)r15)->p0 = r5;
	((format_gif_ApplicationExtension_AEUnknown*)r15)->p1 = r7;
	((format_gif_ApplicationExtension_AEUnknown*)r15)->p2 = r11;
	r14 = hl_alloc_enum(&type$410,3);
	((format_gif_Extension_EApplicationExtension*)r14)->p0 = r15;
	r13 = hl_alloc_enum(&type$408,1);
	((format_gif_Block_BExtension*)r13)->p0 = r14;
	return r13;
}

haxe__io__Bytes format_gif_Reader_readBlocks(format__gif__Reader r0) {
	haxe__io__Bytes r3, r8;
	haxe__io__BytesOutput r1;
	haxe__io__Input r5;
	int r4, r6, r7;
	r1 = (haxe__io__BytesOutput)hl_alloc_obj(haxe__io__BytesOutput__val);
	haxe_io_BytesOutput_new(r1);
	r4 = 255;
	r3 = haxe_io_Bytes_alloc(r4);
	r5 = r0->i;
	if( r5 == NULL ) hl_null_access();
	r4 = ((int (*)(haxe__io__Input))r5->$type->vobj_proto[0])(r5);
	label$2219$7:
	r7 = 0;
	if( r4 == r7 ) goto label$2219$22;
	r5 = r0->i;
	if( r5 == NULL ) hl_null_access();
	r6 = 0;
	r6 = ((int (*)(haxe__io__Input,haxe__io__Bytes,int,int))r5->$type->vobj_proto[1])(r5,r3,r6,r4);
	if( r1 == NULL ) hl_null_access();
	r6 = 0;
	r6 = haxe_io_BytesOutput_writeBytes(r1,r3,r6,r4);
	r5 = r0->i;
	if( r5 == NULL ) hl_null_access();
	r6 = ((int (*)(haxe__io__Input))r5->$type->vobj_proto[0])(r5);
	r4 = r6;
	goto label$2219$7;
	label$2219$22:
	if( r1 == NULL ) hl_null_access();
	haxe_io_Output_flush(((haxe__io__Output)r1));
	r8 = haxe_io_BytesOutput_getBytes(r1);
	haxe_io_Output_close(((haxe__io__Output)r1));
	return r8;
}

haxe__io__Bytes format_gif_Reader_readColorTable(format__gif__Reader r0,int r1) {
	haxe__io__Bytes r4;
	haxe__io__Input r7;
	int r2, r3, r6;
	r3 = 3;
	r2 = r1 * r3;
	r1 = r2;
	r4 = haxe_io_Bytes_alloc(r2);
	r2 = 0;
	label$2220$5:
	if( r2 >= r1 ) goto label$2220$28;
	if( r4 == NULL ) hl_null_access();
	r7 = r0->i;
	if( r7 == NULL ) hl_null_access();
	r6 = ((int (*)(haxe__io__Input))r7->$type->vobj_proto[0])(r7);
	haxe_io_Bytes_set(r4,r2,r6);
	r6 = 1;
	r3 = r2 + r6;
	r7 = r0->i;
	if( r7 == NULL ) hl_null_access();
	r6 = ((int (*)(haxe__io__Input))r7->$type->vobj_proto[0])(r7);
	haxe_io_Bytes_set(r4,r3,r6);
	r6 = 2;
	r3 = r2 + r6;
	r7 = r0->i;
	if( r7 == NULL ) hl_null_access();
	r6 = ((int (*)(haxe__io__Input))r7->$type->vobj_proto[0])(r7);
	haxe_io_Bytes_set(r4,r3,r6);
	r6 = 3;
	r3 = r2 + r6;
	r2 = r3;
	goto label$2220$5;
	label$2220$28:
	return r4;
}

void format_gif_Reader_new(format__gif__Reader r0,haxe__io__Input r1) {
	bool r2;
	r0->i = r1;
	if( r1 == NULL ) hl_null_access();
	r2 = false;
	r2 = haxe_io_Input_set_bigEndian(r1,r2);
	return;
}

