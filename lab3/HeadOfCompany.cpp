#include "HeadOfCompany.h"
#include <iostream>

HeadOfCompany::HeadOfCompany(std::string name, std::string surname, std::string patronymic)
{
	name_ = name;
	surname_ = surname;
	patronymic_ = patronymic;
}

void HeadOfCompany::AddHeadOfDepartment(HeadOfDepartment& head_of_department)
{
	heads_of_departments_.push_back(head_of_department);
}

void HeadOfCompany::SetIncome$(int income)
{
	if (income < 0) throw std::invalid_argument("Negative salary!");
	income_ = income;
}

int HeadOfCompany::CalculateNumberOfSubordinates()
{
	int i = 0, subordinates = 0;
	while ((heads_of_departments_[i].GetName() != heads_of_departments_.back().GetName()) || (heads_of_departments_[i].GetSurname() != heads_of_departments_.back().GetSurname()))
	{
		subordinates++;
		i++;
	}
	subordinates++;
	return subordinates;
}

double HeadOfCompany::GetIncome$()
{
	return income_;
}
