#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
 
void solve1585A()
{
	int t;
	std::cin >> t;
	for(int j = 0; j < t; j++)
	{
		int n;
		std::cin >> n;
		std::vector<int> arr;
		// arr.push_back(0);
        for(int i = 0; i < n; i++)
		{
			int a;
			std::cin >> a;
			arr.push_back(a);
		}
		// 1 0 1
		int s = 1;
        bool check = true;
		for(int i = 1; i < n; i++)
		{
            if(arr[i] + arr[i-1] == 0)
            {
                std::cout << -1 << '\n';
                check = false;
                break;
            }
            if(arr[i] == 0 && arr[i-1] == 1)
            {
                s += 0;
            }
            if(arr[i] == 1 && arr[i-1] == 0)
            {
                s += 1;
            }
            if(arr[i] == 1 && arr[i-1] == 1)
            {
                s += 5;
            }
		}
        if(check)
        {
            if(arr[0] == 1) s++;
            std::cout << s << '\n';
        }
    }
}
 
 
 
int main() 
{
	solve1585A();
}
