#include <iostream>
#include <vector>
#include <list>
#include <numeric>
#include <benchmark/benchmark.h>

uint64_t sum_of_vector_squared(int num_entries)
{
	int randomnumber = 1;
	std::vector<int> MyVector(num_entries);
	std::vector<uint64_t> MyVectorSquared(num_entries);
	for (auto &element : MyVector)
	{
		element = randomnumber++;
		if (randomnumber > 1000)
			randomnumber = 1;
	}
	for (int iterator = 0; iterator < num_entries; iterator++)
	{
		MyVectorSquared[iterator] = uint64_t(MyVector[iterator] * MyVector[iterator]);
	}
	return std::accumulate(MyVectorSquared.begin(), MyVectorSquared.end(), static_cast<uint64_t>(0));
}
uint64_t sum_of_list_squared(int num_entries)
{
	int randomnumber = 1;
	std::list<int> MyList(num_entries);
	std::list<uint64_t> MyListSquared;

	for (auto &element : MyList)
	{
		element = randomnumber++;
		if (randomnumber > 1000)
			randomnumber = 1;
	}

	for (const auto &element : MyList)
	{
		MyListSquared.push_back(static_cast<uint64_t>(element * element));
	}

	return std::accumulate(MyListSquared.begin(), MyListSquared.end(), static_cast<uint64_t>(0));
}

void MyVectorMain(benchmark::State &state)
{
	uint64_t sumA, sumB;
	for (auto temp : state)
	{
		for (int i = 0; i < 2000000; ++i)
		{
			sumA = sum_of_vector_squared(100);
		}
	}
}
BENCHMARK(MyVectorMain)->Unit(benchmark::kMillisecond);

void MyListMain(benchmark::State &state)
{
	uint64_t sumA, sumB;
	for (auto temp : state)
	{
		for (int i = 0; i < 2000000; ++i)
		{
			sumB = sum_of_list_squared(100);
		}
	}
}
BENCHMARK(MyListMain)->Unit(benchmark::kMillisecond);

BENCHMARK_MAIN();
