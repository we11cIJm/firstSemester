#include <iostream>
#include <string>
 
int main()
{
    int t = 0;
    std::cin >> t;
    int leight = 0;
    std::string s;
    bool flag_1 = false;
    bool flag_2 = false; 
    for (int i = 0; i < t; i += 1)
    {
        std::cin >> leight;
        std::cin >> s;
        s = 'W' + s + 'W';
        flag_1 = false;
        flag_2 = false;
        for (int elem = 0; elem < leight + 1; elem += 1)
        {
            if (s[elem] == 'W' && s[elem + 1] != 'W')
            {
                flag_1 = true;
            }
            else if (s[elem] != 'W' && s[elem + 1] == 'W' && flag_1 == true)
            {
                flag_2 = true;
                break;
            }
            else if (s[elem] != s[elem + 1])
            {
                flag_1 = false;
            }
            
        }
        if (flag_2 == false)
        {
            std::cout << "YES" << "\n";
 
        }
        else std::cout << "NO" << "\n";
 
    }
}
