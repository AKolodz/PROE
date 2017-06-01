#pragma once
#include "MobileDevice.h"
#include "GraphicCard.h"
/// Klasa reprezentujaca aplikacje dla urzadzen mobilnych.
/** Dostarcza pol i metod pozwalajacych zarzadzac obiektem odpowiadajacym aplikacji mobilnej. */
class Laptop: public MobileDevice {
public:
	//enum DriveType { HDD, SSD, HDD_SSD, Other };

	Laptop();
	~Laptop();
	void turnOn();
	void turnOff();
	void runApplication(int appIndex);
	void installApplication(App & application);
	void deleteApplication(int appIndex);
	void showApplicationList();

	void playGame();
	void playMovie();
	void runProgrammingIDE();

	void setDiskStationPresence(bool stationState);
	void setHDMIPresence(bool hdmiPresence);
	void setDriveType(string driveType);
	void setOperatingSystem(string operatingSystem);
	void setGrapgicCard(GraphicCard graphicCard);
	bool getDiskPresence();
	bool getHDMIPresence();
	string getDriveType();
	string getOperatingSystem();
	GraphicCard getGraphicCard();

	void printTo(ostream & ostream);
	void readFrom(istream & istream);
	friend ostream& operator<<(ostream &stream, Laptop & laptop);
	friend istream& operator>>(istream &stream, Laptop & laptop);

private:
	bool isDiskStation, isHDMI;
	string driveType;
	string operatingSystem;
	GraphicCard graphicCard;
	
};