﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void h3d_impl_PipelineState_new(h3d__impl__PipelineState r0,venum* r1) {
	hl_type *r4;
	hl__types__ArrayBytes_Int r5;
	vbyte *r10;
	varray *r3;
	int r2, r7, r8, r9;
	r2 = 16;
	r4 = &type$52;
	r3 = hl_alloc_array(r4,r2);
	r0->buffers = r3;
	r2 = 64;
	r4 = &type$53;
	r3 = hl_alloc_array(r4,r2);
	r0->resources = r3;
	r5 = (hl__types__ArrayBytes_Int)hl_alloc_obj(hl__types__ArrayBytes_Int__val);
	hl_types_ArrayBytes_Int_new(r5);
	r0->samplerBits = r5;
	r2 = 64;
	r4 = &type$53;
	r3 = hl_alloc_array(r4,r2);
	r0->samplers = r3;
	r0->kind = r1;
	r2 = 0;
	label$2545$17:
	r8 = 64;
	if( r2 >= r8 ) goto label$2545$33;
	r5 = r0->samplerBits;
	if( r5 == NULL ) hl_null_access();
	r7 = r2;
	++r2;
	r8 = -1;
	r9 = r5->length;
	if( ((unsigned)r7) < ((unsigned)r9) ) goto label$2545$28;
	hl_types_ArrayBytes_Int___expand(r5,r7);
	label$2545$28:
	r10 = r5->bytes;
	r9 = 2;
	r9 = r7 << r9;
	*(int*)(r10 + r9) = r8;
	goto label$2545$17;
	label$2545$33:
	return;
}
