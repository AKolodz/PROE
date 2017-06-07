#include "wyborurzadzen.h"
#include "Laptop.h"
#include "Smartphone.h"
#include "Phone.h"
#include "PhoneWrapper.h"
#include "KomputerWrapper.h"
#include "SmartphoneWrapper.h"

WyborUrzadzen::WyborUrzadzen(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.Komputer, SIGNAL(clicked()), this, SLOT(dodajUrzadzenie()));
	connect(ui.Smartfon, SIGNAL(clicked()), this, SLOT(dodajUrzadzenie()));
	connect(ui.Telefon, SIGNAL(clicked()), this, SLOT(dodajUrzadzenie()));
}

WyborUrzadzen::~WyborUrzadzen()
{

}

void WyborUrzadzen::zamknij()
{
	QApplication::exit();
}

void WyborUrzadzen::dodajUrzadzenie()
{
	if (qobject_cast<QPushButton*>(sender()) == ui.Komputer) {
		Laptop* laptop = new Laptop();
		KomputerWrapper* komputerWrapper = new KomputerWrapper(*laptop);
		this->wraps.push_back(komputerWrapper);
	}
	else if (qobject_cast<QPushButton*>(sender()) == ui.Telefon) {
		Phone* phone = new Phone();
		PhoneWrapper* phoneWrapper = new PhoneWrapper(*phone);
		this->wraps.push_back(phoneWrapper);
	}
	else if (qobject_cast<QPushButton*>(sender()) == ui.Smartfon) {
		Smartphone* smartphone = new Smartphone();
		SmartphoneWrapper* smartphoneWrapper = new SmartphoneWrapper(*smartphone);
		this->wraps.push_back(smartphoneWrapper);
	}
	wyswietlListeUrzadzen();
}

void WyborUrzadzen::usunUrzadzenie()
{
	this->wraps.erase(this->wraps.begin()+ui.lista_urzadzen->currentRow());
	wyswietlListeUrzadzen();
}

void WyborUrzadzen::wyswietlListeUrzadzen()
{
	ui.lista_urzadzen->clear();
	for (int i = 0; i < this->wraps.size(); i++) {
		QListWidgetItem *item = new QListWidgetItem(QString::fromStdString(this->wraps[i]->przedstawSie()));
		ui.lista_urzadzen->addItem(item);
	}
}

void WyborUrzadzen::otworzEdytor()
{
	this->wraps[ui.lista_urzadzen->currentRow()]->pokazEdytor(this);
}
