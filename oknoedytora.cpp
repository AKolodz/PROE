#include "oknoedytora.h"
#include "Smartphone.h"
#include <fstream>
#include <iostream>
#include <qpixmap.h>

OknoEdytora::OknoEdytora(Phone &mobileDevice, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->mobileDevice =&mobileDevice;
	uzupelnijDane();
	wyswietlListeAplikacji();
	wyswietlListeNumerow();
}

OknoEdytora::~OknoEdytora()
{

}

void OknoEdytora::uzupelnijDane() {
	QPixmap pix("D:/visual studio 2015/Projects/WyborUrzadzen/WyborUrzadzen/Resources/nokia.png");
	ui.logo_label->setPixmap(pix);
	ui.producent->setText(QString::fromStdString(mobileDevice->getManufacturer()));
	ui.waga->setText(QString::number(mobileDevice->getWeight()));
	ui.cena->setText(QString::number(mobileDevice->getPrice()));
}

void OknoEdytora::dodajAplikacje() {
	string kategoria, nazwa, developer;
	int wymaganaPamiec;
	float wersja;
	kategoria = ui.kategoria_app->text().toStdString();
	nazwa = ui.nazwa_app->text().toStdString();
	developer = ui.dev_app->text().toStdString();
	wymaganaPamiec = ui.pamiec_app->text().toInt();
	wersja = ui.wersja_app->text().toFloat();

	App* app = new App(kategoria, nazwa, developer, wymaganaPamiec, wersja);
	mobileDevice->installApplication(*app);

	wyswietlListeAplikacji();
}

void OknoEdytora::wyswietlListeAplikacji()
{
	ui.lista_app->clear();
	for (int i = 0; i < mobileDevice->listOfApps.size(); i++) {
		QListWidgetItem *item = new QListWidgetItem(QString::fromStdString(mobileDevice->listOfApps[i].getName()));
		ui.lista_app->addItem(item);
	}
}

void OknoEdytora::usunAplikacje()
{
	mobileDevice->deleteApplication(ui.lista_app->currentRow());
	wyswietlListeAplikacji();
}

void OknoEdytora::zapisz()
{
	mobileDevice->setManufacturer(ui.producent->text().toStdString());
	mobileDevice->setPrice(ui.cena->text().toFloat());
	mobileDevice->setWeight(ui.waga->text().toFloat());
	ofstream ostream;
	ostream.open("defaultPhoneDevice.txt");
	mobileDevice->printTo(ostream);
	ostream.close();
}

void OknoEdytora::wczytaj()
{
	ifstream istream;
	try {
		istream.open("defaultPhoneDevice.txt");
		mobileDevice->readFrom(istream);
	}
	catch (...) {
		//oknoBledu=new OknoBledu(this);
		//oknoBledu->show();
	}		
	istream.close();

	uzupelnijDane();
	wyswietlListeAplikacji();
	wyswietlListeNumerow();
}

void OknoEdytora::wylacz()
{
	ui.wlaczanie_label->setText(QString::fromStdString(mobileDevice->turnOff()));
}

void OknoEdytora::dodajNumer()
{
	string nazwa, numer;
	PhoneNumber *phoneNumber = new PhoneNumber(ui.nazwa_num->text().toStdString(), ui.numer_num->text().toStdString());
	mobileDevice->addNumber(*phoneNumber);
	wyswietlListeNumerow();
}

void OknoEdytora::usunNumer()
{
	mobileDevice->deleteNumber(ui.lista_numerow->currentRow());
	wyswietlListeNumerow();
}

void OknoEdytora::wyswietlListeNumerow()
{
	ui.lista_numerow->clear();
	for (int i = 0; i < mobileDevice->listOfPhoneNumbers.size(); i++) {
		QListWidgetItem *item = new QListWidgetItem(QString::fromStdString(mobileDevice->listOfPhoneNumbers[i].getName()));
		ui.lista_numerow->addItem(item);
	}
}

void OknoEdytora::wlacz()
{
	ui.wlaczanie_label->setText(QString::fromStdString(mobileDevice->turnOn()));
}
