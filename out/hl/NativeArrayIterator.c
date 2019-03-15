﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

bool hl_NativeArrayIterator_hasNext(hl__NativeArrayIterator r0) {
	bool r1;
	int r2, r3;
	r2 = r0->pos;
	r3 = r0->length;
	if( r2 < r3 ) goto label$3136$5;
	r1 = false;
	goto label$3136$6;
	label$3136$5:
	r1 = true;
	label$3136$6:
	return r1;
}

vdynamic* hl_NativeArrayIterator_next(hl__NativeArrayIterator r0) {
	vdynamic *r4;
	int r2, r3;
	varray *r1;
	r1 = r0->arr;
	r2 = r0->pos;
	r3 = r2;
	++r2;
	r0->pos = r2;
	r4 = ((vdynamic**)(r1 + 1))[r3];
	return r4;
}

void hl_NativeArrayIterator_new(hl__NativeArrayIterator r0,varray* r1) {
	int r2;
	r0->arr = r1;
	r2 = 0;
	r0->pos = r2;
	r2 = r1->size;
	r0->length = r2;
	return;
}

