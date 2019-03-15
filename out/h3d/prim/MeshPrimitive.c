﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

h3d__BufferOffset h3d_prim_MeshPrimitive_allocBuffer(h3d__prim__MeshPrimitive r0,h3d__Engine r1,String r2) {
	h3d__BufferOffset r3;
	r3 = NULL;
	return r3;
}

bool h3d_prim_MeshPrimitive_hasBuffer(h3d__prim__MeshPrimitive r0,String r1) {
	bool r3;
	haxe__ds__IntMap r2;
	vdynamic *r4;
	int r5;
	r2 = r0->bufferCache;
	if( r2 ) goto label$2933$4;
	r3 = false;
	return r3;
	label$2933$4:
	r2 = r0->bufferCache;
	if( r2 == NULL ) hl_null_access();
	r4 = hxsl_Globals_allocID(r1);
	r5 = r4 ? r4->v.i : 0;
	r3 = haxe_ds_IntMap_exists(r2,r5);
	return r3;
}

void h3d_prim_MeshPrimitive_addBuffer(h3d__prim__MeshPrimitive r0,String r1,h3d__Buffer r2,int* r3) {
	haxe__ds__IntMap r6;
	h3d__BufferOffset r10, r11;
	vdynamic *r7, *r8;
	int r4, r9;
	if( r3 ) goto label$2934$3;
	r4 = 0;
	goto label$2934$4;
	label$2934$3:
	r4 = *r3;
	label$2934$4:
	r6 = r0->bufferCache;
	if( r6 ) goto label$2934$9;
	r6 = (haxe__ds__IntMap)hl_alloc_obj(haxe__ds__IntMap__val);
	haxe_ds_IntMap_new(r6);
	r0->bufferCache = r6;
	label$2934$9:
	r7 = hxsl_Globals_allocID(r1);
	r6 = r0->bufferCache;
	if( r6 == NULL ) hl_null_access();
	r9 = r7 ? r7->v.i : 0;
	r8 = haxe_ds_IntMap_get(r6,r9);
	r10 = (h3d__BufferOffset)r8;
	if( !r10 ) goto label$2934$18;
	if( r10 == NULL ) hl_null_access();
	h3d_BufferOffset_dispose(r10);
	label$2934$18:
	r6 = r0->bufferCache;
	if( r6 == NULL ) hl_null_access();
	r9 = r7 ? r7->v.i : 0;
	r11 = (h3d__BufferOffset)hl_alloc_obj(h3d__BufferOffset__val);
	h3d_BufferOffset_new(r11,r2,r4);
	haxe_ds_IntMap_set(r6,r9,((vdynamic*)r11));
	return;
}

void h3d_prim_MeshPrimitive_dispose(h3d__prim__MeshPrimitive r0) {
	hl__types__ArrayObj r8;
	bool r4;
	haxe__ds__IntMap r2;
	h3d__BufferOffset r6;
	vclosure *r5, *r7;
	vdynamic *r3;
	h3d_prim_Primitive_dispose(((h3d__prim__Primitive)r0));
	r2 = r0->bufferCache;
	if( !r2 ) goto label$2935$18;
	r2 = r0->bufferCache;
	if( r2 == NULL ) hl_null_access();
	r3 = haxe_ds_IntMap_iterator(r2);
	label$2935$6:
	if( r3 == NULL ) hl_null_access();
	r5 = (vclosure*)hl_dyn_getp((vdynamic*)r3,407283053/*hasNext*/,&type$118);
	if( r5 == NULL ) hl_null_access();
	r4 = r5->hasValue ? ((bool (*)(vdynamic*))r5->fun)((vdynamic*)r5->value) : ((bool (*)(void))r5->fun)();
	if( !r4 ) goto label$2935$18;
	r7 = (vclosure*)hl_dyn_getp((vdynamic*)r3,151160317/*next*/,&type$2475);
	if( r7 == NULL ) hl_null_access();
	r6 = r7->hasValue ? ((h3d__BufferOffset (*)(vdynamic*))r7->fun)((vdynamic*)r7->value) : ((h3d__BufferOffset (*)(void))r7->fun)();
	if( r6 == NULL ) hl_null_access();
	h3d_BufferOffset_dispose(r6);
	goto label$2935$6;
	label$2935$18:
	r2 = NULL;
	r0->bufferCache = r2;
	r8 = NULL;
	r0->prevNames = r8;
	return;
}

h3d__BufferOffset h3d_prim_MeshPrimitive_getBuffers(h3d__prim__MeshPrimitive r0,h3d__Engine r1) {
	String r13, r16, r19;
	hl__types__ArrayObj r4, r6;
	haxe__ds__IntMap r3;
	h3d__BufferOffset r7, r9, r17, r18, r20;
	vdynamic *r8, *r15;
	h3d__impl__Driver r5;
	varray *r14;
	int r10, r11, r12;
	r3 = r0->bufferCache;
	if( r3 ) goto label$2936$5;
	r3 = (haxe__ds__IntMap)hl_alloc_obj(haxe__ds__IntMap__val);
	haxe_ds_IntMap_new(r3);
	r0->bufferCache = r3;
	label$2936$5:
	if( r1 == NULL ) hl_null_access();
	r5 = r1->driver;
	if( r5 == NULL ) hl_null_access();
	r4 = ((hl__types__ArrayObj (*)(h3d__impl__Driver))r5->$type->vobj_proto[16])(r5);
	r6 = r0->prevNames;
	if( r4 != r6 ) goto label$2936$13;
	r7 = r0->prevBuffers;
	return r7;
	label$2936$13:
	r7 = NULL;
	r9 = NULL;
	r10 = 0;
	label$2936$16:
	if( r4 == NULL ) hl_null_access();
	r12 = r4->length;
	if( r10 >= r12 ) goto label$2936$58;
	r12 = r4->length;
	if( ((unsigned)r10) < ((unsigned)r12) ) goto label$2936$24;
	r13 = NULL;
	goto label$2936$27;
	label$2936$24:
	r14 = r4->array;
	r8 = ((vdynamic**)(r14 + 1))[r10];
	r13 = (String)r8;
	label$2936$27:
	++r10;
	r15 = hxsl_Globals_allocID(r13);
	r3 = r0->bufferCache;
	if( r3 == NULL ) hl_null_access();
	r11 = r15 ? r15->v.i : 0;
	r8 = haxe_ds_IntMap_get(r3,r11);
	r17 = (h3d__BufferOffset)r8;
	if( r17 ) goto label$2936$47;
	r18 = h3d_prim_MeshPrimitive_allocBuffer(r0,r1,r13);
	r17 = r18;
	if( r18 ) goto label$2936$43;
	r16 = (String)global$680;
	r16 = String___add__(r16,r13);
	r19 = (String)global$681;
	r16 = String___add__(r16,r19);
	hl_throw((vdynamic*)r16);
	label$2936$43:
	r3 = r0->bufferCache;
	if( r3 == NULL ) hl_null_access();
	r11 = r15 ? r15->v.i : 0;
	haxe_ds_IntMap_set(r3,r11,((vdynamic*)r18));
	label$2936$47:
	if( r17 == NULL ) hl_null_access();
	r20 = NULL;
	r17->next = r20;
	if( r9 ) goto label$2936$54;
	r9 = r17;
	r7 = r17;
	goto label$2936$57;
	label$2936$54:
	if( r9 == NULL ) hl_null_access();
	r9->next = r17;
	r9 = r17;
	label$2936$57:
	goto label$2936$16;
	label$2936$58:
	r0->prevNames = r4;
	r0->prevBuffers = r7;
	return r7;
}

void h3d_prim_MeshPrimitive_render(h3d__prim__MeshPrimitive r0,h3d__Engine r1) {
	bool r4;
	h3d__BufferOffset r5;
	int *r6, *r7;
	h3d__Indexes r3;
	r3 = r0->indexes;
	if( !r3 ) goto label$2937$6;
	r3 = r0->indexes;
	if( r3 == NULL ) hl_null_access();
	r4 = h3d_Indexes_isDisposed(r3);
	if( !r4 ) goto label$2937$7;
	label$2937$6:
	((void (*)(h3d__prim__MeshPrimitive,h3d__Engine))r0->$type->vobj_proto[4])(r0,r1);
	label$2937$7:
	if( r1 == NULL ) hl_null_access();
	r5 = h3d_prim_MeshPrimitive_getBuffers(r0,r1);
	r3 = r0->indexes;
	r6 = NULL;
	r7 = NULL;
	h3d_Engine_renderMultiBuffers(r1,r5,r3,r6,r7);
	return;
}
