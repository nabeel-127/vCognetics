#include <iostream>
#include <vector>

int OddOccurrencesInArray(std::vector<int> &A)
{
	std::vector<int> indexes_visited;
	auto iterator = A.begin();
	int size = A.size();
	for (int i = 0; i < size; i++)
	{

		indexes_visited.push_back(i);
	}
}

int main()
{
	std::cout << "hello" << std::endl;
	return 0;
}