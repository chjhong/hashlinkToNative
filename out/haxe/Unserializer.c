﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

int haxe_Unserializer_readDigits(haxe__Unserializer r0) {
	String r7;
	bool r2, r4;
	vbyte *r6;
	int r1, r3, r5, r8, r9, r10, r11;
	r1 = 0;
	r2 = false;
	r3 = r0->pos;
	label$3099$3:
	r4 = true;
	if( !r4 ) goto label$3099$42;
	r5 = r0->pos;
	r7 = r0->buf;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->bytes;
	r9 = 1;
	r8 = r5 << r9;
	r8 = *(unsigned short*)(r6 + r8);
	r10 = 0;
	if( r8 != r10 ) goto label$3099$16;
	goto label$3099$42;
	label$3099$16:
	r10 = 45;
	if( r8 != r10 ) goto label$3099$27;
	r9 = r0->pos;
	if( r9 == r3 ) goto label$3099$21;
	goto label$3099$42;
	label$3099$21:
	r4 = true;
	r2 = r4;
	r9 = r0->pos;
	++r9;
	r0->pos = r9;
	goto label$3099$3;
	label$3099$27:
	r10 = 48;
	if( r8 < r10 ) goto label$3099$31;
	r10 = 57;
	if( r10 >= r8 ) goto label$3099$32;
	label$3099$31:
	goto label$3099$42;
	label$3099$32:
	r10 = 10;
	r9 = r1 * r10;
	r11 = 48;
	r10 = r8 - r11;
	r9 = r9 + r10;
	r1 = r9;
	r9 = r0->pos;
	++r9;
	r0->pos = r9;
	goto label$3099$3;
	label$3099$42:
	if( !r2 ) goto label$3099$46;
	r8 = -1;
	r5 = r1 * r8;
	r1 = r5;
	label$3099$46:
	return r1;
}

double haxe_Unserializer_readFloat(haxe__Unserializer r0) {
	String r5;
	bool r2;
	double r9;
	vdynamic *r10;
	vbyte *r4;
	int r1, r3, r6, r7, r8;
	r1 = r0->pos;
	label$3100$1:
	r2 = true;
	if( !r2 ) goto label$3100$28;
	r3 = r0->pos;
	r5 = r0->buf;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->bytes;
	r7 = 1;
	r6 = r3 << r7;
	r6 = *(unsigned short*)(r4 + r6);
	r8 = 0;
	if( r6 != r8 ) goto label$3100$14;
	goto label$3100$28;
	label$3100$14:
	r8 = 43;
	if( r6 < r8 ) goto label$3100$18;
	r8 = 58;
	if( r6 < r8 ) goto label$3100$22;
	label$3100$18:
	r8 = 101;
	if( r6 == r8 ) goto label$3100$22;
	r8 = 69;
	if( r6 != r8 ) goto label$3100$26;
	label$3100$22:
	r7 = r0->pos;
	++r7;
	r0->pos = r7;
	goto label$3100$27;
	label$3100$26:
	goto label$3100$28;
	label$3100$27:
	goto label$3100$1;
	label$3100$28:
	r5 = r0->buf;
	if( r5 == NULL ) hl_null_access();
	r6 = r0->pos;
	r6 = r6 - r1;
	r10 = hl_alloc_dynamic(&type$3);
	r10->v.i = r6;
	r5 = String_substr(r5,r1,r10);
	r9 = Std_parseFloat(r5);
	return r9;
}

void haxe_Unserializer_unserializeObject(haxe__Unserializer r0,vdynamic* r1) {
	$String r10;
	String r6;
	bool r2;
	vdynamic *r7, *r11;
	vbyte *r8;
	int r4, r5, r9;
	label$3101$0:
	r2 = true;
	if( !r2 ) goto label$3101$31;
	r4 = r0->pos;
	r5 = r0->length;
	if( r4 < r5 ) goto label$3101$8;
	r6 = (String)global$792;
	hl_throw((vdynamic*)r6);
	label$3101$8:
	r4 = r0->pos;
	r6 = r0->buf;
	if( r6 == NULL ) hl_null_access();
	r8 = r6->bytes;
	r9 = 1;
	r5 = r4 << r9;
	r5 = *(unsigned short*)(r8 + r5);
	r9 = 103;
	if( r5 != r9 ) goto label$3101$18;
	goto label$3101$31;
	label$3101$18:
	r7 = haxe_Unserializer_unserialize(r0);
	r10 = ($String)global$1;
	r2 = Std_is(r7,((vdynamic*)r10));
	if( r2 ) goto label$3101$24;
	r6 = (String)global$793;
	hl_throw((vdynamic*)r6);
	label$3101$24:
	if( r7 ) goto label$3101$27;
	r6 = NULL;
	goto label$3101$28;
	label$3101$27:
	r6 = Std_string(r7);
	label$3101$28:
	r11 = haxe_Unserializer_unserialize(r0);
	Reflect_setField(r1,r6,r11);
	goto label$3101$0;
	label$3101$31:
	r4 = r0->pos;
	++r4;
	r0->pos = r4;
	return;
}

vdynamic* haxe_Unserializer_unserializeEnum(haxe__Unserializer r0,hl__BaseType r1,String r2) {
	String r7;
	hl__types__ArrayDyn r11;
	vdynamic *r9;
	vbyte *r6;
	int r3, r4, r8, r10;
	r3 = r0->pos;
	r4 = r3;
	++r3;
	r0->pos = r3;
	r7 = r0->buf;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->bytes;
	r8 = 1;
	r4 = r4 << r8;
	r4 = *(unsigned short*)(r6 + r4);
	r8 = 58;
	if( r4 == r8 ) goto label$3102$14;
	r7 = (String)global$794;
	hl_throw((vdynamic*)r7);
	label$3102$14:
	r4 = haxe_Unserializer_readDigits(r0);
	r10 = 0;
	if( r4 != r10 ) goto label$3102$20;
	r11 = NULL;
	r9 = Type_createEnum(r1,r2,r11);
	return r9;
	label$3102$20:
	r11 = (hl__types__ArrayDyn)hl_alloc_obj(hl__types__ArrayDyn__val);
	hl_types_ArrayDyn_new(r11);
	label$3102$22:
	r8 = r4;
	--r4;
	r10 = 0;
	if( r10 >= r8 ) goto label$3102$31;
	if( r11 == NULL ) hl_null_access();
	r9 = haxe_Unserializer_unserialize(r0);
	r8 = hl_types_ArrayDyn_push(r11,r9);
	goto label$3102$22;
	label$3102$31:
	r9 = Type_createEnum(r1,r2,r11);
	return r9;
}

vdynamic* haxe_Unserializer_unserialize(haxe__Unserializer r0) {
	vdynobj *r32;
	hl__BaseType r13;
	String r5, r11, r12, r28;
	haxe__ds__ObjectMap r19;
	hl__Class r9;
	Date r62;
	haxe__ds__StringMap r26;
	hl__types__ArrayObj r21;
	haxe__io__Bytes r40;
	bool r20, r54, r55, r56, r57, r58, r59, r60, r61;
	haxe__ds__IntMap r33;
	hl__types__ArrayBytes_Int r35, r37;
	$Math r30;
	haxe__$Unserializer r36;
	haxe__ds__List r31;
	double r27;
	hl__types__ArrayDyn r15, r23;
	vclosure *r10, *r14;
	int *r29;
	vdynamic *r8, *r16, *r63;
	varray *r22;
	vbyte *r4, *r6, *r17, *r34, *r43, *r49, *r52;
	int r1, r2, r7, r18, r24, r25, r38, r39, r41, r42, r44, r45, r46, r47, r48, r50, r51, r53;
	r1 = r0->pos;
	r2 = r1;
	++r1;
	r0->pos = r1;
	r5 = r0->buf;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->bytes;
	r7 = 1;
	r2 = r2 << r7;
	r2 = *(unsigned short*)(r4 + r2);
	switch(r2) {
		default:
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 78:
		case 79:
		case 80:
		case 81:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 101:
		case 103:
		case 104:
		case 117:
			goto label$3098$799;
		case 65:
			r8 = haxe_Unserializer_unserialize(r0);
			if( r8 ) goto label$3098$16;
			r5 = NULL;
			goto label$3098$17;
			label$3098$16:
			r5 = Std_string(r8);
			label$3098$17:
			r8 = r0->resolver;
			if( r8 == NULL ) hl_null_access();
			r10 = (vclosure*)hl_dyn_getp((vdynamic*)r8,-522339299/*resolveClass*/,&type$871);
			if( r10 == NULL ) hl_null_access();
			r9 = r10->hasValue ? ((hl__Class (*)(vdynamic*,String))r10->fun)((vdynamic*)r10->value,r5) : ((hl__Class (*)(String))r10->fun)(r5);
			if( r9 ) goto label$3098$26;
			r11 = (String)global$795;
			r11 = String___add__(r11,r5);
			hl_throw((vdynamic*)r11);
			label$3098$26:
			return ((vdynamic*)r9);
		case 66:
			r8 = haxe_Unserializer_unserialize(r0);
			if( r8 ) goto label$3098$31;
			r5 = NULL;
			goto label$3098$32;
			label$3098$31:
			r5 = Std_string(r8);
			label$3098$32:
			r8 = r0->resolver;
			if( r8 == NULL ) hl_null_access();
			r14 = (vclosure*)hl_dyn_getp((vdynamic*)r8,-28209272/*resolveEnum*/,&type$872);
			if( r14 == NULL ) hl_null_access();
			r13 = r14->hasValue ? ((hl__BaseType (*)(vdynamic*,String))r14->fun)((vdynamic*)r14->value,r5) : ((hl__BaseType (*)(String))r14->fun)(r5);
			if( r13 ) goto label$3098$41;
			r11 = (String)global$796;
			r11 = String___add__(r11,r5);
			hl_throw((vdynamic*)r11);
			label$3098$41:
			return ((vdynamic*)r13);
		case 67:
			r8 = haxe_Unserializer_unserialize(r0);
			if( r8 ) goto label$3098$46;
			r5 = NULL;
			goto label$3098$47;
			label$3098$46:
			r5 = Std_string(r8);
			label$3098$47:
			r8 = r0->resolver;
			if( r8 == NULL ) hl_null_access();
			r10 = (vclosure*)hl_dyn_getp((vdynamic*)r8,-522339299/*resolveClass*/,&type$871);
			if( r10 == NULL ) hl_null_access();
			r9 = r10->hasValue ? ((hl__Class (*)(vdynamic*,String))r10->fun)((vdynamic*)r10->value,r5) : ((hl__Class (*)(String))r10->fun)(r5);
			if( r9 ) goto label$3098$56;
			r11 = (String)global$795;
			r11 = String___add__(r11,r5);
			hl_throw((vdynamic*)r11);
			label$3098$56:
			r8 = Type_createEmptyInstance(r9);
			r15 = r0->cache;
			if( r15 == NULL ) hl_null_access();
			r2 = hl_types_ArrayDyn_push(r15,r8);
			if( r8 == NULL ) hl_null_access();
			r16 = (vdynamic*)hl_dyn_getp((vdynamic*)r8,-424027736/*hxUnserialize*/,&type$9);
			if( r16 == NULL ) hl_null_access();
			{
				vdynamic *args[] = {(vdynamic*)r0};
				r16 = (vdynamic*)hl_dyn_call((vclosure*)r16,args,1);
			}
			r2 = r0->pos;
			r7 = r2;
			++r2;
			r0->pos = r2;
			r11 = r0->buf;
			if( r11 == NULL ) hl_null_access();
			r6 = r11->bytes;
			r18 = 1;
			r7 = r7 << r18;
			r7 = *(unsigned short*)(r6 + r7);
			r18 = 103;
			if( r7 == r18 ) goto label$3098$78;
			r11 = (String)global$797;
			hl_throw((vdynamic*)r11);
			label$3098$78:
			return r8;
		case 77:
			r19 = (haxe__ds__ObjectMap)hl_alloc_obj(haxe__ds__ObjectMap__val);
			haxe_ds_ObjectMap_new(r19);
			r15 = r0->cache;
			if( r15 == NULL ) hl_null_access();
			r2 = hl_types_ArrayDyn_push(r15,((vdynamic*)r19));
			label$3098$84:
			r20 = true;
			if( !r20 ) goto label$3098$102;
			r2 = r0->pos;
			r5 = r0->buf;
			if( r5 == NULL ) hl_null_access();
			r6 = r5->bytes;
			r18 = 1;
			r7 = r2 << r18;
			r7 = *(unsigned short*)(r6 + r7);
			r18 = 104;
			if( r7 != r18 ) goto label$3098$97;
			goto label$3098$102;
			label$3098$97:
			if( r19 == NULL ) hl_null_access();
			r8 = haxe_Unserializer_unserialize(r0);
			r16 = haxe_Unserializer_unserialize(r0);
			haxe_ds_ObjectMap_set(r19,r8,r16);
			goto label$3098$84;
			label$3098$102:
			r2 = r0->pos;
			++r2;
			r0->pos = r2;
			return ((vdynamic*)r19);
		case 82:
			r2 = haxe_Unserializer_readDigits(r0);
			r18 = 0;
			if( r2 < r18 ) goto label$3098$113;
			r21 = r0->scache;
			if( r21 == NULL ) hl_null_access();
			r18 = r21->length;
			if( r2 < r18 ) goto label$3098$115;
			label$3098$113:
			r5 = (String)global$798;
			hl_throw((vdynamic*)r5);
			label$3098$115:
			r21 = r0->scache;
			if( r21 == NULL ) hl_null_access();
			r18 = r21->length;
			if( ((unsigned)r2) < ((unsigned)r18) ) goto label$3098$121;
			r5 = NULL;
			goto label$3098$124;
			label$3098$121:
			r22 = r21->array;
			r8 = ((vdynamic**)(r22 + 1))[r2];
			r5 = (String)r8;
			label$3098$124:
			return ((vdynamic*)r5);
		case 97:
			r15 = (hl__types__ArrayDyn)hl_alloc_obj(hl__types__ArrayDyn__val);
			hl_types_ArrayDyn_new(r15);
			r23 = r0->cache;
			if( r23 == NULL ) hl_null_access();
			r2 = hl_types_ArrayDyn_push(r23,((vdynamic*)r15));
			label$3098$130:
			r20 = true;
			if( !r20 ) goto label$3098$164;
			r2 = r0->pos;
			r5 = r0->buf;
			if( r5 == NULL ) hl_null_access();
			r6 = r5->bytes;
			r18 = 1;
			r7 = r2 << r18;
			r7 = *(unsigned short*)(r6 + r7);
			r24 = 104;
			if( r7 != r24 ) goto label$3098$146;
			r18 = r0->pos;
			++r18;
			r0->pos = r18;
			goto label$3098$164;
			label$3098$146:
			r24 = 117;
			if( r7 != r24 ) goto label$3098$160;
			r18 = r0->pos;
			++r18;
			r0->pos = r18;
			r18 = haxe_Unserializer_readDigits(r0);
			if( r15 == NULL ) hl_null_access();
			r24 = hl_types_ArrayDyn_get_length(r15);
			r24 = r24 + r18;
			r25 = 1;
			r24 = r24 - r25;
			r8 = NULL;
			((void (*)(hl__types__ArrayDyn,int,vdynamic*))r15->$type->vobj_proto[1])(r15,r24,r8);
			goto label$3098$163;
			label$3098$160:
			if( r15 == NULL ) hl_null_access();
			r8 = haxe_Unserializer_unserialize(r0);
			r18 = hl_types_ArrayDyn_push(r15,r8);
			label$3098$163:
			goto label$3098$130;
			label$3098$164:
			return ((vdynamic*)r15);
		case 98:
			r26 = (haxe__ds__StringMap)hl_alloc_obj(haxe__ds__StringMap__val);
			haxe_ds_StringMap_new(r26);
			r15 = r0->cache;
			if( r15 == NULL ) hl_null_access();
			r2 = hl_types_ArrayDyn_push(r15,((vdynamic*)r26));
			label$3098$170:
			r20 = true;
			if( !r20 ) goto label$3098$192;
			r2 = r0->pos;
			r5 = r0->buf;
			if( r5 == NULL ) hl_null_access();
			r6 = r5->bytes;
			r18 = 1;
			r7 = r2 << r18;
			r7 = *(unsigned short*)(r6 + r7);
			r18 = 104;
			if( r7 != r18 ) goto label$3098$183;
			goto label$3098$192;
			label$3098$183:
			if( r26 == NULL ) hl_null_access();
			r8 = haxe_Unserializer_unserialize(r0);
			if( r8 ) goto label$3098$188;
			r5 = NULL;
			goto label$3098$189;
			label$3098$188:
			r5 = Std_string(r8);
			label$3098$189:
			r8 = haxe_Unserializer_unserialize(r0);
			haxe_ds_StringMap_set(r26,r5,r8);
			goto label$3098$170;
			label$3098$192:
			r2 = r0->pos;
			++r2;
			r0->pos = r2;
			return ((vdynamic*)r26);
		case 99:
			r8 = haxe_Unserializer_unserialize(r0);
			if( r8 ) goto label$3098$200;
			r5 = NULL;
			goto label$3098$201;
			label$3098$200:
			r5 = Std_string(r8);
			label$3098$201:
			r8 = r0->resolver;
			if( r8 == NULL ) hl_null_access();
			r10 = (vclosure*)hl_dyn_getp((vdynamic*)r8,-522339299/*resolveClass*/,&type$871);
			if( r10 == NULL ) hl_null_access();
			r9 = r10->hasValue ? ((hl__Class (*)(vdynamic*,String))r10->fun)((vdynamic*)r10->value,r5) : ((hl__Class (*)(String))r10->fun)(r5);
			if( r9 ) goto label$3098$210;
			r11 = (String)global$795;
			r11 = String___add__(r11,r5);
			hl_throw((vdynamic*)r11);
			label$3098$210:
			r8 = Type_createEmptyInstance(r9);
			r15 = r0->cache;
			if( r15 == NULL ) hl_null_access();
			r2 = hl_types_ArrayDyn_push(r15,r8);
			haxe_Unserializer_unserializeObject(r0,r8);
			return r8;
		case 100:
			r27 = haxe_Unserializer_readFloat(r0);
			r8 = hl_alloc_dynamic(&type$6);
			r8->v.d = r27;
			return r8;
		case 102:
			r20 = false;
			r8 = hl_alloc_dynbool(r20);
			return r8;
		case 105:
			r2 = haxe_Unserializer_readDigits(r0);
			r8 = hl_alloc_dynamic(&type$3);
			r8->v.i = r2;
			return r8;
		case 106:
			r8 = haxe_Unserializer_unserialize(r0);
			if( r8 ) goto label$3098$229;
			r5 = NULL;
			goto label$3098$230;
			label$3098$229:
			r5 = Std_string(r8);
			label$3098$230:
			r8 = r0->resolver;
			if( r8 == NULL ) hl_null_access();
			r14 = (vclosure*)hl_dyn_getp((vdynamic*)r8,-28209272/*resolveEnum*/,&type$872);
			if( r14 == NULL ) hl_null_access();
			r13 = r14->hasValue ? ((hl__BaseType (*)(vdynamic*,String))r14->fun)((vdynamic*)r14->value,r5) : ((hl__BaseType (*)(String))r14->fun)(r5);
			if( r13 ) goto label$3098$239;
			r11 = (String)global$796;
			r11 = String___add__(r11,r5);
			hl_throw((vdynamic*)r11);
			label$3098$239:
			r2 = r0->pos;
			++r2;
			r0->pos = r2;
			r2 = haxe_Unserializer_readDigits(r0);
			r21 = Type_getEnumConstructs(r13);
			if( r21 == NULL ) hl_null_access();
			r18 = r21->length;
			if( ((unsigned)r2) < ((unsigned)r18) ) goto label$3098$249;
			r11 = NULL;
			goto label$3098$252;
			label$3098$249:
			r22 = r21->array;
			r8 = ((vdynamic**)(r22 + 1))[r2];
			r11 = (String)r8;
			label$3098$252:
			if( r11 ) goto label$3098$263;
			r12 = (String)global$799;
			r12 = String___add__(r12,r5);
			r28 = (String)global$708;
			r12 = String___add__(r12,r28);
			r7 = r2;
			r29 = &r7;
			r6 = hl_itos(r7,r29);
			r28 = String___alloc__(r6,r7);
			r12 = String___add__(r12,r28);
			hl_throw((vdynamic*)r12);
			label$3098$263:
			r8 = haxe_Unserializer_unserializeEnum(r0,r13,r11);
			r15 = r0->cache;
			if( r15 == NULL ) hl_null_access();
			r7 = hl_types_ArrayDyn_push(r15,r8);
			return r8;
		case 107:
			r30 = ($Math)global$168;
			r27 = r30->NaN;
			r8 = hl_alloc_dynamic(&type$6);
			r8->v.d = r27;
			return r8;
		case 108:
			r31 = (haxe__ds__List)hl_alloc_obj(haxe__ds__List__val);
			haxe_ds_List_new(r31);
			r15 = r0->cache;
			if( r15 == NULL ) hl_null_access();
			r2 = hl_types_ArrayDyn_push(r15,((vdynamic*)r31));
			label$3098$277:
			r20 = true;
			if( !r20 ) goto label$3098$294;
			r2 = r0->pos;
			r5 = r0->buf;
			if( r5 == NULL ) hl_null_access();
			r6 = r5->bytes;
			r18 = 1;
			r7 = r2 << r18;
			r7 = *(unsigned short*)(r6 + r7);
			r18 = 104;
			if( r7 != r18 ) goto label$3098$290;
			goto label$3098$294;
			label$3098$290:
			if( r31 == NULL ) hl_null_access();
			r8 = haxe_Unserializer_unserialize(r0);
			haxe_ds_List_add(r31,r8);
			goto label$3098$277;
			label$3098$294:
			r2 = r0->pos;
			++r2;
			r0->pos = r2;
			return ((vdynamic*)r31);
		case 109:
			r30 = ($Math)global$168;
			r27 = r30->NEGATIVE_INFINITY;
			r8 = hl_alloc_dynamic(&type$6);
			r8->v.d = r27;
			return r8;
		case 110:
			r8 = NULL;
			return r8;
		case 111:
			r32 = hl_alloc_dynobj();
			r15 = r0->cache;
			if( r15 == NULL ) hl_null_access();
			r2 = hl_types_ArrayDyn_push(r15,((vdynamic*)r32));
			haxe_Unserializer_unserializeObject(r0,((vdynamic*)r32));
			return ((vdynamic*)r32);
		case 112:
			r30 = ($Math)global$168;
			r27 = r30->POSITIVE_INFINITY;
			r8 = hl_alloc_dynamic(&type$6);
			r8->v.d = r27;
			return r8;
		case 113:
			r33 = (haxe__ds__IntMap)hl_alloc_obj(haxe__ds__IntMap__val);
			haxe_ds_IntMap_new(r33);
			r15 = r0->cache;
			if( r15 == NULL ) hl_null_access();
			r2 = hl_types_ArrayDyn_push(r15,((vdynamic*)r33));
			r2 = r0->pos;
			r7 = r2;
			++r2;
			r0->pos = r2;
			r5 = r0->buf;
			if( r5 == NULL ) hl_null_access();
			r6 = r5->bytes;
			r18 = 1;
			r7 = r7 << r18;
			r7 = *(unsigned short*)(r6 + r7);
			label$3098$329:
			r24 = 58;
			if( r7 != r24 ) goto label$3098$348;
			if( r33 == NULL ) hl_null_access();
			r18 = haxe_Unserializer_readDigits(r0);
			r8 = haxe_Unserializer_unserialize(r0);
			haxe_ds_IntMap_set(r33,r18,r8);
			r18 = r0->pos;
			r24 = r18;
			++r18;
			r0->pos = r18;
			r5 = r0->buf;
			if( r5 == NULL ) hl_null_access();
			r17 = r5->bytes;
			r25 = 1;
			r24 = r24 << r25;
			r24 = *(unsigned short*)(r17 + r24);
			r7 = r24;
			goto label$3098$329;
			label$3098$348:
			r24 = 104;
			if( r7 == r24 ) goto label$3098$352;
			r5 = (String)global$800;
			hl_throw((vdynamic*)r5);
			label$3098$352:
			return ((vdynamic*)r33);
		case 114:
			r2 = haxe_Unserializer_readDigits(r0);
			r18 = 0;
			if( r2 < r18 ) goto label$3098$360;
			r15 = r0->cache;
			if( r15 == NULL ) hl_null_access();
			r18 = hl_types_ArrayDyn_get_length(r15);
			if( r2 < r18 ) goto label$3098$362;
			label$3098$360:
			r5 = (String)global$801;
			hl_throw((vdynamic*)r5);
			label$3098$362:
			r15 = r0->cache;
			if( r15 == NULL ) hl_null_access();
			r8 = ((vdynamic* (*)(hl__types__ArrayDyn,int))r15->$type->vobj_proto[0])(r15,r2);
			return r8;
		case 115:
			r2 = haxe_Unserializer_readDigits(r0);
			r5 = r0->buf;
			r7 = r0->pos;
			r18 = r7;
			++r7;
			r0->pos = r7;
			r11 = r0->buf;
			if( r11 == NULL ) hl_null_access();
			r6 = r11->bytes;
			r24 = 1;
			r18 = r18 << r24;
			r18 = *(unsigned short*)(r6 + r18);
			r24 = 58;
			if( r18 != r24 ) goto label$3098$384;
			r18 = r0->length;
			r24 = r0->pos;
			r18 = r18 - r24;
			if( r18 >= r2 ) goto label$3098$386;
			label$3098$384:
			r11 = (String)global$802;
			hl_throw((vdynamic*)r11);
			label$3098$386:
			r36 = (haxe__$Unserializer)global$791;
			r35 = r36->CODES;
			if( r35 ) goto label$3098$393;
			r37 = haxe_Unserializer_initCodes();
			r35 = r37;
			r36 = (haxe__$Unserializer)global$791;
			r36->CODES = r37;
			label$3098$393:
			r18 = r0->pos;
			r25 = 3;
			r24 = r2 & r25;
			r38 = r2 - r24;
			r25 = r18 + r38;
			r39 = 2;
			r38 = r2 >> r39;
			r39 = 3;
			r38 = r38 * r39;
			r41 = 2;
			if( r24 < r41 ) goto label$3098$407;
			r41 = 1;
			r39 = r24 - r41;
			goto label$3098$408;
			label$3098$407:
			r39 = 0;
			label$3098$408:
			r38 = r38 + r39;
			r40 = haxe_io_Bytes_alloc(r38);
			r38 = 0;
			label$3098$411:
			if( r18 >= r25 ) goto label$3098$495;
			r39 = r18;
			++r18;
			if( r5 == NULL ) hl_null_access();
			r17 = r5->bytes;
			if( r35 == NULL ) hl_null_access();
			r42 = 1;
			r41 = r39 << r42;
			r41 = *(unsigned short*)(r17 + r41);
			r42 = r35->length;
			if( ((unsigned)r41) < ((unsigned)r42) ) goto label$3098$425;
			r41 = 0;
			goto label$3098$429;
			label$3098$425:
			r34 = r35->bytes;
			r42 = 2;
			r42 = r41 << r42;
			r41 = *(int*)(r34 + r42);
			label$3098$429:
			r42 = r18;
			++r18;
			r34 = r5->bytes;
			r45 = 1;
			r44 = r42 << r45;
			r44 = *(unsigned short*)(r34 + r44);
			r45 = r35->length;
			if( ((unsigned)r44) < ((unsigned)r45) ) goto label$3098$439;
			r44 = 0;
			goto label$3098$443;
			label$3098$439:
			r43 = r35->bytes;
			r45 = 2;
			r45 = r44 << r45;
			r44 = *(int*)(r43 + r45);
			label$3098$443:
			if( r40 == NULL ) hl_null_access();
			r45 = r38;
			++r38;
			r47 = 2;
			r46 = r41 << r47;
			r48 = 4;
			r47 = r44 >> r48;
			r46 = r46 | r47;
			haxe_io_Bytes_set(r40,r45,r46);
			r45 = r18;
			++r18;
			r43 = r5->bytes;
			r47 = 1;
			r46 = r45 << r47;
			r46 = *(unsigned short*)(r43 + r46);
			r47 = r35->length;
			if( ((unsigned)r46) < ((unsigned)r47) ) goto label$3098$462;
			r46 = 0;
			goto label$3098$466;
			label$3098$462:
			r49 = r35->bytes;
			r47 = 2;
			r47 = r46 << r47;
			r46 = *(int*)(r49 + r47);
			label$3098$466:
			r47 = r38;
			++r38;
			r50 = 4;
			r48 = r44 << r50;
			r51 = 2;
			r50 = r46 >> r51;
			r48 = r48 | r50;
			haxe_io_Bytes_set(r40,r47,r48);
			r47 = r18;
			++r18;
			r49 = r5->bytes;
			r48 = r38;
			++r38;
			r51 = 6;
			r50 = r46 << r51;
			r53 = 1;
			r51 = r47 << r53;
			r51 = *(unsigned short*)(r49 + r51);
			r53 = r35->length;
			if( ((unsigned)r51) < ((unsigned)r53) ) goto label$3098$488;
			r51 = 0;
			goto label$3098$492;
			label$3098$488:
			r52 = r35->bytes;
			r53 = 2;
			r53 = r51 << r53;
			r51 = *(int*)(r52 + r53);
			label$3098$492:
			r50 = r50 | r51;
			haxe_io_Bytes_set(r40,r48,r50);
			goto label$3098$411;
			label$3098$495:
			r41 = 2;
			if( r24 < r41 ) goto label$3098$560;
			r39 = r18;
			++r18;
			if( r5 == NULL ) hl_null_access();
			r17 = r5->bytes;
			if( r35 == NULL ) hl_null_access();
			r42 = 1;
			r41 = r39 << r42;
			r41 = *(unsigned short*)(r17 + r41);
			r42 = r35->length;
			if( ((unsigned)r41) < ((unsigned)r42) ) goto label$3098$509;
			r41 = 0;
			goto label$3098$513;
			label$3098$509:
			r34 = r35->bytes;
			r42 = 2;
			r42 = r41 << r42;
			r41 = *(int*)(r34 + r42);
			label$3098$513:
			r42 = r18;
			++r18;
			r34 = r5->bytes;
			r45 = 1;
			r44 = r42 << r45;
			r44 = *(unsigned short*)(r34 + r44);
			r45 = r35->length;
			if( ((unsigned)r44) < ((unsigned)r45) ) goto label$3098$523;
			r44 = 0;
			goto label$3098$527;
			label$3098$523:
			r43 = r35->bytes;
			r45 = 2;
			r45 = r44 << r45;
			r44 = *(int*)(r43 + r45);
			label$3098$527:
			if( r40 == NULL ) hl_null_access();
			r45 = r38;
			++r38;
			r47 = 2;
			r46 = r41 << r47;
			r48 = 4;
			r47 = r44 >> r48;
			r46 = r46 | r47;
			haxe_io_Bytes_set(r40,r45,r46);
			r46 = 3;
			if( r24 != r46 ) goto label$3098$560;
			r45 = r18;
			++r18;
			r43 = r5->bytes;
			r46 = r38;
			++r38;
			r48 = 4;
			r47 = r44 << r48;
			r50 = 1;
			r48 = r45 << r50;
			r48 = *(unsigned short*)(r43 + r48);
			r50 = r35->length;
			if( ((unsigned)r48) < ((unsigned)r50) ) goto label$3098$552;
			r48 = 0;
			goto label$3098$556;
			label$3098$552:
			r49 = r35->bytes;
			r50 = 2;
			r50 = r48 << r50;
			r48 = *(int*)(r49 + r50);
			label$3098$556:
			r50 = 2;
			r48 = r48 >> r50;
			r47 = r47 | r48;
			haxe_io_Bytes_set(r40,r46,r47);
			label$3098$560:
			r39 = r0->pos;
			r39 = r39 + r2;
			r0->pos = r39;
			r15 = r0->cache;
			if( r15 == NULL ) hl_null_access();
			r39 = hl_types_ArrayDyn_push(r15,((vdynamic*)r40));
			return ((vdynamic*)r40);
		case 116:
			r20 = true;
			r8 = hl_alloc_dynbool(r20);
			return r8;
		case 118:
			r2 = r0->pos;
			r5 = r0->buf;
			if( r5 == NULL ) hl_null_access();
			r6 = r5->bytes;
			r18 = 1;
			r7 = r2 << r18;
			r7 = *(unsigned short*)(r6 + r7);
			r18 = 48;
			if( r7 < r18 ) goto label$3098$592;
			r7 = r0->pos;
			r5 = r0->buf;
			if( r5 == NULL ) hl_null_access();
			r17 = r5->bytes;
			r24 = 1;
			r18 = r7 << r24;
			r18 = *(unsigned short*)(r17 + r18);
			r24 = 57;
			if( r18 <= r24 ) goto label$3098$590;
			r54 = false;
			goto label$3098$591;
			label$3098$590:
			r54 = true;
			label$3098$591:
			goto label$3098$593;
			label$3098$592:
			r54 = false;
			label$3098$593:
			if( !r54 ) goto label$3098$609;
			r7 = r0->pos;
			r18 = 1;
			r7 = r7 + r18;
			r5 = r0->buf;
			if( r5 == NULL ) hl_null_access();
			r17 = r5->bytes;
			r24 = 1;
			r18 = r7 << r24;
			r18 = *(unsigned short*)(r17 + r18);
			r24 = 48;
			if( r18 >= r24 ) goto label$3098$607;
			r55 = false;
			goto label$3098$608;
			label$3098$607:
			r55 = true;
			label$3098$608:
			goto label$3098$610;
			label$3098$609:
			r55 = false;
			label$3098$610:
			if( !r55 ) goto label$3098$626;
			r7 = r0->pos;
			r18 = 1;
			r7 = r7 + r18;
			r5 = r0->buf;
			if( r5 == NULL ) hl_null_access();
			r17 = r5->bytes;
			r24 = 1;
			r18 = r7 << r24;
			r18 = *(unsigned short*)(r17 + r18);
			r24 = 57;
			if( r18 <= r24 ) goto label$3098$624;
			r56 = false;
			goto label$3098$625;
			label$3098$624:
			r56 = true;
			label$3098$625:
			goto label$3098$627;
			label$3098$626:
			r56 = false;
			label$3098$627:
			if( !r56 ) goto label$3098$643;
			r7 = r0->pos;
			r18 = 2;
			r7 = r7 + r18;
			r5 = r0->buf;
			if( r5 == NULL ) hl_null_access();
			r17 = r5->bytes;
			r24 = 1;
			r18 = r7 << r24;
			r18 = *(unsigned short*)(r17 + r18);
			r24 = 48;
			if( r18 >= r24 ) goto label$3098$641;
			r57 = false;
			goto label$3098$642;
			label$3098$641:
			r57 = true;
			label$3098$642:
			goto label$3098$644;
			label$3098$643:
			r57 = false;
			label$3098$644:
			if( !r57 ) goto label$3098$660;
			r7 = r0->pos;
			r18 = 2;
			r7 = r7 + r18;
			r5 = r0->buf;
			if( r5 == NULL ) hl_null_access();
			r17 = r5->bytes;
			r24 = 1;
			r18 = r7 << r24;
			r18 = *(unsigned short*)(r17 + r18);
			r24 = 57;
			if( r18 <= r24 ) goto label$3098$658;
			r58 = false;
			goto label$3098$659;
			label$3098$658:
			r58 = true;
			label$3098$659:
			goto label$3098$661;
			label$3098$660:
			r58 = false;
			label$3098$661:
			if( !r58 ) goto label$3098$677;
			r7 = r0->pos;
			r18 = 3;
			r7 = r7 + r18;
			r5 = r0->buf;
			if( r5 == NULL ) hl_null_access();
			r17 = r5->bytes;
			r24 = 1;
			r18 = r7 << r24;
			r18 = *(unsigned short*)(r17 + r18);
			r24 = 48;
			if( r18 >= r24 ) goto label$3098$675;
			r59 = false;
			goto label$3098$676;
			label$3098$675:
			r59 = true;
			label$3098$676:
			goto label$3098$678;
			label$3098$677:
			r59 = false;
			label$3098$678:
			if( !r59 ) goto label$3098$694;
			r7 = r0->pos;
			r18 = 3;
			r7 = r7 + r18;
			r5 = r0->buf;
			if( r5 == NULL ) hl_null_access();
			r17 = r5->bytes;
			r24 = 1;
			r18 = r7 << r24;
			r18 = *(unsigned short*)(r17 + r18);
			r24 = 57;
			if( r18 <= r24 ) goto label$3098$692;
			r60 = false;
			goto label$3098$693;
			label$3098$692:
			r60 = true;
			label$3098$693:
			goto label$3098$695;
			label$3098$694:
			r60 = false;
			label$3098$695:
			if( !r60 ) goto label$3098$711;
			r7 = r0->pos;
			r18 = 4;
			r7 = r7 + r18;
			r5 = r0->buf;
			if( r5 == NULL ) hl_null_access();
			r17 = r5->bytes;
			r24 = 1;
			r18 = r7 << r24;
			r18 = *(unsigned short*)(r17 + r18);
			r24 = 45;
			if( r18 == r24 ) goto label$3098$709;
			r61 = false;
			goto label$3098$710;
			label$3098$709:
			r61 = true;
			label$3098$710:
			goto label$3098$712;
			label$3098$711:
			r61 = false;
			label$3098$712:
			if( !r61 ) goto label$3098$725;
			r5 = r0->buf;
			if( r5 == NULL ) hl_null_access();
			r7 = r0->pos;
			r18 = 19;
			r63 = hl_alloc_dynamic(&type$3);
			r63->v.i = r18;
			r5 = String_substr(r5,r7,r63);
			r62 = Date_fromString(r5);
			r7 = r0->pos;
			r18 = 19;
			r7 = r7 + r18;
			r0->pos = r7;
			goto label$3098$727;
			label$3098$725:
			r27 = haxe_Unserializer_readFloat(r0);
			r62 = Date_fromTime(r27);
			label$3098$727:
			r15 = r0->cache;
			if( r15 == NULL ) hl_null_access();
			r7 = hl_types_ArrayDyn_push(r15,((vdynamic*)r62));
			return ((vdynamic*)r62);
		case 119:
			r8 = haxe_Unserializer_unserialize(r0);
			if( r8 ) goto label$3098$735;
			r5 = NULL;
			goto label$3098$736;
			label$3098$735:
			r5 = Std_string(r8);
			label$3098$736:
			r8 = r0->resolver;
			if( r8 == NULL ) hl_null_access();
			r14 = (vclosure*)hl_dyn_getp((vdynamic*)r8,-28209272/*resolveEnum*/,&type$872);
			if( r14 == NULL ) hl_null_access();
			r13 = r14->hasValue ? ((hl__BaseType (*)(vdynamic*,String))r14->fun)((vdynamic*)r14->value,r5) : ((hl__BaseType (*)(String))r14->fun)(r5);
			if( r13 ) goto label$3098$745;
			r11 = (String)global$796;
			r11 = String___add__(r11,r5);
			hl_throw((vdynamic*)r11);
			label$3098$745:
			r8 = haxe_Unserializer_unserialize(r0);
			if( r8 ) goto label$3098$749;
			r11 = NULL;
			goto label$3098$750;
			label$3098$749:
			r11 = Std_string(r8);
			label$3098$750:
			r8 = haxe_Unserializer_unserializeEnum(r0,r13,r11);
			r15 = r0->cache;
			if( r15 == NULL ) hl_null_access();
			r2 = hl_types_ArrayDyn_push(r15,r8);
			return r8;
		case 120:
			r8 = haxe_Unserializer_unserialize(r0);
			hl_throw((vdynamic*)r8);
		case 121:
			r2 = haxe_Unserializer_readDigits(r0);
			r7 = r0->pos;
			r18 = r7;
			++r7;
			r0->pos = r7;
			r5 = r0->buf;
			if( r5 == NULL ) hl_null_access();
			r6 = r5->bytes;
			r24 = 1;
			r18 = r18 << r24;
			r18 = *(unsigned short*)(r6 + r18);
			r24 = 58;
			if( r18 != r24 ) goto label$3098$774;
			r18 = r0->length;
			r24 = r0->pos;
			r18 = r18 - r24;
			if( r18 >= r2 ) goto label$3098$776;
			label$3098$774:
			r5 = (String)global$803;
			hl_throw((vdynamic*)r5);
			label$3098$776:
			r5 = r0->buf;
			if( r5 == NULL ) hl_null_access();
			r18 = r0->pos;
			r63 = hl_alloc_dynamic(&type$3);
			r63->v.i = r2;
			r5 = String_substr(r5,r18,r63);
			r18 = r0->pos;
			r18 = r18 + r2;
			r0->pos = r18;
			r18 = 0;
			if( r5 == NULL ) hl_null_access();
			r17 = r5->bytes;
			r29 = &r18;
			r17 = hl_url_decode(r17,r29);
			r11 = (String)hl_alloc_obj(String__val);
			r11->bytes = r17;
			r11->length = r18;
			r21 = r0->scache;
			if( r21 == NULL ) hl_null_access();
			r24 = hl_types_ArrayObj_push(r21,((vdynamic*)r11));
			return ((vdynamic*)r11);
		case 122:
			r2 = 0;
			r8 = hl_alloc_dynamic(&type$3);
			r8->v.i = r2;
			return r8;
	}
	label$3098$799:
	r1 = r0->pos;
	--r1;
	r0->pos = r1;
	r5 = (String)global$804;
	r11 = r0->buf;
	if( r11 == NULL ) hl_null_access();
	r1 = r0->pos;
	r11 = String_charAt(r11,r1);
	r5 = String___add__(r5,r11);
	r11 = (String)global$805;
	r5 = String___add__(r5,r11);
	r1 = r0->pos;
	r29 = &r1;
	r4 = hl_itos(r1,r29);
	r11 = String___alloc__(r4,r1);
	r5 = String___add__(r5,r11);
	hl_throw((vdynamic*)r5);
}

void haxe_Unserializer_new(haxe__Unserializer r0,String r1) {
	hl__types__ArrayObj r3;
	haxe___Unserializer__DefaultResolver r8;
	haxe__$Unserializer r7;
	hl__types__ArrayDyn r5;
	vdynamic *r6;
	int r2;
	r0->buf = r1;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->length;
	r0->length = r2;
	r2 = 0;
	r0->pos = r2;
	r3 = (hl__types__ArrayObj)hl_alloc_obj(hl__types__ArrayObj__val);
	hl_types_ArrayObj_new(r3);
	r0->scache = r3;
	r5 = (hl__types__ArrayDyn)hl_alloc_obj(hl__types__ArrayDyn__val);
	hl_types_ArrayDyn_new(r5);
	r0->cache = r5;
	r7 = (haxe__$Unserializer)global$791;
	r6 = r7->DEFAULT_RESOLVER;
	if( r6 ) goto label$3097$20;
	r8 = (haxe___Unserializer__DefaultResolver)hl_alloc_obj(haxe___Unserializer__DefaultResolver__val);
	haxe__Unserializer_DefaultResolver_new(r8);
	r6 = ((vdynamic*)r8);
	r7 = (haxe__$Unserializer)global$791;
	r7->DEFAULT_RESOLVER = ((vdynamic*)r8);
	label$3097$20:
	r0->resolver = r6;
	return;
}

vdynamic* haxe_Unserializer_run(String r0) {
	haxe__Unserializer r2;
	vdynamic *r1;
	r2 = (haxe__Unserializer)hl_alloc_obj(haxe__Unserializer__val);
	haxe_Unserializer_new(r2,r0);
	r1 = haxe_Unserializer_unserialize(r2);
	return r1;
}

hl__types__ArrayBytes_Int haxe_Unserializer_initCodes() {
	String r4;
	hl__types__ArrayBytes_Int r0;
	haxe__$Unserializer r5;
	vbyte *r8, *r9;
	int r2, r3, r6, r7, r10, r11;
	r0 = (hl__types__ArrayBytes_Int)hl_alloc_obj(hl__types__ArrayBytes_Int__val);
	hl_types_ArrayBytes_Int_new(r0);
	r2 = 0;
	r5 = (haxe__$Unserializer)global$791;
	r4 = r5->BASE64;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->length;
	label$3096$7:
	if( r2 >= r3 ) goto label$3096$27;
	r6 = r2;
	++r2;
	r5 = (haxe__$Unserializer)global$791;
	r4 = r5->BASE64;
	if( r4 == NULL ) hl_null_access();
	r8 = r4->bytes;
	if( r0 == NULL ) hl_null_access();
	r10 = 1;
	r7 = r6 << r10;
	r7 = *(unsigned short*)(r8 + r7);
	r11 = r0->length;
	if( ((unsigned)r7) < ((unsigned)r11) ) goto label$3096$22;
	hl_types_ArrayBytes_Int___expand(r0,r7);
	label$3096$22:
	r9 = r0->bytes;
	r11 = 2;
	r11 = r7 << r11;
	*(int*)(r9 + r11) = r6;
	goto label$3096$7;
	label$3096$27:
	return r0;
}
