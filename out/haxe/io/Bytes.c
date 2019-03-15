﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

int haxe_io_Bytes_get(haxe__io__Bytes r0,int r1) {
	bool r2;
	vbyte *r5;
	int r3, r4;
	r4 = r0->length;
	if( ((unsigned)r1) >= ((unsigned)r4) ) goto label$477$4;
	r2 = false;
	goto label$477$5;
	label$477$4:
	r2 = true;
	label$477$5:
	if( !r2 ) goto label$477$8;
	r3 = 0;
	return r3;
	label$477$8:
	r5 = r0->b;
	r3 = *(unsigned char*)(r5 + r1);
	return r3;
}

void haxe_io_Bytes_set(haxe__io__Bytes r0,int r1,int r2) {
	venum *r6;
	bool r4;
	vbyte *r7;
	int r5;
	r5 = r0->length;
	if( ((unsigned)r1) >= ((unsigned)r5) ) goto label$478$4;
	r4 = false;
	goto label$478$5;
	label$478$4:
	r4 = true;
	label$478$5:
	if( !r4 ) goto label$478$8;
	r6 = (venum*)global$808;
	hl_throw((vdynamic*)r6);
	label$478$8:
	r7 = r0->b;
	*(unsigned char*)(r7 + r1) = (unsigned char)r2;
	return;
}

void haxe_io_Bytes_blit(haxe__io__Bytes r0,int r1,haxe__io__Bytes r2,int r3,int r4) {
	venum *r9;
	bool r8;
	vbyte *r10, *r11;
	int r6, r7;
	r7 = 0;
	if( r1 < r7 ) goto label$479$23;
	r7 = 0;
	if( r4 < r7 ) goto label$479$23;
	r6 = r1 + r4;
	r7 = r0->length;
	if( ((unsigned)r7) < ((unsigned)r6) ) goto label$479$9;
	r8 = false;
	goto label$479$10;
	label$479$9:
	r8 = true;
	label$479$10:
	if( r8 ) goto label$479$23;
	r7 = 0;
	if( r3 < r7 ) goto label$479$23;
	r7 = 0;
	if( r4 < r7 ) goto label$479$23;
	r6 = r3 + r4;
	if( r2 == NULL ) hl_null_access();
	r7 = r2->length;
	if( ((unsigned)r7) < ((unsigned)r6) ) goto label$479$21;
	r8 = false;
	goto label$479$22;
	label$479$21:
	r8 = true;
	label$479$22:
	if( !r8 ) goto label$479$25;
	label$479$23:
	r9 = (venum*)global$808;
	hl_throw((vdynamic*)r9);
	label$479$25:
	r10 = r0->b;
	r11 = r2->b;
	hl_bytes_blit(r10,r1,r11,r3,r4);
	return;
}

void haxe_io_Bytes_fill(haxe__io__Bytes r0,int r1,int r2,int r3) {
	venum *r8;
	bool r7;
	vbyte *r9;
	int r5, r6;
	r6 = 0;
	if( r1 < r6 ) goto label$480$11;
	r6 = 0;
	if( r2 < r6 ) goto label$480$11;
	r5 = r1 + r2;
	r6 = r0->length;
	if( ((unsigned)r6) < ((unsigned)r5) ) goto label$480$9;
	r7 = false;
	goto label$480$10;
	label$480$9:
	r7 = true;
	label$480$10:
	if( !r7 ) goto label$480$13;
	label$480$11:
	r8 = (venum*)global$808;
	hl_throw((vdynamic*)r8);
	label$480$13:
	r9 = r0->b;
	hl_bytes_fill(r9,r1,r2,r3);
	return;
}

haxe__io__Bytes haxe_io_Bytes_sub(haxe__io__Bytes r0,int r1,int r2) {
	venum *r7;
	haxe__io__Bytes r8;
	bool r6;
	vbyte *r9;
	int r4, r5;
	r5 = 0;
	if( r1 < r5 ) goto label$481$11;
	r5 = 0;
	if( r2 < r5 ) goto label$481$11;
	r4 = r1 + r2;
	r5 = r0->length;
	if( ((unsigned)r5) < ((unsigned)r4) ) goto label$481$9;
	r6 = false;
	goto label$481$10;
	label$481$9:
	r6 = true;
	label$481$10:
	if( !r6 ) goto label$481$13;
	label$481$11:
	r7 = (venum*)global$808;
	hl_throw((vdynamic*)r7);
	label$481$13:
	r8 = (haxe__io__Bytes)hl_alloc_obj(haxe__io__Bytes__val);
	r9 = r0->b;
	r9 = hl__Bytes_Bytes_Impl__sub(r9,r1,r2);
	haxe_io_Bytes_new(r8,r9,r2);
	return r8;
}

double haxe_io_Bytes_getDouble(haxe__io__Bytes r0,int r1) {
	bool r2;
	double r5;
	vbyte *r6;
	int r3, r4;
	r4 = 7;
	r3 = r1 + r4;
	r4 = r0->length;
	if( ((unsigned)r3) >= ((unsigned)r4) ) goto label$482$6;
	r2 = false;
	goto label$482$7;
	label$482$6:
	r2 = true;
	label$482$7:
	if( !r2 ) goto label$482$10;
	r5 = 0.;
	return r5;
	label$482$10:
	r6 = r0->b;
	r5 = *(double*)(r6 + r1);
	return r5;
}

double haxe_io_Bytes_getFloat(haxe__io__Bytes r0,int r1) {
	bool r2;
	float r7;
	double r5;
	vbyte *r6;
	int r3, r4;
	r4 = 3;
	r3 = r1 + r4;
	r4 = r0->length;
	if( ((unsigned)r3) >= ((unsigned)r4) ) goto label$483$6;
	r2 = false;
	goto label$483$7;
	label$483$6:
	r2 = true;
	label$483$7:
	if( !r2 ) goto label$483$10;
	r5 = 0.;
	return r5;
	label$483$10:
	r6 = r0->b;
	r7 = *(float*)(r6 + r1);
	r5 = (double)r7;
	return r5;
}

void haxe_io_Bytes_setFloat(haxe__io__Bytes r0,int r1,double r2) {
	venum *r7;
	bool r4;
	float r9;
	vbyte *r8;
	int r5, r6;
	r6 = 3;
	r5 = r1 + r6;
	r6 = r0->length;
	if( ((unsigned)r5) >= ((unsigned)r6) ) goto label$484$6;
	r4 = false;
	goto label$484$7;
	label$484$6:
	r4 = true;
	label$484$7:
	if( !r4 ) goto label$484$10;
	r7 = (venum*)global$808;
	hl_throw((vdynamic*)r7);
	label$484$10:
	r8 = r0->b;
	r9 = (float)r2;
	*(float*)(r8 + r1) = r9;
	return;
}

int haxe_io_Bytes_getInt32(haxe__io__Bytes r0,int r1) {
	bool r2;
	vbyte *r5;
	int r3, r4;
	r4 = 3;
	r3 = r1 + r4;
	r4 = r0->length;
	if( ((unsigned)r3) >= ((unsigned)r4) ) goto label$485$6;
	r2 = false;
	goto label$485$7;
	label$485$6:
	r2 = true;
	label$485$7:
	if( !r2 ) goto label$485$10;
	r3 = 0;
	return r3;
	label$485$10:
	r5 = r0->b;
	r3 = *(int*)(r5 + r1);
	return r3;
}

haxe___Int64_____Int64 haxe_io_Bytes_getInt64(haxe__io__Bytes r0,int r1) {
	bool r3;
	haxe___Int64_____Int64 r6;
	vbyte *r7, *r8;
	int r4, r5, r9;
	r5 = 7;
	r4 = r1 + r5;
	r5 = r0->length;
	if( ((unsigned)r4) >= ((unsigned)r5) ) goto label$486$6;
	r3 = false;
	goto label$486$7;
	label$486$6:
	r3 = true;
	label$486$7:
	if( !r3 ) goto label$486$13;
	r6 = (haxe___Int64_____Int64)hl_alloc_obj(haxe___Int64_____Int64__val);
	r4 = 0;
	r5 = 0;
	haxe__Int64____Int64_new(r6,r4,r5);
	return r6;
	label$486$13:
	r7 = r0->b;
	r5 = 4;
	r4 = r1 + r5;
	r4 = *(int*)(r7 + r4);
	r8 = r0->b;
	r6 = (haxe___Int64_____Int64)hl_alloc_obj(haxe___Int64_____Int64__val);
	r9 = *(int*)(r8 + r1);
	haxe__Int64____Int64_new(r6,r4,r9);
	return r6;
}

void haxe_io_Bytes_setInt32(haxe__io__Bytes r0,int r1,int r2) {
	venum *r7;
	bool r4;
	vbyte *r8;
	int r5, r6;
	r6 = 3;
	r5 = r1 + r6;
	r6 = r0->length;
	if( ((unsigned)r5) >= ((unsigned)r6) ) goto label$487$6;
	r4 = false;
	goto label$487$7;
	label$487$6:
	r4 = true;
	label$487$7:
	if( !r4 ) goto label$487$10;
	r7 = (venum*)global$808;
	hl_throw((vdynamic*)r7);
	label$487$10:
	r8 = r0->b;
	*(int*)(r8 + r1) = r2;
	return;
}

String haxe_io_Bytes_getString(haxe__io__Bytes r0,int r1,int r2,venum* r3) {
	String r12;
	venum *r8, *r11;
	bool r7;
	vbyte *r9, *r10;
	int r5, r6;
	r6 = 0;
	if( r1 < r6 ) goto label$488$11;
	r6 = 0;
	if( r2 < r6 ) goto label$488$11;
	r5 = r1 + r2;
	r6 = r0->length;
	if( ((unsigned)r6) < ((unsigned)r5) ) goto label$488$9;
	r7 = false;
	goto label$488$10;
	label$488$9:
	r7 = true;
	label$488$10:
	if( !r7 ) goto label$488$13;
	label$488$11:
	r8 = (venum*)global$808;
	hl_throw((vdynamic*)r8);
	label$488$13:
	r6 = 2;
	r5 = r2 + r6;
	r9 = hl_alloc_bytes(r5);
	r5 = 0;
	r10 = r0->b;
	hl_bytes_blit(r9,r5,r10,r1,r2);
	r6 = 0;
	*(unsigned char*)(r9 + r2) = (unsigned char)r6;
	r6 = 1;
	r5 = r2 + r6;
	r6 = 0;
	*(unsigned char*)(r9 + r5) = (unsigned char)r6;
	r11 = (venum*)global$809;
	if( r3 != r11 ) goto label$488$33;
	r12 = (String)hl_alloc_obj(String__val);
	r12->bytes = r9;
	r5 = 0;
	r5 = hl_ucs2length(r9,r5);
	r12->length = r5;
	return r12;
	label$488$33:
	r12 = String_fromUTF8(r9);
	return r12;
}

String haxe_io_Bytes_toString(haxe__io__Bytes r0) {
	String r1;
	venum *r4;
	int r2, r3;
	r2 = 0;
	r3 = r0->length;
	r4 = NULL;
	r1 = haxe_io_Bytes_getString(r0,r2,r3,r4);
	return r1;
}

String haxe_io_Bytes_toHex(haxe__io__Bytes r0) {
	String r8;
	hl__types__ArrayObj r3;
	hl_type *r5;
	StringBuf r1;
	vdynamic *r11, *r13;
	int r6, r7, r9, r10, r12;
	varray *r4;
	r1 = (StringBuf)hl_alloc_obj(StringBuf__val);
	StringBuf_new(r1);
	r5 = &type$127;
	r6 = 0;
	r4 = hl_alloc_array(r5,r6);
	r3 = hl_types_ArrayObj_alloc(r4);
	r6 = 0;
	r8 = (String)global$810;
	if( r8 == NULL ) hl_null_access();
	r7 = r8->length;
	label$490$10:
	if( r6 >= r7 ) goto label$490$20;
	if( r3 == NULL ) hl_null_access();
	r8 = (String)global$810;
	if( r8 == NULL ) hl_null_access();
	r9 = r6;
	++r6;
	r11 = String_charCodeAt(r8,r9);
	r9 = hl_types_ArrayObj_push(r3,((vdynamic*)r11));
	goto label$490$10;
	label$490$20:
	r6 = 0;
	r7 = r0->length;
	label$490$22:
	if( r6 >= r7 ) goto label$490$52;
	r9 = r6;
	++r6;
	r9 = haxe_io_Bytes_get(r0,r9);
	if( r1 == NULL ) hl_null_access();
	if( r3 == NULL ) hl_null_access();
	r12 = 4;
	r10 = r9 >> r12;
	r12 = r3->length;
	if( ((unsigned)r10) < ((unsigned)r12) ) goto label$490$35;
	r11 = NULL;
	goto label$490$38;
	label$490$35:
	r4 = r3->array;
	r13 = ((vdynamic**)(r4 + 1))[r10];
	r11 = (vdynamic*)r13;
	label$490$38:
	r10 = r11 ? r11->v.i : 0;
	StringBuf_addChar(r1,r10);
	r12 = 15;
	r10 = r9 & r12;
	r12 = r3->length;
	if( ((unsigned)r10) < ((unsigned)r12) ) goto label$490$46;
	r11 = NULL;
	goto label$490$49;
	label$490$46:
	r4 = r3->array;
	r13 = ((vdynamic**)(r4 + 1))[r10];
	r11 = (vdynamic*)r13;
	label$490$49:
	r10 = r11 ? r11->v.i : 0;
	StringBuf_addChar(r1,r10);
	goto label$490$22;
	label$490$52:
	if( r1 == NULL ) hl_null_access();
	r8 = StringBuf_toString(r1);
	return r8;
}

vbyte* haxe_io_Bytes___string(haxe__io__Bytes r0) {
	String r2;
	vbyte *r1;
	r2 = haxe_io_Bytes_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

void haxe_io_Bytes_new(haxe__io__Bytes r0,vbyte* r1,int r2) {
	r0->b = r1;
	r0->length = r2;
	return;
}

haxe__io__Bytes haxe_io_Bytes_ofString(String r0,venum* r1) {
	venum *r3;
	haxe__io__Bytes r5;
	int *r8;
	vbyte *r6;
	int r4, r7, r9, r10;
	if( r1 ) goto label$493$3;
	r3 = (venum*)global$806;
	r1 = r3;
	label$493$3:
	if( r1 == NULL ) hl_null_access();
	r4 = HL__ENUM_INDEX__(r1);
	switch(r4) {
		default:
			goto label$493$29;
		case 0:
			r4 = 0;
			r5 = (haxe__io__Bytes)hl_alloc_obj(haxe__io__Bytes__val);
			if( r0 == NULL ) hl_null_access();
			r6 = r0->bytes;
			r7 = 0;
			r8 = &r4;
			r6 = hl_utf16_to_utf8(r6,r7,r8);
			haxe_io_Bytes_new(r5,r6,r4);
			return r5;
		case 1:
			r5 = (haxe__io__Bytes)hl_alloc_obj(haxe__io__Bytes__val);
			if( r0 == NULL ) hl_null_access();
			r6 = r0->bytes;
			r7 = 0;
			r9 = r0->length;
			r10 = 1;
			r9 = r9 << r10;
			r6 = hl__Bytes_Bytes_Impl__sub(r6,r7,r9);
			r7 = r0->length;
			r9 = 1;
			r7 = r7 << r9;
			haxe_io_Bytes_new(r5,r6,r7);
			return r5;
	}
	label$493$29:
	r5 = NULL;
	return r5;
}

haxe__io__Bytes haxe_io_Bytes_alloc(int r0) {
	haxe__io__Bytes r5;
	int r2, r4;
	vbyte *r1;
	r1 = hl_alloc_bytes(r0);
	r2 = 0;
	r4 = 0;
	hl_bytes_fill(r1,r2,r0,r4);
	r5 = (haxe__io__Bytes)hl_alloc_obj(haxe__io__Bytes__val);
	haxe_io_Bytes_new(r5,r1,r0);
	return r5;
}

