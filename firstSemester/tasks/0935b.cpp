#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
 
int main()
{
    int n;
    std::cin >> n;
    std::vector<char> arr;
    for(int i = 0; i < n; i++)
    {
        char x;
        std::cin >> x;
        arr.push_back(x);
    }
    int x = 0, y = 0, k = 0;
    bool l = false, u = false, upper = false, lower = false;
    for(int i = 0; i < n; i++)
    {
        if(x - y != 0)
        {
            u = upper;
            l = lower;
        }
        upper = false; lower = false;
        if(arr[i] == 'R') x++;
        if(arr[i] == 'U') y++;
        if(x - y > 0)
        {
            lower = true;
        }
        else if(y - x > 0)
        {
            upper = true;
        }
        if(u && lower || l && upper)
        {
            k++;
        }
    }
    std::cout << k << '\n';
}
