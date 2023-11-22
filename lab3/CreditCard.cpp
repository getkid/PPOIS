#include "CreditCard.h"

CreditCard::CreditCard(std::string bank, std::string account_number)
{
	bank_ = bank;
	account_number_ = account_number;
}

void CreditCard::UpMoney(double dollars)
{
	money_ += dollars;
}

double CreditCard::GetMoney()
{
	return money_;
}

void CreditCard::MoneyTransfer(CreditCard& credit_card, int dollars)
{
	credit_card.money_ += dollars;
	money_ -= dollars;
}
