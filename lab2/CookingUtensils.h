#pragma once
#include "Product.h"

class CookingUtensils
{
protected:
	double time_;
	double volume_;
	std::string color_;

public:
	virtual void CookingMethod(Product&, double) = 0;
};

