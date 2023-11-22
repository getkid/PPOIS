#include "Game.h"

void Game::SetYearOfDevelopment(int year_of_starting_development)
{
	year_of_starting_development_ = year_of_starting_development;
}

int Game::CalculateYearsOfDevelopment()
{
	return 2023 - year_of_starting_development_;
}

double Game::GetMemory()
{
	return memory_capacity_GB_;
}

void Game::SetMemory(double memory_capacity_GB)
{
	memory_capacity_GB_ = memory_capacity_GB;
}
