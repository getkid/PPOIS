#pragma once
#define current_year = 2023
#include <string>
#include <vector>

class Game
{
protected:
	std::string name_;
	std::string genre_;
	std::string type_;
	std::string dimension_;
	std::string view_;
	int year_of_starting_development_;
	double memory_capacity_GB_;

public:
	void SetYearOfDevelopment(int year_of_starting_development);
	int CalculateYearsOfDevelopment();
	void SetMemory(double memory_capacity_GB);
	double GetMemory();
};

