#include "oknoedytorasmartfona.h"

OknoEdytoraSmartfona::OknoEdytoraSmartfona(Smartphone &smartphone, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->smartphone = &smartphone;

}

OknoEdytoraSmartfona::~OknoEdytoraSmartfona()
{

}
