#include <iostream>
#include <cmath>

bool delta_checker(double a, double b, double c)
{
	if (b * b - 4 * a * c > 0)
		return true;
	return false;
}

double eq(double a, double b, double c, double x)
{
	return a * x * x + b * x + c;
}

double deriv(double a, double b, double x)
{
	return 2 * a * x + b;
}

void approx_root(double a, double b, double c, int k)
{
	double x1 = 0, x2 = 1;
	double eps = std::pow(10, -k);
	while (std::abs(eq(a, b, c, x1)) > eps || std::abs(eq(a, b, c, x2)) > eps)
	{
		x1 -= eq(a, b, c, x1) / deriv(a, b, x1);
		x2 -= eq(a, b, c, x2) / deriv(a, b, x2);
	}
	if (std::abs(x1 - x2) <= eps)
	{
		std::cout << x1 << " " << x2 << '\n';
	}
}

int main()
{
	int tests;
	std::cin >> tests;
	double a, b, c, k;
	for (int i = 0; i < tests; i++)
	{
		std::cout << "TEST " << i << '\n';
		std::cin >> a >> b >> c >> k;
		if (!delta_checker(a, b, c))
			std::cout << "0\n";
		else
			approx_root(a, b, c, k);
	}
	return 0;
}
