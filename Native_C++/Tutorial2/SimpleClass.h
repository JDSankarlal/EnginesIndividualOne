#pragma once

#include "PluginSettings.h"
#include <string>
#include <iostream>
#include <fstream>
class PLUGIN_API SimpleClass
{
public: 
	int SimpleFunction();
	void SaveTransform(float x, float y, float z);
	float LoadTransformX();
	float LoadTransformY();
	float LoadTransformZ();
};