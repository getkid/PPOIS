#pragma once
#include "CreditCard.h"
#include <string>
#include <vector>

class Human
{
protected:
	std::string name_;
	std::string surname_;
	std::string patronymic_;
	std::string education_level_;
	std::vector<CreditCard> credit_card_;
	int working_experience_;
	std::string desired_position_;

public:
	Human(std::string name, std::string surname, std::string patronymic);
	Human() = default;
	std::string GetName();
	std::string GetSurname();
	void SetEducationLevel(std::string education_level);
	void AddCreditCard(CreditCard& credit_card);
	void SetWorkingExperience(int working_experience);
	int GetWorkingExperience();
	void SetDesiredPosition(std::string desired_position);
	std::string GetDesiredPosition();
	std::string GetEducationLevel();
};

