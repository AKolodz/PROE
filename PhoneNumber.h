#pragma once
#include <string>
using namespace std;
/// Klasa reprezentujaca kontakty telefoniczne powiazane z klasa Phone.
/** Dostarcza pol i metod pozwalajacych zarzadzac obiektem odpowiadajacym kontaktowi telefonicznemu. */
class PhoneNumber {
public:
	PhoneNumber();
	PhoneNumber(string name, string number);
	~PhoneNumber();

	void setNumber(string number);
	void setName(string name);
	string getNumber();
	string getName();
	void calling();  /**< Metoda wykonujaca polaczenie dla biezacej instancji numeru telefonu */
	void smsSending(string message); /**< Metoda wysylajaca wiadomosc message pod biezaca instancje numeru telefonu */

	bool operator==(const PhoneNumber &number);
	operator string();
	friend ostream& operator<<(ostream &stream, PhoneNumber & phoneNumber);
	friend istream& operator>>(istream &stream, PhoneNumber & phoneNumber);

private:
	string number;
	string name;
};