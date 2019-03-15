﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

double format_gif_Tools_log2(double r0) {
	format__gif__$Tools r3;
	double r1, r2;
	r1 = hl_math_log(r0);
	r3 = (format__gif__$Tools)global$266;
	r2 = r3->LN2;
	r1 = r1 / r2;
	return r1;
}

int format_gif_Tools_loopCount(vvirtual* r0) {
	venum *r5, *r8, *r9;
	haxe__ds__List r2;
	vdynamic *r4;
	haxe__ds___List__ListNode r1, r3;
	int r6, r7;
	if( r0 == NULL ) hl_null_access();
	r2 = hl_vfields(r0)[0] ? (*(haxe__ds__List*)(hl_vfields(r0)[0])) : (haxe__ds__List)hl_dyn_getp(r0->value,-404083332/*blocks*/,&type$113);
	if( r2 == NULL ) hl_null_access();
	r1 = r2->h;
	label$2264$4:
	if( !r1 ) goto label$2264$31;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->item;
	r5 = (venum*)r4;
	r3 = r1->next;
	r1 = r3;
	if( r5 == NULL ) hl_null_access();
	r6 = HL__ENUM_INDEX__(r5);
	r7 = 1;
	if( r6 != r7 ) goto label$2264$30;
	r8 = ((format_gif_Block_BExtension*)r5)->p0;
	if( r8 == NULL ) hl_null_access();
	r6 = HL__ENUM_INDEX__(r8);
	r7 = 3;
	if( r6 != r7 ) goto label$2264$30;
	r8 = ((format_gif_Block_BExtension*)r5)->p0;
	r9 = ((format_gif_Extension_EApplicationExtension*)r8)->p0;
	if( r9 == NULL ) hl_null_access();
	r6 = HL__ENUM_INDEX__(r9);
	r7 = 0;
	if( r6 != r7 ) goto label$2264$30;
	r8 = ((format_gif_Block_BExtension*)r5)->p0;
	r9 = ((format_gif_Extension_EApplicationExtension*)r8)->p0;
	r6 = ((format_gif_ApplicationExtension_AENetscapeLooping*)r9)->p0;
	return r6;
	label$2264$30:
	goto label$2264$4;
	label$2264$31:
	r6 = 1;
	return r6;
}

haxe__io__Bytes format_gif_Tools_extractFullRGBA(vvirtual* r0,int r1) {
	String r18;
	vvirtual *r2, *r7, *r14, *r19;
	venum *r13, *r23, *r29;
	bool r16;
	haxe__io__Bytes r5, r15, r17;
	haxe__ds__List r10;
	vdynamic *r12;
	haxe__ds___List__ListNode r9, r11;
	int r4, r6, r8, r20, r21, r22, r24, r25, r26, r27, r28;
	r2 = NULL;
	r4 = 0;
	if( r0 == NULL ) hl_null_access();
	r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&type$421);
	if( r7 == NULL ) hl_null_access();
	r6 = hl_vfields(r7)[7] ? (*(int*)(hl_vfields(r7)[7])) : (int)hl_dyn_geti(r7->value,-362629759/*width*/,&type$3);
	r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&type$421);
	if( r7 == NULL ) hl_null_access();
	r8 = hl_vfields(r7)[4] ? (*(int*)(hl_vfields(r7)[4])) : (int)hl_dyn_geti(r7->value,38537191/*height*/,&type$3);
	r6 = r6 * r8;
	r8 = 4;
	r6 = r6 * r8;
	r5 = haxe_io_Bytes_alloc(r6);
	r10 = hl_vfields(r0)[0] ? (*(haxe__ds__List*)(hl_vfields(r0)[0])) : (haxe__ds__List)hl_dyn_getp(r0->value,-404083332/*blocks*/,&type$113);
	if( r10 == NULL ) hl_null_access();
	r9 = r10->h;
	label$2263$16:
	if( !r9 ) goto label$2263$172;
	if( r9 == NULL ) hl_null_access();
	r12 = r9->item;
	r13 = (venum*)r12;
	r11 = r9->next;
	r9 = r11;
	if( r13 == NULL ) hl_null_access();
	r6 = HL__ENUM_INDEX__(r13);
	switch(r6) {
		default:
			goto label$2263$171;
		case 0:
			r14 = ((format_gif_Block_BFrame*)r13)->p0;
			if( r14 == NULL ) hl_null_access();
			r16 = hl_vfields(r14)[3] ? (*(bool*)(hl_vfields(r14)[3])) : (bool)hl_dyn_geti(r14->value,-367153172/*localColorTable*/,&type$7);
			if( !r16 ) goto label$2263$33;
			r15 = hl_vfields(r14)[0] ? (*(haxe__io__Bytes*)(hl_vfields(r14)[0])) : (haxe__io__Bytes)hl_dyn_getp(r14->value,256888880/*colorTable*/,&type$75);
			goto label$2263$35;
			label$2263$33:
			if( r0 == NULL ) hl_null_access();
			r15 = hl_vfields(r0)[1] ? (*(haxe__io__Bytes*)(hl_vfields(r0)[1])) : (haxe__io__Bytes)hl_dyn_getp(r0->value,-390218401/*globalColorTable*/,&type$75);
			label$2263$35:
			if( r15 ) goto label$2263$38;
			r18 = (String)global$265;
			hl_throw((vdynamic*)r18);
			label$2263$38:
			if( !r2 ) goto label$2263$46;
			if( r2 == NULL ) hl_null_access();
			r16 = hl_vfields(r2)[2] ? (*(bool*)(hl_vfields(r2)[2])) : (bool)hl_dyn_geti(r2->value,-318285023/*hasTransparentColor*/,&type$7);
			if( !r16 ) goto label$2263$46;
			r6 = hl_vfields(r2)[3] ? (*(int*)(hl_vfields(r2)[3])) : (int)hl_dyn_geti(r2->value,235902693/*transparentIndex*/,&type$3);
			r8 = 3;
			r6 = r6 * r8;
			goto label$2263$47;
			label$2263$46:
			r6 = -1;
			label$2263$47:
			r17 = hl_vfields(r14)[5] ? (*(haxe__io__Bytes*)(hl_vfields(r14)[5])) : (haxe__io__Bytes)hl_dyn_getp(r14->value,-324407906/*pixels*/,&type$75);
			r8 = 0;
			r20 = hl_vfields(r14)[9] ? (*(int*)(hl_vfields(r14)[9])) : (int)hl_dyn_geti(r14->value,121/*y*/,&type$3);
			if( r0 == NULL ) hl_null_access();
			r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&type$421);
			if( r7 == NULL ) hl_null_access();
			r21 = hl_vfields(r7)[7] ? (*(int*)(hl_vfields(r7)[7])) : (int)hl_dyn_geti(r7->value,-362629759/*width*/,&type$3);
			r20 = r20 * r21;
			r21 = hl_vfields(r14)[8] ? (*(int*)(hl_vfields(r14)[8])) : (int)hl_dyn_geti(r14->value,120/*x*/,&type$3);
			r20 = r20 + r21;
			r21 = 4;
			r20 = r20 * r21;
			r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&type$421);
			if( r7 == NULL ) hl_null_access();
			r21 = hl_vfields(r7)[7] ? (*(int*)(hl_vfields(r7)[7])) : (int)hl_dyn_geti(r7->value,-362629759/*width*/,&type$3);
			r22 = hl_vfields(r14)[7] ? (*(int*)(hl_vfields(r14)[7])) : (int)hl_dyn_geti(r14->value,-362629759/*width*/,&type$3);
			r21 = r21 - r22;
			r22 = 4;
			r21 = r21 * r22;
			r22 = 4;
			r21 = r21 + r22;
			if( r4 == r1 ) goto label$2263$73;
			if( !r2 ) goto label$2263$73;
			if( r2 == NULL ) hl_null_access();
			r23 = hl_vfields(r2)[1] ? (*(venum**)(hl_vfields(r2)[1])) : (venum*)hl_dyn_getp(r2->value,164371895/*disposalMethod*/,&type$412);
			goto label$2263$74;
			label$2263$73:
			r23 = (venum*)global$259;
			label$2263$74:
			if( r23 == NULL ) hl_null_access();
			r22 = HL__ENUM_INDEX__(r23);
			switch(r22) {
				default:
				case 0:
				case 1:
					r22 = 0;
					if( r17 == NULL ) hl_null_access();
					r24 = r17->length;
					label$2263$80:
					if( r22 >= r24 ) goto label$2263$122;
					if( r17 == NULL ) hl_null_access();
					r25 = r22;
					++r22;
					r25 = haxe_io_Bytes_get(r17,r25);
					r26 = 3;
					r25 = r25 * r26;
					if( r6 == r25 ) goto label$2263$109;
					if( r5 == NULL ) hl_null_access();
					if( r15 == NULL ) hl_null_access();
					r27 = haxe_io_Bytes_get(r15,r25);
					haxe_io_Bytes_set(r5,r20,r27);
					r27 = 1;
					r26 = r20 + r27;
					r28 = 1;
					r27 = r25 + r28;
					r27 = haxe_io_Bytes_get(r15,r27);
					haxe_io_Bytes_set(r5,r26,r27);
					r27 = 2;
					r26 = r20 + r27;
					r28 = 2;
					r27 = r25 + r28;
					r27 = haxe_io_Bytes_get(r15,r27);
					haxe_io_Bytes_set(r5,r26,r27);
					r27 = 3;
					r26 = r20 + r27;
					r27 = 255;
					haxe_io_Bytes_set(r5,r26,r27);
					label$2263$109:
					++r8;
					if( r14 == NULL ) hl_null_access();
					r26 = hl_vfields(r14)[7] ? (*(int*)(hl_vfields(r14)[7])) : (int)hl_dyn_geti(r14->value,-362629759/*width*/,&type$3);
					if( r8 != r26 ) goto label$2263$118;
					r26 = 0;
					r8 = r26;
					r26 = r20 + r21;
					r20 = r26;
					goto label$2263$121;
					label$2263$118:
					r27 = 4;
					r26 = r20 + r27;
					r20 = r26;
					label$2263$121:
					goto label$2263$80;
					label$2263$122:
					goto label$2263$158;
				case 2:
					r22 = 0;
					if( r17 == NULL ) hl_null_access();
					r24 = r17->length;
					label$2263$126:
					if( r22 >= r24 ) goto label$2263$157;
					++r22;
					if( r5 == NULL ) hl_null_access();
					r26 = 0;
					haxe_io_Bytes_set(r5,r20,r26);
					r26 = 1;
					r25 = r20 + r26;
					r26 = 0;
					haxe_io_Bytes_set(r5,r25,r26);
					r26 = 2;
					r25 = r20 + r26;
					r26 = 0;
					haxe_io_Bytes_set(r5,r25,r26);
					r26 = 3;
					r25 = r20 + r26;
					r26 = 0;
					haxe_io_Bytes_set(r5,r25,r26);
					++r8;
					if( r14 == NULL ) hl_null_access();
					r25 = hl_vfields(r14)[7] ? (*(int*)(hl_vfields(r14)[7])) : (int)hl_dyn_geti(r14->value,-362629759/*width*/,&type$3);
					if( r8 != r25 ) goto label$2263$153;
					r25 = 0;
					r8 = r25;
					r25 = r20 + r21;
					r20 = r25;
					goto label$2263$156;
					label$2263$153:
					r26 = 4;
					r25 = r20 + r26;
					r20 = r25;
					label$2263$156:
					goto label$2263$126;
					label$2263$157:
					goto label$2263$158;
				case 3:
					break;
			}
			label$2263$158:
			if( r4 != r1 ) goto label$2263$160;
			return r5;
			label$2263$160:
			++r4;
			r19 = NULL;
			r2 = r19;
			goto label$2263$171;
		case 1:
			r29 = ((format_gif_Block_BExtension*)r13)->p0;
			if( r29 == NULL ) hl_null_access();
			r6 = HL__ENUM_INDEX__(r29);
			r8 = 0;
			if( r6 != r8 ) goto label$2263$171;
			r19 = ((format_gif_Extension_EGraphicControl*)r29)->p0;
			r2 = r19;
	}
	label$2263$171:
	goto label$2263$16;
	label$2263$172:
	return r5;
}

haxe__io__Bytes format_gif_Tools_extractFullBGRA(vvirtual* r0,int r1) {
	String r18;
	vvirtual *r2, *r7, *r14, *r19;
	venum *r13, *r23, *r29;
	bool r16;
	haxe__io__Bytes r5, r15, r17;
	haxe__ds__List r10;
	vdynamic *r12;
	haxe__ds___List__ListNode r9, r11;
	int r4, r6, r8, r20, r21, r22, r24, r25, r26, r27, r28;
	r2 = NULL;
	r4 = 0;
	if( r0 == NULL ) hl_null_access();
	r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&type$421);
	if( r7 == NULL ) hl_null_access();
	r6 = hl_vfields(r7)[7] ? (*(int*)(hl_vfields(r7)[7])) : (int)hl_dyn_geti(r7->value,-362629759/*width*/,&type$3);
	r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&type$421);
	if( r7 == NULL ) hl_null_access();
	r8 = hl_vfields(r7)[4] ? (*(int*)(hl_vfields(r7)[4])) : (int)hl_dyn_geti(r7->value,38537191/*height*/,&type$3);
	r6 = r6 * r8;
	r8 = 4;
	r6 = r6 * r8;
	r5 = haxe_io_Bytes_alloc(r6);
	r10 = hl_vfields(r0)[0] ? (*(haxe__ds__List*)(hl_vfields(r0)[0])) : (haxe__ds__List)hl_dyn_getp(r0->value,-404083332/*blocks*/,&type$113);
	if( r10 == NULL ) hl_null_access();
	r9 = r10->h;
	label$2262$16:
	if( !r9 ) goto label$2262$172;
	if( r9 == NULL ) hl_null_access();
	r12 = r9->item;
	r13 = (venum*)r12;
	r11 = r9->next;
	r9 = r11;
	if( r13 == NULL ) hl_null_access();
	r6 = HL__ENUM_INDEX__(r13);
	switch(r6) {
		default:
			goto label$2262$171;
		case 0:
			r14 = ((format_gif_Block_BFrame*)r13)->p0;
			if( r14 == NULL ) hl_null_access();
			r16 = hl_vfields(r14)[3] ? (*(bool*)(hl_vfields(r14)[3])) : (bool)hl_dyn_geti(r14->value,-367153172/*localColorTable*/,&type$7);
			if( !r16 ) goto label$2262$33;
			r15 = hl_vfields(r14)[0] ? (*(haxe__io__Bytes*)(hl_vfields(r14)[0])) : (haxe__io__Bytes)hl_dyn_getp(r14->value,256888880/*colorTable*/,&type$75);
			goto label$2262$35;
			label$2262$33:
			if( r0 == NULL ) hl_null_access();
			r15 = hl_vfields(r0)[1] ? (*(haxe__io__Bytes*)(hl_vfields(r0)[1])) : (haxe__io__Bytes)hl_dyn_getp(r0->value,-390218401/*globalColorTable*/,&type$75);
			label$2262$35:
			if( r15 ) goto label$2262$38;
			r18 = (String)global$265;
			hl_throw((vdynamic*)r18);
			label$2262$38:
			if( !r2 ) goto label$2262$46;
			if( r2 == NULL ) hl_null_access();
			r16 = hl_vfields(r2)[2] ? (*(bool*)(hl_vfields(r2)[2])) : (bool)hl_dyn_geti(r2->value,-318285023/*hasTransparentColor*/,&type$7);
			if( !r16 ) goto label$2262$46;
			r6 = hl_vfields(r2)[3] ? (*(int*)(hl_vfields(r2)[3])) : (int)hl_dyn_geti(r2->value,235902693/*transparentIndex*/,&type$3);
			r8 = 3;
			r6 = r6 * r8;
			goto label$2262$47;
			label$2262$46:
			r6 = -1;
			label$2262$47:
			r17 = hl_vfields(r14)[5] ? (*(haxe__io__Bytes*)(hl_vfields(r14)[5])) : (haxe__io__Bytes)hl_dyn_getp(r14->value,-324407906/*pixels*/,&type$75);
			r8 = 0;
			r20 = hl_vfields(r14)[9] ? (*(int*)(hl_vfields(r14)[9])) : (int)hl_dyn_geti(r14->value,121/*y*/,&type$3);
			if( r0 == NULL ) hl_null_access();
			r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&type$421);
			if( r7 == NULL ) hl_null_access();
			r21 = hl_vfields(r7)[7] ? (*(int*)(hl_vfields(r7)[7])) : (int)hl_dyn_geti(r7->value,-362629759/*width*/,&type$3);
			r20 = r20 * r21;
			r21 = hl_vfields(r14)[8] ? (*(int*)(hl_vfields(r14)[8])) : (int)hl_dyn_geti(r14->value,120/*x*/,&type$3);
			r20 = r20 + r21;
			r21 = 4;
			r20 = r20 * r21;
			r7 = hl_vfields(r0)[2] ? (*(vvirtual**)(hl_vfields(r0)[2])) : (vvirtual*)hl_dyn_getp(r0->value,-114719004/*logicalScreenDescriptor*/,&type$421);
			if( r7 == NULL ) hl_null_access();
			r21 = hl_vfields(r7)[7] ? (*(int*)(hl_vfields(r7)[7])) : (int)hl_dyn_geti(r7->value,-362629759/*width*/,&type$3);
			r22 = hl_vfields(r14)[7] ? (*(int*)(hl_vfields(r14)[7])) : (int)hl_dyn_geti(r14->value,-362629759/*width*/,&type$3);
			r21 = r21 - r22;
			r22 = 4;
			r21 = r21 * r22;
			r22 = 4;
			r21 = r21 + r22;
			if( r4 == r1 ) goto label$2262$73;
			if( !r2 ) goto label$2262$73;
			if( r2 == NULL ) hl_null_access();
			r23 = hl_vfields(r2)[1] ? (*(venum**)(hl_vfields(r2)[1])) : (venum*)hl_dyn_getp(r2->value,164371895/*disposalMethod*/,&type$412);
			goto label$2262$74;
			label$2262$73:
			r23 = (venum*)global$259;
			label$2262$74:
			if( r23 == NULL ) hl_null_access();
			r22 = HL__ENUM_INDEX__(r23);
			switch(r22) {
				default:
				case 0:
				case 1:
					r22 = 0;
					if( r17 == NULL ) hl_null_access();
					r24 = r17->length;
					label$2262$80:
					if( r22 >= r24 ) goto label$2262$122;
					if( r17 == NULL ) hl_null_access();
					r25 = r22;
					++r22;
					r25 = haxe_io_Bytes_get(r17,r25);
					r26 = 3;
					r25 = r25 * r26;
					if( r6 == r25 ) goto label$2262$109;
					if( r5 == NULL ) hl_null_access();
					if( r15 == NULL ) hl_null_access();
					r28 = 2;
					r27 = r25 + r28;
					r27 = haxe_io_Bytes_get(r15,r27);
					haxe_io_Bytes_set(r5,r20,r27);
					r27 = 1;
					r26 = r20 + r27;
					r28 = 1;
					r27 = r25 + r28;
					r27 = haxe_io_Bytes_get(r15,r27);
					haxe_io_Bytes_set(r5,r26,r27);
					r27 = 2;
					r26 = r20 + r27;
					r27 = haxe_io_Bytes_get(r15,r25);
					haxe_io_Bytes_set(r5,r26,r27);
					r27 = 3;
					r26 = r20 + r27;
					r27 = 255;
					haxe_io_Bytes_set(r5,r26,r27);
					label$2262$109:
					++r8;
					if( r14 == NULL ) hl_null_access();
					r26 = hl_vfields(r14)[7] ? (*(int*)(hl_vfields(r14)[7])) : (int)hl_dyn_geti(r14->value,-362629759/*width*/,&type$3);
					if( r8 != r26 ) goto label$2262$118;
					r26 = 0;
					r8 = r26;
					r26 = r20 + r21;
					r20 = r26;
					goto label$2262$121;
					label$2262$118:
					r27 = 4;
					r26 = r20 + r27;
					r20 = r26;
					label$2262$121:
					goto label$2262$80;
					label$2262$122:
					goto label$2262$158;
				case 2:
					r22 = 0;
					if( r17 == NULL ) hl_null_access();
					r24 = r17->length;
					label$2262$126:
					if( r22 >= r24 ) goto label$2262$157;
					++r22;
					if( r5 == NULL ) hl_null_access();
					r26 = 0;
					haxe_io_Bytes_set(r5,r20,r26);
					r26 = 1;
					r25 = r20 + r26;
					r26 = 0;
					haxe_io_Bytes_set(r5,r25,r26);
					r26 = 2;
					r25 = r20 + r26;
					r26 = 0;
					haxe_io_Bytes_set(r5,r25,r26);
					r26 = 3;
					r25 = r20 + r26;
					r26 = 0;
					haxe_io_Bytes_set(r5,r25,r26);
					++r8;
					if( r14 == NULL ) hl_null_access();
					r25 = hl_vfields(r14)[7] ? (*(int*)(hl_vfields(r14)[7])) : (int)hl_dyn_geti(r14->value,-362629759/*width*/,&type$3);
					if( r8 != r25 ) goto label$2262$153;
					r25 = 0;
					r8 = r25;
					r25 = r20 + r21;
					r20 = r25;
					goto label$2262$156;
					label$2262$153:
					r26 = 4;
					r25 = r20 + r26;
					r20 = r25;
					label$2262$156:
					goto label$2262$126;
					label$2262$157:
					goto label$2262$158;
				case 3:
					break;
			}
			label$2262$158:
			if( r4 != r1 ) goto label$2262$160;
			return r5;
			label$2262$160:
			++r4;
			r19 = NULL;
			r2 = r19;
			goto label$2262$171;
		case 1:
			r29 = ((format_gif_Block_BExtension*)r13)->p0;
			if( r29 == NULL ) hl_null_access();
			r6 = HL__ENUM_INDEX__(r29);
			r8 = 0;
			if( r6 != r8 ) goto label$2262$171;
			r19 = ((format_gif_Extension_EGraphicControl*)r29)->p0;
			r2 = r19;
	}
	label$2262$171:
	goto label$2262$16;
	label$2262$172:
	return r5;
}

haxe__io__Bytes format_gif_Tools_extractRGBA(vvirtual* r0,int r1) {
	String r17;
	vvirtual *r2, *r11, *r18;
	venum *r9, *r25;
	bool r15;
	haxe__io__Bytes r13, r14, r16;
	haxe__ds__List r6;
	vdynamic *r8;
	haxe__ds___List__ListNode r5, r7;
	int r4, r10, r12, r19, r20, r21, r22, r23, r24;
	r2 = NULL;
	r4 = 0;
	if( r0 == NULL ) hl_null_access();
	r6 = hl_vfields(r0)[0] ? (*(haxe__ds__List*)(hl_vfields(r0)[0])) : (haxe__ds__List)hl_dyn_getp(r0->value,-404083332/*blocks*/,&type$113);
	if( r6 == NULL ) hl_null_access();
	r5 = r6->h;
	label$2261$6:
	if( !r5 ) goto label$2261$102;
	if( r5 == NULL ) hl_null_access();
	r8 = r5->item;
	r9 = (venum*)r8;
	r7 = r5->next;
	r5 = r7;
	if( r9 == NULL ) hl_null_access();
	r10 = HL__ENUM_INDEX__(r9);
	switch(r10) {
		default:
			goto label$2261$101;
		case 0:
			r11 = ((format_gif_Block_BFrame*)r9)->p0;
			if( r4 != r1 ) goto label$2261$90;
			if( r11 == NULL ) hl_null_access();
			r10 = hl_vfields(r11)[7] ? (*(int*)(hl_vfields(r11)[7])) : (int)hl_dyn_geti(r11->value,-362629759/*width*/,&type$3);
			r12 = hl_vfields(r11)[1] ? (*(int*)(hl_vfields(r11)[1])) : (int)hl_dyn_geti(r11->value,38537191/*height*/,&type$3);
			r10 = r10 * r12;
			r12 = 4;
			r10 = r10 * r12;
			r13 = haxe_io_Bytes_alloc(r10);
			r15 = hl_vfields(r11)[3] ? (*(bool*)(hl_vfields(r11)[3])) : (bool)hl_dyn_geti(r11->value,-367153172/*localColorTable*/,&type$7);
			if( !r15 ) goto label$2261$30;
			r14 = hl_vfields(r11)[0] ? (*(haxe__io__Bytes*)(hl_vfields(r11)[0])) : (haxe__io__Bytes)hl_dyn_getp(r11->value,256888880/*colorTable*/,&type$75);
			goto label$2261$32;
			label$2261$30:
			if( r0 == NULL ) hl_null_access();
			r14 = hl_vfields(r0)[1] ? (*(haxe__io__Bytes*)(hl_vfields(r0)[1])) : (haxe__io__Bytes)hl_dyn_getp(r0->value,-390218401/*globalColorTable*/,&type$75);
			label$2261$32:
			if( r14 ) goto label$2261$35;
			r17 = (String)global$265;
			hl_throw((vdynamic*)r17);
			label$2261$35:
			if( !r2 ) goto label$2261$43;
			if( r2 == NULL ) hl_null_access();
			r15 = hl_vfields(r2)[2] ? (*(bool*)(hl_vfields(r2)[2])) : (bool)hl_dyn_geti(r2->value,-318285023/*hasTransparentColor*/,&type$7);
			if( !r15 ) goto label$2261$43;
			r10 = hl_vfields(r2)[3] ? (*(int*)(hl_vfields(r2)[3])) : (int)hl_dyn_geti(r2->value,235902693/*transparentIndex*/,&type$3);
			r12 = 3;
			r10 = r10 * r12;
			goto label$2261$44;
			label$2261$43:
			r10 = -1;
			label$2261$44:
			r12 = 0;
			r19 = 0;
			r16 = hl_vfields(r11)[5] ? (*(haxe__io__Bytes*)(hl_vfields(r11)[5])) : (haxe__io__Bytes)hl_dyn_getp(r11->value,-324407906/*pixels*/,&type$75);
			if( r16 == NULL ) hl_null_access();
			r20 = r16->length;
			label$2261$49:
			if( r19 >= r20 ) goto label$2261$89;
			if( r11 == NULL ) hl_null_access();
			r16 = hl_vfields(r11)[5] ? (*(haxe__io__Bytes*)(hl_vfields(r11)[5])) : (haxe__io__Bytes)hl_dyn_getp(r11->value,-324407906/*pixels*/,&type$75);
			if( r16 == NULL ) hl_null_access();
			r21 = r19;
			++r19;
			r21 = haxe_io_Bytes_get(r16,r21);
			r22 = 3;
			r21 = r21 * r22;
			if( r13 == NULL ) hl_null_access();
			if( r14 == NULL ) hl_null_access();
			r23 = haxe_io_Bytes_get(r14,r21);
			haxe_io_Bytes_set(r13,r12,r23);
			r23 = 1;
			r22 = r12 + r23;
			r24 = 1;
			r23 = r21 + r24;
			r23 = haxe_io_Bytes_get(r14,r23);
			haxe_io_Bytes_set(r13,r22,r23);
			r23 = 2;
			r22 = r12 + r23;
			r24 = 2;
			r23 = r21 + r24;
			r23 = haxe_io_Bytes_get(r14,r23);
			haxe_io_Bytes_set(r13,r22,r23);
			if( r10 != r21 ) goto label$2261$81;
			r23 = 3;
			r22 = r12 + r23;
			r23 = 0;
			haxe_io_Bytes_set(r13,r22,r23);
			goto label$2261$85;
			label$2261$81:
			r23 = 3;
			r22 = r12 + r23;
			r23 = 255;
			haxe_io_Bytes_set(r13,r22,r23);
			label$2261$85:
			r23 = 4;
			r22 = r12 + r23;
			r12 = r22;
			goto label$2261$49;
			label$2261$89:
			return r13;
			label$2261$90:
			++r4;
			r18 = NULL;
			r2 = r18;
			goto label$2261$101;
		case 1:
			r25 = ((format_gif_Block_BExtension*)r9)->p0;
			if( r25 == NULL ) hl_null_access();
			r10 = HL__ENUM_INDEX__(r25);
			r12 = 0;
			if( r10 != r12 ) goto label$2261$101;
			r18 = ((format_gif_Extension_EGraphicControl*)r25)->p0;
			r2 = r18;
	}
	label$2261$101:
	goto label$2261$6;
	label$2261$102:
	r13 = NULL;
	return r13;
}

haxe__io__Bytes format_gif_Tools_extractBGRA(vvirtual* r0,int r1) {
	String r17;
	vvirtual *r2, *r11, *r18;
	venum *r9, *r25;
	bool r15;
	haxe__io__Bytes r13, r14, r16;
	haxe__ds__List r6;
	vdynamic *r8;
	haxe__ds___List__ListNode r5, r7;
	int r4, r10, r12, r19, r20, r21, r22, r23, r24;
	r2 = NULL;
	r4 = 0;
	if( r0 == NULL ) hl_null_access();
	r6 = hl_vfields(r0)[0] ? (*(haxe__ds__List*)(hl_vfields(r0)[0])) : (haxe__ds__List)hl_dyn_getp(r0->value,-404083332/*blocks*/,&type$113);
	if( r6 == NULL ) hl_null_access();
	r5 = r6->h;
	label$2260$6:
	if( !r5 ) goto label$2260$102;
	if( r5 == NULL ) hl_null_access();
	r8 = r5->item;
	r9 = (venum*)r8;
	r7 = r5->next;
	r5 = r7;
	if( r9 == NULL ) hl_null_access();
	r10 = HL__ENUM_INDEX__(r9);
	switch(r10) {
		default:
			goto label$2260$101;
		case 0:
			r11 = ((format_gif_Block_BFrame*)r9)->p0;
			if( r4 != r1 ) goto label$2260$90;
			if( r11 == NULL ) hl_null_access();
			r10 = hl_vfields(r11)[7] ? (*(int*)(hl_vfields(r11)[7])) : (int)hl_dyn_geti(r11->value,-362629759/*width*/,&type$3);
			r12 = hl_vfields(r11)[1] ? (*(int*)(hl_vfields(r11)[1])) : (int)hl_dyn_geti(r11->value,38537191/*height*/,&type$3);
			r10 = r10 * r12;
			r12 = 4;
			r10 = r10 * r12;
			r13 = haxe_io_Bytes_alloc(r10);
			r15 = hl_vfields(r11)[3] ? (*(bool*)(hl_vfields(r11)[3])) : (bool)hl_dyn_geti(r11->value,-367153172/*localColorTable*/,&type$7);
			if( !r15 ) goto label$2260$30;
			r14 = hl_vfields(r11)[0] ? (*(haxe__io__Bytes*)(hl_vfields(r11)[0])) : (haxe__io__Bytes)hl_dyn_getp(r11->value,256888880/*colorTable*/,&type$75);
			goto label$2260$32;
			label$2260$30:
			if( r0 == NULL ) hl_null_access();
			r14 = hl_vfields(r0)[1] ? (*(haxe__io__Bytes*)(hl_vfields(r0)[1])) : (haxe__io__Bytes)hl_dyn_getp(r0->value,-390218401/*globalColorTable*/,&type$75);
			label$2260$32:
			if( r14 ) goto label$2260$35;
			r17 = (String)global$265;
			hl_throw((vdynamic*)r17);
			label$2260$35:
			if( !r2 ) goto label$2260$43;
			if( r2 == NULL ) hl_null_access();
			r15 = hl_vfields(r2)[2] ? (*(bool*)(hl_vfields(r2)[2])) : (bool)hl_dyn_geti(r2->value,-318285023/*hasTransparentColor*/,&type$7);
			if( !r15 ) goto label$2260$43;
			r10 = hl_vfields(r2)[3] ? (*(int*)(hl_vfields(r2)[3])) : (int)hl_dyn_geti(r2->value,235902693/*transparentIndex*/,&type$3);
			r12 = 3;
			r10 = r10 * r12;
			goto label$2260$44;
			label$2260$43:
			r10 = -1;
			label$2260$44:
			r12 = 0;
			r19 = 0;
			r16 = hl_vfields(r11)[5] ? (*(haxe__io__Bytes*)(hl_vfields(r11)[5])) : (haxe__io__Bytes)hl_dyn_getp(r11->value,-324407906/*pixels*/,&type$75);
			if( r16 == NULL ) hl_null_access();
			r20 = r16->length;
			label$2260$49:
			if( r19 >= r20 ) goto label$2260$89;
			if( r11 == NULL ) hl_null_access();
			r16 = hl_vfields(r11)[5] ? (*(haxe__io__Bytes*)(hl_vfields(r11)[5])) : (haxe__io__Bytes)hl_dyn_getp(r11->value,-324407906/*pixels*/,&type$75);
			if( r16 == NULL ) hl_null_access();
			r21 = r19;
			++r19;
			r21 = haxe_io_Bytes_get(r16,r21);
			r22 = 3;
			r21 = r21 * r22;
			if( r13 == NULL ) hl_null_access();
			if( r14 == NULL ) hl_null_access();
			r24 = 2;
			r23 = r21 + r24;
			r23 = haxe_io_Bytes_get(r14,r23);
			haxe_io_Bytes_set(r13,r12,r23);
			r23 = 1;
			r22 = r12 + r23;
			r24 = 1;
			r23 = r21 + r24;
			r23 = haxe_io_Bytes_get(r14,r23);
			haxe_io_Bytes_set(r13,r22,r23);
			r23 = 2;
			r22 = r12 + r23;
			r23 = haxe_io_Bytes_get(r14,r21);
			haxe_io_Bytes_set(r13,r22,r23);
			if( r10 != r21 ) goto label$2260$81;
			r23 = 3;
			r22 = r12 + r23;
			r23 = 0;
			haxe_io_Bytes_set(r13,r22,r23);
			goto label$2260$85;
			label$2260$81:
			r23 = 3;
			r22 = r12 + r23;
			r23 = 255;
			haxe_io_Bytes_set(r13,r22,r23);
			label$2260$85:
			r23 = 4;
			r22 = r12 + r23;
			r12 = r22;
			goto label$2260$49;
			label$2260$89:
			return r13;
			label$2260$90:
			++r4;
			r18 = NULL;
			r2 = r18;
			goto label$2260$101;
		case 1:
			r25 = ((format_gif_Block_BExtension*)r9)->p0;
			if( r25 == NULL ) hl_null_access();
			r10 = HL__ENUM_INDEX__(r25);
			r12 = 0;
			if( r10 != r12 ) goto label$2260$101;
			r18 = ((format_gif_Extension_EGraphicControl*)r25)->p0;
			r2 = r18;
	}
	label$2260$101:
	goto label$2260$6;
	label$2260$102:
	r13 = NULL;
	return r13;
}

vvirtual* format_gif_Tools_graphicControl(vvirtual* r0,int r1) {
	vvirtual *r3, *r11;
	venum *r8, *r12;
	haxe__ds__List r5;
	vdynamic *r7;
	haxe__ds___List__ListNode r4, r6;
	int r2, r9, r10;
	r2 = 0;
	r3 = NULL;
	if( r0 == NULL ) hl_null_access();
	r5 = hl_vfields(r0)[0] ? (*(haxe__ds__List*)(hl_vfields(r0)[0])) : (haxe__ds__List)hl_dyn_getp(r0->value,-404083332/*blocks*/,&type$113);
	if( r5 == NULL ) hl_null_access();
	r4 = r5->h;
	label$2259$6:
	if( !r4 ) goto label$2259$32;
	if( r4 == NULL ) hl_null_access();
	r7 = r4->item;
	r8 = (venum*)r7;
	r6 = r4->next;
	r4 = r6;
	if( r8 == NULL ) hl_null_access();
	r9 = HL__ENUM_INDEX__(r8);
	switch(r9) {
		default:
			goto label$2259$31;
		case 0:
			if( r2 != r1 ) goto label$2259$19;
			return r3;
			label$2259$19:
			r11 = NULL;
			r3 = r11;
			++r2;
			goto label$2259$31;
		case 1:
			r12 = ((format_gif_Block_BExtension*)r8)->p0;
			if( r12 == NULL ) hl_null_access();
			r9 = HL__ENUM_INDEX__(r12);
			r10 = 0;
			if( r9 != r10 ) goto label$2259$31;
			r12 = ((format_gif_Block_BExtension*)r8)->p0;
			r11 = ((format_gif_Extension_EGraphicControl*)r12)->p0;
			r3 = r11;
	}
	label$2259$31:
	goto label$2259$6;
	label$2259$32:
	r11 = NULL;
	return r11;
}

vvirtual* format_gif_Tools_frame(vvirtual* r0,int r1) {
	vvirtual *r10;
	venum *r7;
	haxe__ds__List r4;
	vdynamic *r6;
	haxe__ds___List__ListNode r3, r5;
	int r2, r8, r9;
	r2 = 0;
	if( r0 == NULL ) hl_null_access();
	r4 = hl_vfields(r0)[0] ? (*(haxe__ds__List*)(hl_vfields(r0)[0])) : (haxe__ds__List)hl_dyn_getp(r0->value,-404083332/*blocks*/,&type$113);
	if( r4 == NULL ) hl_null_access();
	r3 = r4->h;
	label$2258$5:
	if( !r3 ) goto label$2258$21;
	if( r3 == NULL ) hl_null_access();
	r6 = r3->item;
	r7 = (venum*)r6;
	r5 = r3->next;
	r3 = r5;
	if( r7 == NULL ) hl_null_access();
	r8 = HL__ENUM_INDEX__(r7);
	r9 = 0;
	if( r8 != r9 ) goto label$2258$20;
	if( r2 != r1 ) goto label$2258$19;
	r10 = ((format_gif_Block_BFrame*)r7)->p0;
	return r10;
	label$2258$19:
	++r2;
	label$2258$20:
	goto label$2258$5;
	label$2258$21:
	r10 = NULL;
	return r10;
}

int format_gif_Tools_framesCount(vvirtual* r0) {
	venum *r6;
	haxe__ds__List r3;
	vdynamic *r5;
	haxe__ds___List__ListNode r2, r4;
	int r1, r7, r8;
	r1 = 0;
	if( r0 == NULL ) hl_null_access();
	r3 = hl_vfields(r0)[0] ? (*(haxe__ds__List*)(hl_vfields(r0)[0])) : (haxe__ds__List)hl_dyn_getp(r0->value,-404083332/*blocks*/,&type$113);
	if( r3 == NULL ) hl_null_access();
	r2 = r3->h;
	label$2257$5:
	if( !r2 ) goto label$2257$18;
	if( r2 == NULL ) hl_null_access();
	r5 = r2->item;
	r6 = (venum*)r5;
	r4 = r2->next;
	r2 = r4;
	if( r6 == NULL ) hl_null_access();
	r7 = HL__ENUM_INDEX__(r6);
	r8 = 0;
	if( r7 != r8 ) goto label$2257$17;
	++r1;
	label$2257$17:
	goto label$2257$5;
	label$2257$18:
	return r1;
}
