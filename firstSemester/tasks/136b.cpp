#include <iostream>
#include <vector>
 
int main()
{
    int a = 0;
    int c = 0;
    int k = 0;
    std::cin >> a >> c;
    std::vector <int> v1;
    std::vector <int> v2;
    
    while (a > 0 || c > 0)
    {
        if (a > 0)
        {
            v1.push_back(a % 3);
            a /= 3;
        }
        if (c > 0)
        {
            v2.push_back(c % 3);
            c /= 3;
        }
    }
    if (v1.size() > v2.size())
    {
        k = v1.size() - v2.size();
        for (int i = 0; i < k; i++)
        {
            v2.push_back(0);
        }
    }
    else
    {
        k = v2.size() - v1.size();
        for (int i = 0; i < k; i++)
        {
            v1.push_back(0);
        }
    }
    
    for (int i = 0; i < v1.size(); i += 1)
    {
        if (v2[i] - v1[i] < 0)
            v2[i] += 3;
        v1[i] = v2[i] - v1[i];
    }
    int p = 1;
    int sum = 0;
    for (int i = 0; i < v1.size(); i += 1)
    {
        sum += v1[i] * p;
        p *= 3;
    }
    std::cout << sum << "\n";
 
}
