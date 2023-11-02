#pragma once
#include <string>

class Plate
{
	std::string type_;
	int number_of_comforts_;
	std::string working_mode_ = "not working";

public:
	Plate(std::string type, int number_of_comforts);
	Plate() = default;
	void SetWorkingMode(std::string working_mode);
	std::string GetWorkingMode();
	void TurnOn();
	void TurnOff();
};

