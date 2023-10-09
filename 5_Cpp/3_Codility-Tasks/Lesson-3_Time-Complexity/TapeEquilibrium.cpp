#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

int TapeEquilibrium(std::vector<int> &A)
{
	int right_sum = std::accumulate(A.begin(), A.end(), 0) - A[0];
	int left_sum = A[0];
	int minimum_difference = abs(right_sum - left_sum);
	int difference;

	for (int i = 1; i < A.size() - 1; i++)
	{
		left_sum += A[i];
		right_sum -= A[i];
		difference = abs(right_sum - left_sum);
		minimum_difference = difference < minimum_difference ? difference : minimum_difference;
	}

	return minimum_difference;
}

int main()
{
	std::vector<int> A;

	int difference = TapeEquilibrium(A);
	std::cout << "Final Difference = " << difference << std::endl;
	return 0;
}