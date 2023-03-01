#include <iostream>
#include <cmath>
 
int main()
{
    int t = 0;
    std::cin >> t;
    int n = 0;
    int x = 0;
    int counter_2 = 0;
    int p = 0;
    int ans = 0;
    for (int i = 0; i < t; i++)
    {
        std::cin >> n;
        counter_2 = 0;
        ans = 0;
        for (int h = 0; h < n; h++)
        {
            std::cin >> x;
            while (x % 2 == 0)
            {
                counter_2 += 1;
                x /= 2;
            }
        }
        //std::cout << counter_2 << " ";
        if (counter_2 < n)
        {
            p = log2(n);
            
            while (counter_2 < n && p>0)
            {
                counter_2 += p;
                p -= 1;
                ans += 1;
            }
            if (counter_2 < n)
            {
                for (int q = 6; q <= n; q += 2)
                {
                    if (q % 4 != 0)
                    {
                        counter_2 += 1;
                        ans += 1;
                    }
                    if (counter_2 >= n)
                        break;
                }
                if (counter_2 >= n)
                {
                    std::cout << ans<<"\n";
                }
                else std::cout << "-1" << "\n";
 
            }
            else std::cout << ans<<"\n";
        }
        else std::cout << "0" << "\n";
    }
}
