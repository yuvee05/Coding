#include <iostream>
#include <math.h>
using namespace std;
class Cartesian;
class Polar
{
    float r, theta;
    public:
    Polar(float radius, float angle)
    {
        r = radius;
        theta = angle;
    }

    operator Cartesian();
};

class Cartesian
{
    float x,y;
    public:
    Cartesian()
    {
        x = y = 0;
    }
    Cartesian(float a, float b)
    {
        x=a;
        y=b;
    }
    void show()
    {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

Polar :: operator Cartesian()
{
    float x = r*cos(theta);
    float y = r*sin(theta);
    return Cartesian(x,y);
}
int main()
{
    Polar p(10,0.5);
    Cartesian c = p;
    c.show();
    return 0;
}