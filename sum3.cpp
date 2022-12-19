#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

int main()
{
    double x;
    const double d = 0.00001;
    int i = 0;
    double st_x = 0;
    double st_2 = 0;
    std::vector<double> f;
    double sum = 0;
    double s = 0;
    const double a = 0;
    const double b = 1;
    double fac = 1;
    double y = 0;
    std::cout << "x       s(x)       f(x)" << "\n";
    for (int i = 1; i < 100; i += 1)
    {
        f.push_back(fac);
        fac *= i;
    }

    for (x = a+0.1; x <= b; x += 0.1)
    {
        s = 0;
        st_x = 1;
        st_2 = 1;
        sum = 0;
        y = pow(M_E, 2*x);
        for (int i = 0; (std::abs(s) >= d) || (s == 0); i += 1)
        {
            sum += s;
            s = st_2 * st_x / f[i];
            st_x *= x;
            st_2 *= 2;

        }
        std::cout << std::fixed << std::setprecision(5);
        std::cout << x << " " << sum << " " << y << "\n";

    }
}
