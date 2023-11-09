#include "Beaker.h"

Beaker::Beaker(int limit_ml)
{
	limit_ = limit_ml;
}

void Beaker::Measure(Product& product, int required_volume)
{
	product.SetVolumeMl(required_volume);
}

int Beaker::NumberOfApproaches(Beaker& beaker, int required_volume)
{
	approaches_ = required_volume / beaker.limit_;
	return approaches_;
}
