#include <iostream>

int FrogJmp(int X, int Y, int D)
{
	if ((X <= Y) && (X >= 0))
	{
		int multiplier = (Y - X) / D;
		if ((Y - X) % D == 0)
		{
			// return X + (D * multiplier);
			return multiplier;
		}
		if (multiplier >= 0)
		{
			// return X + D;
			// return X + (D * (multiplier + 1));
			return multiplier + 1;
		}
	}
	return 0;
}

int main()
{
	int X = 10, Y = 31, D = 20;
	std::cout << "Number after increments: " << FrogJmp(X, Y, D) << std::endl;
	return 0;
}