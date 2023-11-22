#include "Guidance.h"

void Guidance::AddHeadOfCompany(HeadOfCompany& head_of_company)
{
	head_of_company_.push_back(head_of_company);
}

void Guidance::AddHeadOfDepartment(HeadOfDepartment& head_of_department)
{
	heads_of_departments_.push_back(head_of_department);
}

void Guidance::AddHeadOfUnit(HeadOfUnit& head_of_unit)
{
	heads_of_units_.push_back(head_of_unit);
}

void Guidance::AddTeamLeader(TeamLeader& team_leader)
{
	team_leaders_.push_back(team_leader);
}

double Guidance::CalculateSalaryExpense()
{
	double salary_expense = 0;
	int i = 0;
	while ((heads_of_departments_[i].GetName() != heads_of_departments_.back().GetName()) || (heads_of_departments_[i].GetSurname() != heads_of_departments_.back().GetSurname()))
	{
		salary_expense += heads_of_departments_[i].GetSalary$();
		i++;
	}
	salary_expense += heads_of_departments_[i].GetSalary$();
	while ((heads_of_units_[i].GetName() != heads_of_units_.back().GetName()) || (heads_of_units_[i].GetSurname() != heads_of_units_.back().GetSurname()))
	{
		salary_expense += heads_of_units_[i].GetSalary$();
		i++;
	}
	salary_expense += heads_of_units_[i].GetSalary$();
	while ((team_leaders_[i].GetName() != team_leaders_.back().GetName()) || (team_leaders_[i].GetSurname() != team_leaders_.back().GetSurname()))
	{
		salary_expense += team_leaders_[i].GetSalary$();
		i++;
	}
	salary_expense += team_leaders_[i].GetSalary$();
	return salary_expense;
}
