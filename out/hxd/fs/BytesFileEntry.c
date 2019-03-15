﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

String hxd_fs_BytesFileEntry_get_path(hxd__fs__BytesFileEntry r0) {
	String r1;
	r1 = r0->fullPath;
	return r1;
}

int hxd_fs_BytesFileEntry_getSign(hxd__fs__BytesFileEntry r0) {
	haxe__io__Bytes r2;
	int r1, r3, r4;
	r2 = r0->bytes;
	if( r2 == NULL ) hl_null_access();
	r1 = 0;
	r1 = haxe_io_Bytes_get(r2,r1);
	r2 = r0->bytes;
	if( r2 == NULL ) hl_null_access();
	r3 = 1;
	r3 = haxe_io_Bytes_get(r2,r3);
	r4 = 8;
	r3 = r3 << r4;
	r1 = r1 | r3;
	r2 = r0->bytes;
	if( r2 == NULL ) hl_null_access();
	r3 = 2;
	r3 = haxe_io_Bytes_get(r2,r3);
	r4 = 16;
	r3 = r3 << r4;
	r1 = r1 | r3;
	r2 = r0->bytes;
	if( r2 == NULL ) hl_null_access();
	r3 = 3;
	r3 = haxe_io_Bytes_get(r2,r3);
	r4 = 24;
	r3 = r3 << r4;
	r1 = r1 | r3;
	return r1;
}

haxe__io__Bytes hxd_fs_BytesFileEntry_getBytes(hxd__fs__BytesFileEntry r0) {
	haxe__io__Bytes r1;
	r1 = r0->bytes;
	return r1;
}

void hxd_fs_BytesFileEntry_open(hxd__fs__BytesFileEntry r0) {
	int r1;
	r1 = 0;
	r0->pos = r1;
	return;
}

void hxd_fs_BytesFileEntry_skip(hxd__fs__BytesFileEntry r0,int r1) {
	int r2;
	r2 = r0->pos;
	r2 = r2 + r1;
	r0->pos = r2;
	return;
}

int hxd_fs_BytesFileEntry_readByte(hxd__fs__BytesFileEntry r0) {
	haxe__io__Bytes r2;
	int r1, r3;
	r2 = r0->bytes;
	if( r2 == NULL ) hl_null_access();
	r1 = r0->pos;
	r3 = r1;
	++r1;
	r0->pos = r1;
	r1 = haxe_io_Bytes_get(r2,r3);
	return r1;
}

void hxd_fs_BytesFileEntry_read(hxd__fs__BytesFileEntry r0,haxe__io__Bytes r1,int r2,int r3) {
	haxe__io__Bytes r6;
	int r5, r7;
	if( r1 == NULL ) hl_null_access();
	r6 = r0->bytes;
	r7 = r0->pos;
	haxe_io_Bytes_blit(r1,r2,r6,r7,r3);
	r5 = r0->pos;
	r5 = r5 + r3;
	r0->pos = r5;
	return;
}

void hxd_fs_BytesFileEntry_close(hxd__fs__BytesFileEntry r0) {
	return;
}

void hxd_fs_BytesFileEntry_load(hxd__fs__BytesFileEntry r0,vclosure* r1) {
	haxe__Timer r2;
	int r3;
	r3 = 1;
	r2 = haxe_Timer_delay(r1,r3);
	return;
}

void hxd_fs_BytesFileEntry_loadBitmap(hxd__fs__BytesFileEntry r0,vclosure* r1) {
	String r2;
	r2 = (String)global$484;
	hl_throw((vdynamic*)r2);
}

bool hxd_fs_BytesFileEntry_exists(hxd__fs__BytesFileEntry r0,String r1) {
	bool r2;
	r2 = false;
	return r2;
}

hxd__fs__FileEntry hxd_fs_BytesFileEntry_get(hxd__fs__BytesFileEntry r0,String r1) {
	hxd__fs__FileEntry r2;
	r2 = NULL;
	return r2;
}

hxd__impl__ArrayIterator_hxd_fs_FileEntry hxd_fs_BytesFileEntry_iterator(hxd__fs__BytesFileEntry r0) {
	hl__types__ArrayObj r2;
	hxd__impl__ArrayIterator_hxd_fs_FileEntry r1;
	r1 = (hxd__impl__ArrayIterator_hxd_fs_FileEntry)hl_alloc_obj(hxd__impl__ArrayIterator_hxd_fs_FileEntry__val);
	r2 = (hl__types__ArrayObj)hl_alloc_obj(hl__types__ArrayObj__val);
	hl_types_ArrayObj_new(r2);
	hxd_impl_ArrayIterator_hxd_fs_FileEntry_new(r1,r2);
	return r1;
}

int hxd_fs_BytesFileEntry_get_size(hxd__fs__BytesFileEntry r0) {
	haxe__io__Bytes r2;
	int r1;
	r2 = r0->bytes;
	if( r2 == NULL ) hl_null_access();
	r1 = r2->length;
	return r1;
}

void hxd_fs_BytesFileEntry_new(hxd__fs__BytesFileEntry r0,String r1,haxe__io__Bytes r2) {
	String r3, r6;
	hl__types__ArrayObj r5;
	vdynamic *r4;
	r0->fullPath = r1;
	if( r1 == NULL ) hl_null_access();
	r6 = (String)global$207;
	r5 = String_split(r1,r6);
	if( r5 == NULL ) hl_null_access();
	r4 = hl_types_ArrayObj_pop(r5);
	r3 = (String)r4;
	r0->name = r3;
	r0->bytes = r2;
	return;
}

