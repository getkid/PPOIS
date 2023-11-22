#pragma once
#include "Human.h"
#include "Developer.h"
#include "Employee.h"
#include <vector>

class TeamLeader : public Employee
{
	std::vector<Developer> developers_;

public:
	TeamLeader(std::string name, std::string surname, std::string patronymic, double salary, int year_of_employment);
	void AddDeveloper(Developer& developer);
	int CalculateNumberOfSubordinates();
};
