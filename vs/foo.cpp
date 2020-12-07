#include "foo.h"

#include <cmath>

double Foo()
{
	return 10. - std::pow(1.01, 10.0);
}
