#pragma once
#include "Human.h"
#include "TeamLeader.h"
#include "Employee.h"
#include <vector>

class HeadOfUnit : public Employee
{
	std::vector<TeamLeader> team_leaders_;

public:
	HeadOfUnit(std::string name, std::string surname, std::string patronymic, double salary, int year_of_employment);
	void AddTeamLeader(TeamLeader& team_leader);	
	int CalculateNumberOfSubordinates();
};
