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

void Product::SetPrice_BYN(double price)
{
	price_ = price;
}

double Product::GetPrice_BYN()
{
	return price_;
}

void Product::SetWeight_Gr(double weight)
{
	weight_ = weight;
}

double Product::GetWeight_Gr()
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

void Product::SetVolume_Ml(double volume)
{
	volume_ = volume;
}

double Product::GetVolume_Ml()
{
	return volume_;
}

