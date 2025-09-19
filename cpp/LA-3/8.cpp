#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:
    Rectangle(int l = 0, int b = 0)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }

    void display()
    {
        cout << "Length = " << length << ", Breadth = " << breadth << endl;
    }
};

int main()
{

    Rectangle *ptr = new Rectangle(5, 7);

    ptr->display();
    cout << "Area = " << ptr->area() << endl;

    delete ptr;

    return 0;
}
