﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void haxe_format_JsonPrinter_write(haxe__format__JsonPrinter r0,vdynamic* r1,vdynamic* r2) {
	vdynobj *r27;
	$String r16;
	String r10, r13, r24;
	hl__Class r15;
	Date r32;
	haxe__ds__StringMap r26;
	hl__types__ArrayObj r14;
	venum *r7;
	bool r11;
	haxe__ds__$StringMap r25;
	StringBuf r9;
	hl__types__ArrayDyn r18;
	hl__types__$ArrayBase r17;
	double r12;
	vclosure *r4, *r28, *r29;
	vdynamic *r5, *r6, *r30;
	$Date r31;
	int r8, r19, r20, r21, r22, r23;
	r4 = r0->replacer;
	if( !r4 ) goto label$3147$6;
	r4 = r0->replacer;
	if( r4 == NULL ) hl_null_access();
	r5 = r4->hasValue ? ((vdynamic* (*)(vdynamic*,vdynamic*,vdynamic*))r4->fun)((vdynamic*)r4->value,r1,r2) : ((vdynamic* (*)(vdynamic*,vdynamic*))r4->fun)(r1,r2);
	r2 = r5;
	label$3147$6:
	r7 = Type_typeof(r2);
	if( r7 == NULL ) hl_null_access();
	r8 = HL__ENUM_INDEX__(r7);
	switch(r8) {
		default:
			goto label$3147$186;
		case 0:
			r9 = r0->buf;
			if( r9 == NULL ) hl_null_access();
			r10 = (String)global$179;
			StringBuf_add(r9,((vdynamic*)r10));
			goto label$3147$186;
		case 1:
			r9 = r0->buf;
			if( r9 == NULL ) hl_null_access();
			if( r2 ) goto label$3147$21;
			r10 = NULL;
			goto label$3147$22;
			label$3147$21:
			r10 = Std_string(r2);
			label$3147$22:
			StringBuf_add(r9,((vdynamic*)r10));
			goto label$3147$186;
		case 2:
			r12 = (double)hl_dyn_castd(&r2,&type$9);
			r11 = hl_math_isfinite(r12);
			if( !r11 ) goto label$3147$32;
			if( r2 ) goto label$3147$30;
			r10 = NULL;
			goto label$3147$31;
			label$3147$30:
			r10 = Std_string(r2);
			label$3147$31:
			goto label$3147$33;
			label$3147$32:
			r10 = (String)global$179;
			label$3147$33:
			r9 = r0->buf;
			if( r9 == NULL ) hl_null_access();
			StringBuf_add(r9,((vdynamic*)r10));
			goto label$3147$186;
		case 3:
			r9 = r0->buf;
			if( r9 == NULL ) hl_null_access();
			if( r2 ) goto label$3147$42;
			r10 = NULL;
			goto label$3147$43;
			label$3147$42:
			r10 = Std_string(r2);
			label$3147$43:
			StringBuf_add(r9,((vdynamic*)r10));
			goto label$3147$186;
		case 4:
			r14 = Reflect_fields(r2);
			haxe_format_JsonPrinter_fieldsString(r0,r2,r14);
			goto label$3147$186;
		case 5:
			r9 = r0->buf;
			if( r9 == NULL ) hl_null_access();
			r10 = (String)global$827;
			StringBuf_add(r9,((vdynamic*)r10));
			goto label$3147$186;
		case 6:
			r15 = ((ValueType_TClass*)r7)->p0;
			r16 = ($String)global$1;
			if( r15 != ((hl__Class)r16) ) goto label$3147$62;
			if( r2 ) goto label$3147$59;
			r10 = NULL;
			goto label$3147$60;
			label$3147$59:
			r10 = Std_string(r2);
			label$3147$60:
			haxe_format_JsonPrinter_quote(r0,r10);
			goto label$3147$171;
			label$3147$62:
			r17 = (hl__types__$ArrayBase)global$6;
			if( r15 != ((hl__Class)r17) ) goto label$3147$140;
			r18 = (hl__types__ArrayDyn)hl_dyn_castp(&r2,&type$9,&type$321);
			r9 = r0->buf;
			if( r9 == NULL ) hl_null_access();
			r8 = 91;
			StringBuf_addChar(r9,r8);
			if( r18 == NULL ) hl_null_access();
			r8 = hl_types_ArrayDyn_get_length(r18);
			r20 = 1;
			r19 = r8 - r20;
			r20 = 0;
			label$3147$74:
			if( r20 >= r8 ) goto label$3147$135;
			r21 = r20;
			++r20;
			r23 = 0;
			if( r23 >= r21 ) goto label$3147$85;
			r9 = r0->buf;
			if( r9 == NULL ) hl_null_access();
			r22 = 44;
			StringBuf_addChar(r9,r22);
			goto label$3147$88;
			label$3147$85:
			r22 = r0->nind;
			++r22;
			r0->nind = r22;
			label$3147$88:
			r11 = r0->pretty;
			if( !r11 ) goto label$3147$94;
			r9 = r0->buf;
			if( r9 == NULL ) hl_null_access();
			r22 = 10;
			StringBuf_addChar(r9,r22);
			label$3147$94:
			r11 = r0->pretty;
			if( !r11 ) goto label$3147$107;
			r10 = (String)global$8;
			r13 = r0->indent;
			r22 = r0->nind;
			r24 = r0->indent;
			if( r24 == NULL ) hl_null_access();
			r23 = r24->length;
			r22 = r22 * r23;
			r10 = StringTools_lpad(r10,r13,r22);
			r9 = r0->buf;
			if( r9 == NULL ) hl_null_access();
			StringBuf_add(r9,((vdynamic*)r10));
			label$3147$107:
			r5 = hl_alloc_dynamic(&type$3);
			r5->v.i = r21;
			if( r18 == NULL ) hl_null_access();
			r6 = ((vdynamic* (*)(hl__types__ArrayDyn,int))r18->$type->vobj_proto[0])(r18,r21);
			haxe_format_JsonPrinter_write(r0,r5,r6);
			if( r21 != r19 ) goto label$3147$134;
			r22 = r0->nind;
			--r22;
			r0->nind = r22;
			r11 = r0->pretty;
			if( !r11 ) goto label$3147$121;
			r9 = r0->buf;
			if( r9 == NULL ) hl_null_access();
			r22 = 10;
			StringBuf_addChar(r9,r22);
			label$3147$121:
			r11 = r0->pretty;
			if( !r11 ) goto label$3147$134;
			r10 = (String)global$8;
			r13 = r0->indent;
			r22 = r0->nind;
			r24 = r0->indent;
			if( r24 == NULL ) hl_null_access();
			r23 = r24->length;
			r22 = r22 * r23;
			r10 = StringTools_lpad(r10,r13,r22);
			r9 = r0->buf;
			if( r9 == NULL ) hl_null_access();
			StringBuf_add(r9,((vdynamic*)r10));
			label$3147$134:
			goto label$3147$74;
			label$3147$135:
			r9 = r0->buf;
			if( r9 == NULL ) hl_null_access();
			r20 = 93;
			StringBuf_addChar(r9,r20);
			goto label$3147$171;
			label$3147$140:
			r25 = (haxe__ds__$StringMap)global$81;
			if( r15 != ((hl__Class)r25) ) goto label$3147$163;
			r26 = (haxe__ds__StringMap)hl_dyn_castp(&r2,&type$9,&type$207);
			r27 = hl_alloc_dynobj();
			r5 = ((vdynamic*)r27);
			if( r26 == NULL ) hl_null_access();
			r6 = haxe_ds_StringMap_keys(r26);
			label$3147$147:
			if( r6 == NULL ) hl_null_access();
			r28 = (vclosure*)hl_dyn_getp((vdynamic*)r6,407283053/*hasNext*/,&type$118);
			if( r28 == NULL ) hl_null_access();
			r11 = r28->hasValue ? ((bool (*)(vdynamic*))r28->fun)((vdynamic*)r28->value) : ((bool (*)(void))r28->fun)();
			if( !r11 ) goto label$3147$160;
			r29 = (vclosure*)hl_dyn_getp((vdynamic*)r6,151160317/*next*/,&type$378);
			if( r29 == NULL ) hl_null_access();
			r10 = r29->hasValue ? ((String (*)(vdynamic*))r29->fun)((vdynamic*)r29->value) : ((String (*)(void))r29->fun)();
			if( r26 == NULL ) hl_null_access();
			r30 = haxe_ds_StringMap_get(r26,r10);
			Reflect_setField(r5,r10,r30);
			goto label$3147$147;
			label$3147$160:
			r14 = Reflect_fields(r5);
			haxe_format_JsonPrinter_fieldsString(r0,r5,r14);
			goto label$3147$171;
			label$3147$163:
			r31 = ($Date)global$3;
			if( r15 != ((hl__Class)r31) ) goto label$3147$170;
			r32 = (Date)hl_dyn_castp(&r2,&type$9,&type$24);
			if( r32 == NULL ) hl_null_access();
			r10 = Date_toString(r32);
			haxe_format_JsonPrinter_quote(r0,r10);
			goto label$3147$171;
			label$3147$170:
			haxe_format_JsonPrinter_classString(r0,r2);
			label$3147$171:
			goto label$3147$186;
		case 7:
			r8 = Type_enumIndex(r2);
			r5 = hl_alloc_dynamic(&type$3);
			r5->v.i = r8;
			r9 = r0->buf;
			if( r9 == NULL ) hl_null_access();
			if( r5 ) goto label$3147$179;
			r10 = NULL;
			goto label$3147$180;
			label$3147$179:
			r10 = Std_string(r5);
			label$3147$180:
			StringBuf_add(r9,((vdynamic*)r10));
			goto label$3147$186;
		case 8:
			r9 = r0->buf;
			if( r9 == NULL ) hl_null_access();
			r10 = (String)global$828;
			StringBuf_add(r9,((vdynamic*)r10));
	}
	label$3147$186:
	return;
}

void haxe_format_JsonPrinter_classString(haxe__format__JsonPrinter r0,vdynamic* r1) {
	hl__Class r4;
	hl__types__ArrayObj r3;
	r4 = Type_getClass(r1);
	r3 = Type_getInstanceFields(r4);
	haxe_format_JsonPrinter_fieldsString(r0,r1,r3);
	return;
}

void haxe_format_JsonPrinter_fieldsString(haxe__format__JsonPrinter r0,vdynamic* r1,hl__types__ArrayObj r2) {
	String r13, r16, r19, r20;
	hl_type *r17;
	bool r8, r18;
	StringBuf r4;
	vdynamic *r14;
	varray *r15;
	int r5, r6, r7, r9, r10, r11, r12;
	r4 = r0->buf;
	if( r4 == NULL ) hl_null_access();
	r5 = 123;
	StringBuf_addChar(r4,r5);
	if( r2 == NULL ) hl_null_access();
	r5 = r2->length;
	r7 = 1;
	r6 = r5 - r7;
	r8 = true;
	r7 = 0;
	r9 = r5;
	label$3149$11:
	if( r7 >= r9 ) goto label$3149$95;
	r10 = r7;
	++r7;
	if( r2 == NULL ) hl_null_access();
	r12 = r2->length;
	if( ((unsigned)r10) < ((unsigned)r12) ) goto label$3149$20;
	r13 = NULL;
	goto label$3149$23;
	label$3149$20:
	r15 = r2->array;
	r14 = ((vdynamic**)(r15 + 1))[r10];
	r13 = (String)r14;
	label$3149$23:
	r14 = Reflect_field(r1,r13);
	r17 = r14 ? ((vdynamic*)r14)->t : &hlt_void;
	r11 = r17->kind;
	r12 = 10;
	if( r11 != r12 ) goto label$3149$29;
	goto label$3149$11;
	label$3149$29:
	if( !r8 ) goto label$3149$36;
	r11 = r0->nind;
	++r11;
	r0->nind = r11;
	r18 = false;
	r8 = r18;
	goto label$3149$40;
	label$3149$36:
	r4 = r0->buf;
	if( r4 == NULL ) hl_null_access();
	r11 = 44;
	StringBuf_addChar(r4,r11);
	label$3149$40:
	r18 = r0->pretty;
	if( !r18 ) goto label$3149$46;
	r4 = r0->buf;
	if( r4 == NULL ) hl_null_access();
	r11 = 10;
	StringBuf_addChar(r4,r11);
	label$3149$46:
	r18 = r0->pretty;
	if( !r18 ) goto label$3149$59;
	r16 = (String)global$8;
	r19 = r0->indent;
	r11 = r0->nind;
	r20 = r0->indent;
	if( r20 == NULL ) hl_null_access();
	r12 = r20->length;
	r11 = r11 * r12;
	r16 = StringTools_lpad(r16,r19,r11);
	r4 = r0->buf;
	if( r4 == NULL ) hl_null_access();
	StringBuf_add(r4,((vdynamic*)r16));
	label$3149$59:
	haxe_format_JsonPrinter_quote(r0,r13);
	r4 = r0->buf;
	if( r4 == NULL ) hl_null_access();
	r11 = 58;
	StringBuf_addChar(r4,r11);
	r18 = r0->pretty;
	if( !r18 ) goto label$3149$70;
	r4 = r0->buf;
	if( r4 == NULL ) hl_null_access();
	r11 = 32;
	StringBuf_addChar(r4,r11);
	label$3149$70:
	haxe_format_JsonPrinter_write(r0,((vdynamic*)r13),r14);
	if( r10 != r6 ) goto label$3149$94;
	r11 = r0->nind;
	--r11;
	r0->nind = r11;
	r18 = r0->pretty;
	if( !r18 ) goto label$3149$81;
	r4 = r0->buf;
	if( r4 == NULL ) hl_null_access();
	r11 = 10;
	StringBuf_addChar(r4,r11);
	label$3149$81:
	r18 = r0->pretty;
	if( !r18 ) goto label$3149$94;
	r16 = (String)global$8;
	r19 = r0->indent;
	r11 = r0->nind;
	r20 = r0->indent;
	if( r20 == NULL ) hl_null_access();
	r12 = r20->length;
	r11 = r11 * r12;
	r16 = StringTools_lpad(r16,r19,r11);
	r4 = r0->buf;
	if( r4 == NULL ) hl_null_access();
	StringBuf_add(r4,((vdynamic*)r16));
	label$3149$94:
	goto label$3149$11;
	label$3149$95:
	r4 = r0->buf;
	if( r4 == NULL ) hl_null_access();
	r7 = 125;
	StringBuf_addChar(r4,r7);
	return;
}

void haxe_format_JsonPrinter_quote(haxe__format__JsonPrinter r0,String r1) {
	String r8;
	bool r5;
	StringBuf r3;
	vbyte *r7;
	int r4, r6, r9, r10, r11;
	r3 = r0->buf;
	if( r3 == NULL ) hl_null_access();
	r4 = 34;
	StringBuf_addChar(r3,r4);
	r4 = 0;
	label$3150$5:
	r5 = true;
	if( !r5 ) goto label$3150$58;
	r6 = r4;
	++r4;
	if( r1 == NULL ) hl_null_access();
	r7 = r1->bytes;
	r10 = 1;
	r9 = r6 << r10;
	r9 = *(unsigned short*)(r7 + r9);
	r11 = 0;
	if( r9 != r11 ) goto label$3150$18;
	goto label$3150$58;
	label$3150$18:
	switch(r9) {
		default:
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 11:
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
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
			r3 = r0->buf;
			if( r3 == NULL ) hl_null_access();
			StringBuf_addChar(r3,r9);
			goto label$3150$57;
		case 8:
			r3 = r0->buf;
			if( r3 == NULL ) hl_null_access();
			r8 = (String)global$829;
			StringBuf_add(r3,((vdynamic*)r8));
			goto label$3150$57;
		case 9:
			r3 = r0->buf;
			if( r3 == NULL ) hl_null_access();
			r8 = (String)global$830;
			StringBuf_add(r3,((vdynamic*)r8));
			goto label$3150$57;
		case 10:
			r3 = r0->buf;
			if( r3 == NULL ) hl_null_access();
			r8 = (String)global$831;
			StringBuf_add(r3,((vdynamic*)r8));
			goto label$3150$57;
		case 12:
			r3 = r0->buf;
			if( r3 == NULL ) hl_null_access();
			r8 = (String)global$832;
			StringBuf_add(r3,((vdynamic*)r8));
			goto label$3150$57;
		case 13:
			r3 = r0->buf;
			if( r3 == NULL ) hl_null_access();
			r8 = (String)global$833;
			StringBuf_add(r3,((vdynamic*)r8));
			goto label$3150$57;
		case 34:
			r3 = r0->buf;
			if( r3 == NULL ) hl_null_access();
			r8 = (String)global$195;
			StringBuf_add(r3,((vdynamic*)r8));
			goto label$3150$57;
		case 92:
			r3 = r0->buf;
			if( r3 == NULL ) hl_null_access();
			r8 = (String)global$834;
			StringBuf_add(r3,((vdynamic*)r8));
	}
	label$3150$57:
	goto label$3150$5;
	label$3150$58:
	r3 = r0->buf;
	if( r3 == NULL ) hl_null_access();
	r6 = 34;
	StringBuf_addChar(r3,r6);
	return;
}

void haxe_format_JsonPrinter_new(haxe__format__JsonPrinter r0,vclosure* r1,String r2) {
	String r4;
	bool r3;
	StringBuf r6;
	int r5;
	r0->replacer = r1;
	r0->indent = r2;
	r4 = NULL;
	if( r2 != r4 && (!r2 || !r4 || String___compare(r2,(vdynamic*)r4) != 0) ) goto label$3151$6;
	r3 = false;
	goto label$3151$7;
	label$3151$6:
	r3 = true;
	label$3151$7:
	r0->pretty = r3;
	r5 = 0;
	r0->nind = r5;
	r6 = (StringBuf)hl_alloc_obj(StringBuf__val);
	StringBuf_new(r6);
	r0->buf = r6;
	return;
}

String haxe_format_JsonPrinter_print(vdynamic* r0,vclosure* r1,String r2) {
	String r4;
	haxe__format__JsonPrinter r3;
	StringBuf r6;
	r3 = (haxe__format__JsonPrinter)hl_alloc_obj(haxe__format__JsonPrinter__val);
	haxe_format_JsonPrinter_new(r3,r1,r2);
	r4 = (String)global$8;
	haxe_format_JsonPrinter_write(r3,((vdynamic*)r4),r0);
	r6 = r3->buf;
	if( r6 == NULL ) hl_null_access();
	r4 = StringBuf_toString(r6);
	return r4;
}

