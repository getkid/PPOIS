#pragma once
#include <vector>
#include "Product.h"

class Dish : public Product
{
protected:
	std::vector<Product> products;
	
public:
	Dish() = default;
	void AddProduct(Product& a);
};

