#include <iostream>
 
int main()
{
    int x = 0;
    int counter = 0;
    std::cin >> x;
    while (x != 0)
    {
        if ((x&1) == 1)
        {
            counter += 1;
        }
        x >>= 1;
    }
    std::cout << counter;
}

