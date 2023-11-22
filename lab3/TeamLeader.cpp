
#include "TeamLeader.h"
#include <iostream>

TeamLeader::TeamLeader(std::string name, std::string surname, std::string patronymic, double salary, int year_of_employment)
{
	name_ = name;
	surname_ = surname;
	patronymic_ = patronymic;
	if (salary < 0) throw std::invalid_argument("Negative salary!");
	salary_ = salary;
	year_of_employment_ = year_of_employment;
}

void TeamLeader::AddDeveloper(Developer& developer)
{
	developers_.push_back(developer);
}

int TeamLeader::CalculateNumberOfSubordinates()
{
	int i = 0, subordinates = 0;
	while (developers_[i].GetName() != developers_.back().GetName())
	{
		subordinates++;
		i++;
	}
	subordinates++;
	return subordinates;
}
