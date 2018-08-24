#include <iostream>
#include <algorithm>
#include <array>

int main(int argc, char const *argv[])
{
	std::array<int, 5> arr1 = {1,2,3,4,5};
	std::array<int, 5> arr2 = {3,1,5,2,4};

	if(std::is_permutation(arr1.begin(), arr1.end(), arr2.begin()))
		std::cout << "Both arrays contain same elements.\n";

	return 0;
}