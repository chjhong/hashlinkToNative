﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

hl__types__ArrayBytes_Float hl_types_ArrayBytes_Float_concat(hl__types__ArrayBytes_Float r0,hl__types__ArrayBytes_Float r1) {
	hl__types__ArrayBytes_Float r2;
	vbyte *r6, *r7, *r8, *r9, *r12;
	int r4, r5, r10, r11, r13;
	r2 = (hl__types__ArrayBytes_Float)hl_alloc_obj(hl__types__ArrayBytes_Float__val);
	hl_types_ArrayBytes_Float_new(r2);
	r4 = r0->length;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->length;
	r4 = r4 + r5;
	r2->size = r4;
	r2->length = r4;
	r6 = r0->bytes;
	r4 = r2->length;
	r5 = 3;
	r4 = r4 << r5;
	r7 = hl_alloc_bytes(r4);
	r2->bytes = r7;
	r7 = r0->bytes;
	r4 = r0->length;
	r5 = 3;
	r4 = r4 << r5;
	r8 = r2->bytes;
	r5 = 0;
	r9 = r0->bytes;
	r10 = 0;
	hl_bytes_blit(r8,r5,r9,r10,r4);
	r8 = r0->bytes;
	r9 = r2->bytes;
	r12 = r1->bytes;
	r10 = 0;
	r11 = r1->length;
	r13 = 3;
	r11 = r11 << r13;
	hl_bytes_blit(r9,r4,r12,r10,r11);
	return r2;
}

String hl_types_ArrayBytes_Float_join(hl__types__ArrayBytes_Float r0,String r1) {
	String r8;
	StringBuf r2;
	double r10;
	vdynamic *r11;
	vbyte *r9;
	int r4, r5, r6, r7;
	r2 = (StringBuf)hl_alloc_obj(StringBuf__val);
	StringBuf_new(r2);
	r4 = 0;
	r5 = r0->length;
	label$101$4:
	if( r4 >= r5 ) goto label$101$20;
	r6 = r4;
	++r4;
	r7 = 0;
	if( r7 >= r6 ) goto label$101$12;
	if( r2 == NULL ) hl_null_access();
	StringBuf_add(r2,((vdynamic*)r1));
	label$101$12:
	r9 = r0->bytes;
	if( r2 == NULL ) hl_null_access();
	r7 = 3;
	r7 = r6 << r7;
	r10 = *(double*)(r9 + r7);
	r11 = hl_alloc_dynamic(&type$6);
	r11->v.d = r10;
	StringBuf_add(r2,((vdynamic*)r11));
	goto label$101$4;
	label$101$20:
	if( r2 == NULL ) hl_null_access();
	r8 = StringBuf_toString(r2);
	return r8;
}

vdynamic* hl_types_ArrayBytes_Float_pop(hl__types__ArrayBytes_Float r0) {
	double r5;
	vdynamic *r3;
	vbyte *r4;
	int r1, r2, r6;
	r1 = r0->length;
	r2 = 0;
	if( r1 != r2 ) goto label$102$5;
	r3 = NULL;
	return r3;
	label$102$5:
	r1 = r0->length;
	--r1;
	r0->length = r1;
	r4 = r0->bytes;
	r1 = r0->length;
	r6 = 3;
	r6 = r1 << r6;
	r5 = *(double*)(r4 + r6);
	r3 = hl_alloc_dynamic(&type$6);
	r3->v.d = r5;
	return r3;
}

int hl_types_ArrayBytes_Float_push(hl__types__ArrayBytes_Float r0,double r1) {
	vbyte *r6;
	int r2, r4, r5;
	r2 = r0->length;
	r4 = r0->size;
	if( r4 != r2 ) goto label$103$5;
	hl_types_ArrayBytes_Float___expand(r0,r2);
	goto label$103$8;
	label$103$5:
	r4 = r0->length;
	++r4;
	r0->length = r4;
	label$103$8:
	r6 = r0->bytes;
	r5 = 3;
	r5 = r2 << r5;
	*(double*)(r6 + r5) = r1;
	r4 = r0->length;
	return r4;
}

void hl_types_ArrayBytes_Float_reverse(hl__types__ArrayBytes_Float r0) {
	double r9, r12;
	vbyte *r7, *r8, *r11;
	int r1, r3, r4, r5, r6, r10;
	r1 = 0;
	r3 = r0->length;
	r4 = 1;
	r3 = r3 >> r4;
	label$104$4:
	if( r1 >= r3 ) goto label$104$29;
	r4 = r1;
	++r1;
	r5 = r0->length;
	r6 = 1;
	r5 = r5 - r6;
	r5 = r5 - r4;
	r7 = r0->bytes;
	r10 = 3;
	r10 = r4 << r10;
	r9 = *(double*)(r7 + r10);
	r8 = r0->bytes;
	r11 = r0->bytes;
	r10 = 3;
	r10 = r5 << r10;
	r12 = *(double*)(r11 + r10);
	r10 = 3;
	r10 = r4 << r10;
	*(double*)(r8 + r10) = r12;
	r8 = r0->bytes;
	r10 = 3;
	r10 = r5 << r10;
	*(double*)(r8 + r10) = r9;
	goto label$104$4;
	label$104$29:
	return;
}

vdynamic* hl_types_ArrayBytes_Float_shift(hl__types__ArrayBytes_Float r0) {
	double r7;
	vdynamic *r4;
	vbyte *r5, *r6, *r8, *r9, *r10;
	int r2, r3, r11, r12;
	r2 = r0->length;
	r3 = 0;
	if( r2 != r3 ) goto label$105$5;
	r4 = NULL;
	return r4;
	label$105$5:
	r5 = r0->bytes;
	r2 = 0;
	r3 = 3;
	r3 = r2 << r3;
	r7 = *(double*)(r5 + r3);
	r2 = r0->length;
	--r2;
	r0->length = r2;
	r6 = r0->bytes;
	r8 = r0->bytes;
	r9 = r0->bytes;
	r2 = 1;
	r3 = 3;
	r2 = r2 << r3;
	r10 = r0->bytes;
	r3 = 0;
	r11 = r0->length;
	r12 = 3;
	r11 = r11 << r12;
	hl_bytes_blit(r6,r3,r8,r2,r11);
	r4 = hl_alloc_dynamic(&type$6);
	r4->v.d = r7;
	return r4;
}

void hl_types_ArrayBytes_Float_blit(hl__types__ArrayBytes_Float r0,int r1,hl__types__ArrayAccess r2,int r3,int r4) {
	venum *r9;
	hl__types__ArrayBytes_Float r5;
	vbyte *r10, *r11, *r12, *r13, *r15;
	int r7, r8, r14, r16, r17;
	r5 = (hl__types__ArrayBytes_Float)hl_dyn_castp(&r2,&type$31,&type$39);
	r8 = 0;
	if( r1 < r8 ) goto label$106$14;
	r8 = 0;
	if( r3 < r8 ) goto label$106$14;
	r8 = 0;
	if( r4 < r8 ) goto label$106$14;
	r7 = r1 + r4;
	r8 = r0->length;
	if( r8 < r7 ) goto label$106$14;
	r7 = r3 + r4;
	if( r5 == NULL ) hl_null_access();
	r8 = r5->length;
	if( r8 >= r7 ) goto label$106$16;
	label$106$14:
	r9 = (venum*)global$808;
	hl_throw((vdynamic*)r9);
	label$106$16:
	r10 = r0->bytes;
	r11 = r0->bytes;
	r8 = 3;
	r7 = r1 << r8;
	r12 = r5->bytes;
	r13 = r0->bytes;
	r14 = 3;
	r8 = r3 << r14;
	r15 = r0->bytes;
	r17 = 3;
	r16 = r4 << r17;
	hl_bytes_blit(r10,r7,r12,r8,r16);
	return;
}

hl__types__ArrayBase hl_types_ArrayBytes_Float_slice(hl__types__ArrayBytes_Float r0,int r1,vdynamic* r2) {
	hl__types__ArrayBytes_Float r8;
	vbyte *r9, *r10, *r11, *r12;
	int r4, r5, r6, r7, r13, r14;
	r5 = 0;
	if( r1 >= r5 ) goto label$107$9;
	r4 = r0->length;
	r4 = r4 + r1;
	r1 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$107$9;
	r4 = 0;
	r1 = r4;
	label$107$9:
	if( r2 ) goto label$107$12;
	r5 = r0->length;
	goto label$107$20;
	label$107$12:
	r5 = r2 ? r2->v.i : 0;
	r6 = 0;
	if( r5 >= r6 ) goto label$107$17;
	r6 = r0->length;
	r5 = r5 + r6;
	label$107$17:
	r6 = r0->length;
	if( r6 >= r5 ) goto label$107$20;
	r5 = r0->length;
	label$107$20:
	r5 = r5 - r1;
	r7 = 0;
	if( r5 >= r7 ) goto label$107$26;
	r8 = (hl__types__ArrayBytes_Float)hl_alloc_obj(hl__types__ArrayBytes_Float__val);
	hl_types_ArrayBytes_Float_new(r8);
	return ((hl__types__ArrayBase)r8);
	label$107$26:
	r8 = (hl__types__ArrayBytes_Float)hl_alloc_obj(hl__types__ArrayBytes_Float__val);
	hl_types_ArrayBytes_Float_new(r8);
	r8->size = r5;
	r8->length = r5;
	r9 = r0->bytes;
	r10 = r0->bytes;
	r7 = 3;
	r6 = r1 << r7;
	r11 = r0->bytes;
	r14 = 3;
	r13 = r5 << r14;
	r12 = hl__Bytes_Bytes_Impl__sub(r9,r6,r13);
	r8->bytes = r12;
	return ((hl__types__ArrayBase)r8);
}

void hl_types_ArrayBytes_Float_sort(hl__types__ArrayBytes_Float r0,vclosure* r1) {
	hl_type *r3, *r4;
	vclosure *r8;
	int r6, r7;
	vbyte *r5;
	r3 = &type$6;
	r4 = &type$3;
	if( hl_same_type(r3,r4) != 0 ) {} else goto label$108$12;
	r5 = r0->bytes;
	r6 = 0;
	r7 = r0->length;
	if( r1 ) goto label$108$9;
	r8 = NULL;
	goto label$108$10;
	label$108$9:
	r8 = hl_alloc_closure_ptr(&type$3085,fun$3226,r1);
	label$108$10:
	hl_bsort_i32(r5,r6,r7,r8);
	goto label$108$16;
	label$108$12:
	r5 = r0->bytes;
	r6 = 0;
	r7 = r0->length;
	hl_bsort_f64(r5,r6,r7,r1);
	label$108$16:
	return;
}

hl__types__ArrayBase hl_types_ArrayBytes_Float_splice(hl__types__ArrayBytes_Float r0,int r1,int r2) {
	hl__types__ArrayBytes_Float r6;
	vbyte *r7, *r8, *r9, *r10, *r13, *r14, *r15, *r17;
	int r4, r5, r11, r12, r16, r18, r19;
	r5 = 0;
	if( r2 >= r5 ) goto label$109$5;
	r6 = (hl__types__ArrayBytes_Float)hl_alloc_obj(hl__types__ArrayBytes_Float__val);
	hl_types_ArrayBytes_Float_new(r6);
	return ((hl__types__ArrayBase)r6);
	label$109$5:
	r5 = 0;
	if( r1 >= r5 ) goto label$109$14;
	r4 = r0->length;
	r4 = r4 + r1;
	r1 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$109$14;
	r4 = 0;
	r1 = r4;
	label$109$14:
	r5 = r0->length;
	if( r5 >= r1 ) goto label$109$21;
	r4 = 0;
	r1 = r4;
	r4 = 0;
	r2 = r4;
	goto label$109$31;
	label$109$21:
	r4 = r1 + r2;
	r5 = r0->length;
	if( r5 >= r4 ) goto label$109$31;
	r4 = r0->length;
	r4 = r4 - r1;
	r2 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$109$31;
	r4 = 0;
	r2 = r4;
	label$109$31:
	r5 = 0;
	if( r2 != r5 ) goto label$109$36;
	r6 = (hl__types__ArrayBytes_Float)hl_alloc_obj(hl__types__ArrayBytes_Float__val);
	hl_types_ArrayBytes_Float_new(r6);
	return ((hl__types__ArrayBase)r6);
	label$109$36:
	r6 = (hl__types__ArrayBytes_Float)hl_alloc_obj(hl__types__ArrayBytes_Float__val);
	hl_types_ArrayBytes_Float_new(r6);
	r7 = r0->bytes;
	r8 = r0->bytes;
	r5 = 3;
	r4 = r1 << r5;
	r9 = r0->bytes;
	r12 = 3;
	r11 = r2 << r12;
	r10 = hl__Bytes_Bytes_Impl__sub(r7,r4,r11);
	r6->bytes = r10;
	r6->length = r2;
	r6->size = r2;
	r5 = r1 + r2;
	r10 = r0->bytes;
	r13 = r0->bytes;
	r12 = 3;
	r11 = r1 << r12;
	r14 = r0->bytes;
	r15 = r0->bytes;
	r16 = 3;
	r12 = r5 << r16;
	r17 = r0->bytes;
	r18 = r0->length;
	r18 = r18 - r5;
	r19 = 3;
	r18 = r18 << r19;
	hl_bytes_blit(r10,r11,r14,r12,r18);
	r16 = r0->length;
	r16 = r16 - r2;
	r0->length = r16;
	return ((hl__types__ArrayBase)r6);
}

String hl_types_ArrayBytes_Float_toString(hl__types__ArrayBytes_Float r0) {
	String r11;
	StringBuf r1;
	double r9;
	vdynamic *r10;
	vbyte *r8;
	int r3, r4, r5, r6, r7;
	r1 = (StringBuf)hl_alloc_obj(StringBuf__val);
	StringBuf_new(r1);
	r3 = 91;
	StringBuf_addChar(r1,r3);
	r3 = 0;
	r4 = r0->length;
	label$110$6:
	if( r3 >= r4 ) goto label$110$23;
	r5 = r3;
	++r3;
	r7 = 0;
	if( r7 >= r5 ) goto label$110$15;
	if( r1 == NULL ) hl_null_access();
	r6 = 44;
	StringBuf_addChar(r1,r6);
	label$110$15:
	r8 = r0->bytes;
	if( r1 == NULL ) hl_null_access();
	r7 = 3;
	r7 = r5 << r7;
	r9 = *(double*)(r8 + r7);
	r10 = hl_alloc_dynamic(&type$6);
	r10->v.d = r9;
	StringBuf_add(r1,((vdynamic*)r10));
	goto label$110$6;
	label$110$23:
	if( r1 == NULL ) hl_null_access();
	r3 = 93;
	StringBuf_addChar(r1,r3);
	r11 = StringBuf_toString(r1);
	return r11;
}

void hl_types_ArrayBytes_Float_unshift(hl__types__ArrayBytes_Float r0,double r1) {
	vbyte *r5, *r6, *r7, *r8, *r9;
	int r3, r4, r10, r11, r12;
	r3 = r0->length;
	r4 = r0->size;
	if( r3 != r4 ) goto label$111$6;
	r3 = r0->length;
	hl_types_ArrayBytes_Float___expand(r0,r3);
	goto label$111$9;
	label$111$6:
	r3 = r0->length;
	++r3;
	r0->length = r3;
	label$111$9:
	r5 = r0->bytes;
	r6 = r0->bytes;
	r3 = 1;
	r4 = 3;
	r3 = r3 << r4;
	r7 = r0->bytes;
	r9 = r0->bytes;
	r10 = 0;
	r11 = r0->length;
	r12 = 1;
	r11 = r11 - r12;
	r12 = 3;
	r11 = r11 << r12;
	hl_bytes_blit(r5,r3,r9,r10,r11);
	r8 = r0->bytes;
	r4 = 0;
	r10 = 3;
	r10 = r4 << r10;
	*(double*)(r8 + r10) = r1;
	return;
}

void hl_types_ArrayBytes_Float_insert(hl__types__ArrayBytes_Float r0,int r1,double r2) {
	vbyte *r6, *r7, *r8, *r9, *r11, *r12;
	int r4, r5, r10, r13, r14, r15;
	r5 = 0;
	if( r1 >= r5 ) goto label$112$10;
	r4 = r0->length;
	r4 = r4 + r1;
	r1 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$112$9;
	r4 = 0;
	r1 = r4;
	label$112$9:
	goto label$112$14;
	label$112$10:
	r5 = r0->length;
	if( r5 >= r1 ) goto label$112$14;
	r4 = r0->length;
	r1 = r4;
	label$112$14:
	r4 = r0->length;
	r5 = r0->size;
	if( r4 != r5 ) goto label$112$20;
	r4 = r0->length;
	hl_types_ArrayBytes_Float___expand(r0,r4);
	goto label$112$23;
	label$112$20:
	r4 = r0->length;
	++r4;
	r0->length = r4;
	label$112$23:
	r6 = r0->bytes;
	r7 = r0->bytes;
	r5 = 1;
	r4 = r1 + r5;
	r5 = 3;
	r4 = r4 << r5;
	r8 = r0->bytes;
	r9 = r0->bytes;
	r10 = 3;
	r5 = r1 << r10;
	r11 = r0->bytes;
	r14 = r0->length;
	r14 = r14 - r1;
	r15 = 1;
	r14 = r14 - r15;
	r15 = 3;
	r14 = r14 << r15;
	hl_bytes_blit(r6,r4,r8,r5,r14);
	r12 = r0->bytes;
	r13 = 3;
	r13 = r1 << r13;
	*(double*)(r12 + r13) = r2;
	return;
}

bool hl_types_ArrayBytes_Float_remove(hl__types__ArrayBytes_Float r0,double r1) {
	bool r7;
	vdynamic *r3;
	vbyte *r8, *r9, *r10, *r11, *r13;
	int r2, r5, r6, r12, r14, r15;
	r3 = NULL;
	r2 = hl_types_ArrayBytes_Float_indexOf(r0,r1,r3);
	r6 = 0;
	if( r2 >= r6 ) goto label$113$6;
	r7 = false;
	return r7;
	label$113$6:
	r5 = r0->length;
	--r5;
	r0->length = r5;
	r8 = r0->bytes;
	r9 = r0->bytes;
	r6 = 3;
	r5 = r2 << r6;
	r10 = r0->bytes;
	r11 = r0->bytes;
	r12 = 1;
	r6 = r2 + r12;
	r12 = 3;
	r6 = r6 << r12;
	r13 = r0->bytes;
	r14 = r0->length;
	r14 = r14 - r2;
	r15 = 3;
	r14 = r14 << r15;
	hl_bytes_blit(r8,r5,r10,r6,r14);
	r7 = true;
	return r7;
}

int hl_types_ArrayBytes_Float_indexOf(hl__types__ArrayBytes_Float r0,double r1,vdynamic* r2) {
	double r8;
	vbyte *r7;
	int r3, r4, r5, r6, r9;
	if( r2 ) goto label$114$3;
	r3 = 0;
	goto label$114$4;
	label$114$3:
	r3 = r2 ? r2->v.i : 0;
	label$114$4:
	r5 = 0;
	if( r3 >= r5 ) goto label$114$13;
	r5 = r0->length;
	r4 = r3 + r5;
	r3 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$114$13;
	r4 = 0;
	r3 = r4;
	label$114$13:
	r4 = r3;
	r5 = r0->length;
	label$114$15:
	if( r4 >= r5 ) goto label$114$26;
	r6 = r4;
	++r4;
	r7 = r0->bytes;
	r9 = 3;
	r9 = r6 << r9;
	r8 = *(double*)(r7 + r9);
	if( r8 != r1 ) goto label$114$25;
	return r6;
	label$114$25:
	goto label$114$15;
	label$114$26:
	r4 = -1;
	return r4;
}

int hl_types_ArrayBytes_Float_lastIndexOf(hl__types__ArrayBytes_Float r0,double r1,vdynamic* r2) {
	double r8;
	vbyte *r7;
	int r3, r4, r5, r6;
	r3 = r0->length;
	if( !r2 ) goto label$115$4;
	r4 = r2 ? r2->v.i : 0;
	goto label$115$6;
	label$115$4:
	r5 = 1;
	r4 = r3 - r5;
	label$115$6:
	if( r4 < r3 ) goto label$115$11;
	r6 = 1;
	r5 = r3 - r6;
	r4 = r5;
	goto label$115$15;
	label$115$11:
	r6 = 0;
	if( r4 >= r6 ) goto label$115$15;
	r5 = r4 + r3;
	r4 = r5;
	label$115$15:
	r6 = 0;
	if( r4 < r6 ) goto label$115$26;
	r7 = r0->bytes;
	r6 = 3;
	r6 = r4 << r6;
	r8 = *(double*)(r7 + r6);
	if( r8 != r1 ) goto label$115$24;
	return r4;
	label$115$24:
	--r4;
	goto label$115$15;
	label$115$26:
	r5 = -1;
	return r5;
}

hl__types__ArrayBytes_Float hl_types_ArrayBytes_Float_copy(hl__types__ArrayBytes_Float r0) {
	hl__types__ArrayBytes_Float r1;
	vbyte *r4, *r5, *r7, *r8;
	int r3, r6, r9, r10;
	r1 = (hl__types__ArrayBytes_Float)hl_alloc_obj(hl__types__ArrayBytes_Float__val);
	hl_types_ArrayBytes_Float_new(r1);
	r3 = r0->length;
	r1->size = r3;
	r1->length = r3;
	r4 = r0->bytes;
	r3 = r0->length;
	r6 = 3;
	r3 = r3 << r6;
	r5 = hl_alloc_bytes(r3);
	r1->bytes = r5;
	r5 = r0->bytes;
	r7 = r1->bytes;
	r3 = 0;
	r8 = r0->bytes;
	r6 = 0;
	r9 = r0->length;
	r10 = 3;
	r9 = r9 << r10;
	hl_bytes_blit(r7,r3,r8,r6,r9);
	return r1;
}

vdynamic* hl_types_ArrayBytes_Float_iterator(hl__types__ArrayBytes_Float r0) {
	hl__types__BytesIterator_Float r1;
	r1 = (hl__types__BytesIterator_Float)hl_alloc_obj(hl__types__BytesIterator_Float__val);
	hl_types_BytesIterator_Float_new(r1,r0);
	return ((vdynamic*)r1);
}

hl__types__ArrayDyn hl_types_ArrayBytes_Float_map(hl__types__ArrayBytes_Float r0,vclosure* r1) {
	bool *r14;
	hl__types__ArrayObj r2;
	bool r13;
	hl__types__ArrayDyn r12;
	double r10;
	vdynamic *r9;
	vbyte *r8;
	varray *r7;
	int r4, r5, r6, r11;
	r2 = (hl__types__ArrayObj)hl_alloc_obj(hl__types__ArrayObj__val);
	hl_types_ArrayObj_new(r2);
	r4 = r0->length;
	r5 = 0;
	if( r5 >= r4 ) goto label$118$9;
	r4 = r0->length;
	r5 = 1;
	r4 = r4 - r5;
	hl_types_ArrayObj___expand(r2,r4);
	label$118$9:
	r4 = 0;
	r5 = r0->length;
	label$118$11:
	if( r4 >= r5 ) goto label$118$25;
	r6 = r4;
	++r4;
	if( r2 == NULL ) hl_null_access();
	r7 = r2->array;
	r8 = r0->bytes;
	if( r1 == NULL ) hl_null_access();
	r11 = 3;
	r11 = r6 << r11;
	r10 = *(double*)(r8 + r11);
	r9 = r1->hasValue ? ((vdynamic* (*)(vdynamic*,double))r1->fun)((vdynamic*)r1->value,r10) : ((vdynamic* (*)(double))r1->fun)(r10);
	((vdynamic**)(r7 + 1))[r6] = r9;
	goto label$118$11;
	label$118$25:
	r13 = true;
	r14 = &r13;
	r12 = hl_types_ArrayDyn_alloc(((hl__types__ArrayBase)r2),r14);
	return r12;
}

hl__types__ArrayBytes_Float hl_types_ArrayBytes_Float_filter(hl__types__ArrayBytes_Float r0,vclosure* r1) {
	bool r11;
	hl__types__ArrayBytes_Float r2;
	double r9;
	vbyte *r8;
	int r4, r5, r6, r7, r10;
	r2 = (hl__types__ArrayBytes_Float)hl_alloc_obj(hl__types__ArrayBytes_Float__val);
	hl_types_ArrayBytes_Float_new(r2);
	r4 = 0;
	r5 = r0->length;
	label$119$4:
	if( r4 >= r5 ) goto label$119$18;
	r6 = r4;
	++r4;
	r8 = r0->bytes;
	r10 = 3;
	r10 = r6 << r10;
	r9 = *(double*)(r8 + r10);
	if( r1 == NULL ) hl_null_access();
	r11 = r1->hasValue ? ((bool (*)(vdynamic*,double))r1->fun)((vdynamic*)r1->value,r9) : ((bool (*)(double))r1->fun)(r9);
	if( !r11 ) goto label$119$17;
	if( r2 == NULL ) hl_null_access();
	r7 = hl_types_ArrayBytes_Float_push(r2,r9);
	label$119$17:
	goto label$119$4;
	label$119$18:
	return r2;
}

void hl_types_ArrayBytes_Float_resize(hl__types__ArrayBytes_Float r0,int r1) {
	vbyte *r5, *r6, *r7;
	int r3, r4, r8, r9;
	r3 = r0->length;
	if( r3 >= r1 ) goto label$120$6;
	r4 = 1;
	r3 = r1 - r4;
	hl_types_ArrayBytes_Float___expand(r0,r3);
	goto label$120$20;
	label$120$6:
	r3 = r0->length;
	if( r1 >= r3 ) goto label$120$20;
	r5 = r0->bytes;
	r6 = r0->bytes;
	r4 = 3;
	r3 = r1 << r4;
	r7 = r0->bytes;
	r8 = r0->length;
	r8 = r8 - r1;
	r9 = 3;
	r8 = r8 << r9;
	r9 = 0;
	hl_bytes_fill(r5,r3,r8,r9);
	r0->length = r1;
	label$120$20:
	return;
}

vdynamic* hl_types_ArrayBytes_Float_getDyn(hl__types__ArrayBytes_Float r0,int r1) {
	bool r2;
	double r5;
	vdynamic *r6;
	vbyte *r4;
	int r3;
	r3 = r0->length;
	if( r1 >= r3 ) goto label$121$4;
	r2 = false;
	goto label$121$5;
	label$121$4:
	r2 = true;
	label$121$5:
	if( !r2 ) goto label$121$10;
	r4 = r0->bytes;
	r5 = 0.;
	r6 = hl_alloc_dynamic(&type$6);
	r6->v.d = r5;
	return r6;
	label$121$10:
	r4 = r0->bytes;
	r3 = 3;
	r3 = r1 << r3;
	r5 = *(double*)(r4 + r3);
	r6 = hl_alloc_dynamic(&type$6);
	r6->v.d = r5;
	return r6;
}

void hl_types_ArrayBytes_Float_setDyn(hl__types__ArrayBytes_Float r0,int r1,vdynamic* r2) {
	bool r4;
	double r7;
	vbyte *r6;
	int r5;
	r5 = r0->length;
	if( r1 >= r5 ) goto label$122$4;
	r4 = false;
	goto label$122$5;
	label$122$4:
	r4 = true;
	label$122$5:
	if( !r4 ) goto label$122$7;
	hl_types_ArrayBytes_Float___expand(r0,r1);
	label$122$7:
	r6 = r0->bytes;
	r7 = (double)hl_dyn_castd(&r2,&type$9);
	r5 = 3;
	r5 = r1 << r5;
	*(double*)(r6 + r5) = r7;
	return;
}

int hl_types_ArrayBytes_Float_pushDyn(hl__types__ArrayBytes_Float r0,vdynamic* r1) {
	double r3;
	int r2;
	r3 = (double)hl_dyn_castd(&r1,&type$9);
	r2 = hl_types_ArrayBytes_Float_push(r0,r3);
	return r2;
}

vdynamic* hl_types_ArrayBytes_Float_popDyn(hl__types__ArrayBytes_Float r0) {
	vdynamic *r1;
	r1 = hl_types_ArrayBytes_Float_pop(r0);
	return ((vdynamic*)r1);
}

vdynamic* hl_types_ArrayBytes_Float_shiftDyn(hl__types__ArrayBytes_Float r0) {
	vdynamic *r1;
	r1 = hl_types_ArrayBytes_Float_shift(r0);
	return ((vdynamic*)r1);
}

void hl_types_ArrayBytes_Float_unshiftDyn(hl__types__ArrayBytes_Float r0,vdynamic* r1) {
	double r3;
	r3 = (double)hl_dyn_castd(&r1,&type$9);
	hl_types_ArrayBytes_Float_unshift(r0,r3);
	return;
}

void hl_types_ArrayBytes_Float_insertDyn(hl__types__ArrayBytes_Float r0,int r1,vdynamic* r2) {
	double r4;
	r4 = (double)hl_dyn_castd(&r2,&type$9);
	hl_types_ArrayBytes_Float_insert(r0,r1,r4);
	return;
}

bool hl_types_ArrayBytes_Float_removeDyn(hl__types__ArrayBytes_Float r0,vdynamic* r1) {
	bool r2;
	double r3;
	r3 = (double)hl_dyn_castd(&r1,&type$9);
	r2 = hl_types_ArrayBytes_Float_remove(r0,r3);
	return r2;
}

void hl_types_ArrayBytes_Float_sortDyn(hl__types__ArrayBytes_Float r0,vclosure* r1) {
	vclosure *r3;
	if( r1 ) goto label$129$3;
	r3 = NULL;
	goto label$129$4;
	label$129$3:
	r3 = hl_alloc_closure_ptr(&type$3105,fun$3230,r1);
	label$129$4:
	hl_types_ArrayBytes_Float_sort(r0,r3);
	return;
}

void hl_types_ArrayBytes_Float___expand(hl__types__ArrayBytes_Float r0,int r1) {
	String r5, r8;
	int *r6;
	vbyte *r7, *r11, *r12, *r13, *r14;
	int r3, r4, r9, r10, r15, r16;
	r4 = 0;
	if( r1 >= r4 ) goto label$130$9;
	r5 = (String)global$896;
	r3 = r1;
	r6 = &r3;
	r7 = hl_itos(r3,r6);
	r8 = String___alloc__(r7,r3);
	r5 = String___add__(r5,r8);
	hl_throw((vdynamic*)r5);
	label$130$9:
	r4 = 1;
	r3 = r1 + r4;
	r9 = r0->size;
	if( r9 >= r3 ) goto label$130$40;
	r4 = r0->size;
	r9 = 3;
	r4 = r4 * r9;
	r9 = 1;
	r4 = r4 >> r9;
	if( r4 >= r3 ) goto label$130$20;
	r4 = r3;
	label$130$20:
	r7 = r0->bytes;
	r10 = 3;
	r9 = r4 << r10;
	r11 = hl_alloc_bytes(r9);
	r12 = r0->bytes;
	r9 = r0->length;
	r10 = 3;
	r9 = r9 << r10;
	r10 = 0;
	r14 = r0->bytes;
	r15 = 0;
	hl_bytes_blit(r11,r10,r14,r15,r9);
	r13 = r0->bytes;
	r16 = 3;
	r15 = r4 << r16;
	r15 = r15 - r9;
	r16 = 0;
	hl_bytes_fill(r11,r9,r15,r16);
	r0->bytes = r11;
	r0->size = r4;
	label$130$40:
	r0->length = r3;
	return;
}

