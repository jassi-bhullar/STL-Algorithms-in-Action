#include <iostream>
#include <algorithm>
#include <array>

int main(int argc, char const *argv[])
{
	int myints[] = {32,71,12,45,26,80,53,33};
  	std::vector<int> myvector (myints, myints+8);

  	std::sort (myvector.begin(), myvector.begin()+4);

  	std::cout << "myvector contains:";
  	for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
   		std::cout << ' ' << *it;
  	std::cout << '\n';

	return 0;
}