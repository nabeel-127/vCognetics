#include <iostream>
#include <vector>

std::vector<int> CyclicRotation(std::vector<int> &A, int K)
{
	int size = A.size();
	if (size <= 1)
		return A;
	std::vector<int> a(size), tempA(size);
	// a.reserve(size);
	a = tempA = A;
	for (int iterator1 = 1; iterator1 <= K; iterator1++)
	{
		for (int iterator2 = 0; iterator2 < size; iterator2++)
		{
			if (iterator2 == 0)
				a[iterator2] = tempA[size - 1];
			else
				a[iterator2] = tempA[iterator2 - 1];
		}
		tempA = a;
	}
	return a;
}

int main()
{
	std::vector<int> A, a;
	int K = 2;
	A.push_back(-4);
	A.push_back(0);

	std::cout << A[0] << std::endl;
	std::cout << A[1] << std::endl;

	std::cout << std::endl;
	a = CyclicRotation(A, K);
	return 0;
}