#include <benchmark/benchmark.h>
#include "codility.h"

void testing_BinaryGap(benchmark::State &state)
{
	uint max_gap;
	for (auto temp : state)
	{
		Solution my_benchmark;
		for (int i = 0; i < 2000000; ++i)
		{
			max_gap = my_benchmark.solutionBinaryGap(145);
		}
	}
}
BENCHMARK(testing_BinaryGap)->Unit(benchmark::kMillisecond);

void testing_FrogJmp(benchmark::State &state)
{
	uint max_gap;
	for (auto temp : state)
	{
		Solution my_benchmark;
		for (int i = 0; i < 2000000; ++i)
		{
			max_gap = my_benchmark.solutionFrogJmp(2, 50000, 2);
		}
	}
}
BENCHMARK(testing_FrogJmp)->Unit(benchmark::kMillisecond);

BENCHMARK_MAIN();