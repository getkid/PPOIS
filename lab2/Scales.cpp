#include "Scales.h"

Scales::Scales(std::string type, int limit_kg)
{
	type_ = type;
	limit_ = limit_kg;
}

void Scales::Measure(Product& product, int required_weight)
{
	product.SetWeightGr(required_weight);
}
