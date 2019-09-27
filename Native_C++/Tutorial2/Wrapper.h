#pragma once

#include "PluginSettings.h"
#include "SimpleClass.h"

#ifdef __cplusplus

extern "C"
{
#endif
	PLUGIN_API int SimpleFunction();
	PLUGIN_API void SaveTransform(float x, float y, float z);
	PLUGIN_API float LoadTransformX(float x);
	PLUGIN_API float LoadTransformY(float Y);
	PLUGIN_API float LoadTransformZ(float Z);


#ifdef __cplusplus
}
#endif

