#include "Smartphone.h"
#include <iostream>
using namespace std;

Smartphone::Smartphone()
{
	this->mobileOperatingSystem = "Android";
	this->mobileInternetBrowser = "Chrome";
	this->cameraResolution = 3; //MPx
	this->isFrontCamera = true;
	this->manufacturer = "Samsung";

#ifdef _DEBUG
	cout << "Smartphone constructor" << endl;
#endif
}

Smartphone::~Smartphone()
{
#ifdef _DEBUG
	cout << "Smartphone destructor" << endl;
#endif
}

string Smartphone::turnOn()
{
	if (this->isTurnedOn)
	{
		if ((this->battery.getState()) > 0) {
			this->isTurnedOn = true;
			return "Uruchamianie smartfona. Gotow na powiadomieniowy spam?";
		}
		else
			return "Niski poziom baterii";
	}
	else
		return "B³¹d! Urz¹dzenie ju¿ w³¹czone!";
}

string Smartphone::turnOff()
{
	if (this->isTurnedOn) {
		this->isTurnedOn = false;
		return "Uruchamianie smartfona";
	}
	else
		return "B³¹d! Smartfon ju¿ wy³¹czony!";
}

void Smartphone::runApplication(int appIndex)
{
	cout << "Tap tap, trying to run an app..." << endl;
	if (appIndex <= listOfApps.size()) {
		listOfApps[appIndex-1].run();
	}
	else
		cout << "There is no such an application index" << endl;
}

void Smartphone::installApplication(App & application)
{
	listOfApps.push_back(application);
	cout << "Connecting with AppStore... Downloading... Installing..." << endl;
}

void Smartphone::deleteApplication(int appIndex)
{
	if (appIndex <= listOfApps.size()) {
		listOfApps.erase(listOfApps.begin()+appIndex);
	}
	else
		cout << "There is no such an application index" << endl;
}

void Smartphone::showApplicationList()
{
	for (int i = 0; i < listOfApps.size(); i++) {
		cout << i+1 << ". "<< listOfApps[i].getName() << endl;
	}
}

void Smartphone::takePhoto()
{
	cout << "*FLASH*" << endl;
}

void Smartphone::startVideoConversation()
{
	if (isFrontCamera == true) {
		cout << "Starting a video conversation" << endl;
	}
}

void Smartphone::playMovie()
{
	for (int i = listOfApps.size() - 1; i >= 0; i--) {
		if (listOfApps[i].getCategory() == "Movie") {
			listOfApps[i].run();
			cout << "Latest movie played!" << endl;
			return;
		}
		else
			cout << "You dont have movies on your phone" << endl;
	}
}

void Smartphone::sendEmail()
{
	cout << "Don't forget to add an appendix!" << endl;
}

int Smartphone::getAppsVectorSize()
{
	return this->listOfApps.size();
}

int Smartphone::getNumbersVectorSize()
{
	return this->listOfPhoneNumbers.size();
}

void Smartphone::setCameraResolution(float cameraResolution)
{
		this->cameraResolution = cameraResolution;
}

float Smartphone::getCameraResolution()
{
	return cameraResolution;
}

string Smartphone::getMobileOperatingSystem()
{
	return this->mobileOperatingSystem;
}

bool Smartphone::getIsFrontCamera()
{
	return this->isFrontCamera;
}

void Smartphone::setMobileBrowser(string mobileBrowserName)
{
	this->mobileInternetBrowser = mobileBrowserName;
}

string Smartphone::getMobileBrowser()
{
	return mobileInternetBrowser;
}

void Smartphone::setMobileOperatingSystem(string mobileSystemName)
{
	this->mobileOperatingSystem = mobileSystemName;
}

void Smartphone::setFrontCameraPresence(bool isPresent)
{
	this->isFrontCamera = isPresent;
}

void Smartphone::printTo(ostream & ostream)
{
	Phone::printTo(ostream);
	ostream << mobileOperatingSystem << endl
		<< mobileInternetBrowser << endl
		<< cameraResolution << endl
		<< isFrontCamera << endl;

}

void Smartphone::readFrom(istream & istream)
{
	Phone::readFrom(istream);
	istream >> mobileOperatingSystem >> mobileInternetBrowser >> cameraResolution >> isFrontCamera;
}

istream & operator >> (istream & stream, Smartphone & smartphone)
{
	smartphone.readFrom(stream);
	return stream;
}

ostream & operator<<(ostream & stream, Smartphone & smartphone)
{
	smartphone.printTo(stream);
	return stream;
}
