#include <iostream>
#include <vector>
#include <set>

int FrogRiverOne(int X, std::vector<int> &A)
{
	std::set<int> visited_points;
	for (int i = 0; i < A.size(); i++)
	{
		if ((A[i] <= X) && (A[i] > 0))
			visited_points.insert(A[i]);
		if (visited_points.size() >= X)
			return i;
	}
	return -1;
}

int main()
{

	return 0;
}