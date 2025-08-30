#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void set(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void sum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void display()
    {
        cout << "Your complex number is " << a << " + " << b << "i"<< endl;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.set(1,2);
    c1.display();

    c2.set(3,4);
    c2.display();

    c3.sum(c1,c2);
    c3.display();
    return 0;
}