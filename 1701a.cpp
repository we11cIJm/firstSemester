#include <iostream>

void solve1701A()
{
    int t;
    std::cin >> t;
    for(int j = 0; j < t; j++)
    {
        int c = 0;
        for(int i = 0; i < 4; i++)
        {
            int a;
            std::cin >> a;
            if(a == 1) c++;
        }
        if(c == 0) std::cout << 0 << '\n';
        else if(c < 4) std::cout << 1 << '\n';
        else std::cout << 2 << '\n';
    }
}

int main()
{
    solve1701A();
}
