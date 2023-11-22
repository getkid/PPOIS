#pragma once
#include "CookingUtensils.h"

class Pan : public CookingUtensils
{
	double diameter_;

public:
	Pan(double diameter, double volume, std::string color);
	void CookingMethod(Product&, double time);
};

