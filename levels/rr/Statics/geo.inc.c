#include "src/game/envfx_snow.h"

const GeoLayout Statics_Geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, Statics_Shape_IndexedFaceSet_045_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, Statics_Shape_IndexedFaceSet_045_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, Statics_Shape_IndexedFaceSet_045_mesh_layer_5),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
