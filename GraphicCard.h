#pragma once
#include <string>
using namespace std;
/// Klasa reprezentujaca karte graficzna dla klasy Laptop.
/** Dostarcza pol i metod pozwalajacych zarzadzac i modelowac obiekt odpowiadajacy karcie graficznej. */
class GraphicCard {
public:
	GraphicCard();
	~GraphicCard();

	void increaseTemperature(float addedDegrees); 
	void setTemperature(float temperature);
	void setMemoryType(string memoryType);
	void setClockSpeed(int clockSpeed);
	float getTemperature();
	int getClockSpeed();
	string getMemoryType(); 

	friend ostream& operator<<(ostream &stream, GraphicCard & graphicCard);
	friend istream& operator >> (istream &stream, GraphicCard & graphicCard);

private:
	float temperature;  /**< Pole opisujace aktualna temperature karty graficznej*/
	int clockSpeed;	 /**< Pole opisujace czestosc taktowania zegara karty graficznej*/
	string memoryType;  /**< Pole opisujace rodzaj pamieci wykorzystywanej w karcie (GDDR3 lub GDDR5)*/
	
};