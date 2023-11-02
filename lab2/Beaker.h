#pragma once
#include "MeasuringInstruments.h"

class Beaker : public MeasuringInstruments
{
	int required_volume_;
	int approaches_;

public:
	Beaker(int limit_ml);
	void Measure(Product&, int);
	int NumberOfApproaches(Beaker& ,int);
};

