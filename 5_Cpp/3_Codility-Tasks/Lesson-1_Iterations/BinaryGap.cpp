#include <iostream>
#include <bitset>

int BinaryGap(int N)
{
	if (N == 0)
		return 0;
	unsigned int Bit = 1 << 31;
	int Gap = 0, MaxGap = 0;
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

int main()
{
	int N = 10;
	std::cout << "Max binary gap in " << N << ": " << BinaryGap(N) << std::endl;
	return 0;
}