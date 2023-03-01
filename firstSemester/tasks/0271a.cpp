#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
 
int main() // https://codeforces.com/contest/271/problem/A
{
    int x;
    bool y = true;
    std::cin >> x;
    while(y)
    {
        x++;
        int a = x % 10, b = x / 10 % 10, c = x / 100 % 10, d = x / 1000;
        if(a != b && a != c && a != d && b != c && b != d && c != d)
        { 
            y = false;
        }
        // cout << x << endl;
    }
    std::cout << x << std::endl;
}
