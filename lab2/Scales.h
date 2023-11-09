#pragma once
#include "Product.h"
#include "MeasuringInstruments.h"

class Scales : public MeasuringInstruments
{
	std::string type_;
	int required_weight_;
	
public:
	Scales(std::string, int limit);
	void Measure(Product&, int);
};

