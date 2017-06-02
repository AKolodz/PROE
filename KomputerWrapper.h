#pragma once
#include "MobileDevWrapper.h"
#include "Laptop.h"
#include "oknoedytoralaptopa.h"

class KomputerWrapper :
	public MobileDevWrapper
{
public:
	KomputerWrapper();
	KomputerWrapper(Laptop &laptop);
	~KomputerWrapper();
	void pokazEdytor(QWidget *parent);
	Laptop *laptop;
	OknoEdytoraLaptopa* oknoEdytora;
};

