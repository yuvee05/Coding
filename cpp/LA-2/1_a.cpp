#include <iostream>
using namespace std;

class Number
{
    int x;
public:
    // Method to set the value
    void setValue(int a)
    {
        x = a;
    }

    // Method to display the value
    void display()
    {
        cout << "Value of x: " << x << endl;
    }

    // -------- Functions for returning objects --------

    // Pass by Value
    Number addByValue(Number n)
    {
        Number temp;
        temp.setValue(x + n.x);
        return temp;
    }

    // Pass by Address
    Number addByAddress(Number *n)
    {
        Number temp;
        temp.setValue(x + n->x);
        return temp;
    }

    // Pass by Reference
    Number addByReference(Number &n)
    {
        Number temp;
        temp.setValue(x + n.x);
        return temp;
    }
};

int main()
{
    Number n1, n2, result;

    // Initialize objects
    n1.setValue(10);
    n2.setValue(20);

    cout << "--- Pass by Value ---" << endl;
    result = n1.addByValue(n2);
    result.display();

    cout << "--- Pass by Address ---" << endl;
    result = n1.addByAddress(&n2);
    result.display();

    cout << "--- Pass by Reference ---" << endl;
    result = n1.addByReference(n2);
    result.display();

    return 0;
}
