﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

hl__types__ArrayDyn Lambda_array(vdynamic* r0) {
	bool r5;
	vclosure *r4, *r6;
	hl__types__ArrayDyn r1;
	vdynamic *r3, *r7;
	int r8;
	r1 = (hl__types__ArrayDyn)hl_alloc_obj(hl__types__ArrayDyn__val);
	hl_types_ArrayDyn_new(r1);
	if( r0 == NULL ) hl_null_access();
	r4 = (vclosure*)hl_dyn_getp((vdynamic*)r0,-207992737/*iterator*/,&type$608);
	if( r4 == NULL ) hl_null_access();
	r3 = r4->hasValue ? ((vdynamic* (*)(vdynamic*))r4->fun)((vdynamic*)r4->value) : ((vdynamic* (*)(void))r4->fun)();
	label$231$6:
	if( r3 == NULL ) hl_null_access();
	r6 = (vclosure*)hl_dyn_getp((vdynamic*)r3,407283053/*hasNext*/,&type$118);
	if( r6 == NULL ) hl_null_access();
	r5 = r6->hasValue ? ((bool (*)(vdynamic*))r6->fun)((vdynamic*)r6->value) : ((bool (*)(void))r6->fun)();
	if( !r5 ) goto label$231$18;
	if( r1 == NULL ) hl_null_access();
	r4 = (vclosure*)hl_dyn_getp((vdynamic*)r3,151160317/*next*/,&type$608);
	if( r4 == NULL ) hl_null_access();
	r7 = r4->hasValue ? ((vdynamic* (*)(vdynamic*))r4->fun)((vdynamic*)r4->value) : ((vdynamic* (*)(void))r4->fun)();
	r8 = hl_types_ArrayDyn_push(r1,r7);
	goto label$231$6;
	label$231$18:
	return r1;
}

