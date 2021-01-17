#include <iostream>

class Fraction
{
	float numerator;
	float denominator;

public:
	Fraction(float numerator, float denominator)
		: numerator(numerator),
		denominator(denominator)
	{
		if (denominator == 0)
		{
			throw std::runtime_error("Fraction denominator is 0!");
		}
	}
};

int main()
{
	float a, b;
	std::cin >> a >> b;

	try
	{
		Fraction f(a, b);
	}
	catch (std::exception& e) {
		std::cout << e.what() << "\n";
	}

	return 0;
}