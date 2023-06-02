#include <iostream>
#include "sum.hpp"
#include "calculator.hpp"

int main()
{
	std::cout << "from hello_world: Hello World!" << std::endl;
	int a = 10, b = 2;
	int c = sum(a, b);
	std::cout << "SUM: " << a << " + " << b << " = " << c << std::endl;

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