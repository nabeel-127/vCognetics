#include <iostream>
#include <vector>

int PassingCars(std::vector<int> &A)
{
	int size = A.size(), west_count = 0, pass_count = 0;
	for (int i = size - 1; i >= 0; i--)
	{
		if (A[i] == 1)
		{
			west_count++;
		}
		else
		{
			pass_count += west_count;
			if (pass_count > 1000000000)
				return -1;
		}
	}
	return pass_count;
}

int main()
{

	return 0;
}