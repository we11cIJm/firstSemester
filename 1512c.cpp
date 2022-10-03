#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

int main()
{
    int t;
    std::cin >> t;
    int a, b, n, counterOfQMarks = 0;
    char x;
    bool check1, check2;
    for(int l = 0; l < t; l++)
    {
        check1 = true;
        check2 = true;
        std::cin >> a >> b;
        n = a + b;
        std::vector<char> str;
        std::vector<int> index;
        for(int i = 0; i < n; i++)
        {
            std::cin >> x;
            str.push_back(x);
        }
        for(int i = 0; i < n / 2; i++)
        {
            if(str[i] != str[n - i - 1] && str[i] != '?' && str[n - i - 1] != '?')
            {
                std::cout << -1 << '\n';
                check1 = false;
                break;
            }
            else if(str[i] == str[n - i - 1] && str[i] == '?')
            {
                counterOfQMarks += 2;
                index.push_back(i);
                index.push_back(n - i - 1);
            }
            else if(str[i] != str[n - i - 1] && (str[i] == '?' || str[n - i - 1] == '?'))
            {
                if(str[i] == '0' || str[n - i - 1] == '0')
                {
                    a--;
                    if(str[i] == '0')
                    {
                        str[n - i - 1] = '0';
                    }
                    else
                    {
                        str[i] = '0';
                    }
                }
                else
                {
                    b--;
                    if(str[i] == '1')
                    {
                        str[n - i - 1] = '1';
                    }
                    else
                    {
                        str[i] = '1';
                    }
                }
            }
            if(str[i] == '0') a--;
            if(str[n - i - 1] == '0') a--;
            if(str[i] == '1') b--;
            if(str[n - i - 1] == '1') b--;
        }
        // std::cout << counterOfQMarks << '\n';
        if(check1 == true)
        {
            if(a >= 0 && b >= 0)
            {
                int c = counterOfQMarks;
                for(int q = 0; q < c / 2; q++)
                {
                    if(counterOfQMarks <= a)
                    {
                        for(int k = 0; k < index.size() - 1; k++)
                        {
                            str[index[k]] = '0';
                            str[index[k + 1]] = '0';
                        }
                    }
                    else if(counterOfQMarks <= b)
                    {
                        for(int k = 0; k < index.size() - 1; k++)
                        {
                            str[index[k]] = '1';
                            str[index[k + 1]] = '1';
                        }
                    }
                    else
                    {
                        std::cout << -1 << '\n';
                        check2 = false;
                        break;
                    }
                    counterOfQMarks -= 2;
                }
                if(check2 == true)
                { 
                    for(int j = 0; j < str.size(); j++)
                    {
                        std::cout << str[j];
                    }
                    std::cout << std::endl;
                }
                else
                {
                    std::cout << -1 << '\n';
                }
            }
            else
            {
                std::cout << -1 << '\n';
            }
        }
        // дописать вычет a и b, когда на вход даётся 0 или 1
    }
}
