
#include "HeadOfDepartment.h"
#include <iostream>

HeadOfDepartment::HeadOfDepartment(std::string name, std::string surname, std::string patronymic, double salary, int year_of_employment)
{
	name_ = name;
	surname_ = surname;
	patronymic_ = patronymic;
	if (salary < 0) throw std::invalid_argument("Negative salary!");
	salary_ = salary;
	year_of_employment_ = year_of_employment;
}

void HeadOfDepartment::AddHeadOfUnit(HeadOfUnit& head_of_unit)
{
	heads_of_units_.push_back(head_of_unit);
}

int HeadOfDepartment::CalculateNumberOfSubordinates()
{
	int i = 0, subordinates = 0;
	while ((heads_of_units_[i].GetName() != heads_of_units_.back().GetName()) || (heads_of_units_[i].GetSurname() != heads_of_units_.back().GetSurname()))
	{
		subordinates++;
		i++;
	}
	subordinates++;
	return subordinates;
}
