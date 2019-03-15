﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void haxe_Timer_stop(haxe__Timer r0) {
	haxe__MainEvent r2;
	r2 = r0->event;
	if( !r2 ) goto label$1745$7;
	r2 = r0->event;
	if( r2 == NULL ) hl_null_access();
	haxe_MainEvent_stop(r2);
	r2 = NULL;
	r0->event = r2;
	label$1745$7:
	return;
}

void haxe_Timer_run(haxe__Timer r0) {
	return;
}

void haxe_Timer_new(haxe__Timer r0,int r1) {
	venum *r8;
	haxe__MainEvent r7;
	double r4, r6;
	vclosure *r2;
	vdynamic *r10;
	int *r9;
	int r5;
	r2 = r0->run;
	if( r2 ) goto label$1751$4;
	r2 = hl_alloc_closure_ptr(&type$2899,haxe_Timer_run,r0);
	r0->run = r2;
	label$1751$4:
	r4 = (double)r1;
	r5 = 1000;
	r6 = (double)r5;
	r4 = r4 / r6;
	r8 = hl_alloc_enum(&type$2897,0);
	((Enum$2897*)r8)->p0 = (double)r4;
	((Enum$2897*)r8)->p1 = (haxe__Timer)r0;
	r2 = hl_alloc_closure_ptr(&type$2896,fun$3092,r8);
	r9 = NULL;
	r7 = haxe_MainLoop_add(r2,r9);
	r0->event = r7;
	r7 = r0->event;
	if( r7 == NULL ) hl_null_access();
	r10 = hl_alloc_dynamic(&type$6);
	r10->v.d = r4;
	haxe_MainEvent_delay(r7,r10);
	return;
}

haxe__Timer haxe_Timer_delay(vclosure* r0,int r1) {
	venum *r5;
	haxe__Timer r2;
	vclosure *r4;
	r2 = (haxe__Timer)hl_alloc_obj(haxe__Timer__val);
	haxe_Timer_new(r2,r1);
	r5 = hl_alloc_enum(&type$2895,0);
	((Enum$2895*)r5)->p0 = (vclosure*)r0;
	((Enum$2895*)r5)->p1 = (haxe__Timer)r2;
	r4 = hl_alloc_closure_ptr(&type$2894,fun$3091,r5);
	r2->run = r4;
	return r2;
}

