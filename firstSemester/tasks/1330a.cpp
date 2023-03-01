#include <iostream>
#include <array>
 
int main()
{
int t = 0, n = 0, x = 0, a = 0, m=0;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        std::cin >> n >> x;
        std::array <int, 200> arr = { 0 };
        for (int k = 0; k < n; k++)
        {
            std::cin >> a;
            arr[a - 1] = 1;
        }
        for (int k = 0; k < (int)arr.size(); k++)
        {
            if (x != 0)
            {
                if (arr[k] == 0)
                {
                    x--;
                }
                m = k + 1;
            }
            else
            {
                while (arr[k] != 0)
                {
                    m = k + 1;
                    k++;
 
                }
             
                break;
            }
        }
        std::cout << m <<std::endl;
    }
}
