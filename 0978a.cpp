#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

int main() // https://codeforces.com/contest/978/problem/A
{
    int n, a;
    std::cin >> n;
    std::vector<int> arr;
    std::vector<int> nums;
    std::vector<int> rdy;
    for(int i = 0; i < 1000; i++)
    {
        nums.push_back(i+1);
    } 
    for(int i = 0; i < n; i++)
    {
        std::cin >> a;
        arr.push_back(a);
    }
    std::reverse(arr.begin(), arr.end());
    for(int i = 0; i < n; i++)
    {
        if(nums[arr[i] - 1] != 0)
        {
            rdy.push_back(arr[i]);
            nums[arr[i] - 1] = 0;
        }
    }
    std::reverse(rdy.begin(), rdy.end());
    std::cout << rdy.size() << std::endl;
    for(int i = 0; i < rdy.size(); i++)
    {
        std::cout << rdy[i] << " ";
    }
    std::cout << std::endl;
}
