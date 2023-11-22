#include "Human.h"

Human::Human(std::string name, std::string surname, std::string patronymic)
{
	name_ = name;
	surname_ = surname;
	patronymic_ = patronymic;
}

std::string Human::GetName()
{
	return name_;
}

std::string Human::GetSurname()
{
	return surname_;
}

void Human::SetEducationLevel(std::string education_level)
{
	education_level_ = education_level;
}

void Human::AddCreditCard(CreditCard& credit_card)
{
	credit_card_.push_back(credit_card);
}

void Human::SetWorkingExperience(int working_experience)
{
	working_experience_ = working_experience;
}

int Human::GetWorkingExperience()
{
	return working_experience_;
}

void Human::SetDesiredPosition(std::string desired_position)
{
	desired_position_ = desired_position;
}

std::string Human::GetDesiredPosition()
{
	return desired_position_;
}

std::string Human::GetEducationLevel()
{
	return education_level_;
}
