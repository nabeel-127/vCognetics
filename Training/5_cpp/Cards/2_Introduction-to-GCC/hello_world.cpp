#include <iostream>
#include "sum.hpp"

int main()
{
	std::cout << "from hello_world: Hello World!" << std::endl;
	int a = 10, b = 2;
	int c = sum(a, b);
	std::cout << "SUM: " << a << " + " << b << " = " << c << std::endl;

	return 0;
}