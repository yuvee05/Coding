#include <iostream>
using namespace std;

class Box
{ 
    int length, breadth, height;
public:
    void setData(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    void display()
    {
        cout << "Length: " << length << ", Breadth: " << breadth << ", Height: " << height << endl;
    }

    // Pass-by-Value
    Box modifyByValue(Box obj)
    {
        obj.length += 1;
        obj.breadth += 1;
        obj.height += 1;
        return obj;
    }

    // Pass-by-Address
    Box modifyByAddress(Box *obj)
    {
        obj->length += 2; // or(*obj).length
        obj->breadth += 2;
        obj->height += 2;
        return *obj;
    }

    // Pass-by-Reference
    Box modifyByReference(Box &obj)
    {
        obj.length += 3;
        obj.breadth += 3;
        obj.height += 3;
        return obj;
    }
};

int main()
{
    Box b1, b2, b3, b4;
    b1.setData(1, 2, 3);

    cout << "Original Object: ";
    b1.display();

    b2 = b1.modifyByValue(b1);
    cout << "\nAfter Pass-by-Value (new object): ";
    b2.display();

    b3 = b1.modifyByAddress(&b1);
    cout << "\nAfter Pass-by-Address (modifies original): ";
    b3.display();

    b4 = b1.modifyByReference(b1);
    cout << "\nAfter Pass-by-Reference (modifies original): ";
    b4.display();

    return 0;
}
