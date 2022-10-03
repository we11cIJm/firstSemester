#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

int main() // https://codeforces.com/contest/1352/problem/A
{
    int value, counter, z = 0;
    int a, b, c, d;
    std::cin >> counter;
    std::vector<int> arr;
    for(int i = 0; i < counter; i++)
    {
        std::cin >> value;
        arr.push_back(value);
    }
    for(int i = 0; i < counter; i++)
    {
        int f = arr[i];
        a = f / 1000;
        b = f / 100 % 10;
        c = f / 10 % 10;
        d = f % 10;
        z = (a != 0) + (b != 0) + (c != 0) + (d != 0);
        std::cout << z << std::endl;
        if(a != 0)
        {
            std::cout << a*1000 << " ";
        }
        if(b != 0) 
        {
            std::cout << b*100 << " ";
        }
        if(c != 0)
        {
            std::cout << c*10 << " ";
        }
        if(d != 0)
        {
            std::cout << d << " ";
        }
        std::cout << std::endl;
    }
}
