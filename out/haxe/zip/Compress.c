﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

vvirtual* haxe_zip_Compress_execute(haxe__zip__Compress r0,haxe__io__Bytes r1,int r2,haxe__io__Bytes r3,int r4) {
	vvirtual *r17;
	bool r18;
	haxe__io__BytesDataImpl r9, r12;
	int *r15, *r16;
	vbyte *r10, *r13;
	fmt_zip *r8;
	int r5, r7, r11, r14;
	r5 = 0;
	r7 = 0;
	r8 = r0->s;
	r9 = (haxe__io__BytesDataImpl)hl_alloc_obj(haxe__io__BytesDataImpl__val);
	if( r1 == NULL ) hl_null_access();
	r10 = r1->b;
	r11 = r1->length;
	haxe_io_BytesDataImpl_new(r9,r10,r11);
	if( r9 ) goto label$3171$11;
	r10 = NULL;
	goto label$3171$12;
	label$3171$11:
	r10 = r9->bytes;
	label$3171$12:
	r11 = r1->length;
	r12 = (haxe__io__BytesDataImpl)hl_alloc_obj(haxe__io__BytesDataImpl__val);
	if( r3 == NULL ) hl_null_access();
	r13 = r3->b;
	r14 = r3->length;
	haxe_io_BytesDataImpl_new(r12,r13,r14);
	if( r12 ) goto label$3171$21;
	r13 = NULL;
	goto label$3171$22;
	label$3171$21:
	r13 = r12->bytes;
	label$3171$22:
	r14 = r3->length;
	r15 = &r5;
	r16 = &r7;
	r17 = hl_alloc_virtual(&type$3029);
	r18 = fmt_deflate_buffer(r8,r10,r2,r11,r13,r4,r14,r15,r16);
	if( hl_vfields(r17)[0] ) *(bool*)(hl_vfields(r17)[0]) = (bool)r18; else hl_dyn_seti(r17->value,40759692/*done*/,&type$7,r18);
	if( hl_vfields(r17)[1] ) *(int*)(hl_vfields(r17)[1]) = (int)r5; else hl_dyn_seti(r17->value,195513440/*read*/,&type$3,r5);
	if( hl_vfields(r17)[2] ) *(int*)(hl_vfields(r17)[2]) = (int)r7; else hl_dyn_seti(r17->value,-262575014/*write*/,&type$3,r7);
	return r17;
}

void haxe_zip_Compress_setFlushMode(haxe__zip__Compress r0,venum* r1) {
	int r4;
	fmt_zip *r3;
	r3 = r0->s;
	if( r1 == NULL ) hl_null_access();
	r4 = HL__ENUM_INDEX__(r1);
	fmt_zip_flush_mode(r3,r4);
	return;
}

void haxe_zip_Compress_close(haxe__zip__Compress r0) {
	fmt_zip *r2;
	r2 = r0->s;
	fmt_zip_end(r2);
	return;
}

void haxe_zip_Compress_new(haxe__zip__Compress r0,int r1) {
	fmt_zip *r2;
	r2 = fmt_deflate_init(r1);
	r0->s = r2;
	return;
}

haxe__io__Bytes haxe_zip_Compress_run(haxe__io__Bytes r0,int r1) {
	String r12;
	vvirtual *r8;
	venum *r5;
	bool r11;
	haxe__io__Bytes r6, r9;
	haxe__zip__Compress r2;
	double r13, r14, r15;
	fmt_zip *r7;
	int r3, r10;
	r2 = (haxe__zip__Compress)hl_alloc_obj(haxe__zip__Compress__val);
	haxe_zip_Compress_new(r2,r1);
	r5 = (venum*)global$886;
	haxe_zip_Compress_setFlushMode(r2,r5);
	r7 = r2->s;
	if( r0 == NULL ) hl_null_access();
	r3 = r0->length;
	r3 = fmt_deflate_bound(r7,r3);
	r6 = haxe_io_Bytes_alloc(r3);
	r3 = 0;
	r10 = 0;
	r8 = haxe_zip_Compress_execute(r2,r0,r3,r6,r10);
	haxe_zip_Compress_close(r2);
	if( r8 == NULL ) hl_null_access();
	r11 = hl_vfields(r8)[0] ? (*(bool*)(hl_vfields(r8)[0])) : (bool)hl_dyn_geti(r8->value,40759692/*done*/,&type$7);
	if( !r11 ) goto label$2334$19;
	r3 = hl_vfields(r8)[1] ? (*(int*)(hl_vfields(r8)[1])) : (int)hl_dyn_geti(r8->value,195513440/*read*/,&type$3);
	r10 = r0->length;
	if( r3 == r10 ) goto label$2334$21;
	label$2334$19:
	r12 = (String)global$887;
	hl_throw((vdynamic*)r12);
	label$2334$21:
	r3 = hl_vfields(r8)[2] ? (*(int*)(hl_vfields(r8)[2])) : (int)hl_dyn_geti(r8->value,-262575014/*write*/,&type$3);
	r13 = (double)r3;
	if( r6 == NULL ) hl_null_access();
	r3 = r6->length;
	r14 = (double)r3;
	r15 = 0.66000000000000003;
	r14 = r14 * r15;
	if( !(r13 < r14) ) goto label$2334$33;
	r3 = 0;
	r10 = hl_vfields(r8)[2] ? (*(int*)(hl_vfields(r8)[2])) : (int)hl_dyn_geti(r8->value,-262575014/*write*/,&type$3);
	r9 = haxe_io_Bytes_sub(r6,r3,r10);
	return r9;
	label$2334$33:
	r3 = hl_vfields(r8)[2] ? (*(int*)(hl_vfields(r8)[2])) : (int)hl_dyn_geti(r8->value,-262575014/*write*/,&type$3);
	r6->length = r3;
	return r6;
}

