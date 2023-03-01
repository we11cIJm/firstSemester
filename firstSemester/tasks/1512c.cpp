#include <iostream>
#include <string>
 
int main()
{
    int t = 0;
    int a = 0;
    int b = 0;
    int k = 0;
    bool flag = true;
    std::string s;
    std::cin >> t;
    for (int i = 0; i < t; i += 1)
    {
        flag = true;
        k = 0;
        std::cin >> a >> b;
        std::cin >> s;
        const int n = a + b;
        for (int h = 0; h < n/2; h += 1)
        {
            if (s[h] != s[n - 1 - h])
            {
                if (s[h] == '?')
                {
                    s[h] = s[n - 1 - h];
                    if (s[n - 1 - h] == '0')
                    {
                        a -= 2;
                    }
                    else b -= 2;
 
                }
                else if (s[n - 1 - h] == '?')
                {
                    s[n-1-h] = s[h];
                    if (s[h] == '0')
                    {
                        a -= 2;
                    }
                    else b -= 2;
                }
                else {
                    flag = false;
                    break;
                }
            }
            else if (s[h] != '?')
            {
                if (s[h] == '0')
                    a -= 2;
                else b -= 2;
            }
            if (s[h] == s[n - 1 - h] && s[h] == '?')
            {
                k++;
            }
        }
        if (((a / 2) + (b / 2) < k) || (flag == false))
        {
            std::cout << "-1"<<"\n";
        }
        else
        {
            for (int h = 0; h < n / 2; h += 1)
            {
                if ((s[h] == s[n - 1 - h]) && s[h] == '?')
                {
                    if ((a != 0) && (a != 1))
                    {
                        s[h] = '0';
                        s[n - 1 - h] = '0';
                        a -= 2;
                    }
                    else
                    {
                        s[h] = '1';
                        s[n - 1 - h] = '1';
                        b -= 2;
                    }
 
                }
            }
            if ((n % 2 == 1 && s[n / 2] == '?') || ((n == 1) && (s[0] == '?')))
            {
                if (n != 1)
                {
                    if (a != 0)
                    {
                        s[n / 2] = '0';
                        a -= 1;
                    }
                    else {
                        s[n / 2] = '1';
                        b -= 1;
                    }
                }
                else {
                    if (a != 0)
                    {
                        s[0] = '0';
                        a -= 1;
                    }
                    else {
                        s[0] = '1';
                        b -= 1;
                    }
                }
            }
            if (a+b == 1 && n%2==1)
            {
                if (s[n/2] == '0')
                    a -= 1;
                else b -= 1;
            }
            if (a == 0 && b == 0)
                std::cout << s << "\n";
            else std::cout << "-1"<<"\n";
 
 
        }
  
    }
}
