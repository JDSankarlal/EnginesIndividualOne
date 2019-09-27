#pragma once

#include "PluginSettings.h"
#include "SimpleClass.h"

#ifdef __cplusplus

extern "C"
{
#endif
	PLUGIN_API int SimpleFunction();
	PLUGIN_API void SaveTransform(float x, float y, float z);
#ifdef __cplusplus
}
#endif

