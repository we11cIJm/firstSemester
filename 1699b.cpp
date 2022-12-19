#include <iostream>
 
int main()
{
    int t = 0;
    int n = 0;//строки
    int m = 0;//столбцы
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        std::cin >> n >> m;
        for (int n1 = 0; n1 < n; n1 += 1)
        {
            for (int m1 = 0; m1 < m; m1 += 2)
            {
                if (n1 % 4 == 0 || n1 % 4 == 3)
                {
                    if (m1 % 4 == 0)
                    {
                        std::cout << "1 0 ";
                    }
                    else std::cout << "0 1 ";
                }
                if (n1 % 4 == 1 || n1 % 4 == 2)
                {
                    if (m1 % 4 == 0)
                    {
                        std::cout << "0 1 ";
                    }
                    else std::cout << "1 0 ";
                }
            }
            std::cout << "\n";
        }
    }
}
