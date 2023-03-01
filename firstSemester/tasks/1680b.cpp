#include <iostream>
#include <string>
 
int main()
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
        int c;
        for(int i = 0; i < row; i++)
        {
            std::cin >> str;
			for(int k = 0; k < col; k++)
			{
				a = str[k];
            	if(a == 'R')
            	{
            	    if(!first && k < c) check = false;
					if(first)
            		{
            		    c = k;
            		    first = false;
            		}
            	}
			}
        }
        if(check) std::cout << "YES" << '\n';
        else std::cout << "NO" << '\n';
    }
}
