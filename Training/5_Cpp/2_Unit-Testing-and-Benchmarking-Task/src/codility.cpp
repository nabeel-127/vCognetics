#include "codility.h"
#include <iostream>
#include <bitset>

int Solution::solutionBinaryGap(int N)
{
	if (N == 0)
		return 0;
	unsigned int Bit = 1 << 31;
	int Gap = 0, MaxGap = 0;
	std::cout << "Bit\t\t= " << std::bitset<32>(Bit) << std::endl;
	std::cout << "N\t\t= " << std::bitset<32>(N) << std::endl;
	while (!(N & Bit))
	{
		Bit >>= 1;
	}
	for (int iterator = 1; iterator <= 32; iterator++)
	{
		if (N & Bit)
		{
			MaxGap = Gap > MaxGap ? Gap : MaxGap;
			Gap = 0;
		}
		else
		{
			Gap++;
		}
		Bit >>= 1;
	}
	return MaxGap;
}
int Solution::solutionFrogJmp(int X, int Y, int D)
{
	if (X <= Y)
	{
		int multiplier = (Y - X) / D;
		if ((Y - X) % D == 0)
		{
			std::cout << "A" << std::endl;
			return X + (D * multiplier);
		}
		if (multiplier == 0)
		{
			std::cout << "B" << std::endl;
			return X + D;
		}
		else if (multiplier > 0)
		{
			std::cout << "C" << multiplier << std::endl;
			return X + (D * (multiplier + 1));
		}
	}

	return X;
}