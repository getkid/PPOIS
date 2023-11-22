#include "GameForPc.h"

GameForPC::GameForPC(std::string name, std::string genre, std::string type, std::string dimension, std::string view)
{
	name_ = name;
	genre_ = genre;
	type_ = type;
	dimension_ = dimension;
	view_ = view;
}

void GameForPC::AddRequiredPC(PC& computer)
{
	required_PC_.push_back(computer);
}

bool GameForPC::EnoughCapacity()
{
	if((required_PC_[0].GetFreeMemory() - GetMemory()) > 0) return true;
	return false;
}
