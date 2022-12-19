#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

int main()
{
    double x;
    const double d = 0.0001;
    int i = 0;
    double st_x = 0;
    std::vector<double> f;
    double sum = 0;
    double s = 0;
    const double a = -1;
    const double b = 1;
    double fac = 1;
    double y = 0;
    std::cout << "x       s(x)       f(x)" << "\n";
    for (int i = 2; i < 50; i+=2)
    {
        f.push_back(fac);
        fac *= i*(i-1);
    }
  
    for (x = a; x <= b; x += 0.1)
    {
        s = 0;
        st_x = 1;
        sum = 0;
        y = cos(x);
        for (int i = 0; (std::abs(s) >= d) || (s == 0); i += 1)
        {
            sum += s;
            s = st_x / f[i];
            if (i % 2 == 1)
                s *= -1;
            st_x *= x * x;
            
        }
        std::cout << std::fixed << std::setprecision(5);
        std::cout << x << " " << sum << " " << y << "\n";

    }
}
