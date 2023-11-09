#pragma once
#include "Product.h"

class MeasuringInstruments
{
protected:
	int limit_;

public:
	virtual void Measure(Product&, int) = 0;
};

