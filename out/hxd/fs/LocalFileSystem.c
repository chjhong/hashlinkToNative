﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void hxd_fs_LocalFileSystem_addConvert(hxd__fs__LocalFileSystem r0,hxd__fs__Convert r1) {
	String r4;
	haxe__ds__StringMap r3;
	r3 = r0->converts;
	if( r3 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r4 = r1->sourceExt;
	haxe_ds_StringMap_set(r3,r4,((vdynamic*)r1));
	return;
}

String hxd_fs_LocalFileSystem_getAbsolutePath(hxd__fs__LocalFileSystem r0,hxd__fs__FileEntry r1) {
	hxd__fs___LocalFileSystem__LocalEntry r3;
	String r2;
	r3 = (hxd__fs___LocalFileSystem__LocalEntry)hl_dyn_castp(&r1,&type$302,&type$3570);
	if( r3 == NULL ) hl_null_access();
	r2 = r3->file;
	return r2;
}

hxd__fs__FileEntry hxd_fs_LocalFileSystem_getRoot(hxd__fs__LocalFileSystem r0) {
	hxd__fs__FileEntry r1;
	r1 = r0->root;
	return r1;
}

bool hxd_fs_LocalFileSystem_checkPath(hxd__fs__LocalFileSystem r0,String r1) {
	String r2, r7;
	hl__types__ArrayObj r12, r13;
	haxe__ds__StringMap r6, r9;
	hl_type *r15;
	bool r8, r10;
	haxe__io__Path r3;
	vdynamic *r5, *r18, *r19;
	varray *r14;
	int r11, r16, r17;
	hl_trap_ctx trap$0;
	r3 = (haxe__io__Path)hl_alloc_obj(haxe__io__Path__val);
	haxe_io_Path_new(r3,r1);
	r2 = r3->dir;
	r6 = r0->directoryCache;
	if( r6 == NULL ) hl_null_access();
	r5 = haxe_ds_StringMap_get(r6,r2);
	r6 = (haxe__ds__StringMap)r5;
	r8 = false;
	if( r6 ) goto label$2747$46;
	r10 = true;
	r8 = r10;
	r9 = (haxe__ds__StringMap)hl_alloc_obj(haxe__ds__StringMap__val);
	haxe_ds_StringMap_new(r9);
	r6 = r9;
	r11 = 0;
	hl_trap(trap$0,r5,label$2747$20);
	r13 = sys_FileSystem_readDirectory(r2);
	r12 = r13;
	hl_endtrap(trap$0);
	goto label$2747$25;
	label$2747$20:
	r15 = &type$13;
	r16 = 0;
	r14 = hl_alloc_array(r15,r16);
	r13 = hl_types_ArrayObj_alloc(r14);
	r12 = r13;
	label$2747$25:
	if( r12 == NULL ) hl_null_access();
	r17 = r12->length;
	if( r11 >= r17 ) goto label$2747$43;
	if( r6 == NULL ) hl_null_access();
	r16 = r11;
	++r11;
	r17 = r12->length;
	if( ((unsigned)r16) < ((unsigned)r17) ) goto label$2747$36;
	r7 = NULL;
	goto label$2747$39;
	label$2747$36:
	r14 = r12->array;
	r18 = ((vdynamic**)(r14 + 1))[r16];
	r7 = (String)r18;
	label$2747$39:
	r10 = true;
	r18 = hl_alloc_dynbool(r10);
	haxe_ds_StringMap_set(r6,r7,r18);
	goto label$2747$25;
	label$2747$43:
	r9 = r0->directoryCache;
	if( r9 == NULL ) hl_null_access();
	haxe_ds_StringMap_set(r9,r2,((vdynamic*)r6));
	label$2747$46:
	if( r6 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	if( r2 == NULL ) hl_null_access();
	r11 = r2->length;
	r16 = 1;
	r11 = r11 + r16;
	r19 = NULL;
	r7 = String_substr(r1,r11,r19);
	r10 = haxe_ds_StringMap_exists(r6,r7);
	if( r10 ) goto label$2747$64;
	if( r8 ) goto label$2747$62;
	r9 = r0->directoryCache;
	if( r9 == NULL ) hl_null_access();
	r10 = haxe_ds_StringMap_remove(r9,r2);
	r10 = hxd_fs_LocalFileSystem_checkPath(r0,r1);
	return r10;
	label$2747$62:
	r10 = false;
	return r10;
	label$2747$64:
	r10 = true;
	return r10;
}

hxd__fs___LocalFileSystem__LocalEntry hxd_fs_LocalFileSystem_open(hxd__fs__LocalFileSystem r0,String r1,bool* r2) {
	hxd__fs___LocalFileSystem__LocalEntry r10, r12;
	String r6, r11, r14;
	hl__types__ArrayObj r13;
	vvirtual *r7, *r9;
	haxe__ds__StringMap r5;
	bool r3, r15;
	vdynamic *r4;
	if( r2 ) goto label$2748$3;
	r3 = true;
	goto label$2748$4;
	label$2748$3:
	r3 = *r2;
	label$2748$4:
	r5 = r0->fileCache;
	if( r5 == NULL ) hl_null_access();
	r4 = haxe_ds_StringMap_get(r5,r1);
	r7 = hl_to_virtual(&type$3592,(vdynamic*)r4);
	if( !r7 ) goto label$2748$12;
	if( r7 == NULL ) hl_null_access();
	r10 = hl_vfields(r7)[0] ? (*(hxd__fs___LocalFileSystem__LocalEntry*)(hl_vfields(r7)[0])) : (hxd__fs___LocalFileSystem__LocalEntry)hl_dyn_getp(r7->value,114/*r*/,&type$3570);
	return r10;
	label$2748$12:
	r10 = NULL;
	r6 = r0->baseDir;
	r6 = String___add__(r6,r1);
	r6 = sys_FileSystem_fullPath(r6);
	if( r6 ) goto label$2748$19;
	r12 = NULL;
	return r12;
	label$2748$19:
	if( r6 == NULL ) hl_null_access();
	r14 = (String)global$196;
	r13 = String_split(r6,r14);
	if( r13 == NULL ) hl_null_access();
	r11 = (String)global$207;
	r11 = hl_types_ArrayObj_join(r13,r11);
	r6 = r11;
	if( !r3 ) goto label$2748$34;
	r14 = r0->baseDir;
	r14 = String___add__(r14,r1);
	if( r11 != r14 && (!r11 || !r14 || String___compare(r11,(vdynamic*)r14) != 0) ) goto label$2748$44;
	r15 = sys_FileSystem_exists(r11);
	if( !r15 ) goto label$2748$44;
	r15 = hxd_fs_LocalFileSystem_checkPath(r0,r11);
	if( !r15 ) goto label$2748$44;
	label$2748$34:
	r12 = (hxd__fs___LocalFileSystem__LocalEntry)hl_alloc_obj(hxd__fs___LocalFileSystem__LocalEntry__val);
	if( r1 == NULL ) hl_null_access();
	r14 = (String)global$207;
	r13 = String_split(r1,r14);
	if( r13 == NULL ) hl_null_access();
	r4 = hl_types_ArrayObj_pop(r13);
	r11 = (String)r4;
	hxd_fs__LocalFileSystem_LocalEntry_new(r12,r0,r11,r1,r6);
	r10 = r12;
	hxd_fs_LocalFileSystem_convert(r0,r12);
	label$2748$44:
	r5 = r0->fileCache;
	if( r5 == NULL ) hl_null_access();
	r9 = hl_alloc_virtual(&type$3592);
	if( hl_vfields(r9)[0] ) *(hxd__fs___LocalFileSystem__LocalEntry*)(hl_vfields(r9)[0]) = (hxd__fs___LocalFileSystem__LocalEntry)r10; else hl_dyn_setp(r9->value,114/*r*/,&type$3570,r10);
	haxe_ds_StringMap_set(r5,r1,((vdynamic*)r9));
	return r10;
}

bool hxd_fs_LocalFileSystem_exists(hxd__fs__LocalFileSystem r0,String r1) {
	bool *r4;
	hxd__fs___LocalFileSystem__LocalEntry r3, r5;
	bool r2;
	r4 = NULL;
	r3 = hxd_fs_LocalFileSystem_open(r0,r1,r4);
	r5 = NULL;
	if( r3 != r5 ) goto label$2749$6;
	r2 = false;
	goto label$2749$7;
	label$2749$6:
	r2 = true;
	label$2749$7:
	return r2;
}

hxd__fs___LocalFileSystem__LocalEntry hxd_fs_LocalFileSystem_get(hxd__fs__LocalFileSystem r0,String r1) {
	bool *r3;
	hxd__fs___LocalFileSystem__LocalEntry r2;
	hxd__fs__NotFound r5;
	r3 = NULL;
	r2 = hxd_fs_LocalFileSystem_open(r0,r1,r3);
	if( r2 ) goto label$2750$6;
	r5 = (hxd__fs__NotFound)hl_alloc_obj(hxd__fs__NotFound__val);
	hxd_fs_NotFound_new(r5,r1);
	hl_throw((vdynamic*)r5);
	label$2750$6:
	return r2;
}

void hxd_fs_LocalFileSystem_dispose(hxd__fs__LocalFileSystem r0) {
	haxe__ds__StringMap r1;
	r1 = (haxe__ds__StringMap)hl_alloc_obj(haxe__ds__StringMap__val);
	haxe_ds_StringMap_new(r1);
	r0->fileCache = r1;
	return;
}

double hxd_fs_LocalFileSystem_getFileTime(hxd__fs__LocalFileSystem r0,String r1) {
	vvirtual *r4;
	Date r3;
	double r2;
	r4 = sys_FileSystem_stat(r1);
	if( r4 == NULL ) hl_null_access();
	r3 = hl_vfields(r4)[6] ? (*(Date*)(hl_vfields(r4)[6])) : (Date)hl_dyn_getp(r4->value,262801146/*mtime*/,&type$24);
	if( r3 == NULL ) hl_null_access();
	r2 = Date_getTime(r3);
	return r2;
}

void hxd_fs_LocalFileSystem_convert(hxd__fs__LocalFileSystem r0,hxd__fs___LocalFileSystem__LocalEntry r1) {
	vdynobj *r25;
	String r4, r7, r9, r10, r13, r24, r28, r36, r40, r43, r45, r46;
	hl__types__ArrayObj r27, r31, r44;
	haxe__ds__StringMap r6, r16;
	venum *r35, *r51;
	haxe__io__Path r26;
	bool r19, r20, r41;
	haxe__io__Bytes r15, r33;
	EReg r42;
	haxe__format__JsonParser r23;
	hxd__fs__LocalFileSystem r2;
	hl__types__ArrayBase r38;
	vclosure *r34, *r49, *r50;
	double r17, r18;
	int *r47;
	vdynamic *r5, *r14, *r21, *r22;
	vbyte *r48;
	varray *r32;
	int r11, r12, r29, r30, r37, r39;
	hxd__fs__Convert r8;
	hl_trap_ctx trap$0;
	r2 = r0;
	if( r1 == NULL ) hl_null_access();
	r4 = hxd_fs_FileEntry_get_extension(((hxd__fs__FileEntry)r1));
	r6 = r0->converts;
	if( r6 == NULL ) hl_null_access();
	r5 = haxe_ds_StringMap_get(r6,r4);
	r8 = (hxd__fs__Convert)r5;
	if( r8 ) goto label$2753$9;
	return;
	label$2753$9:
	r7 = hxd_fs__LocalFileSystem_LocalEntry_get_path(r1);
	r9 = r0->tmpDir;
	if( r7 == NULL ) hl_null_access();
	r11 = 0;
	if( r4 == NULL ) hl_null_access();
	r12 = r4->length;
	r12 = -r12;
	r14 = hl_alloc_dynamic(&type$3);
	r14->v.i = r12;
	r10 = String_substr(r7,r11,r14);
	r9 = String___add__(r9,r10);
	if( r8 == NULL ) hl_null_access();
	r10 = r8->destExt;
	r9 = String___add__(r9,r10);
	r1->file = r9;
	r6 = r0->times;
	if( r6 ) goto label$2753$39;
	hl_trap(trap$0,r5,label$2753$36);
	r10 = r0->tmpDir;
	r13 = (String)global$1245;
	r10 = String___add__(r10,r13);
	r15 = hxd_File_getBytes(r10);
	if( r15 == NULL ) hl_null_access();
	r10 = haxe_io_Bytes_toString(r15);
	r5 = haxe_Unserializer_run(r10);
	r16 = (haxe__ds__StringMap)hl_dyn_castp(&r5,&type$9,&type$207);
	hl_endtrap(trap$0);
	goto label$2753$38;
	label$2753$36:
	r16 = (haxe__ds__StringMap)hl_alloc_obj(haxe__ds__StringMap__val);
	haxe_ds_StringMap_new(r16);
	label$2753$38:
	r0->times = r16;
	label$2753$39:
	r10 = r0->baseDir;
	r10 = String___add__(r10,r7);
	r17 = hxd_fs_LocalFileSystem_getFileTime(r0,r10);
	r11 = 1000;
	r18 = (double)r11;
	r17 = r17 / r18;
	r11 = hl_math_floor(r17);
	r19 = hxd_File_exists(r9);
	if( !r19 ) goto label$2753$58;
	r6 = r0->times;
	if( r6 == NULL ) hl_null_access();
	r5 = haxe_ds_StringMap_get(r6,r7);
	r14 = (vdynamic*)r5;
	r21 = hl_alloc_dynamic(&type$3);
	r21->v.i = r11;
	if( r21 == r14 || (r21 && r14 && (r21->v.i == r14->v.i)) ) goto label$2753$56;
	r20 = false;
	goto label$2753$57;
	label$2753$56:
	r20 = true;
	label$2753$57:
	goto label$2753$59;
	label$2753$58:
	r20 = false;
	label$2753$59:
	if( !r20 ) goto label$2753$61;
	return;
	label$2753$61:
	r5 = r0->hashes;
	if( r5 ) goto label$2753$79;
	hl_trap(trap$0,r5,label$2753$76);
	r23 = (haxe__format__JsonParser)hl_alloc_obj(haxe__format__JsonParser__val);
	r13 = r0->tmpDir;
	r24 = (String)global$1246;
	r13 = String___add__(r13,r24);
	r15 = hxd_File_getBytes(r13);
	if( r15 == NULL ) hl_null_access();
	r13 = haxe_io_Bytes_toString(r15);
	haxe_format_JsonParser_new(r23,r13);
	r22 = haxe_format_JsonParser_doParse(r23);
	r5 = r22;
	hl_endtrap(trap$0);
	goto label$2753$78;
	label$2753$76:
	r25 = hl_alloc_dynobj();
	r5 = ((vdynamic*)r25);
	label$2753$78:
	r0->hashes = r5;
	label$2753$79:
	r5 = r0->hashes;
	r26 = (haxe__io__Path)hl_alloc_obj(haxe__io__Path__val);
	haxe_io_Path_new(r26,r7);
	r13 = r26->dir;
	if( !r13 ) goto label$2753$107;
	r12 = 0;
	if( r13 == NULL ) hl_null_access();
	r28 = (String)global$207;
	r27 = String_split(r13,r28);
	label$2753$88:
	if( r27 == NULL ) hl_null_access();
	r30 = r27->length;
	if( r12 >= r30 ) goto label$2753$107;
	r30 = r27->length;
	if( ((unsigned)r12) < ((unsigned)r30) ) goto label$2753$96;
	r24 = NULL;
	goto label$2753$99;
	label$2753$96:
	r32 = r27->array;
	r22 = ((vdynamic**)(r32 + 1))[r12];
	r24 = (String)r22;
	label$2753$99:
	++r12;
	r22 = Reflect_field(r5,r24);
	if( r22 ) goto label$2753$105;
	r25 = hl_alloc_dynobj();
	r22 = ((vdynamic*)r25);
	Reflect_setField(r5,r24,((vdynamic*)r25));
	label$2753$105:
	r5 = r22;
	goto label$2753$88;
	label$2753$107:
	r15 = hxd_File_getBytes(r10);
	r33 = haxe_crypto_Sha1_make(r15);
	if( r33 == NULL ) hl_null_access();
	r24 = haxe_io_Bytes_toHex(r33);
	r35 = hl_alloc_enum(&type$3597,0);
	((Enum$3597*)r35)->p0 = (String)r7;
	((Enum$3597*)r35)->p1 = (int)r11;
	((Enum$3597*)r35)->p2 = (hxd__fs__LocalFileSystem)r2;
	r34 = hl_alloc_closure_ptr(&type$3596,fun$3600,r35);
	r20 = hxd_File_exists(r9);
	if( !r20 ) goto label$2753$125;
	if( r1 == NULL ) hl_null_access();
	r36 = r1->name;
	r22 = Reflect_field(r5,r36);
	{ int i = hl_dyn_compare((vdynamic*)r24,(vdynamic*)r22); if( i != 0 ) goto label$2753$125; };
	if( r34 == NULL ) hl_null_access();
	r34->hasValue ? ((void (*)(vdynamic*))r34->fun)((vdynamic*)r34->value) : ((void (*)(void))r34->fun)();
	return;
	label$2753$125:
	if( r1 == NULL ) hl_null_access();
	r28 = r1->name;
	Reflect_setField(r5,r28,((vdynamic*)r24));
	r20 = false;
	if( r7 == NULL ) hl_null_access();
	r36 = (String)global$207;
	r27 = String_split(r7,r36);
	if( r27 == NULL ) hl_null_access();
	r22 = hl_types_ArrayObj_pop(r27);
	r28 = (String)r22;
	r12 = 0;
	r29 = r27->length;
	label$2753$137:
	if( r12 >= r29 ) goto label$2753$155;
	if( r27 == NULL ) hl_null_access();
	r30 = 0;
	r37 = r12;
	++r12;
	r39 = 1;
	r37 = r37 + r39;
	r14 = hl_alloc_dynamic(&type$3);
	r14->v.i = r37;
	r38 = hl_types_ArrayObj_slice(r27,r30,r14);
	r31 = (hl__types__ArrayObj)hl_dyn_castp(&r38,&type$32,&type$46);
	if( r31 == NULL ) hl_null_access();
	r28 = (String)global$207;
	r28 = hl_types_ArrayObj_join(r31,r28);
	r36 = r0->tmpDir;
	r36 = String___add__(r36,r28);
	sys_FileSystem_createDirectory(r36);
	goto label$2753$137;
	label$2753$155:
	r41 = sys_FileSystem_exists(r9);
	if( r41 ) goto label$2753$280;
	r28 = r0->tmpDir;
	r36 = (String)global$1227;
	r28 = String___add__(r28,r36);
	r42 = (EReg)hl_alloc_obj(EReg__val);
	r36 = (String)global$1247;
	r40 = (String)global$7;
	EReg_new(r42,r36,r40);
	r40 = (String)global$1228;
	r36 = EReg_replace(r42,r7,r40);
	r28 = String___add__(r28,r36);
	r36 = (String)global$210;
	r28 = String___add__(r28,r36);
	if( r8 == NULL ) hl_null_access();
	r36 = r8->destExt;
	r28 = String___add__(r28,r36);
	r41 = sys_FileSystem_exists(r28);
	if( !r41 ) goto label$2753$280;
	r36 = (String)global$1248;
	r41 = sys_FileSystem_exists(r36);
	if( !r41 ) goto label$2753$280;
	r36 = sys_FileSystem_fullPath(r28);
	if( r36 == NULL ) hl_null_access();
	r40 = (String)global$196;
	r31 = String_split(r36,r40);
	if( r31 == NULL ) hl_null_access();
	r36 = (String)global$207;
	r36 = hl_types_ArrayObj_join(r31,r36);
	r28 = r36;
	r36 = Sys_getCwd();
	if( r7 == NULL ) hl_null_access();
	r43 = (String)global$207;
	r31 = String_split(r7,r43);
	if( r31 == NULL ) hl_null_access();
	r22 = hl_types_ArrayObj_pop(r31);
	r40 = (String)r22;
	r12 = 0;
	r29 = r31->length;
	label$2753$194:
	if( r12 >= r29 ) goto label$2753$247;
	if( r31 == NULL ) hl_null_access();
	r30 = 0;
	r37 = r12;
	++r12;
	r39 = 1;
	r37 = r37 + r39;
	r14 = hl_alloc_dynamic(&type$3);
	r14->v.i = r37;
	r38 = hl_types_ArrayObj_slice(r31,r30,r14);
	r44 = (hl__types__ArrayObj)hl_dyn_castp(&r38,&type$32,&type$46);
	if( r44 == NULL ) hl_null_access();
	r40 = (String)global$207;
	r40 = hl_types_ArrayObj_join(r44,r40);
	r6 = r0->addedPaths;
	if( r6 == NULL ) hl_null_access();
	r41 = haxe_ds_StringMap_exists(r6,r40);
	if( !r41 ) goto label$2753$213;
	goto label$2753$194;
	label$2753$213:
	r6 = r0->addedPaths;
	if( r6 == NULL ) hl_null_access();
	r41 = true;
	r22 = hl_alloc_dynbool(r41);
	haxe_ds_StringMap_set(r6,r40,r22);
	hl_trap(trap$0,r22,label$2753$246);
	r43 = (String)global$1249;
	r45 = r0->tmpDir;
	if( r45 == NULL ) hl_null_access();
	if( r36 == NULL ) hl_null_access();
	r30 = r36->length;
	r14 = NULL;
	r45 = String_substr(r45,r30,r14);
	r43 = String___add__(r43,r45);
	r43 = String___add__(r43,r40);
	r45 = (String)global$1250;
	r45 = String___add__(r45,r43);
	Sys_println(((vdynamic*)r45));
	r44 = NULL;
	r30 = Sys_command(r43,r44);
	r39 = 0;
	if( r30 == r39 ) goto label$2753$245;
	r45 = (String)global$1192;
	r45 = String___add__(r45,r43);
	r46 = (String)global$1193;
	r45 = String___add__(r45,r46);
	r37 = r30;
	r47 = &r37;
	r48 = hl_itos(r37,r47);
	r46 = String___alloc__(r48,r37);
	r45 = String___add__(r45,r46);
	hl_throw((vdynamic*)r45);
	label$2753$245:
	hl_endtrap(trap$0);
	label$2753$246:
	goto label$2753$194;
	label$2753$247:
	r40 = (String)global$1251;
	if( r28 == NULL ) hl_null_access();
	if( r36 == NULL ) hl_null_access();
	r12 = r36->length;
	r14 = NULL;
	r43 = String_substr(r28,r12,r14);
	r40 = String___add__(r40,r43);
	r43 = (String)global$192;
	r40 = String___add__(r40,r43);
	if( r9 == NULL ) hl_null_access();
	r12 = r36->length;
	r14 = NULL;
	r43 = String_substr(r9,r12,r14);
	r40 = String___add__(r40,r43);
	r43 = (String)global$1250;
	r43 = String___add__(r43,r40);
	Sys_println(((vdynamic*)r43));
	r44 = NULL;
	r12 = Sys_command(r40,r44);
	r30 = 0;
	if( r12 == r30 ) goto label$2753$278;
	r43 = (String)global$1192;
	r43 = String___add__(r43,r40);
	r45 = (String)global$1193;
	r43 = String___add__(r43,r45);
	r29 = r12;
	r47 = &r29;
	r48 = hl_itos(r29,r47);
	r45 = String___alloc__(r48,r29);
	r43 = String___add__(r43,r45);
	hl_throw((vdynamic*)r43);
	label$2753$278:
	r41 = true;
	r20 = r41;
	label$2753$280:
	if( r20 ) goto label$2753$301;
	r49 = r0->onConvert;
	if( r49 == NULL ) hl_null_access();
	r49->hasValue ? ((void (*)(vdynamic*,hxd__fs__FileEntry))r49->fun)((vdynamic*)r49->value,((hxd__fs__FileEntry)r1)) : ((void (*)(hxd__fs__FileEntry))r49->fun)(((hxd__fs__FileEntry)r1));
	if( r8 == NULL ) hl_null_access();
	r8->srcPath = r10;
	r8->dstPath = r9;
	r8->srcBytes = r15;
	if( r1 == NULL ) hl_null_access();
	r28 = r1->name;
	r8->srcFilename = r28;
	((void (*)(hxd__fs__Convert))r8->$type->vobj_proto[0])(r8);
	r28 = NULL;
	r8->srcPath = r28;
	r28 = NULL;
	r8->dstPath = r28;
	r33 = NULL;
	r8->srcBytes = r33;
	r28 = NULL;
	r8->srcFilename = r28;
	hxd_System_timeoutTick();
	label$2753$301:
	r28 = r0->tmpDir;
	r36 = (String)global$1246;
	r28 = String___add__(r28,r36);
	r22 = r0->hashes;
	r50 = NULL;
	r36 = (String)global$193;
	r36 = haxe_format_JsonPrinter_print(r22,r50,r36);
	r51 = NULL;
	r33 = haxe_io_Bytes_ofString(r36,r51);
	hxd_File_saveBytes(r28,r33);
	if( r34 == NULL ) hl_null_access();
	r34->hasValue ? ((void (*)(vdynamic*))r34->fun)((vdynamic*)r34->value) : ((void (*)(void))r34->fun)();
	return;
}

hl__types__ArrayObj hxd_fs_LocalFileSystem_dir(hxd__fs__LocalFileSystem r0,String r1) {
	hxd__fs___LocalFileSystem__LocalEntry r14;
	String r4, r15, r16, r17;
	hl__types__ArrayObj r7, r8;
	hxd__fs__NotFound r5;
	hl_type *r10;
	bool r3;
	vdynamic *r6;
	int r11, r12, r13;
	varray *r9;
	r4 = r0->baseDir;
	r4 = String___add__(r4,r1);
	r3 = sys_FileSystem_exists(r4);
	if( !r3 ) goto label$2754$8;
	r4 = r0->baseDir;
	r4 = String___add__(r4,r1);
	r3 = sys_FileSystem_isDirectory(r4);
	if( r3 ) goto label$2754$13;
	label$2754$8:
	r5 = (hxd__fs__NotFound)hl_alloc_obj(hxd__fs__NotFound__val);
	r4 = r0->baseDir;
	r4 = String___add__(r4,r1);
	hxd_fs_NotFound_new(r5,r4);
	hl_throw((vdynamic*)r5);
	label$2754$13:
	r4 = r0->baseDir;
	r4 = String___add__(r4,r1);
	r7 = sys_FileSystem_readDirectory(r4);
	r10 = &type$302;
	r11 = 0;
	r9 = hl_alloc_array(r10,r11);
	r8 = hl_types_ArrayObj_alloc(r9);
	r11 = 0;
	label$2754$21:
	if( r7 == NULL ) hl_null_access();
	r13 = r7->length;
	if( r11 >= r13 ) goto label$2754$46;
	r13 = r7->length;
	if( ((unsigned)r11) < ((unsigned)r13) ) goto label$2754$29;
	r4 = NULL;
	goto label$2754$32;
	label$2754$29:
	r9 = r7->array;
	r6 = ((vdynamic**)(r9 + 1))[r11];
	r4 = (String)r6;
	label$2754$32:
	++r11;
	if( r8 == NULL ) hl_null_access();
	r14 = (hxd__fs___LocalFileSystem__LocalEntry)hl_alloc_obj(hxd__fs___LocalFileSystem__LocalEntry__val);
	r16 = (String)global$207;
	r15 = String___add__(r1,r16);
	r15 = String___add__(r15,r4);
	r16 = r0->baseDir;
	r16 = String___add__(r16,r1);
	r17 = (String)global$207;
	r16 = String___add__(r16,r17);
	r16 = String___add__(r16,r4);
	hxd_fs__LocalFileSystem_LocalEntry_new(r14,r0,r4,r15,r16);
	r12 = hl_types_ArrayObj_push(r8,((vdynamic*)r14));
	goto label$2754$21;
	label$2754$46:
	return r8;
}

void hxd_fs_LocalFileSystem_onConvert(hxd__fs__LocalFileSystem r0,hxd__fs__FileEntry r1) {
	return;
}

void hxd_fs_LocalFileSystem_new(hxd__fs__LocalFileSystem r0,String r1) {
	hxd__fs___LocalFileSystem__LocalEntry r16;
	String r5, r10, r11, r15, r17;
	hl__types__ArrayObj r9, r12;
	haxe__ds__StringMap r3;
	bool r14;
	hxd__fs__ConvertFBX2HMD r6;
	hxd__fs__ConvertFNT2BFNT r8;
	vclosure *r2;
	vdynamic *r13;
	hxd__fs__ConvertTGA2PNG r7;
	hl_trap_ctx trap$0;
	r2 = r0->onConvert;
	if( r2 ) goto label$2755$4;
	r2 = hl_alloc_closure_ptr(&type$3587,hxd_fs_LocalFileSystem_onConvert,r0);
	r0->onConvert = r2;
	label$2755$4:
	r3 = (haxe__ds__StringMap)hl_alloc_obj(haxe__ds__StringMap__val);
	haxe_ds_StringMap_new(r3);
	r0->addedPaths = r3;
	r3 = (haxe__ds__StringMap)hl_alloc_obj(haxe__ds__StringMap__val);
	haxe_ds_StringMap_new(r3);
	r0->directoryCache = r3;
	r3 = (haxe__ds__StringMap)hl_alloc_obj(haxe__ds__StringMap__val);
	haxe_ds_StringMap_new(r3);
	r0->fileCache = r3;
	r0->baseDir = r1;
	r3 = (haxe__ds__StringMap)hl_alloc_obj(haxe__ds__StringMap__val);
	haxe_ds_StringMap_new(r3);
	r0->converts = r3;
	r6 = (hxd__fs__ConvertFBX2HMD)hl_alloc_obj(hxd__fs__ConvertFBX2HMD__val);
	hxd_fs_ConvertFBX2HMD_new(r6);
	hxd_fs_LocalFileSystem_addConvert(r0,((hxd__fs__Convert)r6));
	r7 = (hxd__fs__ConvertTGA2PNG)hl_alloc_obj(hxd__fs__ConvertTGA2PNG__val);
	hxd_fs_ConvertTGA2PNG_new(r7);
	hxd_fs_LocalFileSystem_addConvert(r0,((hxd__fs__Convert)r7));
	r8 = (hxd__fs__ConvertFNT2BFNT)hl_alloc_obj(hxd__fs__ConvertFNT2BFNT__val);
	hxd_fs_ConvertFNT2BFNT_new(r8);
	hxd_fs_LocalFileSystem_addConvert(r0,((hxd__fs__Convert)r8));
	r5 = Sys_programPath();
	if( r5 ) goto label$2755$30;
	r9 = NULL;
	goto label$2755$39;
	label$2755$30:
	if( r5 == NULL ) hl_null_access();
	r11 = (String)global$196;
	r9 = String_split(r5,r11);
	if( r9 == NULL ) hl_null_access();
	r10 = (String)global$207;
	r10 = hl_types_ArrayObj_join(r9,r10);
	if( r10 == NULL ) hl_null_access();
	r11 = (String)global$207;
	r9 = String_split(r10,r11);
	label$2755$39:
	if( !r9 ) goto label$2755$43;
	if( r9 == NULL ) hl_null_access();
	r13 = hl_types_ArrayObj_pop(r9);
	r10 = (String)r13;
	label$2755$43:
	if( r9 ) goto label$2755$46;
	r10 = r0->baseDir;
	goto label$2755$54;
	label$2755$46:
	if( r9 == NULL ) hl_null_access();
	r10 = (String)global$207;
	r10 = hl_types_ArrayObj_join(r9,r10);
	r11 = (String)global$207;
	r10 = String___add__(r10,r11);
	r11 = r0->baseDir;
	r10 = String___add__(r10,r11);
	r10 = sys_FileSystem_fullPath(r10);
	label$2755$54:
	if( !r10 ) goto label$2755$59;
	r14 = sys_FileSystem_exists(r10);
	if( !r14 ) goto label$2755$59;
	r14 = sys_FileSystem_isDirectory(r10);
	if( r14 ) goto label$2755$70;
	label$2755$59:
	r11 = r0->baseDir;
	r11 = sys_FileSystem_fullPath(r11);
	r10 = r11;
	if( !r11 ) goto label$2755$67;
	r14 = sys_FileSystem_exists(r11);
	if( !r14 ) goto label$2755$67;
	r14 = sys_FileSystem_isDirectory(r11);
	if( r14 ) goto label$2755$70;
	label$2755$67:
	r11 = (String)global$1243;
	r11 = String___add__(r11,r1);
	hl_throw((vdynamic*)r11);
	label$2755$70:
	if( r10 == NULL ) hl_null_access();
	r15 = (String)global$196;
	r12 = String_split(r10,r15);
	if( r12 == NULL ) hl_null_access();
	r11 = (String)global$207;
	r11 = hl_types_ArrayObj_join(r12,r11);
	r0->baseDir = r11;
	r11 = r0->baseDir;
	r15 = (String)global$207;
	r14 = StringTools_endsWith(r11,r15);
	if( r14 ) goto label$2755$85;
	r11 = r0->baseDir;
	r15 = (String)global$207;
	r11 = String___add__(r11,r15);
	r0->baseDir = r11;
	label$2755$85:
	r16 = (hxd__fs___LocalFileSystem__LocalEntry)hl_alloc_obj(hxd__fs___LocalFileSystem__LocalEntry__val);
	r11 = (String)global$1229;
	r15 = NULL;
	r17 = r0->baseDir;
	hxd_fs__LocalFileSystem_LocalEntry_new(r16,r0,r11,r15,r17);
	r0->root = ((hxd__fs__FileEntry)r16);
	r11 = r0->baseDir;
	r15 = (String)global$1244;
	r11 = String___add__(r11,r15);
	r0->tmpDir = r11;
	hl_trap(trap$0,r13,label$2755$99);
	r11 = r0->tmpDir;
	sys_FileSystem_createDirectory(r11);
	hl_endtrap(trap$0);
	label$2755$99:
	return;
}

