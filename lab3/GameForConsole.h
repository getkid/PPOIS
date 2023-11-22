#pragma once
#include "Game.h"

class GameForConsole : public Game
{
	std::string required_console_;


public:
	GameForConsole(std::string name, std::string genre, std::string type, std::string dimension, std::string view);
	void SetRequiredConsole(std::string required_console);
	std::string GetRequiredConsole();
};

