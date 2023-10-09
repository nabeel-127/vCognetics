#include <iostream>
#include <vector>
#include <set>

int PermCheck(std::vector<int> &A)
{
	std::set<int> a(A.begin(), A.end());
	if (A.size() != a.size())
		return 0;
	int i = 1;
	for (auto element : a)
	{
		if (element != i)
			return 0;
		i++;
	}
	return 1;
}

int main()
{

	return 0;
}