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

    int area()
    {
        return this->length * this->breadth;
    }

    void display()
    {
        cout << "Length = " << this->length << ", Breadth = " << this->breadth << endl;
    }
};

int main()
{

    Rectangle r1(4, 5);
    Rectangle *ptr = &r1;

    cout << "Using dot operator:" << endl;
    r1.display();
    cout << "Area = " << r1.area() << endl;

    cout << "Using arrow operator:" << endl;
    ptr->display();
    cout << "Area = " << ptr->area() << endl;

    return 0;
}
