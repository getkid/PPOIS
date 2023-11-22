#pragma once
#include "HeadOfCompany.h"
#include "HeadOfDepartment.h"
#include "HeadOfUnit.h"
#include "TeamLeader.h"

class Guidance
{
	std::vector<HeadOfCompany> head_of_company_;
	std::vector<HeadOfDepartment> heads_of_departments_;
	std::vector<HeadOfUnit> heads_of_units_;
	std::vector<TeamLeader> team_leaders_;

public:
	void AddHeadOfCompany(HeadOfCompany& head_of_company);
	void AddHeadOfDepartment(HeadOfDepartment& head_of_department);
	void AddHeadOfUnit(HeadOfUnit& head_of_unit);
	void AddTeamLeader(TeamLeader& team_leader);
	double CalculateSalaryExpense();
};

