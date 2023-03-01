#include <iostream>
#include <cmath>
 
int main()
{
    int t = 0, n = 0, k = 0, r = 0, c = 0, p=1;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        std::cin >> n >> k >> c >> r;
        for (int h = 1; h <= k; h++)
        {
            if ((h + c - 1) % k == r%k)
                p = h%k;
        }
        for (int h = 1; h <= n; h++)
        {
            for (int g = 1; g <= n; g++)
            {
                //if (h != c)
                //{
                    if (g % k == p || k==1)
                        std::cout << "X";
                    else
                    {
                        std::cout << ".";
                    }
            }
            p++;
            p %= k;
            std::cout << std::endl;
        }
 
    }
}
