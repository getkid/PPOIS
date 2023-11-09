#include "Recipes.h"

void Recipes::Slice(Product& product)
{
	product.SetProductState("sliced");
}

void Recipes::Grate(Product& product)
{
	product.SetProductState("grated");
}

void Recipes::Boil(Pot& pot, Product& product, double time)
{
	pot.CookingMethod(product, time);
}

void Recipes::Roast(Pan& pan, Product& product, double time)
{
	pan.CookingMethod(product, time);
}

void Recipes::Bake(Oven& oven, Product& product, double time)
{
	oven.CookingMethod(product, time);
}




