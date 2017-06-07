#include "SmartphoneWrapper.h"

SmartphoneWrapper::SmartphoneWrapper(Smartphone & smartphone)
{
	this->smartphone = &smartphone;
}

SmartphoneWrapper::~SmartphoneWrapper()
{
}

void SmartphoneWrapper::pokazEdytor(QWidget *parent)
{
	oknoEdytora = new OknoEdytoraSmartfona(*smartphone, parent);
	oknoEdytora->show();
}

string SmartphoneWrapper::przedstawSie()
{
	return "Smartfon";
}
