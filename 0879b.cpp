#include <iostream>
#include <queue>
 
int main()
{
    std::queue <int> a;
    int n = 0;
    long long int k = 0;
    int x = 0;
    long long int counter = 0;
    int a1 = 0;
    int a2 = 0;
    std::cin >> n >> k;
    int win = 0;
    std::cin >> a1 >> a2;
    win = std::max(a1, a2);
    counter += 1;
    if (n >= 3) {
        for (int i = 2; i < n; i++)
        {
            std::cin >> x;
            a.push(x);
        }
        a.push(std::min(a1, a2));
        
        while (counter != k && counter <= 2*n)
        {
            if (win > a.front())
            {
                counter += 1;
                a.push(a.front());
                a.pop();
            }
            else
            {
                
                a.push(win);
                win = a.front();
                a.pop();
                counter = 1;
            }
        }
    }
    std::cout << win << "\n";
}
