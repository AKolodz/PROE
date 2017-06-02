#include "oknoedytora.h"
#include "Smartphone.h"
#include <fstream>
#include <iostream>

OknoEdytora::OknoEdytora(Phone &mobileDevice, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->mobileDevice =&mobileDevice;
	uzupelnijDane();
	wyswietlListe();
}

OknoEdytora::~OknoEdytora()
{

}

void OknoEdytora::uzupelnijDane() {
	ui.producent->setText(QString::fromStdString(mobileDevice->getManufacturer()));
	//ui.system_operacyjny->setText(QString::fromStdString(mobileDevice->MobileOperatingSystem()));
	//TODO
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

	wyswietlListe();
}

void OknoEdytora::wyswietlListe()
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
	wyswietlListe();
}

void OknoEdytora::zapisz()
{
	mobileDevice->setManufacturer(ui.producent->text().toStdString());

	//TODO
	ofstream ostream;
	ostream.open("defaultDevice.txt");
	mobileDevice->printTo(ostream);
	ostream.close();
}

void OknoEdytora::wczytaj()
{
	ifstream istream;
	try {
		istream.open("defaultDevice.txt");
		mobileDevice->readFrom(istream);
	}
	catch (...) {
		//oknoBledu=new OknoBledu(this);
		//oknoBledu->show();
	}		
	istream.close();

	uzupelnijDane();
	wyswietlListe();
}

void OknoEdytora::wylacz()
{
	ui.wlaczanie_label->setText(QString::fromStdString(mobileDevice->turnOff()));
}

void OknoEdytora::wlacz()
{
	ui.wlaczanie_label->setText(QString::fromStdString(mobileDevice->turnOn()));
}
