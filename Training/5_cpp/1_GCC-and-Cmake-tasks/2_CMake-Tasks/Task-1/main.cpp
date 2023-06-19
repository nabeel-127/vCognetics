#include <iostream>
#include <chrono>
#include "mymath.hpp"

int main()
{
	int a = 10, b = 5;
	double sum = 0, difference = 0;

	auto start = std::chrono::steady_clock::now();

	for (int i = 1; i <= 1000000; i++)
	{
		sum += mymath::add(a, b);
		difference += mymath::subtract(a, b);
		a++;
		b++;
	}
	std::cout << "Sum: " << sum << std::endl;
	std::cout << "Difference: " << difference << std::endl;

	auto end = std::chrono::steady_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
	std::cout << "Time taken: " << duration << " microseconds" << std::endl;

	return 0;
}
