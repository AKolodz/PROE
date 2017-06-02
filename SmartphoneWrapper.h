#pragma once
#include "MobileDevWrapper.h"
#include "Smartphone.h"
#include "oknoedytorasmartfona.h"

class SmartphoneWrapper :
	public MobileDevWrapper
{
public:
	SmartphoneWrapper(Smartphone &smartphone);
	~SmartphoneWrapper();
	Smartphone *smartphone;
	void pokazEdytor(QWidget *parent);
	OknoEdytoraSmartfona* oknoEdytora;
};

