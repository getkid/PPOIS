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
	void Boil(Pot&, Product&, double time);
	void Roast(Pan&, Product&, double time);
	void Bake(Oven&, Product&, double time);
};
