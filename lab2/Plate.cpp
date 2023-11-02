#include "Plate.h"

Plate::Plate(std::string type, int number_of_comforts)
{
	type_ = type;
	number_of_comforts_ = number_of_comforts;
}

void Plate::SetWorkingMode(std::string working_mode)
{
	working_mode_ = working_mode;
}

std::string Plate::GetWorkingMode()
{
	return working_mode_;
}

void Plate::TurnOn()
{
	SetWorkingMode("working");
}

void Plate::TurnOff()
{
	SetWorkingMode("not working");
}
