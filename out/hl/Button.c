﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void hl_Button_onClick(hl__Button r0) {
	return;
}

void hl_Button_new(hl__Button r0,hl__Window r1,String r2) {
	ui_window *r5;
	vclosure *r3;
	vbyte *r6;
	r3 = r0->onClick;
	if( r3 ) goto label$3213$4;
	r3 = hl_alloc_closure_ptr(&type$3053,hl_Button_onClick,r0);
	r0->onClick = r3;
	label$3213$4:
	if( r1 == NULL ) hl_null_access();
	r5 = r1->h;
	if( r2 == NULL ) hl_null_access();
	r6 = r2->bytes;
	r3 = hl_alloc_closure_ptr(&type$3053,fun$3215,r0);
	r5 = ui_ui_button_new(r5,r6,r3);
	r0->h = r5;
	return;
}

