#include <iostream>
#include <vector>
 
int main()
{
    int t = 0;
    int n = 0;
    int k = 0;
    int m = 0;
    char color;
    int counter = 0;
    std::vector <char> v;
    std::cin >> t;
    for (int i = 0; i < t; i += 1)
    {
        counter = 0;
        std::cin >> n >> k;
        for (int h = 0; h < k; h += 1)
        {
            
            std::cin >> color;
            if (color == 'W')
                counter += 1;
            v.push_back(color);
        }
        m = counter;
        for (int h = k; h < n; h += 1)
        {
            std::cin >> color;
            v.push_back(color);
            if (v[h - k] == 'W')
            {
                counter -= 1;
            }
            if (v[h] == 'W')
            {
                counter += 1;
            }
            if (counter < m)
            {
                m = counter;
            }
        }
        std::cout << m << "\n";
        v.clear();
    }
 
}
