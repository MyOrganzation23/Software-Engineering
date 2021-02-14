#include "func.h"
#include <math.h>

double func1(double z, double x, double y)
{
	double a1;
	a1 = log10(z + pow(x, 2)) + pow(sin(x/y), 2) - cos(20);
	return a1;
}

double func2(double e, double c, double z, double x, double a, double y)
{
	double b;
	b = pow(e, -c * z) * (x + sqrt(x + a)) / (x - sqrt(fabs(x - y)));
	return b;
}

int func3(int A, int B)
{
	int div;
	div = A / B;
	return div;
}