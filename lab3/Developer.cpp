
#include "Developer.h"
#include <iostream>

Developer::Developer(std::string name, std::string surname, std::string patronymic, double salary, int year_of_employment)
{
	name_ = name;
	surname_ = surname;
	patronymic_ = patronymic;
	if (salary < 0) throw std::invalid_argument("Negative salary!");
	salary_ = salary;
	year_of_employment_ = year_of_employment;
}

void Developer::SetPosition(std::string position)
{
	position_ = position;
}

std::string Developer::GetPosition()
{
	return position_;
}

void Developer::AddGameForPC(GameForPC& game_for_pc)
{
	game_for_PC_.push_back(game_for_pc);
}

void Developer::AddGameForConsole(GameForConsole& game_for_console)
{
	game_for_console_.push_back(game_for_console);
}

void Developer::ChangePosition(std::string position)
{
	position_ = position;
}

