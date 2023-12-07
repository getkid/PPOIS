#include "GameForPc.h"

GameForPC::GameForPC(std::string name, std::string genre, std::string type, std::string dimension, std::string view)
{
	name_ = name;
	genre_ = genre;
	type_ = type;
	dimension_ = dimension;
	view_ = view;
}

void GameForPC::AddRequiredPC(std::string processor, int RAM, std::string graphics_card, double free_memory)
{
	required_PC_ = PC(processor, RAM, graphics_card, free_memory);
}

bool GameForPC::EnoughCapacity()
{
	if((required_PC_.GetFreeMemory() - GetMemory()) > 0) return true;
	return false;
}

PC GameForPC::GetRequiredPC()
{
	return required_PC_;
}
