#include <iostream>
#include <vector>
#include <unordered_map>

int PermMissingElem(std::vector<int> &A)
{
	int size = A.size();
	std::vector<int> count(size + 2, 0);
	int current_index = 0;
	for (const auto &element : A)
	{
		count[element]++;
	}
	for (int i = 1; i <= size + 1; i++)
	{
		if (count[i] == 0)
			return i;
	}
	return -1;
}

int main()
{
	std::vector<int> A;
	A.push_back(1);
	A.push_back(2);
	A.push_back(3);
	A.push_back(5);
	A.push_back(6);
	std::cout << PermMissingElem(A) << std::endl;
	return 0;
}