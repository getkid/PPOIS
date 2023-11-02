#include "Pot.h"

Pot::Pot(double diameter, double volume, std::string color)
{
	diameter_ = diameter;
	volume_ = volume;
	color_ = color;
}

void Pot::CookingMethod(Product& a, double time)
{
	a.SetProductState("boiled");
}
