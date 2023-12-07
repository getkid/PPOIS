#pragma once
#include "Game.h"
#include "PC.h"

class GameForPC : public Game
{
	PC required_PC_;

public:
	GameForPC(std::string name, std::string genre, std::string type, std::string dimension, std::string view);
	void AddRequiredPC(std::string processor, int RAM, std::string graphics_card, double free_memory);
	bool EnoughCapacity();
	PC GetRequiredPC();
};

