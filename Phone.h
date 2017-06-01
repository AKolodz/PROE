#pragma once
#include "MobileDevice.h"
#include "PhoneNumber.h"
#include <vector>
/// Klasa reprezentujaca telefon komorkowy, dziedziczaca po MobileDevice.
/** Dostarcza pol i metod rozszerzajacych funkcjonalnosc klasy MobileDevice i pozwalajacych zarzadzac i modelowac obiekt odpowiadajacy telefonowi komorkowemu. */
class Phone : public MobileDevice {
public:
	Phone();									/**< Domyslny konstruktor klasy MobileDevice. Ustawia pola telefonu zgodnie z domyslnym konstruktorem klasy MobileDevice, a wektor vector<PhoneNumber> wypelnia 3 numerami alarmowymi: 997, 998, 999. */
	~Phone();									/**< Destruktor klasy Phone*/
	void turnOn();								/**< Metoda pozwalajaca na uruchomienie urzadzenia. */
	void turnOff();								/**< Metoda pozwalajaca na wylaczenie urzadzenia. */
	void runApplication(int appIndex);			/**< Metoda uruchamiajaca dzialanie aplikacji o numerze appIndex z wektora vector<App> listOfApps */
	void installApplication(App & application); /**< Metoda pozwalajaca na dodanie do wektora vector<App> listOfApps aplikacji application */
	void deleteApplication(int appIndex);		/**< Metoda pozwalajaca na usuniecie z wektora vector<App> listOfApps aplikacji o numerze appIndex */
	void showApplicationList();					/**< Metoda powodujaca wyswietlenie zawartosci wektora vector<App> listOfApps w terminalu */
	virtual void addNumber(PhoneNumber & phoneNumber);	/**< Metoda umozliwiajaca dodanie domyslnego rekordu do wektora vector<PhoneNumber> listOfPhoneNumbers */
	virtual void deleteNumber(int numberIndex);	/**< Metoda umozliwiajaca usuniecie rekordu o numerze numberIndex z wektora vector<PhoneNumber> listOfPhoneNumbers */
	virtual void call(int numberIndex);			/**< Metoda umozliwiajaca nawiazanie polaczenia z rekordem o numerze numberIndex z wektora vector<PhoneNumber> listOfPhoneNumbers */
	virtual void sendSMS(int numberIndex, string message);	/**< Metoda umozliwiajaca nawiazanie wyslanie wiadomosci sms pod rekord o numerze numberIndex z wektora vector<PhoneNumber> listOfPhoneNumbers */
	virtual void showNumbers();					/**< Metodapowodujaca wyswietlenie w terminalu rekordow wektora vector<PhoneNumber> listOfPhoneNumbers */
	
	void printTo(ostream & ostream);			/**< Metoda pozwalajacaa na wpisanie wartosci pol klasy do strumienia wyjsciowego ostream */
	void readFrom(istream & istream);			/**< Metoda pozwalajaca na odczytanie wartosci pol klasy ze strumienia wejsciowego istream */
	friend ostream& operator<<(ostream &stream, Phone & phone);	/**< Operator umozliwiajacy zapisanie instancji klasy do strumienia wyjsciowego */
	friend istream& operator>>(istream &stream, Phone &phone);	/**< Operator umozliwiajacy wczytnie parametrow instancji klasy ze strumienia wyjsciowego */


protected:
	vector<PhoneNumber> listOfPhoneNumbers;		/**< Wektor zawierajacy liste numerow telefonow */
};