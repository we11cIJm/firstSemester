#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

/*    dunno wats this    */
int main() // https://codeforces.com/contest/570/problem/A
{
    int n, m, x, a = -1, index = 0;
    std::cin >> n >> m;
    std::vector<int> arr;
    for(int i = 0; i < m; i++)
    {
        arr.push_back(0);
    }
    for(int i = 0; i < m; i++)
    {
        for(int k = 0; k < n; k++)
        {
            std::cin >> x;
            if(x > a)
            {
                a = x;
                index = k;
            }
            // else if(x == a)
            // {
            //     arr[k]++;
            // }
        }
        arr[index]++;
        a = 0; index = 0;
    }
    int ans = -1;
    for(int i = 0; i < m; i++)
    {
        ans = std::max(ans, arr[i]);
    }
    std::cout << ans << std::endl;
}
