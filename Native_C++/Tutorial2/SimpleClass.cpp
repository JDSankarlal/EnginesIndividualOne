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
	if (positionInfo.is_open())
	{
		std::getline(positionInfo,xPos);
		positionInfo.close();

		return std::stof(xPos);
	}
}

float SimpleClass::LoadTransformY(float z)
{
	std::string yPos;
	std::ifstream positionInfo("position.txt");

	if (positionInfo.is_open()) 
	{
		for (int i = 1; i <= 2; i++) //Grab the second line 
		{
			std::getline(positionInfo, yPos);
		}
	}
	positionInfo.close();
	return std::stof(yPos);

}

float SimpleClass::LoadTransformZ(float z)
{
	std::string zPos;
	std::ifstream positionInfo("position.txt");

	if (positionInfo.is_open())
	{
		for (int i = 1; i <= 3; i++) //Grab the third line 
		{
			std::getline(positionInfo, zPos);
		}
	}
	positionInfo.close();
	return std::stof(zPos);

}


