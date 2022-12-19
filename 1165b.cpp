#include <iostream>
#include <vector>
#include <algorithm>
 
int main()
{
	int n, counter = 0;
	std::cin >> n;
	std::vector<int> arr;
	for(int i = 0; i < n; i++)
	{
		bool check = true;
		int a;
		std::cin >> a;
		arr.push_back(a);
	}
	std::sort(arr.begin(), arr.end());
	int c = 1;
	for(int i = 0; i < arr.size(); i++)
	{
		if(arr[i] >= c)
		{
			counter++;
			c++;
		}
	}
	std::cout << counter << '\n';
}
