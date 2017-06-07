#ifndef OKNOEDYTORA_H
#define OKNOEDYTORA_H

#include <QDialog>
#include "ui_oknoedytora.h"
#include "MobileDevice.h"
#include "Phone.h"

class OknoEdytora : public QDialog
{
	Q_OBJECT

public:
	OknoEdytora(Phone &mobileDevice, QWidget *parent = 0);
	~OknoEdytora();

	public slots:
	void uzupelnijDane();
	void dodajAplikacje();
	void wyswietlListeAplikacji();
	void usunAplikacje();
	void zapisz();
	void wczytaj();
	void wlacz();
	void wylacz();
	void dodajNumer();
	void usunNumer();
	void wyswietlListeNumerow();

private:
	Ui::OknoEdytora ui;
	Phone* mobileDevice;
};

#endif // OKNOEDYTORA_H
