#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

int main() // https://codeforces.com/contest/1703/problem/C
{
    int t, n, a;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        std::cin >> n;
        std::vector<int> arr;
        for(int k = 0; k < n; k++)
        {
            std::cin >> a;
            arr.push_back(a);
        }
        int num, sum = 0;
        std::string str;
        for(int k = 0; k < n; k++)
        {
            std::cin >> num;
            std::cin >> str;
            for(int l = 0; l < str.size(); l++)
            {
                if(str[l] == 'D') sum++;
                else sum--;
            }
            std::cout << abs((arr[k] + sum) + 1000) % 10 << " ";
            sum = 0;
        }
        std::cout << std::endl;
    }
}
