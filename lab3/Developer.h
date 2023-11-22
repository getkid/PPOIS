#pragma once
#include "Human.h"
#include "GameForPC.h"
#include "GameForConsole.h"
#include "Employee.h"

class Developer : public Employee
{
	std::string position_;
	std::vector<GameForPC> game_for_PC_;
	std::vector<GameForConsole> game_for_console_;
	
public:
	Developer(std::string name, std::string surname, std::string patronymic, double salary, int year_of_employment);
	void SetPosition(std::string position);
	std::string GetPosition();
	void AddGameForPC(GameForPC& game_for_PC);
	void AddGameForConsole(GameForConsole& game_for_console);
	void ChangePosition(std::string position);
};
