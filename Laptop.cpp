#include "Laptop.h"
#include <iostream>
using namespace std;

Laptop::Laptop()
{
#ifdef _DEBUG
	cout << "Laptop constructor" << endl;
#endif

	this->isDiskStation = true;
	this->isHDMI = true;
	this->driveType = "HDD";
	this->operatingSystem = "Windows";
	this->graphicCard = GraphicCard();
	this->manufacturer = "Steve Jobs";
}

Laptop::~Laptop()
{
#ifdef _DEBUG
	cout << "Laptop destructor" << endl;
#endif
}

void Laptop::turnOn()
{
	if (this->battery.getState() > 0)
		cout << "(Windows) Tu du du duuumm" << endl;
	else
		cout << "Battery low" << endl;
}

void Laptop::turnOff()
{
	cout << "Closing Windows OS" << endl;
}

void Laptop::runApplication(int appIndex)
{
	if (appIndex <= listOfApps.size()) {
		listOfApps[appIndex].run();
	}
	else {
		cout << "Wrong application index!" << endl;
	}
}

void Laptop::installApplication(App &application)
{
	listOfApps.push_back(application);
}

void Laptop::deleteApplication(int appIndex)
{
	if (appIndex <= listOfApps.size()) {
		listOfApps.erase(listOfApps.begin() + appIndex);
		cout << "Uninstalling from your computer..." << endl;
	}
	else
		cout << "No such an app index" << endl;
}

void Laptop::showApplicationList()
{
	for (int i = 0; i < listOfApps.size(); i++)
		cout << listOfApps[i].getName() << endl;
}

void Laptop::playGame()
{
	for (int i = listOfApps.size()-1; i >=0; i--) {
		if (listOfApps[i].getCategory() == "Games") {
			listOfApps[i].run();
			cout << "Last installed game runned!" << endl;
			return;
		}
		else
			cout << "You dont have games on your computer" << endl;
	}
}

void Laptop::playMovie()
{
	for (int i = listOfApps.size() - 1; i >= 0; i--) {
		if (listOfApps[i].getCategory() == "Movie") {
			listOfApps[i].run();
			cout << "Latest movie played!" << endl;
			return;
		}
		else
			cout << "You dont have movies on your computer" << endl;
	}
}

void Laptop::runProgrammingIDE()
{
	for (int i = listOfApps.size() - 1; i >= 0; i--) {
		if (listOfApps[i].getCategory() == "IDE") {
			listOfApps[i].run();
			cout << "Last installed game runned!" << endl;
			return;
		}
		else
			cout << "You dont have games on your computer" << endl;
	}
}

void Laptop::setDiskStationPresence(bool stationState)
{
	this->isDiskStation = stationState;
}

void Laptop::setHDMIPresence(bool hdmiPresence)
{
	this->isHDMI = hdmiPresence;
}

void Laptop::setDriveType(string driveType)
{
	this->driveType = driveType;
}

void Laptop::setOperatingSystem(string operatingSystem)
{
	this->operatingSystem = operatingSystem;
}

void Laptop::setGrapgicCard(GraphicCard graphicCard)
{
	this->graphicCard = graphicCard;
}

bool Laptop::getDiskPresence()
{
	return this->isDiskStation;
}

bool Laptop::getHDMIPresence()
{
	return isHDMI;
}

string Laptop::getDriveType()
{
	return driveType;
}

string Laptop::getOperatingSystem()
{
	return operatingSystem;
}

GraphicCard Laptop::getGraphicCard()
{
	return graphicCard;
}

void Laptop::printTo(ostream & ostream)
{
	MobileDevice::printTo(ostream);
	ostream << this->isDiskStation << endl
		<< this->isHDMI << endl
		<< this->driveType << endl
		<< this->operatingSystem << endl
		<< this->graphicCard << endl;
}

void Laptop::readFrom(istream & istream)
{
	MobileDevice::readFrom(istream);
	istream >> isDiskStation >> isHDMI >> driveType >> operatingSystem >> graphicCard;
}

ostream & operator<<(ostream & stream, Laptop & laptop)
{
	laptop.printTo(stream);
	return stream;
}

istream & operator>>(istream & stream, Laptop & laptop)
{
	laptop.readFrom(stream);
	return stream;
}
