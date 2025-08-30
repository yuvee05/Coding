#include <iostream>
using namespace std;

namespace MathLibrary1
{
    int value = 10;
    void display()
    {
        cout << "MathLibrary1 Value: " << value << endl;
    }
}

namespace MathLibrary2
{
    int value = 20;
    void display()
    {
        cout << "MathLibrary2 Value: " << value << endl;
    }
}

int main()
{
    MathLibrary1::display();
    cout << "MathLibrary1 value: " << MathLibrary1::value << endl;

    MathLibrary2::display();
    cout << "MathLibrary2 value: " << MathLibrary2::value << endl;

    using namespace MathLibrary1;
    cout << "\nAfter using namespace MathLibrary1:" << endl;
    display();
    cout << "Value from MathLibrary1: " << value << endl;

    return 0;
}
