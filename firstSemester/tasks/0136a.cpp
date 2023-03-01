#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <array>

void solve136A()
{
    int n, x;
    std::cin >> n;
    std::vector<int> arr;
    arr.push_back(0);
    for(int i = 1; i <= n; i++) arr.push_back(0);
    const int count = n;
    for(int i = 1; i <= n; i++)
    {
        std::cin >> x;
        arr[i] = x;
    }
    std::vector<int> rdy;
    for(int i = 0; i <= n; i++) rdy.push_back(0); 
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i == arr[j])
            {
                rdy[i] = j;
            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        std::cout << rdy[i] << ' ';
    }
}


int main() 
{
	solve136A();
}
