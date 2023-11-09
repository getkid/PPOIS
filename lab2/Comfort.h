#pragma once
#include "Plate.h"
class Comfort : public Plate
{
	int number_of_modes_;
	int working_mode_ = 0;

public:
	Comfort(int number_of_modes);
	void SetWorkingMode(int working_mode);
	int GetWorkingMode();
	void Mode(int number_of_mode);
};

