#include <iostream>
#include <algorithm>
#include <array>

int main(int argc, char const *argv[])
{
	std::array<int, 8> foo = {3,5,7,12,13,17,19,23};

	if(std::all_of(foo.begin(), foo.end(), [](int i){ return i%2; }))
		std::cout << "All elements in array are odd.\n";


	return 0;
}