#pragma once
#include "Phone.h"
/// Klasa reprezentujaca smartfon, dziedziczaca po Phone.
/** Dostarcza pol i metod rozszerzajacych funkcjonalnosc klasy Phone i pozwalajacych zarzadzac i modelowac obiekt odpowiadajacy smartfonowi. */
class Smartphone : public Phone {
public:
	Smartphone();								/**< Domyslny konstruktor klasy Smartphone. Ustawia pola smartfona zgodnie z domyslnym konstruktorem klasy Phone. Ustawia pola smartfona mobileOperatingSystem = "Android", mobileInternetBrowser = "Chrome", cameraResolution = "3" MPx, isFrontCamera = "true" */
	~Smartphone();								/**< Destruktor klasy Smartphone*/
	void turnOn();								/**< Metoda pozwalajaca na uruchomienie urzadzenia. */
	void turnOff();								/**< Metoda pozwalajaca na wylaczenie urzadzenia. */
	void runApplication(int appIndex);			/**< Metoda uruchamiajaca dzialanie aplikacji o numerze appIndex z wektora vector<App> listOfApps */
	void installApplication(App &application);  /**< Metoda pozwalajaca na dodanie do wektora vector<App> listOfApps aplikacji application pochodzacej z AppStore */
	void deleteApplication(int appIndex);		/**< Metoda pozwalajaca na usuniecie z wektora vector<App> listOfApps aplikacji o numerze appIndex */
	void showApplicationList();					/**< Metoda powodujaca wyswietlenie zawartosci wektora vector<App> listOfApps w terminalu */
	void takePhoto();							/**< Metoda pozwalajaca wykonywac zdjecia z rozdzielczoscia parametru cameraResolution */
	void startVideoConversation();				/**< Metoda pozwalajaca rozpoczac rozmowe wideo z wykorzystaniem przedniej kamery (pod warunkiem ze isFrontCamera = true) */
	void playMovie();							/**< Metoda pozwalajaca na uruchomienie filmu na telefonie (jesli obecny na liscie listOfApps) */
	void sendEmail();							/**< Metoda pozwalajaca na wys³anie wiadomosci email ze smartfona */
	int getAppsVectorSize();
	int getNumbersVectorSize();

	void setCameraResolution(float cameraResolution);	/**< Metoda pozwalajaca ustawic rozdzielczosc pola cameraResolution na wartosc cameraResolution */
	float getCameraResolution();				/**< Metoda pozwalajaca pobrac wartosc pola cameraResorution */
	string getMobileOperatingSystem();
	bool getIsFrontCamera();
	void setMobileBrowser(string mobileBrowserName);
	string getMobileBrowser();
	void setMobileOperatingSystem(string mobileSystemName);
	void setFrontCameraPresence(bool isPresent);

	void printTo(ostream & ostream);			/**< Metoda pozwalajacaa na wpisanie wartosci pol klasy do strumienia wyjsciowego ostream */
	void readFrom(istream& istream);			/**< Metoda pozwalajaca na odczytanie wartosci pol klasy ze strumienia wejsciowego istream */
	friend istream& operator >> (istream& stream, Smartphone &smartphone);	/**< Operator umozliwiajacy wczytnie parametrow instancji klasy ze strumienia wyjsciowego */
	friend ostream& operator<<(ostream &stream, Smartphone & smartphone);	/**< Operator umozliwiajacy zapisanie instancji klasy do strumienia wyjsciowego */

private:
	string mobileOperatingSystem;
	string mobileInternetBrowser;
	float cameraResolution;	/**< Pole okreœlaj¹ce rozdzielczoœæ (w MPx) glownego aparatu smartfona */
	bool isFrontCamera;		/**< Pole okreslajace czy smartfon posiada przednia kamere (od strony wyswietlacza)*/
};