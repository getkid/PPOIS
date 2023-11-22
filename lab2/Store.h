#pragma once
#include <string>
#include <vector>
#include "Product.h"

class Store
{
	double distance_;
	double minutes_;
	double total_ = 0;
	std::vector<Product> products;

public:
	Store(double);
	Store() = default;
	double MovementTime();
	void SetProduct(Product&);
	double CalculateTotal();
};

