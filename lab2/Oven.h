#pragma once
#include "CookingUtensils.h"
class Oven : public CookingUtensils
{
	int number_of_modes_;
	int working_mode_ = 0;

public:
	Oven(int number_of_modes, double volume, std::string color);
	void Mode(int number_of_mode);
	void SetWorkingMode(int working_mode);
	int GetWorkedMode();
	void CookingMethod(Product&, double);
};

