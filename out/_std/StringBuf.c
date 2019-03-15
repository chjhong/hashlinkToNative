﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void StringBuf_add(StringBuf r0,vdynamic* r1) {
	int *r5;
	vbyte *r4, *r11, *r12;
	int r2, r6, r7, r8, r9, r10, r13;
	r2 = 0;
	r5 = &r2;
	r4 = hl_value_to_string(r1,r5);
	r7 = 1;
	r6 = r2 << r7;
	r7 = r0->pos;
	r7 = r7 + r6;
	r8 = r0->size;
	if( r8 >= r7 ) goto label$225$26;
	r7 = r0->pos;
	r7 = r7 + r6;
	r8 = r0->size;
	r9 = 3;
	r8 = r8 * r9;
	r9 = 1;
	r8 = r8 >> r9;
	if( r8 >= r7 ) goto label$225$18;
	r8 = r7;
	label$225$18:
	r11 = hl_alloc_bytes(r8);
	r9 = 0;
	r12 = r0->b;
	r10 = 0;
	r13 = r0->pos;
	hl_bytes_blit(r11,r9,r12,r10,r13);
	r0->b = r11;
	r0->size = r8;
	label$225$26:
	r11 = r0->b;
	r7 = r0->pos;
	r8 = 0;
	hl_bytes_blit(r11,r7,r4,r8,r6);
	r7 = r0->pos;
	r7 = r7 + r6;
	r0->pos = r7;
	return;
}

void StringBuf_addSub(StringBuf r0,String r1,int r2,vdynamic* r3) {
	vbyte *r8, *r12, *r13;
	int r5, r6, r7, r9, r10, r11, r14;
	r6 = 0;
	if( r2 >= r6 ) goto label$226$4;
	r5 = 0;
	r2 = r5;
	label$226$4:
	if( r1 == NULL ) hl_null_access();
	r6 = r1->length;
	if( r2 < r6 ) goto label$226$8;
	return;
	label$226$8:
	if( r3 ) goto label$226$13;
	r6 = r1->length;
	r6 = r6 - r2;
	r5 = r6;
	goto label$226$24;
	label$226$13:
	r6 = r3 ? r3->v.i : 0;
	r5 = r6;
	r6 = r2 + r5;
	r7 = r1->length;
	if( r7 >= r6 ) goto label$226$21;
	r6 = r1->length;
	r6 = r6 - r2;
	r5 = r6;
	label$226$21:
	r7 = 0;
	if( r7 < r5 ) goto label$226$24;
	return;
	label$226$24:
	r8 = r1->bytes;
	r7 = 1;
	r6 = r5 << r7;
	r7 = r0->pos;
	r7 = r7 + r6;
	r9 = r0->size;
	if( r9 >= r7 ) goto label$226$48;
	r7 = r0->pos;
	r7 = r7 + r6;
	r9 = r0->size;
	r10 = 3;
	r9 = r9 * r10;
	r10 = 1;
	r9 = r9 >> r10;
	if( r9 >= r7 ) goto label$226$40;
	r9 = r7;
	label$226$40:
	r12 = hl_alloc_bytes(r9);
	r10 = 0;
	r13 = r0->b;
	r11 = 0;
	r14 = r0->pos;
	hl_bytes_blit(r12,r10,r13,r11,r14);
	r0->b = r12;
	r0->size = r9;
	label$226$48:
	r12 = r0->b;
	r7 = r0->pos;
	r10 = 1;
	r9 = r2 << r10;
	hl_bytes_blit(r12,r7,r8,r9,r6);
	r7 = r0->pos;
	r7 = r7 + r6;
	r0->pos = r7;
	return;
}

void StringBuf_addChar(StringBuf r0,int r1) {
	String r5, r8;
	int *r6;
	vbyte *r7, *r10;
	int r3, r4, r9, r11;
	r4 = 0;
	if( r1 < r4 ) goto label$227$45;
	r4 = 65536;
	if( r1 >= r4 ) goto label$227$45;
	r4 = 55296;
	if( r1 < r4 ) goto label$227$15;
	r4 = 57343;
	if( r4 < r1 ) goto label$227$15;
	r5 = (String)global$178;
	r3 = r1;
	r6 = &r3;
	r7 = hl_itos(r3,r6);
	r8 = String___alloc__(r7,r3);
	r5 = String___add__(r5,r8);
	hl_throw((vdynamic*)r5);
	label$227$15:
	r3 = r0->pos;
	r4 = 2;
	r3 = r3 + r4;
	r4 = r0->size;
	if( r4 >= r3 ) goto label$227$37;
	r3 = r0->size;
	r4 = 3;
	r3 = r3 * r4;
	r4 = 1;
	r3 = r3 >> r4;
	r4 = 0;
	if( r3 >= r4 ) goto label$227$29;
	r4 = 0;
	r3 = r4;
	label$227$29:
	r7 = hl_alloc_bytes(r3);
	r4 = 0;
	r10 = r0->b;
	r9 = 0;
	r11 = r0->pos;
	hl_bytes_blit(r7,r4,r10,r9,r11);
	r0->b = r7;
	r0->size = r3;
	label$227$37:
	r7 = r0->b;
	r3 = r0->pos;
	*(unsigned short*)(r7 + r3) = (unsigned short)r1;
	r3 = r0->pos;
	r4 = 2;
	r3 = r3 + r4;
	r0->pos = r3;
	goto label$227$100;
	label$227$45:
	r4 = 1114112;
	if( r1 >= r4 ) goto label$227$93;
	r3 = r0->pos;
	r4 = 4;
	r3 = r3 + r4;
	r4 = r0->size;
	if( r4 >= r3 ) goto label$227$69;
	r3 = r0->size;
	r4 = 3;
	r3 = r3 * r4;
	r4 = 1;
	r3 = r3 >> r4;
	r4 = 0;
	if( r3 >= r4 ) goto label$227$61;
	r4 = 0;
	r3 = r4;
	label$227$61:
	r7 = hl_alloc_bytes(r3);
	r4 = 0;
	r10 = r0->b;
	r9 = 0;
	r11 = r0->pos;
	hl_bytes_blit(r7,r4,r10,r9,r11);
	r0->b = r7;
	r0->size = r3;
	label$227$69:
	r4 = 65536;
	r3 = r1 - r4;
	r1 = r3;
	r7 = r0->b;
	r3 = r0->pos;
	r11 = 10;
	r9 = r1 >> r11;
	r11 = 55296;
	r9 = r9 + r11;
	*(unsigned short*)(r7 + r3) = (unsigned short)r9;
	r7 = r0->b;
	r3 = r0->pos;
	r4 = 2;
	r3 = r3 + r4;
	r11 = 1023;
	r9 = r1 & r11;
	r11 = 56320;
	r9 = r9 + r11;
	*(unsigned short*)(r7 + r3) = (unsigned short)r9;
	r3 = r0->pos;
	r4 = 4;
	r3 = r3 + r4;
	r0->pos = r3;
	goto label$227$100;
	label$227$93:
	r5 = (String)global$178;
	r3 = r1;
	r6 = &r3;
	r7 = hl_itos(r3,r6);
	r8 = String___alloc__(r7,r3);
	r5 = String___add__(r5,r8);
	hl_throw((vdynamic*)r5);
	label$227$100:
	return;
}

String StringBuf_toString(StringBuf r0) {
	String r8;
	vbyte *r5, *r6;
	int r2, r3, r4, r7;
	r2 = r0->pos;
	r3 = 2;
	r2 = r2 + r3;
	r3 = r0->size;
	if( r3 >= r2 ) goto label$228$22;
	r2 = r0->size;
	r3 = 3;
	r2 = r2 * r3;
	r3 = 1;
	r2 = r2 >> r3;
	r3 = 0;
	if( r2 >= r3 ) goto label$228$14;
	r3 = 0;
	r2 = r3;
	label$228$14:
	r5 = hl_alloc_bytes(r2);
	r3 = 0;
	r6 = r0->b;
	r4 = 0;
	r7 = r0->pos;
	hl_bytes_blit(r5,r3,r6,r4,r7);
	r0->b = r5;
	r0->size = r2;
	label$228$22:
	r5 = r0->b;
	r2 = r0->pos;
	r4 = 0;
	*(unsigned short*)(r5 + r2) = (unsigned short)r4;
	r5 = r0->b;
	r2 = r0->pos;
	r3 = 1;
	r2 = r2 >> r3;
	r8 = (String)hl_alloc_obj(String__val);
	r8->bytes = r5;
	r8->length = r2;
	return r8;
}

vbyte* StringBuf___string(StringBuf r0) {
	String r2;
	vbyte *r1;
	r2 = StringBuf_toString(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	return r1;
}

void StringBuf_new(StringBuf r0) {
	vbyte *r2;
	int r1;
	r1 = 0;
	r0->pos = r1;
	r1 = 8;
	r0->size = r1;
	r1 = r0->size;
	r2 = hl_alloc_bytes(r1);
	r0->b = r2;
	return;
}
