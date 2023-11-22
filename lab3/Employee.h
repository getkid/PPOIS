#pragma once
#define current_year = 2023
#include "Human.h"

class Employee : public Human
{
protected:
	double salary_;
	int year_of_employment_;

public:
	int CalculateYearsInCompany();
	double GetSalary$();
};

