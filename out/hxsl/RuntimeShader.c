﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

bool hxsl_RuntimeShader_hasGlobal(hxsl__RuntimeShader r0,int r1) {
	bool r2;
	haxe__ds__IntMap r3;
	r3 = r0->globals;
	if( r3 == NULL ) hl_null_access();
	r2 = haxe_ds_IntMap_exists(r3,r1);
	return r2;
}

void hxsl_RuntimeShader_new(hxsl__RuntimeShader r0) {
	hxsl__$RuntimeShader r1;
	int r2, r3;
	r1 = (hxsl__$RuntimeShader)global$80;
	r2 = r1->UID;
	r3 = r2;
	++r2;
	r1->UID = r2;
	r0->id = r3;
	return;
}

