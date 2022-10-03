#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

int main() // https://codeforces.com/contest/263/problem/A
{
    int value, counter = 0;
    for(int i = 1; i < 6; i++)
    {
        for(int j = 1; j < 6; j++)
        {
            std::cin >> value;
            if(value == 1)
            {
                counter = abs(j - 3) + abs(i - 3);
            }
        }
    }
    std::cout << counter << std::endl;
}
