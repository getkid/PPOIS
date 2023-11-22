#include "Company.h"
#include <iostream>

Company::Company(std::string name, std::string country, int year_of_creation)
{
	name_ = name;
	country_ = country;
	year_of_creation_ = year_of_creation;
}

void Company::SetIncome$(double income)
{
	if (income < 0) throw std::invalid_argument("Division by zero!");
	income_ = income;
}

double Company::GetIncome$()
{
	return income_;
}

int Company::CalculateYearsOfExistence()
{
	return 2023 - year_of_creation_;
}

void Company::AddGuidance(Guidance& guidance)
{
	guidance_.push_back(guidance);
}

void Company::AddDeveloper(Developer& developer)
{
	developers_.push_back(developer);
}

void Company::AddGameForPC(GameForPC& game_for_PC)
{
	game_for_PC_.push_back(game_for_PC);
}

void Company::AddGameForConsole(GameForConsole& game_for_console)
{
	game_for_console_.push_back(game_for_console);
}

double Company::CalculateSalaryExpense()
{
	double salary_expense = 0;
	int i = 0;
	while ((developers_[i].GetName() != developers_.back().GetName()) && (developers_[i].GetSurname() != developers_.back().GetSurname()))
	{
		salary_expense += developers_[i].GetSalary$();
		i++;
	}
	salary_expense += developers_[i].GetSalary$();
	salary_expense += guidance_[0].CalculateSalaryExpense();
	return salary_expense;
}
