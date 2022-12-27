#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int reversed(int n)
{
    std::vector<int> ost;
    while (n > 0)
    {
      ost.push_back(n % 10);
      n /= 10;
    }
    int answer = 0;
    int k = 1;
    for (int i = ost.size() - 1; i >= 0; i--)
    {
      answer += ost[i] * k;
      k *= 10;
    }
    return answer;
}

int main()
{
    std::vector<int> arr;
    int x;
    while(std::cin.good())
    {
        std::cin >> x;
        if(!std::cin.good()) break;
        arr.push_back(x);
    }
    // reverse(arr.begin(), arr.end());
    for(int i = arr.size() - 1; i >= 0; i--)
    {
        if(i % 2 == 0)
        {
            std::cout << reversed(arr[i]) << " ";
        }
    }
}
