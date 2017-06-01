#pragma once
#include <string>

using namespace std;
/// Klasa reprezentujaca baterie.
/** Dostarcza pol i metod pozwalajacych zarzadzac i modelowac obiekt odpowiadajacy baterii. */
class Battery {
public:
	Battery();
	Battery(string type, float nominalVoltage, int nominalCapacity, int state);
	~Battery();
	void setType(string type);
	void setVoltage(float nominalVoltage);
	void setCapacity(int nominalCapacity);
	void setState(int state);
	string getType();
	float getVoltage();
	int getCapacity();
	int getState();

	Battery operator+(Battery &battery); /**< Operator dodajacy baterie w sposob szeregowy*/
	bool operator==(const Battery &battery);  /**< Operator porownujacy baterie wg. kryterium pojemnoœci i napiecia nominalnego*/
	Battery operator||(const Battery & battery); /**< Operator dodajacy baterie w sposob rownolegly*/
	Battery operator<(const Battery& battery); /**< Operator zwracajacy baterie o wiekszej pojemnosci*/
	operator string();
	friend ostream& operator<<(ostream &stream, Battery & battery); /**< Operator umozliwiajacy zapisanie instancji klasy do strumienia wyjsciowego */
	friend istream& operator>>(istream &stream, Battery & battery); /**< Operator umozliwiajacy wczytnie parametrow instancji klasy ze strumienia wyjsciowego */

private:
	static int numberOfBatteries;
	string type;
	float nominalVoltage;
	int nominalCapacity;
	int state;  /**< Pole opisujac aktualnye poziom naladowania baterii (wyrazony w %)*/
};