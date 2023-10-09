#include <iostream>
#include <vector>
#include <unordered_map>

void print(std::vector<int> &input)
{
	for (auto iterator = input.begin(); iterator != input.end(); ++iterator)
	{
		std::cout << "print(): " << *iterator << std::endl;
	}
	std::cout << std::endl;
}
void print(std::unordered_map<int, int> &input)
{
	for (const auto &element : input)
	{
		std::cout << "print(): [" << element.first << "] = " << element.second << std::endl;
	}
	std::cout << std::endl;
}
int OddOccurrencesInArray(std::vector<int> &A)
{
	std::unordered_map<int, int> count;
	for (const auto &element : A)
	{
		count[element]++;
	}
	for (const auto &element : count)
	{
		if (element.second % 2 != 0)
		{
			return element.first;
		}
	}
	return -1;
}

int main()
{
	std::vector<int> A;
	A.push_back(9);
	A.push_back(3);
	A.push_back(9);
	A.push_back(3);
	A.push_back(9);
	A.push_back(7);
	A.push_back(9);
	std::cout << OddOccurrencesInArray(A) << std::endl;
	return 0;
}