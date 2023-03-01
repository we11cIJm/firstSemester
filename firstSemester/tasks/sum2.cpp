#include <iostream>
#include <cmath>
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
    const double a = 0;
    const double b = 1;
    double fac = 1;
    double y = 0;
    const double PI = acos(-1);
    std::cout << "x       s(x)       f(x)" << "\n";
    

    for (x = a+0.05; x <= b; x += 0.05)
    {
        s = 0;
        st_x = x;
        sum = 0;
        y = x / (sqrt(2) - 2*x);
        for (int i = 1; (std::abs(s) >= d) || (s == 0); i += 1)
        {
            sum += s;
            s = st_x * sin(i*PI/4);
            st_x *= x ;

        }
        std::cout << std::fixed << std::setprecision(5);
        std::cout << x << " " << sum << " " << y << "\n";

    }
}
