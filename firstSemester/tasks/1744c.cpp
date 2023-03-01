#include <iostream>
#include <string>

int main()
{
    int t = 0;
    std::cin >> t;
    int amt = 0;
    char color;
    std::string s;
    int i_g = 0;
    int max_r = 0;
    int max_y = 0;
    for (int i = 0; i < t; i++)
    {
        std::cin >> amt;
        std::cin >> color;
        std::cin >> s;
        max_r = 0;
        max_y = 0;
        i_g = s.find("g");
        if (color == 'g')
        {
            std::cout << "0" << "\n";
        }
        else
        {
            for (int elem = 0; elem < amt; elem += 1)
            {
                if (s[elem] == 'r')
                {
                    if (elem < i_g)
                    {
                        max_r = std::max(max_r, i_g - elem);
                    }
                    else max_r = std::max(max_r, i_g + amt - elem);
                }
                if (s[elem] == 'y')
                {
                    if (elem < i_g)
                    {
                        max_y = std::max(max_y, i_g - elem);
                    }
                    else max_y = std::max(max_y, i_g + amt - elem);
                }

            }
            if (color == 'r')
            {
                std::cout << max_r << "\n";
            }
            else std::cout << max_y << "\n";
        }
    }
}
