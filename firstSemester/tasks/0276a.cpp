#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
 
int main() // https://codeforces.com/contest/276/problem/A
{
    int f, t, k, c, ans = -1e9;
    std::cin >> c >> k;
    for(int i = 0; i < c; i++)
    {
        std::cin >> f >> t;
        if(t > k)
        {
            ans = std::max(ans, f + k - t);
        }
        else
        {
            ans = std::max(ans, f);
        }
    }
    std::cout << ans << std::endl;
}
