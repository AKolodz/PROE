#pragma once
#include "MobileDevWrapper.h"
#include "Phone.h"
#include "oknoedytora.h"
class PhoneWrapper :
	public MobileDevWrapper
{
public:
	PhoneWrapper();
	PhoneWrapper(Phone &phone);
	~PhoneWrapper();
	Phone* phone;
	void pokazEdytor(QWidget *parent);
	string przedstawSie();
	OknoEdytora *oknoEdytora;

};

