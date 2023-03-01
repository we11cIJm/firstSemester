#include <iostream>
 
int main()
{
    int n,m,sx,sy,d,t,i;
    std::cin >> t;
    for(i=1;i<=t;i++)
    {
        std::cin >> n >> m >> sx >> sy >> d;
        if ((1 < sx - d and sy+d < m) or (1 < sy-d and sx+d < n))
        { 
            std::cout << n+m-2 << "\n";
        }
        else
        {
            std::cout << -1 << "\n"; 
        }
    }
}
