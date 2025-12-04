#include <iostream>
using namespace std;
class Polygon
{
public:
    int width, height;
    void set_value(int a, int b)
    {
        width = a;
        height = b;
    }
    virtual void calculate_area() = 0;
};
class rectangle : public Polygon
{
public:
    void calculate_area() override
    {
        cout << "The area for rectangle is " << width * height << endl;
    }
};
class triangle : public Polygon
{
public:
    void calculate_area() override
    {
        cout << "The area for triangle is " << (0.5) * width * height << endl;
    }
};
int main()
{
    triangle t;
    rectangle r;
    Polygon *p;

    t.set_value(10, 10);
    r.set_value(10, 10);

    p = &r;
    p->calculate_area();

    p = &t;
    p->calculate_area();

    return 0;
}
