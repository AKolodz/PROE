#ifndef OKNOEDYTORALAPTOPA_H
#define OKNOEDYTORALAPTOPA_H

#include <QDialog>
#include "ui_oknoedytoralaptopa.h"
#include "Laptop.h"

class OknoEdytoraLaptopa : public QDialog
{
	Q_OBJECT

public:
	OknoEdytoraLaptopa(Laptop &laptop, QWidget *parent);
	~OknoEdytoraLaptopa();

private:
	Ui::OknoEdytoraLaptopa ui;
	Laptop *laptop;
};

#endif // OKNOEDYTORALAPTOPA_H
