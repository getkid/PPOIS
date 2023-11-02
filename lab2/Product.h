#pragma once
#include <string>

class Product
{
protected:
	std::string name_;
	double price_;
	double weight_;
	double volume_;
	double caloric_value_;
	std::string aggregate_state_;
	std::string product_state_ = "unprepared";

public:
	Product(std::string name, std::string aggregate_state);
	Product() = default;
	std::string GetName();
	void SetPrice_BYN(double price);
	double GetPrice_BYN();
	void SetWeight_Gr(double weight);
	double GetWeight_Gr();
	void SetCaloricValue(double caloric_value);
	double GetCaloricValue();
	void SetProductState(std::string product_state);
	std::string GetProductState();
	void SetVolume_Ml(double volume);
	double GetVolume_Ml();
};

