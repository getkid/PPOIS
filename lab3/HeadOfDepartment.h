#pragma once
#include "Human.h"
#include "HeadOfUnit.h"
#include "Employee.h"
#include <vector>

class HeadOfDepartment : public Employee
{
	std::vector<HeadOfUnit> heads_of_units_;

public:
	HeadOfDepartment(std::string name, std::string surname, std::string patronymic, double salary, int year_of_employment);
	void AddHeadOfUnit(HeadOfUnit& head_of_unit);
	int CalculateNumberOfSubordinates();
};
