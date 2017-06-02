#include "oknoedytoralaptopa.h"

OknoEdytoraLaptopa::OknoEdytoraLaptopa(Laptop &laptop, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->laptop = &laptop;
}

OknoEdytoraLaptopa::~OknoEdytoraLaptopa()
{

}
