#include "PhoneNumber.h"
#include <iostream>

PhoneNumber::PhoneNumber()
{
	this->name = "Number's name";
	this->number = "123 456 789";

#ifdef _DEBUG
	cout << "PhoneNumber constructor" << endl;
#endif
}

PhoneNumber::PhoneNumber(string name, string number)
{
	this->name = name;
	this->number = number;

#ifdef _DEBUG
	cout << "PhoneNumber constructor" << endl;
#endif
}

PhoneNumber::~PhoneNumber()
{
#ifdef _DEBUG
	cout << "PhoneNumber destructor" << endl;
#endif
}

void PhoneNumber::setNumber(string number)
{
	this->number = number;
}

void PhoneNumber::setName(string name)
{
	this->name = name;
}

string PhoneNumber::getNumber()
{
	return this->number;
}

string PhoneNumber::getName()
{
	return this->name;
}

void PhoneNumber::calling()
{
	cout << "Calling for: " << name << endl;
}

void PhoneNumber::smsSending(string message)
{
	cout << endl << "Sending: " << endl << message << endl << "To: " << this->name << endl << endl;
}

bool PhoneNumber::operator==(const PhoneNumber & number)
{
	if (number.number == this->number) {
		return true;
	}
	return false;
}

PhoneNumber::operator string() {
	return this->name + ":\t" + this->number + "\n";
}

ostream & operator<<(ostream & stream, PhoneNumber & phoneNumber)
{
	stream << phoneNumber.number << endl
		<< phoneNumber.name << endl;
	return stream;
}

istream & operator >> (istream & stream, PhoneNumber & phoneNumber)
{
	stream >> phoneNumber.number >> phoneNumber.name;
	return stream;
}
