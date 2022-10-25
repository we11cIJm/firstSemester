#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <array>

void solve1680B()
{
    int t;
    std::cin >> t;
    for(int j = 0; j < t; j++)
    {
        int row, col;
        std::cin >> row >> col;
        std::string str;
		char a;
        bool first = true, check = true;
        int r, c;
        for(int i = 0; i < row; i++)
        {
            std::cin >> str;
			for(int k = 0; k < col; k++)
			{
				a = str[k];
            	if(a == 'R')
            	{
            	    if(!first && k < c) check = false;
            	}
            	if(first)
            	{
            	    //r = i;
            	    c = k;
            	    first = false;
            	}
			}
			// std::cout << a;
        }
        if(check) std::cout << "YES" << '\n';
        else std::cout << "NO" << '\n';
    }
}

int main()
{
    solve1680B();
}
