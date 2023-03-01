#include <iostream>
#include <string>
 
int main()
{
    int t = 0;
    std::cin >> t;
    int n = 0;
    std::string s;
    int k = 0;
    int k1 = 0;
    int k2 = 0;
    char a;
    int g = 0;
    for (int i = 0; i < t; i+=1)
    {
        g = 0;
        std::cin >> n;
        std::cin >> s;
        std::cin >> k;
        k1 = n;
        k2 = 0;
        for (int h = 0; h < k; h++)
        {
            std::cin >> a;
            for (int h1 = 0; h1 < n; h1 += 1)
            {
                if (s[h1] == a)
                {
                    s[h1] = '1';
                    k2 += 1;
                }
            }
        }
        int y = n - s.rfind("1");
        int c = 0;
        if (k2 != 0)
        {
            while (k1 != y)
            {
                c = 0;
                for (int h = 1; h < n; h++)
                {
                    if (s[h] == '1')
                    {
                        if (s[c] != '0')
                            k1 -= 1;
                        s[c] = '0';
 
                    }
                    if (s[h] != '0')
                        c = h;
                    if (k1 == y)
                        break;
 
                }
                g += 1;
            }
        }
        std::cout << g << "\n";
    }
}
