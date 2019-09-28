#include "SimpleClass.h"

int SimpleClass::SimpleFunction()
{
	return 8;

}

void SimpleClass::SaveTransform(float x, float y, float z)
{
	std::fstream positionInfo;
	positionInfo.open("position.txt",std::fstream::out);

	positionInfo << x << std::endl;	//Outputs the position transform data to position.txt
	positionInfo << y << std::endl;	//Outputs the position transform data to position.txt
	positionInfo << z << std::endl;	//Outputs the position transform data to position.txt

	positionInfo.close();
}

float SimpleClass::LoadTransformX()
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

float SimpleClass::LoadTransformY()
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
	return std::stof(yPos); //Converts returned string to float, send to Unity

}

float SimpleClass::LoadTransformZ()
{
	std::string zPos;
	std::ifstream positionInfo("position.txt");

	if (positionInfo.is_open())
	{
		for (int i = 1; i <= 3; i++) //Grab the third line by stopping 3 lines down the position.txt file
		{
			std::getline(positionInfo, zPos);
		}
	}
	positionInfo.close();
	return std::stof(zPos); //Converts the returned string value from position.txt to a float to be sent through to Unity

}


