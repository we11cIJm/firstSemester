#include <iostream>
#include <vector>
 
int main()
{
	int n;
	std::cin >> n;
	std::vector<int> arr;
	for(int i = 0; i < n; i++)
	{
		int s = 0;
		for(int i = 0; i < 4; i++)
		{
			int a;
			std::cin >> a;
			s += a;
		}
		arr.push_back(s);
	}
	int c = 1;
	for(int i = 1; i < arr.size(); i++)
	{
		if(arr[0] < arr[i])
		{
			c++;
		}
	}
	std::cout << c << '\n';
}
