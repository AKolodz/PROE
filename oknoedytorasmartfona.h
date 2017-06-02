#ifndef OKNOEDYTORASMARTFONA_H
#define OKNOEDYTORASMARTFONA_H

#include <QDialog>
#include "ui_oknoedytorasmartfona.h"
#include "Smartphone.h"

class OknoEdytoraSmartfona : public QDialog
{
	Q_OBJECT

public:
	OknoEdytoraSmartfona(Smartphone &smartphone, QWidget *parent);
	~OknoEdytoraSmartfona();

private:
	Ui::OknoEdytoraSmartfona ui;
	Smartphone *smartphone;
};

#endif // OKNOEDYTORASMARTFONA_H
