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
	OknoEdytora(MobileDevice &mobileDevice, QWidget *parent = 0);
	~OknoEdytora();

	public slots:
	void uzupelnijDane();
	void dodajAplikacje();
	void wyswietlListe();
	void usunAplikacje();
	void zapisz();
	void wczytaj();

private:
	Ui::OknoEdytora ui;
	MobileDevice* mobileDevice;
};

#endif // OKNOEDYTORA_H
