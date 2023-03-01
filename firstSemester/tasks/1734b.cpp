#include <iostream>
 
int main()
{
    int t = 0;
    std::cin >> t;
    int n = 0;
    for (int i = 0; i < t; i++)
    {
        std::cin >> n;
        for (int fl = 1; fl <= n; fl += 1)
        {
            for (int pl = 1; pl <= fl; pl += 1)
            {
                if (pl == 1 || pl == fl)
                    std::cout << 1 << " ";
                else std::cout << 0 << " ";
 
            }
            std::cout << "\n";
        }
    }
}
