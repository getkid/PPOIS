#include "Product.h"

Product::Product(std::string name, std::string aggregate_state)
{
	name_ = name;
	aggregate_state_ = aggregate_state;
}

std::string Product::GetName()
{
	return name_;
}

void Product::SetPriceByn(double price)
{
	price_ = price;
}

double Product::GetPriceByn()
{
	return price_;
}

void Product::SetWeightGr(double weight)
{
	weight_ = weight;
}

double Product::GetWeightGr()
{
	return weight_;
}

void Product::SetCaloricValue(double caloric_value)
{
	caloric_value_ = caloric_value;
}

double Product::GetCaloricValue()
{
	return caloric_value_;
}

void Product::SetProductState(std::string product_state)
{
	product_state_ = product_state;
}

std::string Product::GetProductState()
{
	return product_state_;
}

void Product::SetVolumeMl(double volume)
{
	volume_ = volume;
}

double Product::GetVolumeMl()
{
	return volume_;
}

