﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

hxd__res__Model hxd_res_Any_toModel(hxd__res__Any r0) {
	hxd__res__$Model r5;
	hxd__fs__FileEntry r4;
	String r3;
	hxd__res__Resource r1;
	hxd__res__Model r6;
	hxd__res__Loader r2;
	r2 = r0->loader;
	if( r2 == NULL ) hl_null_access();
	r4 = r0->entry;
	if( r4 == NULL ) hl_null_access();
	r3 = ((String (*)(hxd__fs__FileEntry))r4->$type->vobj_proto[15])(r4);
	r5 = (hxd__res__$Model)global$707;
	r1 = hxd_res_Loader_loadCache(r2,r3,((hl__Class)r5));
	r6 = (hxd__res__Model)r1;
	return r6;
}

h3d__mat__Texture hxd_res_Any_toTexture(hxd__res__Any r0) {
	hxd__res__Image r2;
	h3d__mat__Texture r1;
	r2 = hxd_res_Any_toImage(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = hxd_res_Image_toTexture(r2);
	return r1;
}

h2d__Tile hxd_res_Any_toTile(hxd__res__Any r0) {
	h2d__Tile r1;
	hxd__res__Image r2;
	r2 = hxd_res_Any_toImage(r0);
	if( r2 == NULL ) hl_null_access();
	r1 = hxd_res_Image_toTile(r2);
	return r1;
}

String hxd_res_Any_toText(hxd__res__Any r0) {
	hxd__fs__FileEntry r3;
	String r1;
	haxe__io__Bytes r2;
	r3 = r0->entry;
	if( r3 == NULL ) hl_null_access();
	r2 = ((haxe__io__Bytes (*)(hxd__fs__FileEntry))r3->$type->vobj_proto[1])(r3);
	if( r2 == NULL ) hl_null_access();
	r1 = haxe_io_Bytes_toString(r2);
	return r1;
}

hxd__res__Image hxd_res_Any_toImage(hxd__res__Any r0) {
	hxd__fs__FileEntry r4;
	String r3;
	hxd__res__Resource r1;
	hxd__res__Loader r2;
	hxd__res__$Image r5;
	hxd__res__Image r6;
	r2 = r0->loader;
	if( r2 == NULL ) hl_null_access();
	r4 = r0->entry;
	if( r4 == NULL ) hl_null_access();
	r3 = ((String (*)(hxd__fs__FileEntry))r4->$type->vobj_proto[15])(r4);
	r5 = (hxd__res__$Image)global$167;
	r1 = hxd_res_Loader_loadCache(r2,r3,((hl__Class)r5));
	r6 = (hxd__res__Image)r1;
	return r6;
}

hxd__res__Sound hxd_res_Any_toSound(hxd__res__Any r0) {
	hxd__fs__FileEntry r4;
	String r3;
	hxd__res__Resource r1;
	hxd__res__Sound r6;
	hxd__res__Loader r2;
	hxd__res__$Sound r5;
	r2 = r0->loader;
	if( r2 == NULL ) hl_null_access();
	r4 = r0->entry;
	if( r4 == NULL ) hl_null_access();
	r3 = ((String (*)(hxd__fs__FileEntry))r4->$type->vobj_proto[15])(r4);
	r5 = (hxd__res__$Sound)global$1288;
	r1 = hxd_res_Loader_loadCache(r2,r3,((hl__Class)r5));
	r6 = (hxd__res__Sound)r1;
	return r6;
}

hxd__res__Prefab hxd_res_Any_toPrefab(hxd__res__Any r0) {
	hxd__fs__FileEntry r4;
	String r3;
	hxd__res__Resource r1;
	hxd__res__$Prefab r5;
	hxd__res__Loader r2;
	hxd__res__Prefab r6;
	r2 = r0->loader;
	if( r2 == NULL ) hl_null_access();
	r4 = r0->entry;
	if( r4 == NULL ) hl_null_access();
	r3 = ((String (*)(hxd__fs__FileEntry))r4->$type->vobj_proto[15])(r4);
	r5 = (hxd__res__$Prefab)global$1289;
	r1 = hxd_res_Loader_loadCache(r2,r3,((hl__Class)r5));
	r6 = (hxd__res__Prefab)r1;
	return r6;
}

hxd__res__Resource hxd_res_Any_to(hxd__res__Any r0,hl__Class r1) {
	hxd__fs__FileEntry r5;
	String r4;
	hxd__res__Resource r2;
	hxd__res__Loader r3;
	r3 = r0->loader;
	if( r3 == NULL ) hl_null_access();
	r5 = r0->entry;
	if( r5 == NULL ) hl_null_access();
	r4 = ((String (*)(hxd__fs__FileEntry))r5->$type->vobj_proto[15])(r5);
	r2 = hxd_res_Loader_loadCache(r3,r4,r1);
	return r2;
}

hxd__impl__ArrayIterator_hxd_res_Any hxd_res_Any_iterator(hxd__res__Any r0) {
	hxd__fs__FileEntry r7;
	hxd__impl__ArrayIterator_hxd_res_Any r13;
	hl__types__ArrayObj r1, r11;
	hl_type *r3;
	hxd__impl__ArrayIterator_hxd_fs_FileEntry r6;
	hxd__res__Loader r10;
	vdynamic *r12;
	hxd__res__Any r9;
	int r4, r8;
	varray *r2;
	r3 = &type$557;
	r4 = 0;
	r2 = hl_alloc_array(r3,r4);
	r1 = hl_types_ArrayObj_alloc(r2);
	r7 = r0->entry;
	if( r7 == NULL ) hl_null_access();
	r6 = ((hxd__impl__ArrayIterator_hxd_fs_FileEntry (*)(hxd__fs__FileEntry))r7->$type->vobj_proto[12])(r7);
	label$2737$7:
	if( r6 == NULL ) hl_null_access();
	r4 = r6->i;
	r8 = r6->l;
	if( r4 >= r8 ) goto label$2737$31;
	if( r1 == NULL ) hl_null_access();
	r9 = (hxd__res__Any)hl_alloc_obj(hxd__res__Any__val);
	r10 = r0->loader;
	r11 = r6->a;
	if( r11 == NULL ) hl_null_access();
	r4 = r6->i;
	r8 = r4;
	++r4;
	r6->i = r4;
	r4 = r11->length;
	if( ((unsigned)r8) < ((unsigned)r4) ) goto label$2737$25;
	r7 = NULL;
	goto label$2737$28;
	label$2737$25:
	r2 = r11->array;
	r12 = ((vdynamic**)(r2 + 1))[r8];
	r7 = (hxd__fs__FileEntry)r12;
	label$2737$28:
	hxd_res_Any_new(r9,r10,r7);
	r4 = hl_types_ArrayObj_push(r1,((vdynamic*)r9));
	goto label$2737$7;
	label$2737$31:
	r13 = (hxd__impl__ArrayIterator_hxd_res_Any)hl_alloc_obj(hxd__impl__ArrayIterator_hxd_res_Any__val);
	hxd_impl_ArrayIterator_hxd_res_Any_new(r13,r1);
	return r13;
}

void hxd_res_Any_new(hxd__res__Any r0,hxd__res__Loader r1,hxd__fs__FileEntry r2) {
	hxd_res_Resource_new(((hxd__res__Resource)r0),r2);
	r0->loader = r1;
	return;
}

hxd__res__Any hxd_res_Any_fromBytes(String r0,haxe__io__Bytes r1) {
	vvirtual *r6;
	hxd__res___Any__SingleFileSystem r4;
	hxd__res__Loader r3;
	hxd__res__Any r2;
	r3 = (hxd__res__Loader)hl_alloc_obj(hxd__res__Loader__val);
	r4 = (hxd__res___Any__SingleFileSystem)hl_alloc_obj(hxd__res___Any__SingleFileSystem__val);
	hxd_res__Any_SingleFileSystem_new(r4,r0,r1);
	if( r4 ) goto label$2738$6;
	r6 = NULL;
	goto label$2738$10;
	label$2738$6:
	r6 = r4->$_f0;
	if( r6 ) goto label$2738$10;
	r6 = hl_to_virtual(&type$325,(vdynamic*)r4);
	r4->$_f0 = r6;
	label$2738$10:
	hxd_res_Loader_new(r3,r6);
	r2 = hxd_res_Loader_load(r3,r0);
	return r2;
}

