﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void hxd_snd_WavData_init(hxd__snd__WavData r0,vvirtual* r1) {
	String r5, r8;
	vvirtual *r2;
	venum *r9;
	haxe__io__Bytes r10;
	double r11, r12;
	int *r6;
	vbyte *r7;
	int r4;
	if( r1 == NULL ) hl_null_access();
	r2 = hl_vfields(r1)[1] ? (*(vvirtual**)(hl_vfields(r1)[1])) : (vvirtual*)hl_dyn_getp(r1->value,-50329203/*header*/,&type$1455);
	if( r2 == NULL ) hl_null_access();
	r4 = hl_vfields(r2)[5] ? (*(int*)(hl_vfields(r2)[5])) : (int)hl_dyn_geti(r2->value,372418284/*samplingRate*/,&type$3);
	r0->samplingRate = r4;
	r4 = hl_vfields(r2)[3] ? (*(int*)(hl_vfields(r2)[3])) : (int)hl_dyn_geti(r2->value,183413727/*channels*/,&type$3);
	r0->channels = r4;
	r4 = hl_vfields(r2)[0] ? (*(int*)(hl_vfields(r2)[0])) : (int)hl_dyn_geti(r2->value,-466222980/*bitsPerSample*/,&type$3);
	switch(r4) {
		default:
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
			r5 = (String)global$1322;
			r4 = hl_vfields(r2)[0] ? (*(int*)(hl_vfields(r2)[0])) : (int)hl_dyn_geti(r2->value,-466222980/*bitsPerSample*/,&type$3);
			r6 = &r4;
			r7 = hl_itos(r4,r6);
			r8 = String___alloc__(r7,r4);
			r5 = String___add__(r5,r8);
			r8 = (String)global$1323;
			r5 = String___add__(r5,r8);
			hl_throw((vdynamic*)r5);
		case 8:
			r9 = (venum*)global$1316;
			goto label$3753$21;
		case 16:
			r9 = (venum*)global$1309;
	}
	label$3753$21:
	r0->sampleFormat = r9;
	r10 = hl_vfields(r1)[0] ? (*(haxe__io__Bytes*)(hl_vfields(r1)[0])) : (haxe__io__Bytes)hl_dyn_getp(r1->value,40064820/*data*/,&type$75);
	r0->rawData = r10;
	r10 = r0->rawData;
	if( r10 == NULL ) hl_null_access();
	r4 = r10->length;
	r11 = (double)r4;
	r4 = hxd_snd_Data_getBytesPerSample(((hxd__snd__Data)r0));
	r12 = (double)r4;
	r11 = r11 / r12;
	r4 = (int)r11;
	r0->samples = r4;
	return;
}

void hxd_snd_WavData_decodeBuffer(hxd__snd__WavData r0,haxe__io__Bytes r1,int r2,int r3,int r4) {
	haxe__io__Bytes r7;
	int r5, r8, r9;
	r5 = hxd_snd_Data_getBytesPerSample(((hxd__snd__Data)r0));
	if( r1 == NULL ) hl_null_access();
	r7 = r0->rawData;
	r8 = r3 * r5;
	r9 = r4 * r5;
	haxe_io_Bytes_blit(r1,r2,r7,r8,r9);
	return;
}

void hxd_snd_WavData_new(hxd__snd__WavData r0,haxe__io__Bytes r1) {
	haxe__io__BytesInput r5;
	vvirtual *r3;
	format__wav__Reader r4;
	vdynamic *r6, *r7;
	if( !r1 ) goto label$3755$9;
	r4 = (format__wav__Reader)hl_alloc_obj(format__wav__Reader__val);
	r5 = (haxe__io__BytesInput)hl_alloc_obj(haxe__io__BytesInput__val);
	r6 = NULL;
	r7 = NULL;
	haxe_io_BytesInput_new(r5,r1,r6,r7);
	format_wav_Reader_new(r4,((haxe__io__Input)r5));
	r3 = format_wav_Reader_read(r4);
	hxd_snd_WavData_init(r0,r3);
	label$3755$9:
	return;
}
