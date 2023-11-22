#include "Employee.h"

int Employee::CalculateYearsInCompany()
{
    return 2023 - year_of_employment_;
}

double Employee::GetSalary$()
{
    return salary_;
}
