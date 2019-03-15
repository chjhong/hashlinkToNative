﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void hxd_snd_effect_Reverb_loadPreset(hxd__snd__effect__Reverb r0,hxd__snd__effect__ReverbPreset r1) {
	double r2;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->room;
	r0->room = r2;
	r2 = r1->roomHF;
	r0->roomHF = r2;
	r2 = r1->roomRolloffFactor;
	r0->roomRolloffFactor = r2;
	r2 = r1->decayTime;
	r0->decayTime = r2;
	r2 = r1->decayHFRatio;
	r0->decayHFRatio = r2;
	r2 = r1->reflections;
	r0->reflections = r2;
	r2 = r1->reflectionsDelay;
	r0->reflectionsDelay = r2;
	r2 = r1->reverb;
	r0->reverb = r2;
	r2 = r1->reverbDelay;
	r0->reverbDelay = r2;
	r2 = r1->diffusion;
	r0->diffusion = r2;
	r2 = r1->density;
	r0->density = r2;
	r2 = r1->hfReference;
	r0->hfReference = r2;
	return;
}

void hxd_snd_effect_Reverb_new(hxd__snd__effect__Reverb r0,hxd__snd__effect__ReverbPreset r1) {
	String r3;
	hxd__snd__effect__$ReverbPreset r6;
	double r4;
	hxd__snd__effect__ReverbPreset r5;
	r3 = (String)global$1330;
	hxd_snd_Effect_new(((hxd__snd__Effect)r0),r3);
	r4 = 100.;
	r0->wetDryMix = r4;
	if( !r1 ) goto label$3782$7;
	r5 = r1;
	goto label$3782$9;
	label$3782$7:
	r6 = (hxd__snd__effect__$ReverbPreset)global$1329;
	r5 = r6->DEFAULT;
	label$3782$9:
	hxd_snd_effect_Reverb_loadPreset(r0,r5);
	return;
}

