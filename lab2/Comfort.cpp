#include "Comfort.h"

void Comfort::Mode(int number_of_mode)
{
	SetWorkingMode(number_of_mode);
}

Comfort::Comfort(int number_of_modes)
{
	number_of_modes_ = number_of_modes;
}

void Comfort::SetWorkingMode(int working_mode)
{
	working_mode_ = working_mode;
}

int Comfort::GetWorkingMode()
{
	return working_mode_;
}