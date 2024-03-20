#include <iostream>

int CountDiv(int A, int B, int K)
{
	if (A % K == 0)
		return (B / K) - (A / K) + 1;
	else
		return (B / K) - (A / K);
}

int main()
{

	return 0;
}