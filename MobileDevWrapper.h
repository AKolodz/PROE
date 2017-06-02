#pragma once
#include <qwidget.h>
class MobileDevWrapper
{
public:
	MobileDevWrapper();
	virtual ~MobileDevWrapper();
	virtual void pokazEdytor(QWidget *parent) = 0;
};

