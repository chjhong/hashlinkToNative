﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

hl__types__ArrayBytes_Int hl_types_ArrayBytes_Int_concat(hl__types__ArrayBytes_Int r0,hl__types__ArrayBytes_Int r1) {
	hl__types__ArrayBytes_Int r2;
	vbyte *r6, *r7, *r8, *r9, *r12;
	int r4, r5, r10, r11, r13;
	r2 = (hl__types__ArrayBytes_Int)hl_alloc_obj(hl__types__ArrayBytes_Int__val);
	hl_types_ArrayBytes_Int_new(r2);
	r4 = r0->length;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->length;
	r4 = r4 + r5;
	r2->size = r4;
	r2->length = r4;
	r6 = r0->bytes;
	r4 = r2->length;
	r5 = 2;
	r4 = r4 << r5;
	r7 = hl_alloc_bytes(r4);
	r2->bytes = r7;
	r7 = r0->bytes;
	r4 = r0->length;
	r5 = 2;
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
	r13 = 2;
	r11 = r11 << r13;
	hl_bytes_blit(r9,r4,r12,r10,r11);
	return r2;
}

String hl_types_ArrayBytes_Int_join(hl__types__ArrayBytes_Int r0,String r1) {
	String r9;
	StringBuf r2;
	vdynamic *r11;
	vbyte *r10;
	int r4, r5, r6, r7, r8;
	r2 = (StringBuf)hl_alloc_obj(StringBuf__val);
	StringBuf_new(r2);
	r4 = 0;
	r5 = r0->length;
	label$194$4:
	if( r4 >= r5 ) goto label$194$20;
	r6 = r4;
	++r4;
	r8 = 0;
	if( r8 >= r6 ) goto label$194$12;
	if( r2 == NULL ) hl_null_access();
	StringBuf_add(r2,((vdynamic*)r1));
	label$194$12:
	r10 = r0->bytes;
	if( r2 == NULL ) hl_null_access();
	r8 = 2;
	r8 = r6 << r8;
	r7 = *(int*)(r10 + r8);
	r11 = hl_alloc_dynamic(&type$3);
	r11->v.i = r7;
	StringBuf_add(r2,((vdynamic*)r11));
	goto label$194$4;
	label$194$20:
	if( r2 == NULL ) hl_null_access();
	r9 = StringBuf_toString(r2);
	return r9;
}

vdynamic* hl_types_ArrayBytes_Int_pop(hl__types__ArrayBytes_Int r0) {
	vdynamic *r3;
	vbyte *r4;
	int r1, r2, r5;
	r1 = r0->length;
	r2 = 0;
	if( r1 != r2 ) goto label$195$5;
	r3 = NULL;
	return r3;
	label$195$5:
	r1 = r0->length;
	--r1;
	r0->length = r1;
	r4 = r0->bytes;
	r1 = r0->length;
	r5 = 2;
	r5 = r1 << r5;
	r2 = *(int*)(r4 + r5);
	r3 = hl_alloc_dynamic(&type$3);
	r3->v.i = r2;
	return r3;
}

int hl_types_ArrayBytes_Int_push(hl__types__ArrayBytes_Int r0,int r1) {
	vbyte *r5;
	int r2, r4, r6;
	r2 = r0->length;
	r4 = r0->size;
	if( r4 != r2 ) goto label$196$5;
	hl_types_ArrayBytes_Int___expand(r0,r2);
	goto label$196$8;
	label$196$5:
	r4 = r0->length;
	++r4;
	r0->length = r4;
	label$196$8:
	r5 = r0->bytes;
	r6 = 2;
	r6 = r2 << r6;
	*(int*)(r5 + r6) = r1;
	r4 = r0->length;
	return r4;
}

void hl_types_ArrayBytes_Int_reverse(hl__types__ArrayBytes_Int r0) {
	vbyte *r7, *r8, *r10;
	int r1, r3, r4, r5, r6, r9, r11, r12, r13;
	r1 = 0;
	r3 = r0->length;
	r4 = 1;
	r3 = r3 >> r4;
	label$197$4:
	if( r1 >= r3 ) goto label$197$29;
	r4 = r1;
	++r1;
	r5 = r0->length;
	r6 = 1;
	r5 = r5 - r6;
	r5 = r5 - r4;
	r7 = r0->bytes;
	r9 = 2;
	r9 = r4 << r9;
	r6 = *(int*)(r7 + r9);
	r8 = r0->bytes;
	r10 = r0->bytes;
	r11 = 2;
	r11 = r5 << r11;
	r9 = *(int*)(r10 + r11);
	r13 = 2;
	r13 = r4 << r13;
	*(int*)(r8 + r13) = r9;
	r8 = r0->bytes;
	r12 = 2;
	r12 = r5 << r12;
	*(int*)(r8 + r12) = r6;
	goto label$197$4;
	label$197$29:
	return;
}

vdynamic* hl_types_ArrayBytes_Int_shift(hl__types__ArrayBytes_Int r0) {
	vdynamic *r4;
	vbyte *r5, *r6, *r8, *r9, *r10;
	int r2, r3, r7, r11, r12;
	r2 = r0->length;
	r3 = 0;
	if( r2 != r3 ) goto label$198$5;
	r4 = NULL;
	return r4;
	label$198$5:
	r5 = r0->bytes;
	r2 = 0;
	r3 = 2;
	r3 = r2 << r3;
	r2 = *(int*)(r5 + r3);
	r3 = r0->length;
	--r3;
	r0->length = r3;
	r6 = r0->bytes;
	r8 = r0->bytes;
	r9 = r0->bytes;
	r3 = 1;
	r7 = 2;
	r3 = r3 << r7;
	r10 = r0->bytes;
	r7 = 0;
	r11 = r0->length;
	r12 = 2;
	r11 = r11 << r12;
	hl_bytes_blit(r6,r7,r8,r3,r11);
	r4 = hl_alloc_dynamic(&type$3);
	r4->v.i = r2;
	return r4;
}

void hl_types_ArrayBytes_Int_blit(hl__types__ArrayBytes_Int r0,int r1,hl__types__ArrayAccess r2,int r3,int r4) {
	venum *r9;
	hl__types__ArrayBytes_Int r5;
	vbyte *r10, *r11, *r12, *r13, *r15;
	int r7, r8, r14, r16, r17;
	r5 = (hl__types__ArrayBytes_Int)hl_dyn_castp(&r2,&type$31,&type$33);
	r8 = 0;
	if( r1 < r8 ) goto label$199$14;
	r8 = 0;
	if( r3 < r8 ) goto label$199$14;
	r8 = 0;
	if( r4 < r8 ) goto label$199$14;
	r7 = r1 + r4;
	r8 = r0->length;
	if( r8 < r7 ) goto label$199$14;
	r7 = r3 + r4;
	if( r5 == NULL ) hl_null_access();
	r8 = r5->length;
	if( r8 >= r7 ) goto label$199$16;
	label$199$14:
	r9 = (venum*)global$808;
	hl_throw((vdynamic*)r9);
	label$199$16:
	r10 = r0->bytes;
	r11 = r0->bytes;
	r8 = 2;
	r7 = r1 << r8;
	r12 = r5->bytes;
	r13 = r0->bytes;
	r14 = 2;
	r8 = r3 << r14;
	r15 = r0->bytes;
	r17 = 2;
	r16 = r4 << r17;
	hl_bytes_blit(r10,r7,r12,r8,r16);
	return;
}

hl__types__ArrayBase hl_types_ArrayBytes_Int_slice(hl__types__ArrayBytes_Int r0,int r1,vdynamic* r2) {
	hl__types__ArrayBytes_Int r8;
	vbyte *r9, *r10, *r11, *r12;
	int r4, r5, r6, r7, r13, r14;
	r5 = 0;
	if( r1 >= r5 ) goto label$200$9;
	r4 = r0->length;
	r4 = r4 + r1;
	r1 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$200$9;
	r4 = 0;
	r1 = r4;
	label$200$9:
	if( r2 ) goto label$200$12;
	r5 = r0->length;
	goto label$200$20;
	label$200$12:
	r5 = r2 ? r2->v.i : 0;
	r6 = 0;
	if( r5 >= r6 ) goto label$200$17;
	r6 = r0->length;
	r5 = r5 + r6;
	label$200$17:
	r6 = r0->length;
	if( r6 >= r5 ) goto label$200$20;
	r5 = r0->length;
	label$200$20:
	r5 = r5 - r1;
	r7 = 0;
	if( r5 >= r7 ) goto label$200$26;
	r8 = (hl__types__ArrayBytes_Int)hl_alloc_obj(hl__types__ArrayBytes_Int__val);
	hl_types_ArrayBytes_Int_new(r8);
	return ((hl__types__ArrayBase)r8);
	label$200$26:
	r8 = (hl__types__ArrayBytes_Int)hl_alloc_obj(hl__types__ArrayBytes_Int__val);
	hl_types_ArrayBytes_Int_new(r8);
	r8->size = r5;
	r8->length = r5;
	r9 = r0->bytes;
	r10 = r0->bytes;
	r7 = 2;
	r6 = r1 << r7;
	r11 = r0->bytes;
	r14 = 2;
	r13 = r5 << r14;
	r12 = hl__Bytes_Bytes_Impl__sub(r9,r6,r13);
	r8->bytes = r12;
	return ((hl__types__ArrayBase)r8);
}

void hl_types_ArrayBytes_Int_sort(hl__types__ArrayBytes_Int r0,vclosure* r1) {
	hl_type *r3, *r4;
	vclosure *r8;
	int r6, r7;
	vbyte *r5;
	r3 = &type$3;
	r4 = &type$3;
	if( hl_same_type(r3,r4) != 0 ) {} else goto label$201$8;
	r5 = r0->bytes;
	r6 = 0;
	r7 = r0->length;
	hl_bsort_i32(r5,r6,r7,r1);
	goto label$201$16;
	label$201$8:
	r5 = r0->bytes;
	r6 = 0;
	r7 = r0->length;
	if( r1 ) goto label$201$14;
	r8 = NULL;
	goto label$201$15;
	label$201$14:
	r8 = hl_alloc_closure_ptr(&type$3114,fun$3231,r1);
	label$201$15:
	hl_bsort_f64(r5,r6,r7,r8);
	label$201$16:
	return;
}

hl__types__ArrayBase hl_types_ArrayBytes_Int_splice(hl__types__ArrayBytes_Int r0,int r1,int r2) {
	hl__types__ArrayBytes_Int r6;
	vbyte *r7, *r8, *r9, *r10, *r13, *r14, *r15, *r17;
	int r4, r5, r11, r12, r16, r18, r19;
	r5 = 0;
	if( r2 >= r5 ) goto label$202$5;
	r6 = (hl__types__ArrayBytes_Int)hl_alloc_obj(hl__types__ArrayBytes_Int__val);
	hl_types_ArrayBytes_Int_new(r6);
	return ((hl__types__ArrayBase)r6);
	label$202$5:
	r5 = 0;
	if( r1 >= r5 ) goto label$202$14;
	r4 = r0->length;
	r4 = r4 + r1;
	r1 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$202$14;
	r4 = 0;
	r1 = r4;
	label$202$14:
	r5 = r0->length;
	if( r5 >= r1 ) goto label$202$21;
	r4 = 0;
	r1 = r4;
	r4 = 0;
	r2 = r4;
	goto label$202$31;
	label$202$21:
	r4 = r1 + r2;
	r5 = r0->length;
	if( r5 >= r4 ) goto label$202$31;
	r4 = r0->length;
	r4 = r4 - r1;
	r2 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$202$31;
	r4 = 0;
	r2 = r4;
	label$202$31:
	r5 = 0;
	if( r2 != r5 ) goto label$202$36;
	r6 = (hl__types__ArrayBytes_Int)hl_alloc_obj(hl__types__ArrayBytes_Int__val);
	hl_types_ArrayBytes_Int_new(r6);
	return ((hl__types__ArrayBase)r6);
	label$202$36:
	r6 = (hl__types__ArrayBytes_Int)hl_alloc_obj(hl__types__ArrayBytes_Int__val);
	hl_types_ArrayBytes_Int_new(r6);
	r7 = r0->bytes;
	r8 = r0->bytes;
	r5 = 2;
	r4 = r1 << r5;
	r9 = r0->bytes;
	r12 = 2;
	r11 = r2 << r12;
	r10 = hl__Bytes_Bytes_Impl__sub(r7,r4,r11);
	r6->bytes = r10;
	r6->length = r2;
	r6->size = r2;
	r5 = r1 + r2;
	r10 = r0->bytes;
	r13 = r0->bytes;
	r12 = 2;
	r11 = r1 << r12;
	r14 = r0->bytes;
	r15 = r0->bytes;
	r16 = 2;
	r12 = r5 << r16;
	r17 = r0->bytes;
	r18 = r0->length;
	r18 = r18 - r5;
	r19 = 2;
	r18 = r18 << r19;
	hl_bytes_blit(r10,r11,r14,r12,r18);
	r16 = r0->length;
	r16 = r16 - r2;
	r0->length = r16;
	return ((hl__types__ArrayBase)r6);
}

String hl_types_ArrayBytes_Int_toString(hl__types__ArrayBytes_Int r0) {
	String r10;
	StringBuf r1;
	vdynamic *r9;
	vbyte *r8;
	int r3, r4, r5, r6, r7;
	r1 = (StringBuf)hl_alloc_obj(StringBuf__val);
	StringBuf_new(r1);
	r3 = 91;
	StringBuf_addChar(r1,r3);
	r3 = 0;
	r4 = r0->length;
	label$203$6:
	if( r3 >= r4 ) goto label$203$23;
	r5 = r3;
	++r3;
	r7 = 0;
	if( r7 >= r5 ) goto label$203$15;
	if( r1 == NULL ) hl_null_access();
	r6 = 44;
	StringBuf_addChar(r1,r6);
	label$203$15:
	r8 = r0->bytes;
	if( r1 == NULL ) hl_null_access();
	r7 = 2;
	r7 = r5 << r7;
	r6 = *(int*)(r8 + r7);
	r9 = hl_alloc_dynamic(&type$3);
	r9->v.i = r6;
	StringBuf_add(r1,((vdynamic*)r9));
	goto label$203$6;
	label$203$23:
	if( r1 == NULL ) hl_null_access();
	r3 = 93;
	StringBuf_addChar(r1,r3);
	r10 = StringBuf_toString(r1);
	return r10;
}

void hl_types_ArrayBytes_Int_unshift(hl__types__ArrayBytes_Int r0,int r1) {
	vbyte *r5, *r6, *r7, *r8, *r9;
	int r3, r4, r10, r11, r12;
	r3 = r0->length;
	r4 = r0->size;
	if( r3 != r4 ) goto label$204$6;
	r3 = r0->length;
	hl_types_ArrayBytes_Int___expand(r0,r3);
	goto label$204$9;
	label$204$6:
	r3 = r0->length;
	++r3;
	r0->length = r3;
	label$204$9:
	r5 = r0->bytes;
	r6 = r0->bytes;
	r3 = 1;
	r4 = 2;
	r3 = r3 << r4;
	r7 = r0->bytes;
	r9 = r0->bytes;
	r10 = 0;
	r11 = r0->length;
	r12 = 1;
	r11 = r11 - r12;
	r12 = 2;
	r11 = r11 << r12;
	hl_bytes_blit(r5,r3,r9,r10,r11);
	r8 = r0->bytes;
	r4 = 0;
	r11 = 2;
	r11 = r4 << r11;
	*(int*)(r8 + r11) = r1;
	return;
}

void hl_types_ArrayBytes_Int_insert(hl__types__ArrayBytes_Int r0,int r1,int r2) {
	vbyte *r6, *r7, *r8, *r9, *r11, *r12;
	int r4, r5, r10, r13, r14;
	r5 = 0;
	if( r1 >= r5 ) goto label$205$10;
	r4 = r0->length;
	r4 = r4 + r1;
	r1 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$205$9;
	r4 = 0;
	r1 = r4;
	label$205$9:
	goto label$205$14;
	label$205$10:
	r5 = r0->length;
	if( r5 >= r1 ) goto label$205$14;
	r4 = r0->length;
	r1 = r4;
	label$205$14:
	r4 = r0->length;
	r5 = r0->size;
	if( r4 != r5 ) goto label$205$20;
	r4 = r0->length;
	hl_types_ArrayBytes_Int___expand(r0,r4);
	goto label$205$23;
	label$205$20:
	r4 = r0->length;
	++r4;
	r0->length = r4;
	label$205$23:
	r6 = r0->bytes;
	r7 = r0->bytes;
	r5 = 1;
	r4 = r1 + r5;
	r5 = 2;
	r4 = r4 << r5;
	r8 = r0->bytes;
	r9 = r0->bytes;
	r10 = 2;
	r5 = r1 << r10;
	r11 = r0->bytes;
	r13 = r0->length;
	r13 = r13 - r1;
	r14 = 1;
	r13 = r13 - r14;
	r14 = 2;
	r13 = r13 << r14;
	hl_bytes_blit(r6,r4,r8,r5,r13);
	r12 = r0->bytes;
	r13 = 2;
	r13 = r1 << r13;
	*(int*)(r12 + r13) = r2;
	return;
}

bool hl_types_ArrayBytes_Int_remove(hl__types__ArrayBytes_Int r0,int r1) {
	bool r7;
	vdynamic *r3;
	vbyte *r8, *r9, *r10, *r11, *r13;
	int r2, r5, r6, r12, r14, r15;
	r3 = NULL;
	r2 = hl_types_ArrayBytes_Int_indexOf(r0,r1,r3);
	r6 = 0;
	if( r2 >= r6 ) goto label$206$6;
	r7 = false;
	return r7;
	label$206$6:
	r5 = r0->length;
	--r5;
	r0->length = r5;
	r8 = r0->bytes;
	r9 = r0->bytes;
	r6 = 2;
	r5 = r2 << r6;
	r10 = r0->bytes;
	r11 = r0->bytes;
	r12 = 1;
	r6 = r2 + r12;
	r12 = 2;
	r6 = r6 << r12;
	r13 = r0->bytes;
	r14 = r0->length;
	r14 = r14 - r2;
	r15 = 2;
	r14 = r14 << r15;
	hl_bytes_blit(r8,r5,r10,r6,r14);
	r7 = true;
	return r7;
}

int hl_types_ArrayBytes_Int_indexOf(hl__types__ArrayBytes_Int r0,int r1,vdynamic* r2) {
	vbyte *r8;
	int r3, r4, r5, r6, r7, r9;
	if( r2 ) goto label$207$3;
	r3 = 0;
	goto label$207$4;
	label$207$3:
	r3 = r2 ? r2->v.i : 0;
	label$207$4:
	r5 = 0;
	if( r3 >= r5 ) goto label$207$13;
	r5 = r0->length;
	r4 = r3 + r5;
	r3 = r4;
	r5 = 0;
	if( r4 >= r5 ) goto label$207$13;
	r4 = 0;
	r3 = r4;
	label$207$13:
	r4 = r3;
	r5 = r0->length;
	label$207$15:
	if( r4 >= r5 ) goto label$207$26;
	r6 = r4;
	++r4;
	r8 = r0->bytes;
	r9 = 2;
	r9 = r6 << r9;
	r7 = *(int*)(r8 + r9);
	if( r7 != r1 ) goto label$207$25;
	return r6;
	label$207$25:
	goto label$207$15;
	label$207$26:
	r4 = -1;
	return r4;
}

int hl_types_ArrayBytes_Int_lastIndexOf(hl__types__ArrayBytes_Int r0,int r1,vdynamic* r2) {
	vbyte *r7;
	int r3, r4, r5, r6;
	r3 = r0->length;
	if( !r2 ) goto label$208$4;
	r4 = r2 ? r2->v.i : 0;
	goto label$208$6;
	label$208$4:
	r5 = 1;
	r4 = r3 - r5;
	label$208$6:
	if( r4 < r3 ) goto label$208$11;
	r6 = 1;
	r5 = r3 - r6;
	r4 = r5;
	goto label$208$15;
	label$208$11:
	r6 = 0;
	if( r4 >= r6 ) goto label$208$15;
	r5 = r4 + r3;
	r4 = r5;
	label$208$15:
	r6 = 0;
	if( r4 < r6 ) goto label$208$26;
	r7 = r0->bytes;
	r6 = 2;
	r6 = r4 << r6;
	r5 = *(int*)(r7 + r6);
	if( r5 != r1 ) goto label$208$24;
	return r4;
	label$208$24:
	--r4;
	goto label$208$15;
	label$208$26:
	r5 = -1;
	return r5;
}

hl__types__ArrayBytes_Int hl_types_ArrayBytes_Int_copy(hl__types__ArrayBytes_Int r0) {
	hl__types__ArrayBytes_Int r1;
	vbyte *r4, *r5, *r7, *r8;
	int r3, r6, r9, r10;
	r1 = (hl__types__ArrayBytes_Int)hl_alloc_obj(hl__types__ArrayBytes_Int__val);
	hl_types_ArrayBytes_Int_new(r1);
	r3 = r0->length;
	r1->size = r3;
	r1->length = r3;
	r4 = r0->bytes;
	r3 = r0->length;
	r6 = 2;
	r3 = r3 << r6;
	r5 = hl_alloc_bytes(r3);
	r1->bytes = r5;
	r5 = r0->bytes;
	r7 = r1->bytes;
	r3 = 0;
	r8 = r0->bytes;
	r6 = 0;
	r9 = r0->length;
	r10 = 2;
	r9 = r9 << r10;
	hl_bytes_blit(r7,r3,r8,r6,r9);
	return r1;
}

vdynamic* hl_types_ArrayBytes_Int_iterator(hl__types__ArrayBytes_Int r0) {
	hl__types__BytesIterator_Int r1;
	r1 = (hl__types__BytesIterator_Int)hl_alloc_obj(hl__types__BytesIterator_Int__val);
	hl_types_BytesIterator_Int_new(r1,r0);
	return ((vdynamic*)r1);
}

hl__types__ArrayDyn hl_types_ArrayBytes_Int_map(hl__types__ArrayBytes_Int r0,vclosure* r1) {
	bool *r14;
	hl__types__ArrayObj r2;
	bool r13;
	hl__types__ArrayDyn r12;
	vdynamic *r10;
	vbyte *r9;
	varray *r8;
	int r4, r5, r6, r7, r11;
	r2 = (hl__types__ArrayObj)hl_alloc_obj(hl__types__ArrayObj__val);
	hl_types_ArrayObj_new(r2);
	r4 = r0->length;
	r5 = 0;
	if( r5 >= r4 ) goto label$211$9;
	r4 = r0->length;
	r5 = 1;
	r4 = r4 - r5;
	hl_types_ArrayObj___expand(r2,r4);
	label$211$9:
	r4 = 0;
	r5 = r0->length;
	label$211$11:
	if( r4 >= r5 ) goto label$211$25;
	r6 = r4;
	++r4;
	if( r2 == NULL ) hl_null_access();
	r8 = r2->array;
	r9 = r0->bytes;
	if( r1 == NULL ) hl_null_access();
	r11 = 2;
	r11 = r6 << r11;
	r7 = *(int*)(r9 + r11);
	r10 = r1->hasValue ? ((vdynamic* (*)(vdynamic*,int))r1->fun)((vdynamic*)r1->value,r7) : ((vdynamic* (*)(int))r1->fun)(r7);
	((vdynamic**)(r8 + 1))[r6] = r10;
	goto label$211$11;
	label$211$25:
	r13 = true;
	r14 = &r13;
	r12 = hl_types_ArrayDyn_alloc(((hl__types__ArrayBase)r2),r14);
	return r12;
}

hl__types__ArrayBytes_Int hl_types_ArrayBytes_Int_filter(hl__types__ArrayBytes_Int r0,vclosure* r1) {
	bool r10;
	hl__types__ArrayBytes_Int r2;
	vbyte *r8;
	int r4, r5, r6, r7, r9;
	r2 = (hl__types__ArrayBytes_Int)hl_alloc_obj(hl__types__ArrayBytes_Int__val);
	hl_types_ArrayBytes_Int_new(r2);
	r4 = 0;
	r5 = r0->length;
	label$212$4:
	if( r4 >= r5 ) goto label$212$18;
	r6 = r4;
	++r4;
	r8 = r0->bytes;
	r9 = 2;
	r9 = r6 << r9;
	r7 = *(int*)(r8 + r9);
	if( r1 == NULL ) hl_null_access();
	r10 = r1->hasValue ? ((bool (*)(vdynamic*,int))r1->fun)((vdynamic*)r1->value,r7) : ((bool (*)(int))r1->fun)(r7);
	if( !r10 ) goto label$212$17;
	if( r2 == NULL ) hl_null_access();
	r9 = hl_types_ArrayBytes_Int_push(r2,r7);
	label$212$17:
	goto label$212$4;
	label$212$18:
	return r2;
}

void hl_types_ArrayBytes_Int_resize(hl__types__ArrayBytes_Int r0,int r1) {
	vbyte *r5, *r6, *r7;
	int r3, r4, r8, r9;
	r3 = r0->length;
	if( r3 >= r1 ) goto label$213$6;
	r4 = 1;
	r3 = r1 - r4;
	hl_types_ArrayBytes_Int___expand(r0,r3);
	goto label$213$20;
	label$213$6:
	r3 = r0->length;
	if( r1 >= r3 ) goto label$213$20;
	r5 = r0->bytes;
	r6 = r0->bytes;
	r4 = 2;
	r3 = r1 << r4;
	r7 = r0->bytes;
	r8 = r0->length;
	r8 = r8 - r1;
	r9 = 2;
	r8 = r8 << r9;
	r9 = 0;
	hl_bytes_fill(r5,r3,r8,r9);
	r0->length = r1;
	label$213$20:
	return;
}

vdynamic* hl_types_ArrayBytes_Int_getDyn(hl__types__ArrayBytes_Int r0,int r1) {
	bool r2;
	vdynamic *r6;
	vbyte *r5;
	int r3, r4;
	r4 = r0->length;
	if( r1 >= r4 ) goto label$214$4;
	r2 = false;
	goto label$214$5;
	label$214$4:
	r2 = true;
	label$214$5:
	if( !r2 ) goto label$214$10;
	r5 = r0->bytes;
	r3 = 0;
	r6 = hl_alloc_dynamic(&type$3);
	r6->v.i = r3;
	return r6;
	label$214$10:
	r5 = r0->bytes;
	r4 = 2;
	r4 = r1 << r4;
	r3 = *(int*)(r5 + r4);
	r6 = hl_alloc_dynamic(&type$3);
	r6->v.i = r3;
	return r6;
}

void hl_types_ArrayBytes_Int_setDyn(hl__types__ArrayBytes_Int r0,int r1,vdynamic* r2) {
	bool r4;
	vbyte *r7;
	int r5, r6, r8;
	r6 = r0->length;
	if( r1 >= r6 ) goto label$215$4;
	r4 = false;
	goto label$215$5;
	label$215$4:
	r4 = true;
	label$215$5:
	if( !r4 ) goto label$215$7;
	hl_types_ArrayBytes_Int___expand(r0,r1);
	label$215$7:
	r7 = r0->bytes;
	r5 = (int)hl_dyn_casti(&r2,&type$9,&type$3);
	r8 = 2;
	r8 = r1 << r8;
	*(int*)(r7 + r8) = r5;
	return;
}

int hl_types_ArrayBytes_Int_pushDyn(hl__types__ArrayBytes_Int r0,vdynamic* r1) {
	int r2;
	r2 = (int)hl_dyn_casti(&r1,&type$9,&type$3);
	r2 = hl_types_ArrayBytes_Int_push(r0,r2);
	return r2;
}

vdynamic* hl_types_ArrayBytes_Int_popDyn(hl__types__ArrayBytes_Int r0) {
	vdynamic *r1;
	r1 = hl_types_ArrayBytes_Int_pop(r0);
	return ((vdynamic*)r1);
}

vdynamic* hl_types_ArrayBytes_Int_shiftDyn(hl__types__ArrayBytes_Int r0) {
	vdynamic *r1;
	r1 = hl_types_ArrayBytes_Int_shift(r0);
	return ((vdynamic*)r1);
}

void hl_types_ArrayBytes_Int_unshiftDyn(hl__types__ArrayBytes_Int r0,vdynamic* r1) {
	int r3;
	r3 = (int)hl_dyn_casti(&r1,&type$9,&type$3);
	hl_types_ArrayBytes_Int_unshift(r0,r3);
	return;
}

void hl_types_ArrayBytes_Int_insertDyn(hl__types__ArrayBytes_Int r0,int r1,vdynamic* r2) {
	int r4;
	r4 = (int)hl_dyn_casti(&r2,&type$9,&type$3);
	hl_types_ArrayBytes_Int_insert(r0,r1,r4);
	return;
}

bool hl_types_ArrayBytes_Int_removeDyn(hl__types__ArrayBytes_Int r0,vdynamic* r1) {
	bool r2;
	int r3;
	r3 = (int)hl_dyn_casti(&r1,&type$9,&type$3);
	r2 = hl_types_ArrayBytes_Int_remove(r0,r3);
	return r2;
}

void hl_types_ArrayBytes_Int_sortDyn(hl__types__ArrayBytes_Int r0,vclosure* r1) {
	vclosure *r3;
	if( r1 ) goto label$222$3;
	r3 = NULL;
	goto label$222$4;
	label$222$3:
	r3 = hl_alloc_closure_ptr(&type$3133,fun$3235,r1);
	label$222$4:
	hl_types_ArrayBytes_Int_sort(r0,r3);
	return;
}

void hl_types_ArrayBytes_Int___expand(hl__types__ArrayBytes_Int r0,int r1) {
	String r5, r8;
	int *r6;
	vbyte *r7, *r11, *r12, *r13, *r14;
	int r3, r4, r9, r10, r15, r16;
	r4 = 0;
	if( r1 >= r4 ) goto label$223$9;
	r5 = (String)global$896;
	r3 = r1;
	r6 = &r3;
	r7 = hl_itos(r3,r6);
	r8 = String___alloc__(r7,r3);
	r5 = String___add__(r5,r8);
	hl_throw((vdynamic*)r5);
	label$223$9:
	r4 = 1;
	r3 = r1 + r4;
	r9 = r0->size;
	if( r9 >= r3 ) goto label$223$40;
	r4 = r0->size;
	r9 = 3;
	r4 = r4 * r9;
	r9 = 1;
	r4 = r4 >> r9;
	if( r4 >= r3 ) goto label$223$20;
	r4 = r3;
	label$223$20:
	r7 = r0->bytes;
	r10 = 2;
	r9 = r4 << r10;
	r11 = hl_alloc_bytes(r9);
	r12 = r0->bytes;
	r9 = r0->length;
	r10 = 2;
	r9 = r9 << r10;
	r10 = 0;
	r14 = r0->bytes;
	r15 = 0;
	hl_bytes_blit(r11,r10,r14,r15,r9);
	r13 = r0->bytes;
	r16 = 2;
	r15 = r4 << r16;
	r15 = r15 - r9;
	r16 = 0;
	hl_bytes_fill(r11,r9,r15,r16);
	r0->bytes = r11;
	r0->size = r4;
	label$223$40:
	r0->length = r3;
	return;
}
