#pragma once
#include "CookingUtensils.h"

class Pot : public CookingUtensils
{
	double diameter_;

public:
	Pot(double diameter, double volume, std::string color);
	void CookingMethod(Product&, double);
};

