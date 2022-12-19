#include <iostream>
 
int main()
{
    long long int a = 0;
    long long int m = 0;
    bool flag = true;
    std::cin >> a >> m;
    for (int i = 0; i < 4*m; i++)
    {
        if ((a + a % m) % m != 0)
        {
            a += a % m;
        }
        else {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        std::cout << "No";
    }
    else std::cout << "Yes";
}
