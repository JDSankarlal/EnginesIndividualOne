#pragma once

#include "PluginSettings.h"
#include "SimpleClass.h"

#ifdef __cplusplus

extern "C"
{
#endif
	PLUGIN_API int SimpleFunction();
	PLUGIN_API void SaveTransform(float x, float y, float z);
	PLUGIN_API float LoadTransformX();
	PLUGIN_API float LoadTransformY();
	PLUGIN_API float LoadTransformZ();


#ifdef __cplusplus
}
#endif

