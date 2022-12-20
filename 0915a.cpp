
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
 
int main()
{
    int n, k, a, max = -1;
    std::cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        std::cin >> a;
        if(k % a == 0 && a > max)
        {
            max = a;
        }
    }
    std::cout << k / max << '\n';
}
