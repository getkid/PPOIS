#include "Scales.h"

Scales::Scales(std::string type, int limit_kg)
{
	type_ = type;
	limit_ = limit_kg;
}

void Scales::Measure(Product& a, int required_weight)
{
	a.SetWeight_Gr(required_weight);
}
