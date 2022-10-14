#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

void solve1512B()
{
	int t;
	std::cin >> t;
	for (int j = 0; j < t; j++)
	{
		int n, i11 = 0, i12 = 0, s11 = 0, s12 = 0;
		int i01 = 0, i02 = 0, s01 = 0, s02 = 0, c = 0;
		char x;
		std::cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int k = 0; k < n; k++)
			{
				std::cin >> x;
				if (x == '*' && c == 0)
				{
					s01 = i; i01 = k;
					s11 = i; i12 = k;
					c++;
				}
				else if(x == '*' && c == 1)
				{
					s02 = i; i02 = k;
					s12 = i; i11 = k;
				}
			}
		}
		int c1 = 0, c2 = 0;
		for (int i = 0; i < n; i++)
		{
			for (int k = 0; k < n; k++)
			{
				
				if (s01 != s02 && i01 != i02)
				{
					if ((i == s01 && k == i01) || (i == s02 && k == i02) || (i == s11 && k == i11) || (i == s12 && k == i12))
					{
						std::cout << '*';
					}
					else
					{
						std::cout << '.';
					}
				}
				else if(s01 == s02)
				{
					if (i != s01 && (k == i01 && c1 == 0 || k == i02 && c2 == 0)) 
					{
						std::cout << '*';
						c1 += (k == i01);
						c2 += (k == i02);
					}
					else if(i == s01 && k == i01 || i == s02 && k == i02)
					{
						std::cout << '*';
					}
					else 
					{
						std::cout << '.';
					}
				}
				else if(i01 == i02)
				{
					if (k != i01 && (i == s01 && c1 == 0 || i == s02 && c2 == 0))
					{ 
						std::cout << '*';
						c1 += (i == s01);
						c2 += (i == s02);
					}
					else if(k == i01 && i == s01 || k == i02 && i == s02)
					{
						std::cout << '*';
					}
					else 
					{
						std::cout << '.';
					}
				}
			}
			std::cout << '\n';
		}

	}
}

int main() 
{
	solve1512B();
}
