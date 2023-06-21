#include <iostream>
#include "calculator.hpp"

int main()
{
	int a = 10, b = 5, c;

	class calculator temp;
	c = temp.add(a, b);
	std::cout << "1 + 2 = " << c << std::endl;
	c = temp.subtract(a, b);
	std::cout << "1 - 2 = " << c << std::endl;
	c = temp.multiply(a, b);
	std::cout << "1 * 2 = " << c << std::endl;
	c = temp.divide(a, b);
	std::cout << "1 / 2 = " << c << std::endl;

	return 0;
}