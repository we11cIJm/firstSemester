#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

/*    problem not solved yet    */
int main() // https://codeforces.com/problemset/problem/1330/A
{
    int t, n, x, a;
    std::cin >> t;
    std::vector<int> arr;
    for(int i = 0; i < t; i++)
    {
        std::cin >> n >> x;
        arr.reserve(101);
        for(int l = 1; l <= n; l++)
        {
            std::cin >> a;
            arr[a] = a;
        }
        int c = 0, sz = arr.size();
        for(int l = 1; l <= 100; l++)
        {
            if(arr[l] == 0)
            {
                c++;
            }
            if(c > x || l == 100)
            {
                if(c > x)
                {
                    std::cout << arr[l - 1] << std::endl;
                    break;
                }
                else
                {
                    std::cout << 100 + x - c << std::endl;
                }
            }
        }
    }
}
