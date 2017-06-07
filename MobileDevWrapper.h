#pragma once
#include <qwidget.h>
#include <string>
#include <iostream>
using namespace std;

class MobileDevWrapper
{
public:
	MobileDevWrapper();
	virtual ~MobileDevWrapper();
	virtual void pokazEdytor(QWidget *parent) = 0;
	virtual string przedstawSie() = 0;
};

