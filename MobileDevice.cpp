#include "MobileDevice.h"
#include <iostream>
using namespace std;

MobileDevice::MobileDevice()
{	
#ifdef _DEBUG
	cout << "Mobile Device constructor" << endl;
#endif

	this->clockRate = 0;
	this->isTurnedOn = false;
	this->listOfApps.push_back(App());
	this->manufacturer = "Unknown";
	this->price = 0;
	this->size = 0;
	this->weight = 0;
}

MobileDevice::~MobileDevice()
{
#ifdef _DEBUG
	cout << "Mobile Device destructor" << endl;
#endif
}

string MobileDevice::turnOn()
{
	if (this->isTurnedOn)
	{
		if ((this->battery.getState()) > 0) {
			this->isTurnedOn = true;
			return "W³¹czam urz¹dzenie...";
		}else
			return "Niski poziom baterii";
	}else
		return "B³¹d! Urz¹dzenie ju¿ w³¹czone!";
	
}

string MobileDevice::turnOff()
{
	if (this->isTurnedOn) {
		this->isTurnedOn = false;
		return "Wy³¹czam urz¹dzenie...";
	}
	else
		return "B³¹d! Urz¹dzenie ju¿ wy³¹czone!";

}

int MobileDevice::checkBatteryState()
{
	return this->battery.getState();
}

void MobileDevice::chargeBattery(int batteryState)
{
	this->battery.setState(batteryState);
	cout << "Battery is now full!" << endl;
}

void MobileDevice::setWeight(float weight)
{
	this->weight = weight;
}

void MobileDevice::setPrice(float price)
{
	this->price = price;
}

void MobileDevice::setSize(float size)
{
	this->size = size;
}

void MobileDevice::setClockRate(int clockRate)
{
	this->clockRate = clockRate;
}

void MobileDevice::setManufacturer(string manufacturer)
{
	this->manufacturer = manufacturer;
}

void MobileDevice::setIsTurnedOn(bool isTurnedOn)
{
	this->isTurnedOn = isTurnedOn;
}

void MobileDevice::setBattery(Battery battery)
{
	this->battery = battery;
}

float MobileDevice::getWeight()
{
	return this->weight;
}

float MobileDevice::getPrice()
{
	return this->price;
}

float MobileDevice::getSize()
{
	return this->size;
}

int MobileDevice::getClockRate()
{
	return this->clockRate;
}

string MobileDevice::getManufacturer()
{
	return this->manufacturer;
}

bool MobileDevice::getIsTurnedOn()
{
	return this->isTurnedOn;
}

Battery MobileDevice::getBattery()
{
	return this->battery;
}

void MobileDevice::printTo(ostream & ostream)
{
	ostream << this->weight << endl
		<< this->price << endl
		<< this->size << endl
		<< this->clockRate << endl
		<< this->manufacturer << endl
		<< this->isTurnedOn << endl
		<< this->battery << endl
		<< listOfApps.size() << endl;

	for (int i = 0; i < listOfApps.size(); i++) {
		ostream << listOfApps[i];
	}
}

void MobileDevice::readFrom(istream & istream)
{
	int numberOfAppsToLoad;

	istream >> weight >> price >> size >> clockRate >> manufacturer >> isTurnedOn >> battery;
	istream >> numberOfAppsToLoad;
	listOfApps.resize(numberOfAppsToLoad);
	for (int i = 0; i < numberOfAppsToLoad; i++) {
		istream >> listOfApps[i];
	}

}


