#include <algorithm>
#include <vector>
#include <iostream>
#include <ranges>
//fill
int main()
{
	std::vector<int> v{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::fill(v.begin(), v.end(), -1);

	for (auto elem : v) {//-1 -1 -1 -1 -1 -1 -1 -1 -1 -1
		std::cout << elem << " ";
	}
	std::cout << "\n";

	std::fill_n(v.begin(), 5, 6);
	std::copy(begin(v), end(v), std::ostream_iterator<int>(std::cout, " "));//6 6 6 6 6 -1 -1 -1 -1 -1
	std::cout << "\n";


}
