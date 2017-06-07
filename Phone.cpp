#include "Phone.h"
#include "App.h"
#include "PhoneNumber.h"
#include <iostream>

using namespace std;

Phone::Phone()
{
#ifdef _DEBUG
	cout << "Phone constructor" << endl;
#endif

	this->listOfApps[0]=App("Games", "Snake", "Unknown", 2, 1.1);
	this->listOfPhoneNumbers.push_back(PhoneNumber("Police", "997"));
	this->listOfPhoneNumbers.push_back(PhoneNumber("FireBrigade", "998"));
	this->listOfPhoneNumbers.push_back(PhoneNumber("Ambulance", "999"));
	this->manufacturer = "Nokia";
}

Phone::~Phone()
{
	
#ifdef _DEBUG
	cout << "Phone destructor" << endl; 
#endif
}

string Phone::turnOn()
{
	if (!this->isTurnedOn)
	{
		if ((this->battery.getState()) > 0) {
			this->isTurnedOn = true;
			return "Nokia, connecting people...";
		}
		else
			return "Niski poziom baterii";
	}
	else
		return "Blad! Urzadzenie juz wlaczone!";
}

string Phone::turnOff()
{
	if (this->isTurnedOn) {
		this->isTurnedOn = false;
		return "Wylaczanie telefonu";
	}
	else
		return "Blad! Telefon juz wylaczony!";
}

void Phone::runApplication(int appIndex)
{
	if (appIndex <= listOfApps.size())
		this->listOfApps[appIndex].run();
	else
		cout << "No such app index!" << endl;
}

void Phone::installApplication(App &application)
{
	this->listOfApps.push_back(application);
}

void Phone::deleteApplication(int appIndex)
{
	if (appIndex <= listOfApps.size()) {
		listOfApps.erase(listOfApps.begin() + appIndex);
		cout << "Uninstalling wapApp" << endl;
	}
	else
		cout << "No such an app index" << endl;
}

void Phone::showApplicationList()
{
	for (int i = 0; i < listOfApps.size(); i++)
		cout << listOfApps[i].getName() << endl;
}


void Phone::addNumber( PhoneNumber &phoneNumber)
{
	listOfPhoneNumbers.push_back(phoneNumber);
}

void Phone::deleteNumber(int numberIndex)
{
	if (numberIndex <= listOfPhoneNumbers.size()) {
		cout << "Number deleted" << endl;
		listOfPhoneNumbers.erase(listOfPhoneNumbers.begin()+numberIndex);
	}
	else
		cout << "No such index number" << endl;
}

void Phone::call(int numberIndex)
{
	if (numberIndex < listOfPhoneNumbers.size()) {
		listOfPhoneNumbers[numberIndex].calling();
	}
	else
		cout << "No such index number" << endl;
}

void Phone::sendSMS(int numberIndex, string message)
{
	if (numberIndex < listOfPhoneNumbers.size()) {
		listOfPhoneNumbers[numberIndex].smsSending(message);
	}
	else
		cout << "No such index number" << endl;
}

void Phone::showNumbers()
{
	for (int i = 0; i < listOfPhoneNumbers.size(); i++)
		cout << i+1 << ". " << endl << (string)listOfPhoneNumbers[i] << endl;
}

void Phone::printTo(ostream & ostream)
{
	MobileDevice::printTo(ostream);
	ostream << listOfPhoneNumbers.size()<<endl;
	for (int i = 0; i < listOfPhoneNumbers.size(); i++) {
		ostream << listOfPhoneNumbers[i];
	}
}

void Phone::readFrom(istream & istream)
{
	int amountOfNumbersToLoad;
	PhoneNumber tempNumber;
	MobileDevice::readFrom(istream);

	istream >> amountOfNumbersToLoad;
	listOfPhoneNumbers.resize(amountOfNumbersToLoad);
	for (int i = 0; i < amountOfNumbersToLoad; i++) {
		istream >> tempNumber;
		listOfPhoneNumbers[i] = tempNumber;
	}
}



ostream & operator<<(ostream & stream, Phone & phone)
{
	phone.printTo(stream);
	return stream;
}

istream & operator >> (istream & stream, Phone & phone)
{
	phone.readFrom(stream);
	return stream;
}
