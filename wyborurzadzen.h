#ifndef WYBORURZADZEN_H
#define WYBORURZADZEN_H

#include <QtWidgets/QMainWindow>
#include "ui_wyborurzadzen.h"
#include "MobileDevice.h"
#include "oknoedytora.h"
#include "Phone.h"
#include "PhoneWrapper.h"

class WyborUrzadzen : public QMainWindow
{
	Q_OBJECT

public:
	WyborUrzadzen(QWidget *parent = 0);
	~WyborUrzadzen();

	public slots:
	void otworzEdytor();
	void zamknij();
	void dodajUrzadzenie();
	void usunUrzadzenie();
	void wyswietlListeUrzadzen();

private:
	Ui::WyborUrzadzenClass ui;
	vector<MobileDevWrapper*> wraps;
	OknoEdytora *oknoEdytora;
};

#endif // WYBORURZADZEN_H
