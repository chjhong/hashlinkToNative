﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void hxd_snd_effect_LowPass_new(hxd__snd__effect__LowPass r0) {
	String r2;
	double r4;
	int r3;
	r2 = (String)global$1325;
	hxd_snd_Effect_new(((hxd__snd__Effect)r0),r2);
	r3 = 100;
	r0->priority = r3;
	r4 = 1.;
	r0->gainHF = r4;
	return;
}

