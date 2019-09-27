#pragma once

#include "PluginSettings.h"
#include <iostream>
#include <fstream>
class PLUGIN_API SimpleClass
{
public: 
	int SimpleFunction();
	void SaveTransform(float x, float y, float z);
	float LoadTransformX(float x);
	float LoadTransformY(float y);
	float LoadTransformZ(float z);
};