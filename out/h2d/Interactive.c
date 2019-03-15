﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void h2d_Interactive_onAdd(h2d__Interactive r0) {
	h2d__Scene r1;
	r1 = h2d_Object_getScene(((h2d__Object)r0));
	r0->scene = r1;
	r1 = r0->scene;
	if( !r1 ) goto label$1011$7;
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	h2d_Scene_addEventTarget(r1,r0);
	label$1011$7:
	h2d_Interactive_updateMask(r0);
	h2d_Object_onAdd(((h2d__Object)r0));
	return;
}

void h2d_Interactive_draw(h2d__Interactive r0,h2d__RenderContext r1) {
	vvirtual *r17;
	h2d__Tile r7;
	double r4, r6, r11, r15;
	vdynamic *r3, *r8, *r12, *r13, *r16;
	int r5, r9, r10, r14;
	r3 = r0->backgroundColor;
	if( !r3 ) goto label$1012$22;
	r3 = r0->backgroundColor;
	r4 = r0->width;
	r5 = (int)r4;
	r6 = r0->height;
	r9 = r3 ? r3->v.i : 0;
	r8 = hl_alloc_dynamic(&type$3);
	r8->v.i = r5;
	r10 = (int)r6;
	r12 = hl_alloc_dynamic(&type$3);
	r12->v.i = r10;
	r13 = r0->backgroundColor;
	r10 = r13 ? r13->v.i : 0;
	r14 = 24;
	r10 = ((unsigned)r10) >> r14;
	r11 = (double)r10;
	r10 = 255;
	r15 = (double)r10;
	r11 = r11 / r15;
	r16 = hl_alloc_dynamic(&type$6);
	r16->v.d = r11;
	r17 = NULL;
	r7 = h2d_Tile_fromColor(r9,r8,r12,r16,r17);
	h2d_Drawable_emitTile(((h2d__Drawable)r0),r1,r7);
	label$1012$22:
	return;
}

void h2d_Interactive_getBoundsRec(h2d__Interactive r0,h2d__Object r1,h2d__col__Bounds r2,bool r3) {
	double r6, r8, r10, r11, r12, r13;
	vdynamic *r5;
	int r7, r9;
	h2d_Object_getBoundsRec(((h2d__Object)r0),r1,r2,r3);
	r5 = r0->backgroundColor;
	if( r5 ) goto label$1013$4;
	if( !r3 ) goto label$1013$15;
	label$1013$4:
	r6 = r0->width;
	r7 = (int)r6;
	r8 = r0->height;
	r9 = 0;
	r10 = (double)r9;
	r9 = 0;
	r11 = (double)r9;
	r12 = (double)r7;
	r9 = (int)r8;
	r13 = (double)r9;
	h2d_Object_addBounds(((h2d__Object)r0),r1,r2,r10,r11,r12,r13);
	label$1013$15:
	return;
}

void h2d_Interactive_onParentChanged(h2d__Interactive r0) {
	bool *r3;
	h2d__Scene r2;
	h2d_Object_onParentChanged(((h2d__Object)r0));
	r2 = r0->scene;
	if( !r2 ) goto label$1014$10;
	r2 = r0->scene;
	if( r2 == NULL ) hl_null_access();
	r3 = NULL;
	h2d_Scene_removeEventTarget(r2,r0,r3);
	r2 = r0->scene;
	if( r2 == NULL ) hl_null_access();
	h2d_Scene_addEventTarget(r2,r0);
	label$1014$10:
	h2d_Interactive_updateMask(r0);
	return;
}

void h2d_Interactive_updateMask(h2d__Interactive r0) {
	bool r6;
	h2d__Object r2, r4;
	h2d__$Mask r5;
	h2d__Mask r1;
	r1 = NULL;
	r0->parentMask = r1;
	r2 = r0->parent;
	label$1015$3:
	if( !r2 ) goto label$1015$18;
	r5 = (h2d__$Mask)global$91;
	r6 = hl_BaseType_check(((hl__BaseType)r5),((vdynamic*)r2));
	if( !r6 ) goto label$1015$10;
	r1 = (h2d__Mask)r2;
	goto label$1015$11;
	label$1015$10:
	r1 = NULL;
	label$1015$11:
	if( !r1 ) goto label$1015$14;
	r0->parentMask = r1;
	goto label$1015$18;
	label$1015$14:
	if( r2 == NULL ) hl_null_access();
	r4 = r2->parent;
	r2 = r4;
	goto label$1015$3;
	label$1015$18:
	return;
}

void h2d_Interactive_onRemove(h2d__Interactive r0) {
	bool *r4;
	bool r3;
	h2d__Scene r2;
	r2 = r0->scene;
	if( !r2 ) goto label$1016$9;
	r2 = r0->scene;
	if( r2 == NULL ) hl_null_access();
	r3 = true;
	r4 = &r3;
	h2d_Scene_removeEventTarget(r2,r0,r4);
	r2 = NULL;
	r0->scene = r2;
	label$1016$9:
	h2d_Object_onRemove(((h2d__Object)r0));
	return;
}

bool h2d_Interactive_checkBounds(h2d__Interactive r0,hxd__Event r1) {
	venum *r3;
	bool r4;
	int r2;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->kind;
	if( r3 == NULL ) hl_null_access();
	r2 = HL__ENUM_INDEX__(r3);
	switch(r2) {
		default:
		case 0:
		case 1:
		case 2:
		case 3:
		case 5:
		case 8:
		case 9:
			r4 = true;
			return r4;
		case 4:
		case 6:
		case 7:
		case 10:
			r4 = false;
			return r4;
	}
}

void h2d_Interactive_preventClick(h2d__Interactive r0) {
	int r1;
	r1 = -1;
	r0->mouseDownButton = r1;
	return;
}

vvirtual* h2d_Interactive_getInteractiveScene(h2d__Interactive r0) {
	vvirtual *r2;
	h2d__Scene r1;
	r1 = r0->scene;
	if( r1 ) goto label$1019$4;
	r2 = NULL;
	goto label$1019$8;
	label$1019$4:
	r2 = r1->$_f33;
	if( r2 ) goto label$1019$8;
	r2 = hl_to_virtual(&type$1318,(vdynamic*)r1);
	r1->$_f33 = r2;
	label$1019$8:
	return r2;
}

void h2d_Interactive_handleEvent(h2d__Interactive r0,hxd__Event r1) {
	venum *r19, *r22;
	bool r4;
	h2d__Mask r3, r13;
	h2d__col__Point r5, r10;
	hxd__$System r24;
	vclosure *r21, *r23;
	double r6, r8, r11, r12, r14, r16, r17, r18;
	double *r7, *r9;
	int r15, r20;
	r3 = r0->parentMask;
	if( !r3 ) goto label$1020$46;
	r4 = h2d_Interactive_checkBounds(r0,r1);
	if( !r4 ) goto label$1020$46;
	r3 = r0->parentMask;
	r5 = (h2d__col__Point)hl_alloc_obj(h2d__col__Point__val);
	if( r1 == NULL ) hl_null_access();
	r6 = r1->relX;
	r7 = &r6;
	r8 = r1->relY;
	r9 = &r8;
	h2d_col_Point_new(r5,r7,r9);
	r10 = h2d_Object_localToGlobal(((h2d__Object)r0),r5);
	r11 = r5->x;
	r12 = r5->y;
	label$1020$15:
	if( !r3 ) goto label$1020$46;
	if( r5 == NULL ) hl_null_access();
	r5->x = r11;
	r5->y = r12;
	if( r3 == NULL ) hl_null_access();
	r10 = h2d_Object_globalToLocal(((h2d__Object)r3),r5);
	if( r10 == NULL ) hl_null_access();
	r14 = r10->x;
	r15 = 0;
	r16 = (double)r15;
	if( r14 < r16 ) goto label$1020$39;
	r14 = r10->y;
	r15 = 0;
	r16 = (double)r15;
	if( r14 < r16 ) goto label$1020$39;
	r14 = r10->x;
	r15 = r3->width;
	r16 = (double)r15;
	if( r16 < r14 ) goto label$1020$39;
	r14 = r10->y;
	r15 = r3->height;
	r16 = (double)r15;
	if( !(r16 < r14) ) goto label$1020$43;
	label$1020$39:
	if( r1 == NULL ) hl_null_access();
	r4 = true;
	r1->cancel = r4;
	return;
	label$1020$43:
	r13 = r3->parentMask;
	r3 = r13;
	goto label$1020$15;
	label$1020$46:
	r4 = r0->isEllipse;
	if( !r4 ) goto label$1020$72;
	r4 = h2d_Interactive_checkBounds(r0,r1);
	if( !r4 ) goto label$1020$72;
	r11 = r0->width;
	r12 = 0.5;
	r11 = r11 * r12;
	r12 = r0->height;
	r14 = 0.5;
	r12 = r12 * r14;
	if( r1 == NULL ) hl_null_access();
	r14 = r1->relX;
	r14 = r14 - r11;
	r14 = r14 / r11;
	r16 = r1->relY;
	r16 = r16 - r12;
	r16 = r16 / r12;
	r17 = r14 * r14;
	r18 = r16 * r16;
	r17 = r17 + r18;
	r15 = 1;
	r18 = (double)r15;
	if( !(r18 < r17) ) goto label$1020$72;
	r4 = true;
	r1->cancel = r4;
	return;
	label$1020$72:
	r4 = r0->propagateEvents;
	if( !r4 ) goto label$1020$77;
	if( r1 == NULL ) hl_null_access();
	r4 = true;
	r1->propagate = r4;
	label$1020$77:
	r4 = r0->cancelEvents;
	if( !r4 ) goto label$1020$82;
	if( r1 == NULL ) hl_null_access();
	r4 = true;
	r1->cancel = r4;
	label$1020$82:
	if( r1 == NULL ) hl_null_access();
	r19 = r1->kind;
	if( r19 == NULL ) hl_null_access();
	r15 = HL__ENUM_INDEX__(r19);
	switch(r15) {
		default:
			goto label$1020$188;
		case 0:
			r4 = r0->enableRightButton;
			if( r4 ) goto label$1020$93;
			r15 = r1->button;
			r20 = 0;
			if( r15 != r20 ) goto label$1020$98;
			label$1020$93:
			r15 = r1->button;
			r0->mouseDownButton = r15;
			r21 = r0->onPush;
			if( r21 == NULL ) hl_null_access();
			r21->hasValue ? ((void (*)(vdynamic*,hxd__Event))r21->fun)((vdynamic*)r21->value,r1) : ((void (*)(hxd__Event))r21->fun)(r1);
			label$1020$98:
			goto label$1020$188;
		case 1:
			r4 = r0->enableRightButton;
			if( r4 ) goto label$1020$104;
			r15 = r1->button;
			r20 = 0;
			if( r15 != r20 ) goto label$1020$113;
			label$1020$104:
			r21 = r0->onRelease;
			if( r21 == NULL ) hl_null_access();
			r21->hasValue ? ((void (*)(vdynamic*,hxd__Event))r21->fun)((vdynamic*)r21->value,r1) : ((void (*)(hxd__Event))r21->fun)(r1);
			r15 = r0->mouseDownButton;
			r20 = r1->button;
			if( r15 != r20 ) goto label$1020$113;
			r21 = r0->onClick;
			if( r21 == NULL ) hl_null_access();
			r21->hasValue ? ((void (*)(vdynamic*,hxd__Event))r21->fun)((vdynamic*)r21->value,r1) : ((void (*)(hxd__Event))r21->fun)(r1);
			label$1020$113:
			r15 = -1;
			r0->mouseDownButton = r15;
			goto label$1020$188;
		case 2:
			r21 = r0->onMove;
			if( r21 == NULL ) hl_null_access();
			r21->hasValue ? ((void (*)(vdynamic*,hxd__Event))r21->fun)((vdynamic*)r21->value,r1) : ((void (*)(hxd__Event))r21->fun)(r1);
			goto label$1020$188;
		case 3:
			r21 = r0->onOver;
			if( r21 == NULL ) hl_null_access();
			r21->hasValue ? ((void (*)(vdynamic*,hxd__Event))r21->fun)((vdynamic*)r21->value,r1) : ((void (*)(hxd__Event))r21->fun)(r1);
			r4 = r1->cancel;
			if( r4 ) goto label$1020$132;
			r22 = r0->cursor;
			if( !r22 ) goto label$1020$132;
			r24 = (hxd__$System)global$409;
			r23 = r24->setCursor;
			if( r23 == NULL ) hl_null_access();
			r22 = r0->cursor;
			r23->hasValue ? ((void (*)(vdynamic*,venum*))r23->fun)((vdynamic*)r23->value,r22) : ((void (*)(venum*))r23->fun)(r22);
			label$1020$132:
			goto label$1020$188;
		case 4:
			r15 = -1;
			r0->mouseDownButton = r15;
			r21 = r0->onOut;
			if( r21 == NULL ) hl_null_access();
			r21->hasValue ? ((void (*)(vdynamic*,hxd__Event))r21->fun)((vdynamic*)r21->value,r1) : ((void (*)(hxd__Event))r21->fun)(r1);
			r4 = r1->cancel;
			if( r4 ) goto label$1020$145;
			r24 = (hxd__$System)global$409;
			r23 = r24->setCursor;
			if( r23 == NULL ) hl_null_access();
			r22 = (venum*)global$410;
			r23->hasValue ? ((void (*)(vdynamic*,venum*))r23->fun)((vdynamic*)r23->value,r22) : ((void (*)(venum*))r23->fun)(r22);
			label$1020$145:
			goto label$1020$188;
		case 5:
			r21 = r0->onWheel;
			if( r21 == NULL ) hl_null_access();
			r21->hasValue ? ((void (*)(vdynamic*,hxd__Event))r21->fun)((vdynamic*)r21->value,r1) : ((void (*)(hxd__Event))r21->fun)(r1);
			goto label$1020$188;
		case 6:
			r21 = r0->onFocus;
			if( r21 == NULL ) hl_null_access();
			r21->hasValue ? ((void (*)(vdynamic*,hxd__Event))r21->fun)((vdynamic*)r21->value,r1) : ((void (*)(hxd__Event))r21->fun)(r1);
			goto label$1020$188;
		case 7:
			r21 = r0->onFocusLost;
			if( r21 == NULL ) hl_null_access();
			r21->hasValue ? ((void (*)(vdynamic*,hxd__Event))r21->fun)((vdynamic*)r21->value,r1) : ((void (*)(hxd__Event))r21->fun)(r1);
			goto label$1020$188;
		case 8:
			r21 = r0->onKeyDown;
			if( r21 == NULL ) hl_null_access();
			r21->hasValue ? ((void (*)(vdynamic*,hxd__Event))r21->fun)((vdynamic*)r21->value,r1) : ((void (*)(hxd__Event))r21->fun)(r1);
			goto label$1020$188;
		case 9:
			r21 = r0->onKeyUp;
			if( r21 == NULL ) hl_null_access();
			r21->hasValue ? ((void (*)(vdynamic*,hxd__Event))r21->fun)((vdynamic*)r21->value,r1) : ((void (*)(hxd__Event))r21->fun)(r1);
			goto label$1020$188;
		case 10:
			r4 = r0->enableRightButton;
			if( r4 ) goto label$1020$171;
			r15 = r1->button;
			r20 = 0;
			if( r15 != r20 ) goto label$1020$178;
			label$1020$171:
			r19 = (venum*)global$411;
			r1->kind = r19;
			r21 = r0->onRelease;
			if( r21 == NULL ) hl_null_access();
			r21->hasValue ? ((void (*)(vdynamic*,hxd__Event))r21->fun)((vdynamic*)r21->value,r1) : ((void (*)(hxd__Event))r21->fun)(r1);
			r19 = (venum*)global$412;
			r1->kind = r19;
			label$1020$178:
			r15 = -1;
			r0->mouseDownButton = r15;
			goto label$1020$188;
		case 11:
			r21 = r0->onTextInput;
			if( r21 == NULL ) hl_null_access();
			r21->hasValue ? ((void (*)(vdynamic*,hxd__Event))r21->fun)((vdynamic*)r21->value,r1) : ((void (*)(hxd__Event))r21->fun)(r1);
			goto label$1020$188;
		case 12:
			r21 = r0->onCheck;
			if( r21 == NULL ) hl_null_access();
			r21->hasValue ? ((void (*)(vdynamic*,hxd__Event))r21->fun)((vdynamic*)r21->value,r1) : ((void (*)(hxd__Event))r21->fun)(r1);
	}
	label$1020$188:
	return;
}

venum* h2d_Interactive_set_cursor(h2d__Interactive r0,venum* r1) {
	venum *r2;
	bool r4;
	hxd__$System r6;
	vclosure *r5;
	r0->cursor = r1;
	r4 = h2d_Interactive_isOver(r0);
	if( !r4 ) goto label$1021$10;
	r2 = r0->cursor;
	if( !r2 ) goto label$1021$10;
	r6 = (hxd__$System)global$409;
	r5 = r6->setCursor;
	if( r5 == NULL ) hl_null_access();
	r2 = r0->cursor;
	r5->hasValue ? ((void (*)(vdynamic*,venum*))r5->fun)((vdynamic*)r5->value,r2) : ((void (*)(venum*))r5->fun)(r2);
	label$1021$10:
	return r1;
}

void h2d_Interactive_eventToLocal(h2d__Interactive r0,hxd__Event r1) {
	double r3, r4, r5, r6, r7, r8, r9, r10, r11;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->relX;
	if( r0 == NULL ) hl_null_access();
	r4 = r0->absX;
	r3 = r3 - r4;
	r4 = r1->relY;
	r5 = r0->absY;
	r4 = r4 - r5;
	r5 = r0->width;
	r6 = r0->matA;
	r5 = r5 * r6;
	r6 = r0->width;
	r7 = r0->matC;
	r6 = r6 * r7;
	r7 = r0->height;
	r8 = r0->matB;
	r7 = r7 * r8;
	r8 = r0->height;
	r9 = r0->matD;
	r8 = r8 * r9;
	r9 = r6 * r7;
	r10 = r5 * r8;
	r9 = r9 - r10;
	r10 = r7 * r4;
	r11 = r8 * r3;
	r10 = r10 - r11;
	r10 = r10 / r9;
	r11 = r0->width;
	r10 = r10 * r11;
	r1->relX = r10;
	r10 = r6 * r3;
	r11 = r5 * r4;
	r10 = r10 - r11;
	r10 = r10 / r9;
	r11 = r0->height;
	r10 = r10 * r11;
	r1->relY = r10;
	return;
}

void h2d_Interactive_startDrag(h2d__Interactive r0,vclosure* r1,vclosure* r2) {
	venum *r6;
	hxd__Event r7;
	vclosure *r5;
	h2d__Scene r4;
	r4 = r0->scene;
	if( r4 == NULL ) hl_null_access();
	r6 = hl_alloc_enum(&type$1534,0);
	((Enum$1534*)r6)->p0 = (vclosure*)r1;
	((Enum$1534*)r6)->p1 = (h2d__Interactive)r0;
	r5 = hl_alloc_closure_ptr(&type$1533,fun$2403,r6);
	r7 = NULL;
	h2d_Scene_startDrag(r4,r5,r2,r7);
	return;
}

void h2d_Interactive_stopDrag(h2d__Interactive r0) {
	h2d__Scene r2;
	r2 = r0->scene;
	if( r2 == NULL ) hl_null_access();
	h2d_Scene_stopDrag(r2);
	return;
}

void h2d_Interactive_focus(h2d__Interactive r0) {
	vvirtual *r4;
	hxd__SceneEvents r3;
	h2d__Scene r2;
	r2 = r0->scene;
	if( !r2 ) goto label$1025$6;
	r2 = r0->scene;
	if( r2 == NULL ) hl_null_access();
	r3 = r2->events;
	if( r3 ) goto label$1025$7;
	label$1025$6:
	return;
	label$1025$7:
	r2 = r0->scene;
	if( r2 == NULL ) hl_null_access();
	r3 = r2->events;
	if( r3 == NULL ) hl_null_access();
	r4 = r0->$_f51;
	if( r4 ) goto label$1025$15;
	r4 = hl_to_virtual(&type$1316,(vdynamic*)r0);
	r0->$_f51 = r4;
	label$1025$15:
	hxd_SceneEvents_focus(r3,r4);
	return;
}

void h2d_Interactive_blur(h2d__Interactive r0) {
	bool r2;
	hxd__SceneEvents r3;
	h2d__Scene r4;
	r2 = h2d_Interactive_hasFocus(r0);
	if( !r2 ) goto label$1026$7;
	r4 = r0->scene;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->events;
	if( r3 == NULL ) hl_null_access();
	hxd_SceneEvents_blur(r3);
	label$1026$7:
	return;
}

bool h2d_Interactive_isOver(h2d__Interactive r0) {
	vvirtual *r4;
	bool r3;
	hxd__SceneEvents r2;
	h2d__Scene r1;
	r1 = r0->scene;
	if( !r1 ) goto label$1027$16;
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->events;
	if( !r2 ) goto label$1027$16;
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->events;
	if( r2 == NULL ) hl_null_access();
	r4 = r2->currentOver;
	if( r4 ? (r0 && r4->value == (vdynamic*)r0) : (r0 == NULL) ) goto label$1027$14;
	r3 = false;
	goto label$1027$15;
	label$1027$14:
	r3 = true;
	label$1027$15:
	return r3;
	label$1027$16:
	r3 = false;
	return r3;
}

bool h2d_Interactive_hasFocus(h2d__Interactive r0) {
	vvirtual *r4;
	bool r3;
	hxd__SceneEvents r2;
	h2d__Scene r1;
	r1 = r0->scene;
	if( !r1 ) goto label$1028$16;
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->events;
	if( !r2 ) goto label$1028$16;
	r1 = r0->scene;
	if( r1 == NULL ) hl_null_access();
	r2 = r1->events;
	if( r2 == NULL ) hl_null_access();
	r4 = r2->currentFocus;
	if( r4 ? (r0 && r4->value == (vdynamic*)r0) : (r0 == NULL) ) goto label$1028$14;
	r3 = false;
	goto label$1028$15;
	label$1028$14:
	r3 = true;
	label$1028$15:
	return r3;
	label$1028$16:
	r3 = false;
	return r3;
}

void h2d_Interactive_onTextInput(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onCheck(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onKeyDown(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onKeyUp(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onFocusLost(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onFocus(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onWheel(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onMove(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onClick(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onRelease(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onPush(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onOut(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_onOver(h2d__Interactive r0,hxd__Event r1) {
	return;
}

void h2d_Interactive_new(h2d__Interactive r0,double r1,double r2,h2d__Object r3) {
	venum *r8;
	bool r6;
	vclosure *r4;
	int r5;
	r4 = r0->onOver;
	if( r4 ) goto label$1052$4;
	r4 = hl_alloc_closure_ptr(&type$1531,h2d_Interactive_onOver,r0);
	r0->onOver = r4;
	label$1052$4:
	r4 = r0->onOut;
	if( r4 ) goto label$1052$8;
	r4 = hl_alloc_closure_ptr(&type$1531,h2d_Interactive_onOut,r0);
	r0->onOut = r4;
	label$1052$8:
	r4 = r0->onPush;
	if( r4 ) goto label$1052$12;
	r4 = hl_alloc_closure_ptr(&type$1531,h2d_Interactive_onPush,r0);
	r0->onPush = r4;
	label$1052$12:
	r4 = r0->onRelease;
	if( r4 ) goto label$1052$16;
	r4 = hl_alloc_closure_ptr(&type$1531,h2d_Interactive_onRelease,r0);
	r0->onRelease = r4;
	label$1052$16:
	r4 = r0->onClick;
	if( r4 ) goto label$1052$20;
	r4 = hl_alloc_closure_ptr(&type$1531,h2d_Interactive_onClick,r0);
	r0->onClick = r4;
	label$1052$20:
	r4 = r0->onMove;
	if( r4 ) goto label$1052$24;
	r4 = hl_alloc_closure_ptr(&type$1531,h2d_Interactive_onMove,r0);
	r0->onMove = r4;
	label$1052$24:
	r4 = r0->onWheel;
	if( r4 ) goto label$1052$28;
	r4 = hl_alloc_closure_ptr(&type$1531,h2d_Interactive_onWheel,r0);
	r0->onWheel = r4;
	label$1052$28:
	r4 = r0->onFocus;
	if( r4 ) goto label$1052$32;
	r4 = hl_alloc_closure_ptr(&type$1531,h2d_Interactive_onFocus,r0);
	r0->onFocus = r4;
	label$1052$32:
	r4 = r0->onFocusLost;
	if( r4 ) goto label$1052$36;
	r4 = hl_alloc_closure_ptr(&type$1531,h2d_Interactive_onFocusLost,r0);
	r0->onFocusLost = r4;
	label$1052$36:
	r4 = r0->onKeyUp;
	if( r4 ) goto label$1052$40;
	r4 = hl_alloc_closure_ptr(&type$1531,h2d_Interactive_onKeyUp,r0);
	r0->onKeyUp = r4;
	label$1052$40:
	r4 = r0->onKeyDown;
	if( r4 ) goto label$1052$44;
	r4 = hl_alloc_closure_ptr(&type$1531,h2d_Interactive_onKeyDown,r0);
	r0->onKeyDown = r4;
	label$1052$44:
	r4 = r0->onCheck;
	if( r4 ) goto label$1052$48;
	r4 = hl_alloc_closure_ptr(&type$1531,h2d_Interactive_onCheck,r0);
	r0->onCheck = r4;
	label$1052$48:
	r4 = r0->onTextInput;
	if( r4 ) goto label$1052$52;
	r4 = hl_alloc_closure_ptr(&type$1531,h2d_Interactive_onTextInput,r0);
	r0->onTextInput = r4;
	label$1052$52:
	r5 = -1;
	r0->mouseDownButton = r5;
	r6 = false;
	r0->propagateEvents = r6;
	r6 = false;
	r0->cancelEvents = r6;
	h2d_Drawable_new(((h2d__Drawable)r0),r3);
	r0->width = r1;
	r0->height = r2;
	r8 = (venum*)global$406;
	r8 = h2d_Interactive_set_cursor(r0,r8);
	return;
}

