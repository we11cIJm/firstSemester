#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <array>

void solve1678A()
{
	int t;
	std::cin >> t;
	for(int j = 0; j < t; j++)
	{
		int n, a, x = -1, zero_counter = 0, equal_counter = 0;
		std::cin >> n;
		for(int i = 0; i < n; i++)
		{
			std::cin >> a;
			if(a == 0) zero_counter++;
			if(a == x) equal_counter++;
			x = a;
		}
		if(zero_counter != 0) std::cout << n - zero_counter << '\n';
		else if (equal_counter != 0)std::cout << n << '\n';
		else std::cout << n + 1 << '\n';
	}
}

int main() 
{
	solve1678A();
}
