#include "Recipes.h"

void Recipes::Slice(Product& a)
{
	a.SetProductState("sliced");
}

void Recipes::Grate(Product& a)
{
	a.SetProductState("grated");
}

void Recipes::Boil(Pot& a, Product& b, double time)
{
	a.CookingMethod(b, time);
}

void Recipes::Roast(Pan& a, Product& b, double time)
{
	a.CookingMethod(b, time);
}

void Recipes::Bake(Oven& a, Product& b, double time)
{
	a.CookingMethod(b, time);
}




