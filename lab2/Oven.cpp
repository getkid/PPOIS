#include "Oven.h"

Oven::Oven(int number_of_modes, double volume, std::string color)
{
	number_of_modes_ = number_of_modes;
	volume_ = volume;
	color_ = color;
}

void Oven::Mode(int number_of_mode)
{
	SetWorkingMode(number_of_mode);
}

void Oven::SetWorkingMode(int working_mode)
{
	working_mode_ = working_mode;
}

int Oven::GetWorkedMode()
{
	return working_mode_;
}

void Oven::CookingMethod(Product& a, double time)
{
	a.SetProductState("baked");
}


