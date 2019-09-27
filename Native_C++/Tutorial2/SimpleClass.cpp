#include "SimpleClass.h"

int SimpleClass::SimpleFunction()
{
	return 8;

}

void SimpleClass::SaveTransform(float x, float y, float z)
{
	std::fstream positionInfo;
	positionInfo.open("position.txt",std::fstream::out);

	positionInfo << x << std::endl;
	positionInfo << y << std::endl;
	positionInfo << z << std::endl;

	positionInfo.close();
}

float SimpleClass::LoadTransformX(float x)
{
	std::string xPos;
	std::ifstream positionInfo("position.txt");
	std::getline(positionInfo,xPos);
	positionInfo.close();

	return std::stof(xPos);
}



