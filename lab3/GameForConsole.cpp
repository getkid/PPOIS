#include "GameForConsole.h"

GameForConsole::GameForConsole(std::string name, std::string genre, std::string type, std::string dimension, std::string view)
{
	name_ = name;
	genre_ = genre;
	type_ = type;
	dimension_ = dimension;
	view_ = view;
}

void GameForConsole::SetRequiredConsole(std::string required_console)
{
	required_console_ = required_console;
}

std::string GameForConsole::GetRequiredConsole()
{
	return required_console_;
}
