#include "Battery.h"
#include <iostream>

using namespace std;

int Battery::numberOfBatteries = 0;

Battery::Battery() {
	numberOfBatteries++;
	this->type = "Li-ion";
	this->nominalVoltage = 0;
	this->nominalCapacity = 0;
	this->state = 100;

#ifdef _DEBUG
	cout << "Battery constructor" << endl;
#endif
}

Battery::Battery(string type, float nominalVoltage, int nominalCapacity, int state) {
	numberOfBatteries++;
	this->type = type;
	this->nominalVoltage = nominalVoltage;
	this->nominalCapacity = nominalCapacity;
	this->state = state;

#ifdef _DEBUG
	cout << "Battery constructor" << endl;
#endif
}

Battery::~Battery() {
	numberOfBatteries--;

#ifdef _DEBUG
	cout << "Battery destructor" << endl;
#endif
}

void Battery::setType(string type) {
	this->type = type;
}

void Battery::setVoltage(float nominalVoltage)
{
	this->nominalVoltage = nominalVoltage;
}

void Battery::setCapacity(int nominalCapacity)
{
	this->nominalCapacity = nominalCapacity;
}

void Battery::setState(int state)
{
	this->state = state;
}

string Battery::getType()
{
	return this->type;
}

float Battery::getVoltage()
{
	return this->nominalVoltage;
}

int Battery::getCapacity()
{
	return this->nominalCapacity;
}

int Battery::getState()
{
	return this->state;
}

Battery Battery::operator+(Battery & battery)
{
	return Battery("SerialType", nominalVoltage + battery.nominalVoltage, nominalCapacity, state);
}

bool Battery::operator==(const Battery & battery)
{
	if ((this->nominalCapacity == battery.nominalCapacity) && (this->nominalVoltage == battery.nominalVoltage)) {
		return true;
	}
	return false;
}

Battery Battery::operator||(const Battery & battery)
{
	return Battery("ParalelType", nominalVoltage, nominalCapacity + battery.nominalCapacity, (state + battery.state) / 2);
}

Battery Battery::operator<(const Battery & battery)
{
	if (this->nominalCapacity < battery.nominalCapacity) {
		return battery;
	}
	return *this;
}

Battery::operator string() {
	return "Battery: " + type + " " + to_string(nominalVoltage) + "[V] " + to_string(nominalCapacity) + "[mAh] \n";
}

ostream & operator<<(ostream & stream, Battery & battery)
{
	stream << battery.type << endl
		<< battery.nominalVoltage << endl
		<< battery.nominalCapacity << endl
		<< battery.state;

	return stream;
}

istream & operator >> (istream & stream, Battery & battery)
{
	stream >> battery.type >> battery.nominalVoltage >> battery.nominalCapacity >> battery.state;
	return stream;
}
