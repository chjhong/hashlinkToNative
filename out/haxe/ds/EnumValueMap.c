﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

int haxe_ds_EnumValueMap_compare(haxe__ds__EnumValueMap r0,vdynamic* r1,vdynamic* r2) {
	hl__types__ArrayDyn r6, r7;
	int r3, r4, r5;
	r3 = Type_enumIndex(r1);
	r4 = Type_enumIndex(r2);
	r3 = r3 - r4;
	r5 = 0;
	if( r3 == r5 ) goto label$2680$6;
	return r3;
	label$2680$6:
	r6 = Type_enumParameters(r1);
	r7 = Type_enumParameters(r2);
	if( r6 == NULL ) hl_null_access();
	r4 = hl_types_ArrayDyn_get_length(r6);
	r5 = 0;
	if( r4 != r5 ) goto label$2680$18;
	if( r7 == NULL ) hl_null_access();
	r4 = hl_types_ArrayDyn_get_length(r7);
	r5 = 0;
	if( r4 != r5 ) goto label$2680$18;
	r4 = 0;
	return r4;
	label$2680$18:
	r4 = haxe_ds_EnumValueMap_compareArgs(r0,r6,r7);
	return r4;
}

int haxe_ds_EnumValueMap_compareArgs(haxe__ds__EnumValueMap r0,hl__types__ArrayDyn r1,hl__types__ArrayDyn r2) {
	vdynamic *r6, *r9;
	int r3, r4, r5, r7, r8, r10;
	if( r1 == NULL ) hl_null_access();
	r3 = hl_types_ArrayDyn_get_length(r1);
	if( r2 == NULL ) hl_null_access();
	r4 = hl_types_ArrayDyn_get_length(r2);
	r3 = r3 - r4;
	r5 = 0;
	if( r3 == r5 ) goto label$2681$8;
	return r3;
	label$2681$8:
	r4 = 0;
	r5 = hl_types_ArrayDyn_get_length(r1);
	label$2681$10:
	if( r4 >= r5 ) goto label$2681$23;
	r7 = r4;
	++r4;
	if( r1 == NULL ) hl_null_access();
	r6 = ((vdynamic* (*)(hl__types__ArrayDyn,int))r1->$type->vobj_proto[0])(r1,r7);
	if( r2 == NULL ) hl_null_access();
	r9 = ((vdynamic* (*)(hl__types__ArrayDyn,int))r2->$type->vobj_proto[0])(r2,r7);
	r8 = haxe_ds_EnumValueMap_compareArg(r0,r6,r9);
	r10 = 0;
	if( r8 == r10 ) goto label$2681$22;
	return r8;
	label$2681$22:
	goto label$2681$10;
	label$2681$23:
	r4 = 0;
	return r4;
}

int haxe_ds_EnumValueMap_compareArg(haxe__ds__EnumValueMap r0,vdynamic* r1,vdynamic* r2) {
	bool r3;
	hl__types__ArrayDyn r6, r7;
	hl__types__$ArrayBase r5;
	int r4;
	r3 = Reflect_isEnumValue(r1);
	if( !r3 ) goto label$2682$6;
	r3 = Reflect_isEnumValue(r2);
	if( !r3 ) goto label$2682$6;
	r4 = haxe_ds_EnumValueMap_compare(r0,r1,r2);
	return r4;
	label$2682$6:
	r5 = (hl__types__$ArrayBase)global$6;
	r3 = Std_is(r1,((vdynamic*)r5));
	if( !r3 ) goto label$2682$16;
	r5 = (hl__types__$ArrayBase)global$6;
	r3 = Std_is(r2,((vdynamic*)r5));
	if( !r3 ) goto label$2682$16;
	r6 = (hl__types__ArrayDyn)hl_dyn_castp(&r1,&type$9,&type$321);
	r7 = (hl__types__ArrayDyn)hl_dyn_castp(&r2,&type$9,&type$321);
	r4 = haxe_ds_EnumValueMap_compareArgs(r0,r6,r7);
	return r4;
	label$2682$16:
	r4 = hl_dyn_compare(r1,r2);
	return r4;
}

void haxe_ds_EnumValueMap_new(haxe__ds__EnumValueMap r0) {
	haxe_ds_BalancedTree_new(((haxe__ds__BalancedTree)r0));
	return;
}

