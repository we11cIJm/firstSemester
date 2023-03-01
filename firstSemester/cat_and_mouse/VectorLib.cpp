#include "VectorLib.hpp"
#include <iostream>
#include <cmath>


vector operator-(vector const& v)
{
	return { -v.x, -v.y };
}

vector operator+(vector const& v, vector const& w)
{
	return { v.x + w.x, v.y + w.y };
}

vector operator-(vector const& v, vector const& w)
{
	return { v.x - w.x, v.y - w.y };
}

vector operator*(vector const& v, double a)
{
	return { v.x * a, v.y * a };
}

vector operator/(vector const& v, double a)
{
	return { v.x / a, v.y / a };
}

vector UnitVector(vector const& v)
{
	return { v.x / Norm(v), v.y / Norm(v) };
}

double Dot(vector const& v, vector const& w)
{
	return (v.x * w.x + v.y * w.y);
}

double Norm(vector const& v)
{
	return sqrt(v.x * v.x + v.y * v.y);
}

