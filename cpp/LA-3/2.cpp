#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    Rectangle(int a=0)
    {
        length = a;
        breadth = a;
    }
    ~Rectangle()
    {
        cout << "Destructor has been called" << endl;
    }
    int area()
    {
        cout << "Area of this rectangle: " << length * breadth << endl;
    }
};

int main()
{
    Rectangle r[3] = { Rectangle(), Rectangle(2,3),Rectangle(4)};
    for(int i=0;i<3;i++)
    {
        r[i].area();
    }
  
    return 0;
}