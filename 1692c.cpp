#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <array>
 
void solve1692C()
{
	int t;
	std::cin >> t;
	for(int j = 0; j < t; j++)
	{
		char x;
		bool check = false;
		int counter = 0, c = 0, tmp = 0;
		for(int i = 1; i <= 8; i++)
		{
			int counter = 0;
			for(int k = 1; k <= 8; k++)
			{
				std::cin >> x;
				if(x == '#')
				{
					counter++;
					tmp = k;
				}
			}
			if(counter == 2)
			{
				c = 1;
			}
			else if(c == 1 && counter == 1 && !check)
			{
				std::cout << i << ' ' << tmp << '\n';
				check = true;
			}
		}
	}
}
 
int main() 
{
	solve1692C();
}
