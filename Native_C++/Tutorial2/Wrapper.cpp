#include "Wrapper.h"
SimpleClass simpleClass;

int SimpleFunction()
{
	return simpleClass.SimpleFunction();
}

void SaveTransform(float x, float y, float z)
{
	simpleClass.SaveTransform(x, y, z);
}

float LoadTransformX(float x)
{
	return simpleClass.LoadTransformX(x);
}