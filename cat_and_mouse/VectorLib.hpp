#include <iosfwd>

struct vector {
    double x = 0.0;
    double y = 0.0;
};

vector operator-(vector const& v);
vector operator+(vector const& v, vector const& w);
vector operator-(vector const& v, vector const& w);
vector operator*(vector const& v, double a);
vector operator/(vector const& v, double a);
double Dot(vector const& v, vector const& w);
double Norm(vector const& v);
bool operator==(vector const& v, vector const& w);
bool operator!=(vector const& v, vector const& w);
