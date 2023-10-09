#include <iostream>
#include "codility.h"

int main()
{
	Solution temp;

	int MaxGap = temp.solutionBinaryGap(268435601);
	std::cout << "MaxGap\t\t= " << MaxGap << std::endl;

	int MinJmpNum = temp.solutionFrogJmp(10, 100, 50);
	std::cout << "Final number after jumps \t= " << MinJmpNum << std::endl;
	return 0;
}