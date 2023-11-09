#pragma once
#include "Dish.h"
#include "Pan.h"
#include "Pot.h"
#include "Oven.h"

class Recipes : public Dish
{

public:
	void Slice(Product&);
	void Grate(Product&);
	void Boil(Pot& a, Product& b, double time);
	void Roast(Pan&, Product& b, double time);
	void Bake(Oven&, Product& b, double time);
};
