﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

haxe__io__Bytes hxd_snd_openal_Driver_getTmpBytes(hxd__snd__openal__Driver r0,int r1) {
	haxe__io__Bytes r3;
	int r2;
	r3 = r0->tmpBytes;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->length;
	if( r2 >= r1 ) goto label$3756$6;
	r3 = haxe_io_Bytes_alloc(r1);
	r0->tmpBytes = r3;
	label$3756$6:
	r3 = r0->tmpBytes;
	return r3;
}

void hxd_snd_openal_Driver_setMasterVolume(hxd__snd__openal__Driver r0,double r1) {
	float r4;
	int r3;
	r3 = 4106;
	r4 = (float)r1;
	openal_al_listenerf(r3,r4);
	return;
}

void hxd_snd_openal_Driver_setListenerParams(hxd__snd__openal__Driver r0,h3d__Vector r1,h3d__Vector r2,h3d__Vector r3,h3d__Vector r4) {
	haxe__io__Bytes r11, r12;
	float r8, r9, r10;
	double r7;
	vbyte *r13;
	int r6;
	r6 = 4100;
	if( r1 == NULL ) hl_null_access();
	r7 = r1->x;
	r7 = -r7;
	r8 = (float)r7;
	r7 = r1->y;
	r9 = (float)r7;
	r7 = r1->z;
	r10 = (float)r7;
	openal_al_listener3f(r6,r8,r9,r10);
	r6 = 24;
	r11 = hxd_snd_openal_Driver_getTmpBytes(r0,r6);
	if( r11 == NULL ) hl_null_access();
	r6 = 0;
	if( r2 == NULL ) hl_null_access();
	r7 = r2->x;
	r7 = -r7;
	haxe_io_Bytes_setFloat(r11,r6,r7);
	r6 = 4;
	r7 = r2->y;
	haxe_io_Bytes_setFloat(r11,r6,r7);
	r6 = 8;
	r7 = r2->z;
	haxe_io_Bytes_setFloat(r11,r6,r7);
	if( r3 == NULL ) hl_null_access();
	h3d_Vector_normalize(r3);
	r6 = 12;
	r7 = r3->x;
	r7 = -r7;
	haxe_io_Bytes_setFloat(r11,r6,r7);
	r6 = 16;
	r7 = r3->y;
	haxe_io_Bytes_setFloat(r11,r6,r7);
	r6 = 20;
	r7 = r3->z;
	haxe_io_Bytes_setFloat(r11,r6,r7);
	r6 = 4111;
	r12 = r0->tmpBytes;
	if( r12 == NULL ) hl_null_access();
	r13 = r12->b;
	openal_al_listenerfv(r6,r13);
	if( !r4 ) goto label$3758$52;
	r6 = 4102;
	if( r4 == NULL ) hl_null_access();
	r7 = r4->x;
	r7 = -r7;
	r8 = (float)r7;
	r7 = r4->y;
	r9 = (float)r7;
	r7 = r4->z;
	r10 = (float)r7;
	openal_al_listener3f(r6,r8,r9,r10);
	label$3758$52:
	return;
}

hxd__snd__openal__SourceHandle hxd_snd_openal_Driver_createSource(hxd__snd__openal__Driver r0) {
	String r7;
	hxd__snd__openal__SourceHandle r1;
	haxe__io__Bytes r3;
	vbyte *r5;
	int r4, r6, r8;
	r1 = (hxd__snd__openal__SourceHandle)hl_alloc_obj(hxd__snd__openal__SourceHandle__val);
	hxd_snd_openal_SourceHandle_new(r1);
	r4 = 4;
	r3 = hxd_snd_openal_Driver_getTmpBytes(r0,r4);
	r4 = 1;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->b;
	openal_al_gen_sources(r4,r5);
	r4 = openal_al_get_error();
	r6 = 0;
	if( r4 == r6 ) goto label$3759$13;
	r7 = (String)global$1334;
	hl_throw((vdynamic*)r7);
	label$3759$13:
	r4 = 0;
	r4 = haxe_io_Bytes_getInt32(r3,r4);
	r1->inst = r4;
	r4 = r1->inst;
	r6 = 514;
	r8 = 1;
	openal_al_sourcei(r4,r6,r8);
	return r1;
}

void hxd_snd_openal_Driver_destroySource(hxd__snd__openal__Driver r0,hxd__snd__openal__SourceHandle r1) {
	haxe__io__Bytes r6;
	vbyte *r7;
	int r3, r4, r5;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->inst;
	r4 = 131077;
	r5 = 0;
	openal_al_sourcei(r3,r4,r5);
	r3 = 4;
	r6 = hxd_snd_openal_Driver_getTmpBytes(r0,r3);
	if( r6 == NULL ) hl_null_access();
	r3 = 0;
	r4 = r1->inst;
	haxe_io_Bytes_setInt32(r6,r3,r4);
	r3 = 1;
	r7 = r6->b;
	openal_al_delete_sources(r3,r7);
	return;
}

void hxd_snd_openal_Driver_playSource(hxd__snd__openal__Driver r0,hxd__snd__openal__SourceHandle r1) {
	bool r4;
	int r3;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->inst;
	openal_al_source_play(r3);
	r4 = true;
	r1->playing = r4;
	return;
}

void hxd_snd_openal_Driver_stopSource(hxd__snd__openal__Driver r0,hxd__snd__openal__SourceHandle r1) {
	bool r4;
	int r3;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->inst;
	openal_al_source_stop(r3);
	r4 = false;
	r1->playing = r4;
	return;
}

void hxd_snd_openal_Driver_setSourceVolume(hxd__snd__openal__Driver r0,hxd__snd__openal__SourceHandle r1,double r2) {
	float r6;
	int r4, r5;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->inst;
	r5 = 4106;
	r6 = (float)r2;
	openal_al_sourcef(r4,r5,r6);
	return;
}

hxd__snd__openal__BufferHandle hxd_snd_openal_Driver_createBuffer(hxd__snd__openal__Driver r0) {
	hxd__snd__openal__BufferHandle r1;
	haxe__io__Bytes r3;
	vbyte *r5;
	int r4;
	r1 = (hxd__snd__openal__BufferHandle)hl_alloc_obj(hxd__snd__openal__BufferHandle__val);
	hxd_snd_openal_BufferHandle_new(r1);
	r4 = 4;
	r3 = hxd_snd_openal_Driver_getTmpBytes(r0,r4);
	r4 = 1;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->b;
	openal_al_gen_buffers(r4,r5);
	r4 = 0;
	r4 = haxe_io_Bytes_getInt32(r3,r4);
	r1->inst = r4;
	return r1;
}

void hxd_snd_openal_Driver_destroyBuffer(hxd__snd__openal__Driver r0,hxd__snd__openal__BufferHandle r1) {
	haxe__io__Bytes r2;
	vbyte *r6;
	int r3, r5;
	r3 = 4;
	r2 = hxd_snd_openal_Driver_getTmpBytes(r0,r3);
	if( r2 == NULL ) hl_null_access();
	r3 = 0;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->inst;
	haxe_io_Bytes_setInt32(r2,r3,r5);
	r3 = 1;
	r6 = r2->b;
	openal_al_delete_buffers(r3,r6);
	return;
}

void hxd_snd_openal_Driver_setBufferData(hxd__snd__openal__Driver r0,hxd__snd__openal__BufferHandle r1,haxe__io__Bytes r2,int r3,venum* r4,int r5,int r6) {
	vbyte *r11;
	int r8, r9, r10;
	if( r4 == NULL ) hl_null_access();
	r8 = HL__ENUM_INDEX__(r4);
	switch(r8) {
		default:
			goto label$3766$24;
		case 0:
			r10 = 1;
			if( r5 != r10 ) goto label$3766$8;
			r9 = 4352;
			goto label$3766$9;
			label$3766$8:
			r9 = 4354;
			label$3766$9:
			r8 = r9;
			goto label$3766$24;
		case 1:
			r10 = 1;
			if( r5 != r10 ) goto label$3766$15;
			r9 = 4353;
			goto label$3766$16;
			label$3766$15:
			r9 = 4355;
			label$3766$16:
			r8 = r9;
			goto label$3766$24;
		case 2:
			r10 = 1;
			if( r5 != r10 ) goto label$3766$22;
			r9 = 4353;
			goto label$3766$23;
			label$3766$22:
			r9 = 4355;
			label$3766$23:
			r8 = r9;
	}
	label$3766$24:
	if( r1 == NULL ) hl_null_access();
	r9 = r1->inst;
	if( r2 == NULL ) hl_null_access();
	r11 = r2->b;
	openal_al_buffer_data(r9,r8,r11,r3,r6);
	return;
}

int hxd_snd_openal_Driver_getPlayedSampleCount(hxd__snd__openal__Driver r0,hxd__snd__openal__SourceHandle r1) {
	int r2, r3, r4;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->sampleOffset;
	r3 = r1->inst;
	r4 = 4133;
	r3 = openal_al_get_sourcei(r3,r4);
	r2 = r2 + r3;
	r4 = 0;
	if( r2 >= r4 ) goto label$3767$10;
	r3 = 0;
	r2 = r3;
	label$3767$10:
	return r2;
}

int hxd_snd_openal_Driver_getProcessedBuffers(hxd__snd__openal__Driver r0,hxd__snd__openal__SourceHandle r1) {
	int r2, r3;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->inst;
	r3 = 4118;
	r2 = openal_al_get_sourcei(r2,r3);
	return r2;
}

void hxd_snd_openal_Driver_queueBuffer(hxd__snd__openal__Driver r0,hxd__snd__openal__SourceHandle r1,hxd__snd__openal__BufferHandle r2,int r3,bool r4) {
	String r10;
	bool r11;
	haxe__io__Bytes r5;
	vbyte *r9;
	int r6, r8;
	r6 = 4;
	r5 = hxd_snd_openal_Driver_getTmpBytes(r0,r6);
	if( r5 == NULL ) hl_null_access();
	r6 = 0;
	if( r2 == NULL ) hl_null_access();
	r8 = r2->inst;
	haxe_io_Bytes_setInt32(r5,r6,r8);
	if( r1 == NULL ) hl_null_access();
	r6 = r1->inst;
	r8 = 1;
	r9 = r5->b;
	openal_al_source_queue_buffers(r6,r8,r9);
	r6 = openal_al_get_error();
	r8 = 0;
	if( r6 == r8 ) goto label$3769$17;
	r10 = (String)global$1335;
	hl_throw((vdynamic*)r10);
	label$3769$17:
	r6 = r1->inst;
	r8 = 4112;
	r6 = openal_al_get_sourcei(r6,r8);
	r8 = 4116;
	if( r6 != r8 ) goto label$3769$36;
	r8 = 0;
	if( r8 >= r3 ) goto label$3769$30;
	r6 = r1->inst;
	r8 = 4133;
	openal_al_sourcei(r6,r8,r3);
	r6 = -r3;
	r1->sampleOffset = r6;
	goto label$3769$32;
	label$3769$30:
	r6 = 0;
	r1->sampleOffset = r6;
	label$3769$32:
	r11 = r1->playing;
	if( !r11 ) goto label$3769$36;
	r6 = r1->inst;
	openal_al_source_play(r6);
	label$3769$36:
	r2->isEnd = r4;
	return;
}

void hxd_snd_openal_Driver_unqueueBuffer(hxd__snd__openal__Driver r0,hxd__snd__openal__SourceHandle r1,hxd__snd__openal__BufferHandle r2) {
	bool r12;
	haxe__io__Bytes r3;
	double r8, r11;
	vbyte *r7;
	int r4, r6, r9, r10;
	r4 = 4;
	r3 = hxd_snd_openal_Driver_getTmpBytes(r0,r4);
	if( r3 == NULL ) hl_null_access();
	r4 = 0;
	if( r2 == NULL ) hl_null_access();
	r6 = r2->inst;
	haxe_io_Bytes_setInt32(r3,r4,r6);
	if( r1 == NULL ) hl_null_access();
	r4 = r1->inst;
	r6 = 1;
	r7 = r3->b;
	openal_al_source_unqueue_buffers(r4,r6,r7);
	r4 = r2->inst;
	r6 = 8196;
	r4 = openal_al_get_bufferi(r4,r6);
	r6 = r2->inst;
	r9 = 8194;
	r6 = openal_al_get_bufferi(r6,r9);
	r9 = r2->inst;
	r10 = 8195;
	r9 = openal_al_get_bufferi(r9,r10);
	r6 = r6 * r9;
	r8 = (double)r6;
	r6 = 8;
	r11 = (double)r6;
	r8 = r8 / r11;
	r11 = (double)r4;
	r11 = r11 / r8;
	r6 = (int)r11;
	r12 = r2->isEnd;
	if( !r12 ) goto label$3770$34;
	r9 = 0;
	r1->sampleOffset = r9;
	goto label$3770$37;
	label$3770$34:
	r9 = r1->sampleOffset;
	r9 = r9 + r6;
	r1->sampleOffset = r9;
	label$3770$37:
	return;
}

void hxd_snd_openal_Driver_update(hxd__snd__openal__Driver r0) {
	return;
}

void hxd_snd_openal_Driver_dispose(hxd__snd__openal__Driver r0) {
	bool r1;
	alc_device *r4;
	alc_context *r2;
	r2 = NULL;
	r1 = openal_alc_make_context_current(r2);
	r2 = r0->context;
	openal_alc_destroy_context(r2);
	r4 = r0->device;
	r1 = openal_alc_close_device(r4);
	return;
}

hxd__snd__EffectDriver hxd_snd_openal_Driver_getEffectDriver(hxd__snd__openal__Driver r0,String r1) {
	vvirtual *r12;
	hxd__snd__EffectDriver r7;
	hxd__snd__openal__ReverbDriver r10;
	hxd__snd__openal__PitchDriver r9;
	hxd__snd__openal__LowPassDriver r8;
	hxd__snd__openal__SpatializationDriver r11;
	vbyte *r5, *r6;
	int r3, r4;
	if( !r1 ) goto label$3773$9;
	r3 = r1->length;
	r4 = 7;
	if( r3 != r4 ) goto label$3773$9;
	r5 = r1->bytes;
	r6 = (vbyte*)USTR("lowpass");
	r3 = hl_string_compare(r5,r6,r3);
	r4 = 0;
	if( r3 == r4 ) goto label$3773$39;
	label$3773$9:
	if( !r1 ) goto label$3773$18;
	r3 = r1->length;
	r4 = 5;
	if( r3 != r4 ) goto label$3773$18;
	r5 = r1->bytes;
	r6 = (vbyte*)USTR("pitch");
	r3 = hl_string_compare(r5,r6,r3);
	r4 = 0;
	if( r3 == r4 ) goto label$3773$42;
	label$3773$18:
	if( !r1 ) goto label$3773$27;
	r3 = r1->length;
	r4 = 6;
	if( r3 != r4 ) goto label$3773$27;
	r5 = r1->bytes;
	r6 = (vbyte*)USTR("reverb");
	r3 = hl_string_compare(r5,r6,r3);
	r4 = 0;
	if( r3 == r4 ) goto label$3773$45;
	label$3773$27:
	if( !r1 ) goto label$3773$36;
	r3 = r1->length;
	r4 = 14;
	if( r3 != r4 ) goto label$3773$36;
	r5 = r1->bytes;
	r6 = (vbyte*)USTR("spatialization");
	r3 = hl_string_compare(r5,r6,r3);
	r4 = 0;
	if( r3 == r4 ) goto label$3773$48;
	label$3773$36:
	r7 = (hxd__snd__EffectDriver)hl_alloc_obj(hxd__snd__EffectDriver__val);
	hxd_snd_EffectDriver_new(r7);
	return r7;
	label$3773$39:
	r8 = (hxd__snd__openal__LowPassDriver)hl_alloc_obj(hxd__snd__openal__LowPassDriver__val);
	hxd_snd_openal_LowPassDriver_new(r8,r0);
	return ((hxd__snd__EffectDriver)r8);
	label$3773$42:
	r9 = (hxd__snd__openal__PitchDriver)hl_alloc_obj(hxd__snd__openal__PitchDriver__val);
	hxd_snd_openal_PitchDriver_new(r9);
	return ((hxd__snd__EffectDriver)r9);
	label$3773$45:
	r10 = (hxd__snd__openal__ReverbDriver)hl_alloc_obj(hxd__snd__openal__ReverbDriver__val);
	hxd_snd_openal_ReverbDriver_new(r10,r0);
	return ((hxd__snd__EffectDriver)r10);
	label$3773$48:
	r11 = (hxd__snd__openal__SpatializationDriver)hl_alloc_obj(hxd__snd__openal__SpatializationDriver__val);
	r12 = r0->$_f4;
	if( r12 ) goto label$3773$53;
	r12 = hl_to_virtual(&type$749,(vdynamic*)r0);
	r0->$_f4 = r12;
	label$3773$53:
	hxd_snd_openal_SpatializationDriver_new(r11,r12);
	return ((hxd__snd__EffectDriver)r11);
}

void hxd_snd_openal_Driver_new(hxd__snd__openal__Driver r0) {
	String r9;
	bool r6;
	haxe__io__Bytes r1;
	alc_device *r3;
	alc_context *r5;
	vbyte *r4;
	int r2, r8;
	r2 = 24;
	r1 = haxe_io_Bytes_alloc(r2);
	r0->tmpBytes = r1;
	r4 = NULL;
	r3 = openal_alc_open_device(r4);
	r0->device = r3;
	r3 = r0->device;
	r4 = NULL;
	r5 = openal_alc_create_context(r3,r4);
	r0->context = r5;
	r5 = r0->context;
	r6 = openal_alc_make_context_current(r5);
	r3 = r0->device;
	openal_alc_load_extensions(r3);
	openal_al_load_extensions();
	r2 = 4;
	r1 = hxd_snd_openal_Driver_getTmpBytes(r0,r2);
	r3 = r0->device;
	r2 = 131075;
	r8 = 1;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->b;
	openal_alc_get_integerv(r3,r2,r8,r4);
	r2 = 0;
	r2 = haxe_io_Bytes_getInt32(r1,r2);
	r0->maxAuxiliarySends = r2;
	r2 = openal_al_get_error();
	r8 = 0;
	if( r2 == r8 ) goto label$3774$31;
	r9 = (String)global$1333;
	hl_throw((vdynamic*)r9);
	label$3774$31:
	return;
}

