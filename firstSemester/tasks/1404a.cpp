#include <iostream>
#include <string>

int main()
{
    int t = 0;
    std::cin >> t;
    int n = 0;
    int k = 0;
    int k0 = 0;
    int k1 = 0;
    int k2 = 0;
    std::string s;
    for (int i = 0; i < t; i += 1)
    {
        k0 = 0;
        k1 = 0;
        k2 = 0;
        std::cin >> n >> k;
        std::cin >> s;
        bool flag = true;
        for (int g = 0; g < n - k; g += 1)
        {
            for (int h = g; h < g+k; h += 1)
            {
                if (s[h] == '0')
                    k0 += 1;
                if (s[h] == '1')
                    k1 += 1;
                if (s[h] == '?')
                    k2 += 1;
            }
            if (k2 == (k / 2 - k1) + (k / 2 - k0) && k1 <= k / 2 && k0 <= k / 2)
            {
                flag == true;
            }
            else {
                flag == false;
                break;
            }
        }
        if (flag) std::cout << "YES" << "\n";
        else std::cout << "NO" << "\n";
    }
}
