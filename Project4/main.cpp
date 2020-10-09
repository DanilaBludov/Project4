#include <iostream>
#include <math.h>

int main() {
	const double a = 1.35;
	const double b = 0.98;

	double dx = 0.62;
	for (double x = 1.14; x <= 4.24; x += dx) {
		double numerator = pow(a*x + b, 1 / 3);
		double denominator = pow(log10(x), 2);
		double y = numerator / denominator;

		std::cout << "x = " << x << std::endl;
		std::cout << "y = " << y << std::endl;
	}
	return 0;
}