#include "DynoLib.h"
#include <iostream>
using namespace std;
int main(void)
{
	DynamicLib *lib = new DynamicLib();
	std::cout << "Square " << lib->square(1729) << std::endl;
	return 1;
}