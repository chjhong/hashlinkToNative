﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void h3d_impl_InstanceBuffer_dispose(h3d__impl__InstanceBuffer r0) {
	h3d__impl__Driver r3;
	vdynamic *r2;
	r2 = r0->data;
	if( !r2 ) goto label$2549$5;
	r3 = r0->driver;
	if( r3 == NULL ) hl_null_access();
	((void (*)(h3d__impl__Driver,h3d__impl__InstanceBuffer))r3->$type->vobj_proto[35])(r3,r0);
	label$2549$5:
	return;
}

void h3d_impl_InstanceBuffer_new(h3d__impl__InstanceBuffer r0,int r1,haxe__io__Bytes r2) {
	h3d__Engine r12;
	h3d__$Engine r13;
	h3d__impl__Driver r11;
	int r3, r5, r6, r7, r8, r9, r10;
	r3 = 0;
	r0->triCount = r3;
	r3 = 0;
	r5 = r1;
	label$2550$4:
	if( r3 >= r5 ) goto label$2550$24;
	r6 = r3;
	++r3;
	if( r2 == NULL ) hl_null_access();
	r8 = 20;
	r7 = r6 * r8;
	r7 = haxe_io_Bytes_getInt32(r2,r7);
	r9 = 20;
	r8 = r6 * r9;
	r9 = 4;
	r8 = r8 + r9;
	r8 = haxe_io_Bytes_getInt32(r2,r8);
	r9 = r7 * r8;
	r10 = 3;
	r9 = r10 == 0 ? 0 : r9 / r10;
	r10 = r0->triCount;
	r10 = r10 + r9;
	r0->triCount = r10;
	goto label$2550$4;
	label$2550$24:
	r0->commandCount = r1;
	r13 = (h3d__$Engine)global$38;
	r12 = r13->CURRENT;
	if( r12 == NULL ) hl_null_access();
	r11 = r12->driver;
	r0->driver = r11;
	r11 = r0->driver;
	if( r11 == NULL ) hl_null_access();
	((void (*)(h3d__impl__Driver,h3d__impl__InstanceBuffer,haxe__io__Bytes))r11->$type->vobj_proto[31])(r11,r0,r2);
	return;
}

