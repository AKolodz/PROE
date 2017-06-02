#include "PhoneWrapper.h"
#include "qwidget.h"

PhoneWrapper::PhoneWrapper()
{
}

PhoneWrapper::PhoneWrapper(Phone & phone)
{
	this->phone = &phone;
}

PhoneWrapper::~PhoneWrapper()
{
}

void PhoneWrapper::pokazEdytor(QWidget *parent)
{
	oknoEdytora=new OknoEdytora(*phone, parent);
	oknoEdytora->show();
}
