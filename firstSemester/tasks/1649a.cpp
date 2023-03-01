#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
 
int main() //1649A
{
    int t;
    std::cin >> t;
    for(int j = 0; j < t; j++)
    {
        int n, s = 0;
        std::cin >> n;
        std::vector<int> a;
        for(int i = 0; i < n; i++)
        {
            int x;
            std::cin >> x;
            a.push_back(x);
        }
        int point = 0;
        for(int i = 1; i < n; i++)
        {
            if(a[i] == 1 && a[i-1] != 1)
            {
                s += i - point;
                point = i;
            }
            if(a[i] == 1) point = i;
        }
        std::cout << s << '\n';
    }
}
