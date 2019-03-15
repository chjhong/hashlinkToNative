﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

h3d__scene__Renderer h3d_mat_MaterialSetup_createRenderer(h3d__mat__MaterialSetup r0) {
	h3d__scene__DefaultRenderer r1;
	r1 = (h3d__scene__DefaultRenderer)hl_alloc_obj(h3d__scene__DefaultRenderer__val);
	h3d_scene_DefaultRenderer_new(r1);
	return ((h3d__scene__Renderer)r1);
}

h3d__scene__LightSystem h3d_mat_MaterialSetup_createLightSystem(h3d__mat__MaterialSetup r0) {
	h3d__scene__LightSystem r1;
	r1 = (h3d__scene__LightSystem)hl_alloc_obj(h3d__scene__LightSystem__val);
	h3d_scene_LightSystem_new(r1);
	return r1;
}

h3d__mat__Material h3d_mat_MaterialSetup_createMaterial(h3d__mat__MaterialSetup r0) {
	h3d__mat__Material r1;
	h3d__mat__Texture r2;
	r1 = (h3d__mat__Material)hl_alloc_obj(h3d__mat__Material__val);
	r2 = NULL;
	h3d_mat_Material_new(r1,r2);
	return r1;
}

vdynamic* h3d_mat_MaterialSetup_getDefaults(h3d__mat__MaterialSetup r0,String r1) {
	h3d__mat__Material r2;
	vdynamic *r3;
	r2 = r0->emptyMat;
	if( r2 ) goto label$2712$4;
	r2 = h3d_mat_MaterialSetup_createMaterial(r0);
	r0->emptyMat = r2;
	label$2712$4:
	r2 = r0->emptyMat;
	if( r2 == NULL ) hl_null_access();
	r3 = h3d_mat_Material_getDefaultProps(r2,r1);
	return r3;
}

vdynamic* h3d_mat_MaterialSetup_loadMaterialProps(h3d__mat__MaterialSetup r0,h3d__mat__Material r1) {
	h3d__mat__MaterialDatabase r3;
	vdynamic *r2;
	r3 = r0->database;
	if( r3 == NULL ) hl_null_access();
	r2 = h3d_mat_MaterialDatabase_loadMatProps(r3,r1,r0);
	return r2;
}

void h3d_mat_MaterialSetup_saveMaterialProps(h3d__mat__MaterialSetup r0,h3d__mat__Material r1) {
	h3d__mat__MaterialDatabase r3;
	r3 = r0->database;
	if( r3 == NULL ) hl_null_access();
	h3d_mat_MaterialDatabase_saveMatProps(r3,r1,r0);
	return;
}

void h3d_mat_MaterialSetup_customMeshInit(h3d__mat__MaterialSetup r0,h3d__scene__Mesh r1) {
	return;
}

void h3d_mat_MaterialSetup_new(h3d__mat__MaterialSetup r0,String r1) {
	h3d__mat__MaterialDatabase r3;
	r3 = r0->database;
	if( r3 ) goto label$2722$5;
	r3 = (h3d__mat__MaterialDatabase)hl_alloc_obj(h3d__mat__MaterialDatabase__val);
	h3d_mat_MaterialDatabase_new(r3);
	r0->database = r3;
	label$2722$5:
	r0->name = r1;
	return;
}
