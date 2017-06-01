#include "wyborurzadzen.h"
#include "Laptop.h"
#include "Smartphone.h"
#include "Phone.h"
#include <qsignalmapper>

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
	listaUrzadzen.push_back(laptop);
	listaUrzadzen.push_back(phone);
	listaUrzadzen.push_back(smartphone);
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
		oknoEdytora = new OknoEdytora(*listaUrzadzen[0], this);
		oknoEdytora->show();
	}
	else if (qobject_cast<QPushButton*>(sender()) == ui.Telefon) {
		oknoEdytora = new OknoEdytora(*listaUrzadzen[1],this);
		oknoEdytora->show();
	}
	else if (qobject_cast<QPushButton*>(sender()) == ui.Smartfon) {
		oknoEdytora = new OknoEdytora(*listaUrzadzen[2], this);
		oknoEdytora->show();
	}

}
