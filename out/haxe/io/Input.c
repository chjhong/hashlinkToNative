﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

int haxe_io_Input_readByte(haxe__io__Input r0) {
	String r1;
	r1 = (String)global$484;
	hl_throw((vdynamic*)r1);
}

int haxe_io_Input_readBytes(haxe__io__Input r0,haxe__io__Bytes r1,int r2,int r3) {
	venum *r8;
	bool r11;
	haxe__io__Eof r12;
	haxe__io__$Eof r10;
	vdynamic *r9;
	vbyte *r5;
	int r4, r6, r7;
	hl_trap_ctx trap$0;
	r4 = r3;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->b;
	r7 = 0;
	if( r2 < r7 ) goto label$2222$10;
	r7 = 0;
	if( r3 < r7 ) goto label$2222$10;
	r6 = r2 + r3;
	r7 = r1->length;
	if( r7 >= r6 ) goto label$2222$12;
	label$2222$10:
	r8 = (venum*)global$808;
	hl_throw((vdynamic*)r8);
	label$2222$12:
	hl_trap(trap$0,r9,label$2222$23);
	label$2222$13:
	r7 = 0;
	if( r7 >= r4 ) goto label$2222$21;
	r6 = ((int (*)(haxe__io__Input))r0->$type->vobj_proto[0])(r0);
	*(unsigned char*)(r5 + r2) = (unsigned char)r6;
	++r2;
	--r4;
	goto label$2222$13;
	label$2222$21:
	hl_endtrap(trap$0);
	goto label$2222$29;
	label$2222$23:
	r10 = (haxe__io__$Eof)global$333;
	r11 = hl_BaseType_check(((hl__BaseType)r10),r9);
	if( !r11 ) goto label$2222$28;
	r12 = (haxe__io__Eof)r9;
	goto label$2222$29;
	label$2222$28:
	hl_rethrow((vdynamic*)r9);
	label$2222$29:
	r6 = r3 - r4;
	return r6;
}

void haxe_io_Input_close(haxe__io__Input r0) {
	return;
}

bool haxe_io_Input_set_bigEndian(haxe__io__Input r0,bool r1) {
	r0->bigEndian = r1;
	return r1;
}

haxe__io__Bytes haxe_io_Input_readAll(haxe__io__Input r0,vdynamic* r1) {
	haxe__io__BytesBuffer r6;
	venum *r12;
	bool r8;
	haxe__io__Bytes r5, r9;
	haxe__io__Eof r15;
	haxe__io__$Eof r14;
	vdynamic *r3, *r7;
	vbyte *r13;
	int r4, r10, r11;
	hl_trap_ctx trap$0;
	if( r1 ) goto label$2225$4;
	r4 = 16384;
	r3 = hl_alloc_dynamic(&type$3);
	r3->v.i = r4;
	r1 = r3;
	label$2225$4:
	r4 = r1 ? r1->v.i : 0;
	r5 = haxe_io_Bytes_alloc(r4);
	r6 = (haxe__io__BytesBuffer)hl_alloc_obj(haxe__io__BytesBuffer__val);
	haxe_io_BytesBuffer_new(r6);
	hl_trap(trap$0,r7,label$2225$33);
	label$2225$9:
	r8 = true;
	if( !r8 ) goto label$2225$31;
	r4 = 0;
	r10 = r1 ? r1->v.i : 0;
	r4 = ((int (*)(haxe__io__Input,haxe__io__Bytes,int,int))r0->$type->vobj_proto[1])(r0,r5,r4,r10);
	r11 = 0;
	if( r4 != r11 ) goto label$2225$19;
	r12 = (venum*)global$835;
	hl_throw((vdynamic*)r12);
	label$2225$19:
	r11 = 0;
	if( r4 < r11 ) goto label$2225$24;
	if( r5 == NULL ) hl_null_access();
	r11 = r5->length;
	if( r11 >= r4 ) goto label$2225$26;
	label$2225$24:
	r12 = (venum*)global$808;
	hl_throw((vdynamic*)r12);
	label$2225$26:
	if( r6 == NULL ) hl_null_access();
	r13 = r5->b;
	r10 = 0;
	haxe_io_BytesBuffer___add(r6,r13,r10,r4);
	goto label$2225$9;
	label$2225$31:
	hl_endtrap(trap$0);
	goto label$2225$39;
	label$2225$33:
	r14 = (haxe__io__$Eof)global$333;
	r8 = hl_BaseType_check(((hl__BaseType)r14),r7);
	if( !r8 ) goto label$2225$38;
	r15 = (haxe__io__Eof)r7;
	goto label$2225$39;
	label$2225$38:
	hl_rethrow((vdynamic*)r7);
	label$2225$39:
	if( r6 == NULL ) hl_null_access();
	r9 = haxe_io_BytesBuffer_getBytes(r6);
	return r9;
}

void haxe_io_Input_readFullBytes(haxe__io__Input r0,haxe__io__Bytes r1,int r2,int r3) {
	venum *r8;
	int r4, r5, r7;
	label$2226$0:
	r5 = 0;
	if( r5 >= r3 ) goto label$2226$13;
	r4 = ((int (*)(haxe__io__Input,haxe__io__Bytes,int,int))r0->$type->vobj_proto[1])(r0,r1,r2,r3);
	r7 = 0;
	if( r4 != r7 ) goto label$2226$8;
	r8 = (venum*)global$835;
	hl_throw((vdynamic*)r8);
	label$2226$8:
	r5 = r2 + r4;
	r2 = r5;
	r5 = r3 - r4;
	r3 = r5;
	goto label$2226$0;
	label$2226$13:
	return;
}

haxe__io__Bytes haxe_io_Input_read(haxe__io__Input r0,int r1) {
	venum *r7;
	haxe__io__Bytes r2;
	int r3, r4, r5, r6;
	r2 = haxe_io_Bytes_alloc(r1);
	r3 = 0;
	label$2227$2:
	r5 = 0;
	if( r5 >= r1 ) goto label$2227$15;
	r4 = ((int (*)(haxe__io__Input,haxe__io__Bytes,int,int))r0->$type->vobj_proto[1])(r0,r2,r3,r1);
	r6 = 0;
	if( r4 != r6 ) goto label$2227$10;
	r7 = (venum*)global$835;
	hl_throw((vdynamic*)r7);
	label$2227$10:
	r5 = r3 + r4;
	r3 = r5;
	r5 = r1 - r4;
	r1 = r5;
	goto label$2227$2;
	label$2227$15:
	return r2;
}

String haxe_io_Input_readUntil(haxe__io__Input r0,int r1) {
	String r9;
	haxe__io__BytesBuffer r2;
	haxe__io__Bytes r10;
	bool r4;
	vbyte *r8;
	int r5, r6, r7;
	r2 = (haxe__io__BytesBuffer)hl_alloc_obj(haxe__io__BytesBuffer__val);
	haxe_io_BytesBuffer_new(r2);
	label$2228$2:
	r4 = true;
	if( !r4 ) goto label$2228$22;
	r6 = ((int (*)(haxe__io__Input))r0->$type->vobj_proto[0])(r0);
	r5 = r6;
	if( r6 != r1 ) goto label$2228$9;
	goto label$2228$22;
	label$2228$9:
	if( r2 == NULL ) hl_null_access();
	r6 = r2->pos;
	r7 = r2->size;
	if( r6 != r7 ) goto label$2228$15;
	r6 = 0;
	haxe_io_BytesBuffer___expand(r2,r6);
	label$2228$15:
	r8 = r2->b;
	r6 = r2->pos;
	r7 = r6;
	++r6;
	r2->pos = r6;
	*(unsigned char*)(r8 + r7) = (unsigned char)r5;
	goto label$2228$2;
	label$2228$22:
	if( r2 == NULL ) hl_null_access();
	r10 = haxe_io_BytesBuffer_getBytes(r2);
	if( r10 == NULL ) hl_null_access();
	r9 = haxe_io_Bytes_toString(r10);
	return r9;
}

double haxe_io_Input_readFloat(haxe__io__Input r0) {
	float r1;
	double r3;
	int r2;
	r2 = haxe_io_Input_readInt32(r0);
	r1 = haxe_io_FPHelper_i32ToFloat(r2);
	r3 = (double)r1;
	return r3;
}

int haxe_io_Input_readInt16(haxe__io__Input r0) {
	bool r4;
	int r1, r2, r3, r5, r6;
	r1 = ((int (*)(haxe__io__Input))r0->$type->vobj_proto[0])(r0);
	r2 = ((int (*)(haxe__io__Input))r0->$type->vobj_proto[0])(r0);
	r4 = r0->bigEndian;
	if( !r4 ) goto label$2230$8;
	r6 = 8;
	r5 = r1 << r6;
	r3 = r2 | r5;
	goto label$2230$11;
	label$2230$8:
	r6 = 8;
	r5 = r2 << r6;
	r3 = r1 | r5;
	label$2230$11:
	r6 = 32768;
	r5 = r3 & r6;
	r6 = 0;
	if( r5 == r6 ) goto label$2230$18;
	r6 = 65536;
	r5 = r3 - r6;
	return r5;
	label$2230$18:
	return r3;
}

int haxe_io_Input_readUInt16(haxe__io__Input r0) {
	bool r3;
	int r1, r2, r4, r5, r6;
	r1 = ((int (*)(haxe__io__Input))r0->$type->vobj_proto[0])(r0);
	r2 = ((int (*)(haxe__io__Input))r0->$type->vobj_proto[0])(r0);
	r3 = r0->bigEndian;
	if( !r3 ) goto label$2231$8;
	r6 = 8;
	r5 = r1 << r6;
	r4 = r2 | r5;
	return r4;
	label$2231$8:
	r6 = 8;
	r5 = r2 << r6;
	r4 = r1 | r5;
	return r4;
}

int haxe_io_Input_readUInt24(haxe__io__Input r0) {
	bool r4;
	int r1, r2, r3, r5, r6, r7;
	r1 = ((int (*)(haxe__io__Input))r0->$type->vobj_proto[0])(r0);
	r2 = ((int (*)(haxe__io__Input))r0->$type->vobj_proto[0])(r0);
	r3 = ((int (*)(haxe__io__Input))r0->$type->vobj_proto[0])(r0);
	r4 = r0->bigEndian;
	if( !r4 ) goto label$2232$12;
	r7 = 8;
	r6 = r2 << r7;
	r5 = r3 | r6;
	r7 = 16;
	r6 = r1 << r7;
	r5 = r5 | r6;
	return r5;
	label$2232$12:
	r7 = 8;
	r6 = r2 << r7;
	r5 = r1 | r6;
	r7 = 16;
	r6 = r3 << r7;
	r5 = r5 | r6;
	return r5;
}

int haxe_io_Input_readInt32(haxe__io__Input r0) {
	bool r5;
	int r1, r2, r3, r4, r6, r7, r8;
	r1 = ((int (*)(haxe__io__Input))r0->$type->vobj_proto[0])(r0);
	r2 = ((int (*)(haxe__io__Input))r0->$type->vobj_proto[0])(r0);
	r3 = ((int (*)(haxe__io__Input))r0->$type->vobj_proto[0])(r0);
	r4 = ((int (*)(haxe__io__Input))r0->$type->vobj_proto[0])(r0);
	r5 = r0->bigEndian;
	if( !r5 ) goto label$2233$16;
	r8 = 8;
	r7 = r3 << r8;
	r6 = r4 | r7;
	r8 = 16;
	r7 = r2 << r8;
	r6 = r6 | r7;
	r8 = 24;
	r7 = r1 << r8;
	r6 = r6 | r7;
	return r6;
	label$2233$16:
	r8 = 8;
	r7 = r2 << r8;
	r6 = r1 | r7;
	r8 = 16;
	r7 = r3 << r8;
	r6 = r6 | r7;
	r8 = 24;
	r7 = r4 << r8;
	r6 = r6 | r7;
	return r6;
}

String haxe_io_Input_readString(haxe__io__Input r0,int r1,venum* r2) {
	String r6;
	haxe__io__Bytes r3;
	int r4;
	r3 = haxe_io_Bytes_alloc(r1);
	r4 = 0;
	haxe_io_Input_readFullBytes(r0,r3,r4,r1);
	if( r3 == NULL ) hl_null_access();
	r4 = 0;
	r6 = haxe_io_Bytes_getString(r3,r4,r1,r2);
	return r6;
}
