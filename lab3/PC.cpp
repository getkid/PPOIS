#include "PC.h"

PC::PC(std::string processor, int RAM, std::string graphics_card, double free_memory)
{
	processor_ = processor;
	RAM_ = RAM;
	graphics_card_ = graphics_card;
	free_memory_ = free_memory;
}

std::string PC::GetProcessor()
{
	return processor_;
}

std::string PC::GetGraphicsCard()
{
	return graphics_card_;
}

int PC::GetRAM()
{
	return RAM_;
}

double PC::GetFreeMemory()
{
	return free_memory_;
}
