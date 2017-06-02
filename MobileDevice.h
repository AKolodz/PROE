
#pragma once
#include "App.h"
#include "Battery.h"
#include <string>
#include <vector>
using namespace std;
/// Klasa abstrakcyjna reprezentujaca reprezentujaca urzadzenie mobilne.
/** Dostarcza pol i metod wykorzystywanych przez klasy dziedziczace: Phone oraz Laptop. */
class MobileDevice {
public:
	MobileDevice();											/**< Domyslny konstruktor klasy MobileDevice. Ustawia pola urzadzenia mobilnego jako weight = "0" g, price = "0" PLN, size = "0" cali, clockRate = "0" Hz, manufacturer = "1.0", isTurnedOn = "false", battery = domyslna, listOfApps = pojedynczy, domyslny element */
	virtual ~MobileDevice();								/**< Destruktor klasy MobileDevice*/

	virtual string turnOn();									/**< Metoda pozwalajaca na uruchomienie urzadzenia */
	virtual string turnOff();									/**< Metoda pozwalajaca na wylaczenie urzadzenia */
	virtual int checkBatteryState();						/**< Metoda pozwalajaca sptawdzic stan naladowania baterii urzadzenia (wyrazony w %) */
	virtual void chargeBattery(int batteryState = 100);		/**< Metoda pozwalajaca naladowac urzadzenie */
	virtual void runApplication(int appIndex) = 0;			/**< Metoda uruchamiajaca dzialanie aplikacji o numerze appIndex z wektora vector<App> listOfApps */
	virtual void installApplication(App &application) = 0;	/**< Metoda pozwalajaca na dodanie do wektora vector<App> listOfApps aplikacji application */
	virtual void deleteApplication(int appIndex) = 0;		/**< Metoda pozwalajaca na usuniecie z wektora vector<App> listOfApps aplikacji o numerze appIndex */
	virtual void showApplicationList() = 0;					/**< Metoda powodujaca wyswietlenie zawartosci wektora vector<App> listOfApps w terminalu */

	virtual void setWeight(float weight);					/**< Metoda pozwalajaca na wprowadzenie wagi (w gramach)*/
	virtual void setPrice(float price);						/**< Metoda pozwalajaca na wprowadzenie ceny (w PLN)*/
	virtual void setSize(float size);						/**< Metoda pozwalajaca na wprowadzenie wielkosci (w calach)*/
	virtual void setClockRate(int clockRate);				/**< Metoda pozwalajaca na wprowadzenie czestosci taktowania procesora (w Hz)*/
	virtual void setManufacturer(string manufacturer);		/**< Metoda pozwalajaca na wprowadzenie nazwy producenta urzadzenia */
	virtual void setIsTurnedOn(bool isTurnedOn);			/**< Metoda pozwalajaca na wprowadzenie stanu w jakim snajduje sie urzadzenie (wlaczony / wylaczony)*/
	virtual void setBattery(Battery battery);				/**< Metoda pozwalajaca na wprowadzenie baterii dla urzadzenia*/
	virtual float getWeight();								/**< Metoda pozwalajaca uzyskac wage urzadzenia (w gramach)*/
	virtual float getPrice();								/**< Metoda pozwalajaca uzyskac cene urzadzenia (w PLN)*/
	virtual float getSize();								/**< Metoda pozwalajaca uzyskac wielkosc urzadzenia (w calach)*/
	virtual int getClockRate();								/**< Metoda pozwalajaca uzyskac	czestost taktowania procesora (w Hz)*/
	virtual string getManufacturer();						/**< Metoda pozwalajaca uzyskac nazwe producenta*/
	virtual bool getIsTurnedOn();							/**< Metoda pozwalajaca uzyskac stan urzaczenia (wlaczone / wylaczone)*/
	virtual Battery getBattery();							/**< Metoda pozwalajaca uzyskac baterie urzadzenia*/

	virtual void printTo(ostream &ostream);					/**< Metoda pozwalajacaa na wpisanie wartosci pol klasy do strumienia wyjsciowego ostream */
	virtual void readFrom(istream &istream);				/**< Metoda pozwalajaca na odczytanie wartosci pol klasy ze strumienia wejsciowego istream */

	vector<App> listOfApps;	/**< Wektor zawierajacy liste aplikacji */
protected:
	float weight;			/**< Waga urzadzenia [g] */
	float price;			/**< Wartosc urzadzenia [PLN] */
	float size;				/**< Wielkosc urzadzenia [inch] */
	int clockRate;			/**< Czestosc pracy procesora [Hz] */
	string manufacturer;
	bool isTurnedOn;		/**< Stan urzadzenia (true oznacza wlaczone) */
	Battery battery;
	

};