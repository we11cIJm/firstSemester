#include <iostream>
#include <vector>

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> arr;
	std::vector<int> nums(2*1e5);
	for(int i = 0; i < nums.size(); i++) nums.push_back(0);
	for(int i = 0; i < n; i++)
	{
		int a;
		std::cin >> a;
		arr.push_back(a);
		nums[a] = a;
	}
	int c = 0;
	for(int i = 0; i < nums.size(); i++)
	{
		if(nums[i] != 0) c++; 
	}
	for(int i = n; i > 0; i--)
	{
		if(c > 1)
		{
			if(nums[arr[i]] != 0)
			{
				nums[arr[i]] = 0;
				c--;
			}
		}
		else
		{
			for(int j = 0; j < nums.size(); j++)
			{
				if(nums[j] != 0)
				{
					std::cout << j << '\n';
					// check = true;
					break;
				}
			}
			break;
		}
	}
}
