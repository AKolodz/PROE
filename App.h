#pragma once
#include <string>
using namespace std;
/// Klasa reprezentujaca aplikacje dla urzadzen mobilnych.
/** Dostarcza pol i metod pozwalajacych zarzadzac obiektem odpowiadajacym aplikacji mobilnej. */
class App {
public:
	App();													/**< Domyslny konstruktor klasy App. Ustawia pola aplikaji jako cathegory = "Other", name = "NoName", developer = "Unknown", requiredMemory = "0" B, versionNumber = "1.0" */
	App(string category, string name, string developer, int requiredMemory, float versionNumber); /**< Konstruktor umozliwiajacy wprowadzenie wartosci wszystkich pol tworzonej instancji klasy */
	~App();													/**< Destruktor klasy App */
	void setCategory(string category);						/**< Statyczna wartosc odpowiadajaca liczbie wszystkich utworzonych instancji klasy */
	void setName(string name);								/**< Metoda pozwalajaca na wprowadzenie nazwy aplikacji */
	void setDeveloper(string developer);					/**< Metoda pozwalajaca na wprowadzenie nazwy tworcy aplikacji */
	void setRequiredMemory(int requiredMemory);				/**< Metoda pozwalajaca okreslic ilosc (w B) wymaganej pamieci do zainstalowania aplikacji na urzadzeniu klasy MobileDevice */
	void setVersionNumber(float versionNumber);				/**< Metoda pozwalajaca okreslic wersje aplikacji */
	string getCategory();									/**< Metoda pozwalajaca poznac kategorie do ktorej aplikacja nalezy. */
	string getName();										/**< Metoda pozwalajaca uzyskac nazwe aplikacji */
	string getDeveloper();									/**< Metoda pozwalajaca uzyskac nazwe tworcy aplikacji */
	int getRequiredMemory();								/**< Metoda pozwalajaca uzyskac ilosc pamieci (w B) potrzebnej do zainstalowania aplikacji na urzadzeniu MobileDevice */
	float getVersionNumber();								/**< Metoda pozwalajaca uzyskac wersje aplikacji */

	friend ostream& operator<<(ostream &stream, App & app);	/**< Operator umozliwiajacy zapisanie instancji klasy do strumienia wyjsciowego */
	friend istream& operator>>(istream &stream, App & app);	/**< Operator umozliwiajacy wczytnie parametrow instancji klasy ze strumienia wyjsciowego */

	void run();												/**< Metoda pozwalajaca uruchomic aplikacje */

private:
	static int numberOfApps;	/**< Zmienna statyczna, ktorej wartosc odpowiada wszystkim utworzonym w projekcie aplikacjom */
	string category;			/**< Pole opisujace kategorie do jakiej nalezy aplikacja*/
	string name;
	string developer;				
	int requiredMemory;			/**< Pole opisujace ilosc pamieci (w bajtach) potrzebnej do zainstalowania aplikacji na urzadzeniu */
	float versionNumber;
};