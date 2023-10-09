#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> MaxCounters(int N, std::vector<int> &A)
{
	std::vector<int> a(N, 0);
	int size = A.size(), maximum = 0, maximum_last = 0;
	for (int i = 0; i < size; i++)
	{
		if ((A[i] <= N) && (A[i] > 0))
		{
			a[A[i] - 1] = a[A[i] - 1] < maximum_last ? maximum_last : a[A[i] - 1];
			a[A[i] - 1]++;
			maximum = a[A[i] - 1] > maximum ? a[A[i] - 1] : maximum;
		}
		else if (A[i] > N)
			maximum_last = maximum;
	}
	for (int i = 0; i < N; i++)
		a[i] = a[i] < maximum_last ? maximum_last : a[i];
	return a;
}

int main()
{
	std::vector<int> A, result;
	A.push_back(1);
	A.push_back(3);
	A.push_back(5);
	A.push_back(5);
	A.push_back(3);
	A.push_back(3);
	A.push_back(6);

	result = MaxCounters(5, A);
	return 0;
}