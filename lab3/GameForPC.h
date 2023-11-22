#pragma once
#include "Game.h"
#include "PC.h"

class GameForPC : public Game
{
	std::vector<PC> required_PC_;

public:
	GameForPC(std::string name, std::string genre, std::string type, std::string dimension, std::string view);
	void AddRequiredPC(PC& computer);
	bool EnoughCapacity();
};

