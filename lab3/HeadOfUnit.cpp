
#include "HeadOfUnit.h"
#include <iostream>

HeadOfUnit::HeadOfUnit(std::string name, std::string surname, std::string patronymic, double salary, int year_of_employment)
{
	name_ = name;
	surname_ = surname;
	patronymic_ = patronymic;
	if(salary < 0) throw std::invalid_argument("Negative salary!");
	salary_ = salary;
	year_of_employment_ = year_of_employment;
}

void HeadOfUnit::AddTeamLeader(TeamLeader& team_leader)
{
	team_leaders_.push_back(team_leader);
}

int HeadOfUnit::CalculateNumberOfSubordinates()
{
	int i = 0, subordinates = 0;
	while (team_leaders_[i].GetName() != team_leaders_.back().GetName())
	{
		subordinates++;
		i++;
	}
	subordinates++;
	return subordinates;
}
