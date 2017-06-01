#include "GraphicCard.h"
#include <iostream>
using namespace std;

GraphicCard::GraphicCard()
{
#ifdef _DEBUG
	cout << "Graphic Card constructor" << endl;
#endif

	this->temperature = 22;
	this->clockSpeed = 1000; //MHz
	this->memoryType = "GDDR5";
}

GraphicCard::~GraphicCard()
{
#ifdef _DEBUG
	cout << "Graphic Card destructor" << endl;
#endif
}

void GraphicCard::increaseTemperature(float addedDegrees)
{
	temperature += addedDegrees;
	if (temperature >= 80) {
		cout << "Graphic card is melting. Temperature is too highh" << endl;
	}
}

void GraphicCard::setTemperature(float temperature)
{
	this->temperature = temperature;
}

void GraphicCard::setMemoryType(string memoryType)
{
	this->memoryType = memoryType;
}

void GraphicCard::setClockSpeed(int clockSpeed)
{
	this->clockSpeed = clockSpeed;
}

float GraphicCard::getTemperature()
{
	return temperature;
}

int GraphicCard::getClockSpeed() {
	return clockSpeed;
}

string GraphicCard::getMemoryType()
{
	return memoryType;
}

ostream & operator<<(ostream & stream, GraphicCard & graphicCard)
{
	stream << graphicCard.temperature << endl
		<< graphicCard.clockSpeed << endl
		<< graphicCard.memoryType << endl;
	return stream;
}

istream & operator >> (istream & stream, GraphicCard & graphicCard)
{
	stream >> graphicCard.temperature >> graphicCard.clockSpeed >> graphicCard.memoryType;
	return stream;
}
