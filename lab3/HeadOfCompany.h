#pragma once
#include "Human.h"
#include "HeadOfDepartment.h"
#include <vector>

class HeadOfCompany : public Human
{
	double income_;
	std::vector<HeadOfDepartment> heads_of_departments_;

public:
	HeadOfCompany(std::string name, std::string surname, std::string patronymic);
	void AddHeadOfDepartment(HeadOfDepartment& head_of_department);
	void SetIncome$(int income);
	int CalculateNumberOfSubordinates();
	double GetIncome$();
};

