#include "App.h"
#include <iostream>
using namespace std;

int App::numberOfApps = 0;

App::App()
{
	numberOfApps++;
	this->category = "Other";
	this->name = "NoName";
	this->developer = "Unknown";
	this->requiredMemory = 0;
	this->versionNumber = 1.0;

#ifdef _DEBUG
	cout << "App constructor" << endl;
#endif
}

App::App(string category, string name, string developer, int requiredMemory, float versionNumber)
{
	numberOfApps++;
	this->category = category;
	this->name = name;
	this->developer = developer;
	this->requiredMemory = requiredMemory;
	this->versionNumber = versionNumber;

#ifdef _DEBUG
	cout << "App constructor" << endl;
#endif
}

App::~App()
{
	numberOfApps--;

#ifdef _DEBUG
	cout << "App destructor" << endl;
#endif
}

void App::setCategory(string category)
{
	this->category = category;
}

void App::setName(string name)
{
	this->name = name;
}

void App::setDeveloper(string developer)
{
	this->developer = developer;
}

void App::setRequiredMemory(int requiredMemory)
{
	this->requiredMemory = requiredMemory;
}

void App::setVersionNumber(float versionNumber)
{
	this->versionNumber = versionNumber;
}

string App::getCategory()
{
	return this->category;
}

string App::getName()
{
	return this->name;
}

string App::getDeveloper()
{
	return this->developer;
}

int App::getRequiredMemory()
{
	return this->requiredMemory;
}

float App::getVersionNumber()
{
	return this->versionNumber;
}

void App::run()
{
	cout << "App " << this->getName() << " started" << endl;
}

ostream & operator<<(ostream & stream, App & app)
{
	stream << app.category << endl
		<< app.name << endl
		<< app.developer << endl
		<< app.requiredMemory << endl
		<< app.versionNumber << endl;
	return stream;
}

istream & operator >> (istream & stream, App & app)
{
	stream >> app.category >> app.name >> app.developer >> app.requiredMemory >> app.versionNumber;
	return stream;
}
