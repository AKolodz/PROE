#include "KomputerWrapper.h"



KomputerWrapper::KomputerWrapper()
{
}

KomputerWrapper::KomputerWrapper(Laptop & laptop)
{
	this->laptop = &laptop;
}


KomputerWrapper::~KomputerWrapper()
{
}

void KomputerWrapper::pokazEdytor(QWidget *parent)
{
	oknoEdytora = new OknoEdytoraLaptopa(*laptop, parent);
	oknoEdytora->show();
}
