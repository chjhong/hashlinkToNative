﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void hxd_fs_ConvertWAV2MP3_convert(hxd__fs__ConvertWAV2MP3 r0) {
	String r2, r7;
	hl__types__ArrayObj r3;
	hl_type *r5;
	int r6;
	varray *r4;
	r2 = (String)global$1206;
	r5 = &type$13;
	r6 = 6;
	r4 = hl_alloc_array(r5,r6);
	r7 = (String)global$1207;
	r6 = 0;
	((String*)(r4 + 1))[r6] = r7;
	r7 = (String)global$1208;
	r6 = 1;
	((String*)(r4 + 1))[r6] = r7;
	r7 = (String)global$1209;
	r6 = 2;
	((String*)(r4 + 1))[r6] = r7;
	r7 = (String)global$1210;
	r6 = 3;
	((String*)(r4 + 1))[r6] = r7;
	r7 = r0->srcPath;
	r6 = 4;
	((String*)(r4 + 1))[r6] = r7;
	r7 = r0->dstPath;
	r6 = 5;
	((String*)(r4 + 1))[r6] = r7;
	r3 = hl_types_ArrayObj_alloc(r4);
	hxd_fs_Convert_command(((hxd__fs__Convert)r0),r2,r3);
	return;
}

void hxd_fs_ConvertWAV2MP3_new(hxd__fs__ConvertWAV2MP3 r0) {
	String r2, r3;
	r2 = (String)global$1204;
	r3 = (String)global$1205;
	hxd_fs_Convert_new(((hxd__fs__Convert)r0),r2,r3);
	return;
}

