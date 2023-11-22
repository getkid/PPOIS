#pragma once
#define current_year = 2023; 
#include "Guidance.h"
#include "Developer.h"

class Company
{
	std::string name_;
	double income_;
	int year_of_creation_;
	std::string country_;
	std::vector<Guidance> guidance_;
	std::vector<Developer> developers_;
	std::vector<GameForPC> game_for_PC_;
	std::vector<GameForConsole> game_for_console_;

public:
	Company(std::string name, std::string country, int year_of_creation);
	void SetIncome$(double income);
	double GetIncome$();
	int CalculateYearsOfExistence();
	void AddGuidance(Guidance& guidance);
	void AddDeveloper(Developer& developer);
	void AddGameForPC(GameForPC& game_for_PC);
	void AddGameForConsole(GameForConsole& game_for_console);
	double CalculateSalaryExpense();
};

