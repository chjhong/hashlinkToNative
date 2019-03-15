﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

bool hl_NativeArrayIterator_Int_hasNext(hl__NativeArrayIterator_Int r0) {
	bool r1;
	int r2, r3;
	r2 = r0->pos;
	r3 = r0->length;
	if( r2 < r3 ) goto label$3123$5;
	r1 = false;
	goto label$3123$6;
	label$3123$5:
	r1 = true;
	label$3123$6:
	return r1;
}

int hl_NativeArrayIterator_Int_next(hl__NativeArrayIterator_Int r0) {
	int r2, r3;
	varray *r1;
	r1 = r0->arr;
	r2 = r0->pos;
	r3 = r2;
	++r2;
	r0->pos = r2;
	r3 = ((int*)(r1 + 1))[r3];
	return r3;
}

void hl_NativeArrayIterator_Int_new(hl__NativeArrayIterator_Int r0,varray* r1) {
	int r2;
	r0->arr = r1;
	r2 = 0;
	r0->pos = r2;
	r2 = r1->size;
	r0->length = r2;
	return;
}
