#include "Store.h"

Store::Store(double distance)
{
	distance_ = distance;
}

double Store::MovementTime()
{
	minutes_ = distance_ / 5 * 60;
	return minutes_;
}

void Store::SetProduct(Product& a)
{
	products.push_back(a);
}

double Store::CalculateTotal()
{
	int i = 0;
	while (products[i].GetName() != products.back().GetName())
	{
		total_ += products[i].GetPrice_BYN();
		i++;
	}
	total_ += products[i].GetPrice_BYN();
	return total_;
}

