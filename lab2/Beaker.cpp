#include "Beaker.h"

Beaker::Beaker(int limit_ml)
{
	limit_ = limit_ml;
}

void Beaker::Measure(Product& a, int required_volume)
{
	a.SetVolume_Ml(required_volume);
}

int Beaker::NumberOfApproaches(Beaker& a, int required_volume)
{
	approaches_ = required_volume / a.limit_;
	return approaches_;
}
