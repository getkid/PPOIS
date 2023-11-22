#pragma once
#include <string>

class CreditCard
{
	std::string bank_;
	std::string account_number_;
	double money_ = 0;

public:
	CreditCard(std::string bank, std::string account_number);
	void UpMoney(double dollars);
	double GetMoney();
	void MoneyTransfer(CreditCard& credit_card, int dollars);
};

