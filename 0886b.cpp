#include <iostream>
#include <vector>
#include <set>
 
int main()
{
    int n = 0;
    std::cin >> n;
    int x = 0;
    std::set <int> s;
    std::vector <int> v;
    for (int i = 0; i < n; i += 1)
    {
        std::cin >> x;
        v.push_back(x);
        s.insert(x);
    }
    int i = n - 1;
    int min_i = n;
    while (!s.empty())
    {
        if (s.find(v[i]) != s.end())
        {
            s.erase(v[i]);
            min_i = i;
        }
        i--;
    }
    std::cout << v[min_i] << "\n";
}
