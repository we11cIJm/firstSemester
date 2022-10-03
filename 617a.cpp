#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

int main() // https://codeforces.com/contest/617/problem/A
{
    int x, c = 0;
    std::cin >> x;
    while(x >= 5)
    {
        x -= 5;
        c++;
    }
    if(x != 0) c++;
    std::cout << c << std::endl;
}
