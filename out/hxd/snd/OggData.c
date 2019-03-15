﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

hxd__snd__Data hxd_snd_OggData_resample(hxd__snd__OggData r0,int r1,venum* r2,int r3) {
	hxd__snd__OggData r8;
	haxe__io__Bytes r9;
	hxd__snd__Data r6;
	int r5, r7;
	if( r2 == NULL ) hl_null_access();
	r5 = HL__ENUM_INDEX__(r2);
	switch(r5) {
		default:
			r6 = hxd_snd_Data_resample(((hxd__snd__Data)r0),r1,r2,r3);
			return r6;
		case 0:
		case 1:
			r7 = r0->channels;
			if( r3 != r7 ) goto label$3750$14;
			r7 = r0->samplingRate;
			if( r1 != r7 ) goto label$3750$14;
			r8 = (hxd__snd__OggData)hl_alloc_obj(hxd__snd__OggData__val);
			r9 = r0->bytes;
			hxd_snd_OggData_new(r8,r9);
			r8->sampleFormat = r2;
			return ((hxd__snd__Data)r8);
			label$3750$14:
			r6 = hxd_snd_Data_resample(((hxd__snd__Data)r0),r1,r2,r3);
			return r6;
	}
}

void hxd_snd_OggData_decodeBuffer(hxd__snd__OggData r0,haxe__io__Bytes r1,int r2,int r3,int r4) {
	String r10;
	venum *r13, *r19;
	fmt_ogg *r9;
	bool r8;
	vbyte *r11, *r12;
	int r6, r7, r14, r15, r16, r17, r18;
	r6 = r0->currentSample;
	if( r6 == r3 ) goto label$3751$8;
	r0->currentSample = r3;
	r9 = r0->reader;
	r8 = fmt_ogg_seek(r9,r3);
	if( r8 ) goto label$3751$8;
	r10 = (String)global$1321;
	hl_throw((vdynamic*)r10);
	label$3751$8:
	r6 = hxd_snd_Data_getBytesPerSample(((hxd__snd__Data)r0));
	if( r1 == NULL ) hl_null_access();
	r11 = r1->b;
	r12 = hl_bytes_offset(r11,r2);
	r11 = r12;
	r13 = r0->sampleFormat;
	if( r13 == NULL ) hl_null_access();
	r7 = HL__ENUM_INDEX__(r13);
	switch(r7) {
		default:
			r10 = (String)global$319;
			hl_throw((vdynamic*)r10);
		case 0:
			r14 = 257;
			r7 = r14;
			goto label$3751$24;
		case 1:
			r14 = 2;
			r7 = r14;
	}
	label$3751$24:
	r14 = r4 * r6;
	label$3751$25:
	r16 = 0;
	if( r16 >= r14 ) goto label$3751$50;
	r9 = r0->reader;
	r15 = fmt_ogg_read(r9,r11,r14,r7);
	r17 = 0;
	if( r15 >= r17 ) goto label$3751$34;
	r10 = (String)global$1320;
	hl_throw((vdynamic*)r10);
	label$3751$34:
	r17 = 0;
	if( r15 != r17 ) goto label$3751$45;
	r16 = 0;
	r13 = r0->sampleFormat;
	r19 = (venum*)global$1316;
	if( r13 != r19 ) goto label$3751$42;
	r18 = 128;
	goto label$3751$43;
	label$3751$42:
	r18 = 0;
	label$3751$43:
	hl_bytes_fill(r11,r16,r14,r18);
	goto label$3751$50;
	label$3751$45:
	r16 = r14 - r15;
	r14 = r16;
	r12 = hl_bytes_offset(r11,r15);
	r11 = r12;
	goto label$3751$25;
	label$3751$50:
	r15 = r0->currentSample;
	r15 = r15 + r4;
	r0->currentSample = r15;
	return;
}

void hxd_snd_OggData_new(hxd__snd__OggData r0,haxe__io__Bytes r1) {
	String r6;
	venum *r14;
	fmt_ogg *r2;
	int *r10, *r11, *r12, *r13;
	int r4, r7, r8, r9;
	vbyte *r3;
	r0->bytes = r1;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->b;
	r4 = r1->length;
	r2 = fmt_ogg_open(r3,r4);
	r0->reader = r2;
	r2 = r0->reader;
	if( r2 ) goto label$3752$10;
	r6 = (String)global$1320;
	hl_throw((vdynamic*)r6);
	label$3752$10:
	r4 = 0;
	r7 = 0;
	r8 = 0;
	r9 = 0;
	r2 = r0->reader;
	r10 = &r4;
	r11 = &r7;
	r12 = &r8;
	r13 = &r9;
	fmt_ogg_info(r2,r10,r11,r12,r13);
	r0->channels = r9;
	r0->samples = r8;
	r14 = (venum*)global$1309;
	r0->sampleFormat = r14;
	r0->samplingRate = r7;
	return;
}

