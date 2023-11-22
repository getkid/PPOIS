#pragma once
#include <string>

class PC
{
	std::string processor_;
	std::string graphics_card_;
	int RAM_;
	double free_memory_;

public:
	PC(std::string processor, int RAM, std::string graphics_card, double free_memory);
	std::string GetProcessor();
	std::string GetGraphicsCard();
	int GetRAM();
	double GetFreeMemory();
};

