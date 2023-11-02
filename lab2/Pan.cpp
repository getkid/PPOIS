#include "Pan.h"

Pan::Pan(double diameter, double volume, std::string color)
{
	diameter_ = diameter;
	volume_ = volume;
	color_ = color;
}

void Pan::CookingMethod(Product& a, double time)
{
	a.SetProductState("roasted");
}
