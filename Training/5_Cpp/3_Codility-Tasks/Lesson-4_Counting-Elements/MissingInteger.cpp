// you can use includes, for example:
// #include <algorithm>
#include <vector>
#include <algorithm>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int MissingInteger(std::vector<int> &A)
{
	sort(A.begin(), A.end());
	int missing = 1;
	for (auto &element : A)
	{
		if (element == missing)
			missing++;
		else if (element > missing)
			break;
	}
	return missing;
}

int main()
{

	return 0;
}