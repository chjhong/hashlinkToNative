﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void hl_Mikktspace_compute(hl__Mikktspace r0,double* r1) {
	String r5;
	bool r4;
	double r2;
	if( r1 ) goto label$3199$3;
	r2 = 180.;
	goto label$3199$4;
	label$3199$3:
	r2 = *r1;
	label$3199$4:
	r4 = fmt_compute_mikkt_tangents(((vdynamic*)r0),r2);
	if( r4 ) goto label$3199$8;
	r5 = (String)global$319;
	hl_throw((vdynamic*)r5);
	label$3199$8:
	return;
}

void hl_Mikktspace_new(hl__Mikktspace r0) {
	return;
}
