﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void haxe_MainEvent_delay(haxe__MainEvent r0,vdynamic* r1) {
	double r2, r4;
	int r3;
	if( r1 ) goto label$1747$4;
	r3 = -1;
	r2 = (double)r3;
	goto label$1747$7;
	label$1747$4:
	r2 = hl_sys_time();
	r4 = r1 ? r1->v.d : 0;
	r2 = r2 + r4;
	label$1747$7:
	r0->nextRun = r2;
	return;
}

void haxe_MainEvent_stop(haxe__MainEvent r0) {
	haxe__MainEvent r5, r7;
	haxe__$MainLoop r6;
	double r4;
	vclosure *r2;
	int r3;
	r2 = r0->f;
	if( r2 ) goto label$1748$3;
	return;
	label$1748$3:
	r2 = NULL;
	r0->f = r2;
	r3 = -1;
	r4 = (double)r3;
	r0->nextRun = r4;
	r5 = r0->prev;
	if( r5 ) goto label$1748$14;
	r5 = r0->next;
	r6 = (haxe__$MainLoop)global$755;
	r6->pending = r5;
	goto label$1748$18;
	label$1748$14:
	r5 = r0->prev;
	if( r5 == NULL ) hl_null_access();
	r7 = r0->next;
	r5->next = r7;
	label$1748$18:
	r5 = r0->next;
	if( !r5 ) goto label$1748$24;
	r5 = r0->next;
	if( r5 == NULL ) hl_null_access();
	r7 = r0->prev;
	r5->prev = r7;
	label$1748$24:
	return;
}

void haxe_MainEvent_new(haxe__MainEvent r0,vclosure* r1,int r2) {
	bool r3;
	double r5;
	int r4;
	r3 = true;
	r0->isBlocking = r3;
	r0->f = r1;
	r0->priority = r2;
	r4 = -1;
	r5 = (double)r4;
	r0->nextRun = r5;
	return;
}
