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
	connect(ui.Komputer, SIGNAL(released()), this, SLOT(otworzEdytor()));
	connect(ui.Smartfon, SIGNAL(clicked()), this, SLOT(otworzEdytor()));
	connect(ui.Telefon, SIGNAL(clicked()), this, SLOT(otworzEdytor()));

	Laptop* laptop=new Laptop();
	Phone* phone=new Phone();
	Smartphone* smartphone= new Smartphone();

	PhoneWrapper* pWrapper = new PhoneWrapper(*phone);
	KomputerWrapper* kWrapper = new KomputerWrapper(*laptop);
	SmartphoneWrapper* sWrapper = new SmartphoneWrapper(*smartphone);

	wraps.push_back(kWrapper);
	wraps.push_back(pWrapper);
	wraps.push_back(sWrapper);
}

WyborUrzadzen::~WyborUrzadzen()
{

}

void WyborUrzadzen::zamknij()
{
	QApplication::exit();
}

void WyborUrzadzen::otworzEdytor()
{
	if (qobject_cast<QPushButton*>(sender()) == ui.Komputer) {
		wraps[0]->pokazEdytor(this);
	}
	else if (qobject_cast<QPushButton*>(sender()) == ui.Telefon) {
		wraps[1]->pokazEdytor(this);
	}
	else if (qobject_cast<QPushButton*>(sender()) == ui.Smartfon) {
		wraps[2]->pokazEdytor(this);
	}
	
}
