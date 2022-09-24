#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

void solve4A() // https://codeforces.com/contest/4/problem/A
{
    int w;
    std::cin >> w;
    if(!(w % 2) && w > 2)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
}

void solve617A() // https://codeforces.com/contest/617/problem/A
{
    int x, c = 0;
    std::cin >> x;
    while(x >= 5)
    {
        x -= 5;
        c++;
    }
    if(x != 0) c++;
    std::cout << c << std::endl;
}

void solve271A() // https://codeforces.com/contest/271/problem/A
{
    int x;
    bool y = true;
    std::cin >> x;
    while(y)
    {
        x++;
        int a = x % 10, b = x / 10 % 10, c = x / 100 % 10, d = x / 1000;
        if(a != b && a != c && a != d && b != c && b != d && c != d)
        { 
            y = false;
        }
        // cout << x << endl;
    }
    std::cout << x << std::endl;
}

void solve263A() // https://codeforces.com/contest/263/problem/A
{
    int value, counter = 0;
    for(int i = 1; i < 6; i++)
    {
        for(int j = 1; j < 6; j++)
        {
            std::cin >> value;
            if(value == 1)
            {
                counter = abs(j - 3) + abs(i - 3);
            }
        }
    }
    std::cout << counter << std::endl;
}

void solve1352A() // https://codeforces.com/contest/1352/problem/A
{
    int value, counter, z = 0;
    int a, b, c, d;
    std::cin >> counter;
    std::vector<int> arr;
    for(int i = 0; i < counter; i++)
    {
        std::cin >> value;
        arr.push_back(value);
    }
    for(int i = 0; i < counter; i++)
    {
        int f = arr[i];
        a = f / 1000;
        b = f / 100 % 10;
        c = f / 10 % 10;
        d = f % 10;
        z = (a != 0) + (b != 0) + (c != 0) + (d != 0);
        std::cout << z << std::endl;
        if(a != 0)
        {
            std::cout << a*1000 << " ";
        }
        if(b != 0)
        {
            std::cout << b*100 << " ";
        }
        if(c != 0)
        {
            std::cout << c*10 << " ";
        }
        if(d != 0)
        {
            std::cout << d << " ";
        }
        std::cout << std::endl;
    }
}

void solve276A() // https://codeforces.com/contest/276/problem/A
{
    int f, t, k, c, ans = -1e9;
    std::cin >> c >> k;
    for(int i = 0; i < c; i++)
    {
        std::cin >> f >> t;
        if(t > k)
        {
            ans = std::max(ans, f + k - t);
        }
        else
        {
            ans = std::max(ans, f);
        }
    }
    std::cout << ans << std::endl;
}

void solve50A() // https://codeforces.com/contest/50/problem/A
{
    int m, n;
    std::cin >> m >> n;
    std::cout << m * n / 2 << std::endl;
}

void solve978A() // https://codeforces.com/contest/978/problem/A
{
    int n, a;
    std::cin >> n;
    std::vector<int> arr;
    std::vector<int> nums;
    std::vector<int> rdy;
    for(int i = 0; i < 1000; i++)
    {
        nums.push_back(i+1);
    } 
    for(int i = 0; i < n; i++)
    {
        std::cin >> a;
        arr.push_back(a);
    }
    std::reverse(arr.begin(), arr.end());
    for(int i = 0; i < n; i++)
    {
        if(nums[arr[i] - 1] != 0)
        {
            rdy.push_back(arr[i]);
            nums[arr[i] - 1] = 0;
        }
    }
    std::reverse(rdy.begin(), rdy.end());
    std::cout << rdy.size() << std::endl;
    for(int i = 0; i < rdy.size(); i++)
    {
        std::cout << rdy[i] << " ";
    }
    std::cout << std::endl;
}

/*    problem not solved yet    */
void solve1330A() // https://codeforces.com/problemset/problem/1330/A
{
    int t, n, x, a;
    std::cin >> t;
    std::vector<int> arr;
    for(int i = 0; i < t; i++)
    {
        std::cin >> n >> x;
        arr.reserve(101);
        for(int l = 1; l <= n; l++)
        {
            std::cin >> a;
            arr[a] = a;
        }
        int c = 0, sz = arr.size();
        for(int l = 1; l <= 100; l++)
        {
            if(arr[l] == 0)
            {
                c++;
            }
            if(c > x || l == 100)
            {
                if(c > x)
                {
                    std::cout << arr[l - 1] << std::endl;
                    break;
                }
                else
                {
                    std::cout << 100 + x - c << std::endl;
                }
            }
        }
    }
}

void solve1721B() // https://codeforces.com/problemset/problem/1721/B
{
    int t, n, m, sx, sy, d;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        std::cin >> n >> m >> sx >> sy >> d;
    }
}

void solve1703C() // https://codeforces.com/contest/1703/problem/C
{
    int t, n, a;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        std::cin >> n;
        std::vector<int> arr;
        for(int k = 0; k < n; k++)
        {
            std::cin >> a;
            arr.push_back(a);
        }
        int num, sum = 0;
        std::string str;
        for(int k = 0; k < n; k++)
        {
            std::cin >> num;
            std::cin >> str;
            for(int l = 0; l < str.size(); l++)
            {
                if(str[l] == 'D') sum++;
                else sum--;
            }
            std::cout << abs((arr[k] + sum) + 1000) % 10 << " ";
            sum = 0;
        }
        std::cout << std::endl;
    }
}

int main()
{
    // solve4A();
    // solve617A();
    // solve271A();
    // solve263A();
    // solve1352A();
    // solve276A();
    // solve50A();
    // solve978A();
    // solve4A();
    // solve1330A();
    // solve1721B();
    // solve1703C();
}