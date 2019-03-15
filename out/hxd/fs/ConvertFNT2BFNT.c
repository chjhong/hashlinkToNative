﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void hxd_fs_ConvertFNT2BFNT_convert(hxd__fs__ConvertFNT2BFNT r0) {
	hxd__fmt__bfnt__Writer r7;
	String r3;
	haxe__io__Bytes r2;
	haxe__io__BytesOutput r6;
	h2d__Font r1;
	vclosure *r4;
	r2 = r0->srcBytes;
	r3 = r0->srcPath;
	r4 = hl_alloc_closure_ptr(&type$3543,hxd_fs_ConvertFNT2BFNT_resolveTile,r0);
	r1 = hxd_fmt_bfnt_FontParser_parse(r2,r3,r4);
	r6 = (haxe__io__BytesOutput)hl_alloc_obj(haxe__io__BytesOutput__val);
	haxe_io_BytesOutput_new(r6);
	r7 = (hxd__fmt__bfnt__Writer)hl_alloc_obj(hxd__fmt__bfnt__Writer__val);
	hxd_fmt_bfnt_Writer_new(r7,((haxe__io__Output)r6));
	hxd_fmt_bfnt_Writer_write(r7,r1);
	r2 = haxe_io_BytesOutput_getBytes(r6);
	hxd_fs_Convert_save(((hxd__fs__Convert)r0),r2);
	return;
}

h2d__Tile hxd_fs_ConvertFNT2BFNT_resolveTile(hxd__fs__ConvertFNT2BFNT r0,String r1) {
	String r3;
	bool r2;
	h2d__Tile r4;
	r2 = sys_FileSystem_exists(r1);
	if( r2 ) goto label$3543$5;
	r3 = (String)global$1223;
	r3 = String___add__(r3,r1);
	hl_throw((vdynamic*)r3);
	label$3543$5:
	r4 = r0->emptyTile;
	return r4;
}

void hxd_fs_ConvertFNT2BFNT_new(hxd__fs__ConvertFNT2BFNT r0) {
	String r12, r13;
	h2d__Tile r1;
	int *r8, *r10;
	int r3, r4, r5, r6, r7, r9;
	h3d__mat__Texture r2;
	r1 = (h2d__Tile)hl_alloc_obj(h2d__Tile__val);
	r2 = NULL;
	r3 = 0;
	r4 = 0;
	r5 = 0;
	r6 = 0;
	r7 = 0;
	r8 = &r7;
	r9 = 0;
	r10 = &r9;
	h2d_Tile_new(r1,r2,r3,r4,r5,r6,r8,r10);
	r0->emptyTile = r1;
	r12 = (String)global$1221;
	r13 = (String)global$1222;
	hxd_fs_Convert_new(((hxd__fs__Convert)r0),r12,r13);
	return;
}

