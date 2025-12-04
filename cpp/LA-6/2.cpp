#include <iostream>
using namespace std;

class shape
{
public:
    virtual void area() = 0;
    virtual void display() = 0;
};

class circle : public shape
{
    int radius;

public:
    circle(int r)
    {
        radius = r;
    }
    void area() override
    {
        cout << "The area of circle is " << 3.1415 * radius * radius << endl;
    }
    void display() override
    {
        cout << "This is a circle" << endl;
    }
};

class rectangle : public shape
{
    int a, b;

public:
    rectangle(int x, int y)
    {
        a = x;
        b = y;
    }
    void area() override
    {
        cout << "The area of rectangle is " << a * b << endl;
    }
    void display() override
    {
        cout << "This is a rectangle" << endl;
    }
};

class triangle : public shape
{
    int b, h;

public:
    triangle(int base, int height)
    {
        b = base;
        h = height;
    }
    void area() override
    {
        cout << "The area of triangle is " << (0.5) * b * h << endl;
    }
    void display() override
    {
        cout << "This is a triangle" << endl;
    }
};

int main()
{
    shape *s;
    triangle t(10, 10);
    circle c(10);
    rectangle r(10, 10);
    s = &c;
    s->display();
    s->area();
    s = &r;
    s->display();
    s->area();
    s = &t;
    s->display();
    s->area();
    return 0;
}
