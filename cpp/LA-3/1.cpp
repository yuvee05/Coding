#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    Rectangle(int a)
    {
        length = a;
        breadth = a;
    }
    int area()
    {
        cout << "Area of this rectangle: " << length * breadth << endl;
    }
};

int main()
{
    Rectangle r1, r2(2, 3), r3(4);
    r1.area();
    r2.area();
    r3.area();
    return 0;
}