#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

int main() // https://codeforces.com/contest/4/problem/A
{
    int w; 
    std::cin >> w;
    if(!(w % 2) && w > 2)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
}
