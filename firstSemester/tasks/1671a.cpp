#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <array>
 
void solve1671A()
{
	int t;
	std::cin >> t;
	for(int j = 0; j < t; j++)
	{
		bool check = true;
		std::string str;
		std::cin >> str;
		if(str.size() >= 3)
		{
			for(int i = 1; i < str.size() - 1; i++)
			{
				if(str[i-1] == 'a' && str[i-1] == str[i+1] && str[i] == 'b' || str[i-1] == 'b' && str[i-1] == str[i+1] && str[i] == 'a')
				{
					check = false;
				}
				if(str[0] != str[1] || str[str.size() - 1] != str[str.size() - 2])
				{
					check = false;
				}
			}
		}
		if(str.size() == 1)
		{
			check = false;
		}
		if(str.size() == 2)
		{
			if(str[0] != str[1])
			{
				check = false;
			}
		}
		if(check)
		{
			std::cout << "YES" << '\n';
		}
		else
		{
			std::cout << "NO" << '\n';
		}
	}
}
 
 
int main() 
{
	solve1671A();
}
