#include <iostream>
using namespace std;

/*
- Class A is the base class.
- Classes B and C inherit from A using virtual inheritance.
- Class D inherits from both B and C.
- Using virtual base class ensures only one copy of A exists in D.
*/

class A
{
    int a;
public:
    A(int v)
    {
        a = v;
    }
    ~A()
    {
        cout << "a = " << a << endl;
    }
};

class B : virtual public A
{
    int b;
public:
    B(int v1, int v2) : A(v1)
    {
        b = v2;
    }
    ~B()
    {
        cout << "b = " << b << endl;
    }
};

class C : virtual public A
{
    int c;
public:
    C(int v1, int v3) : A(v1)
    {
        c = v3;
    }
    ~C()
    {
        cout << "c = " << c << endl;
    }
};

class D : public B, public C
{
    int d;
public:
    D(int v1, int v2, int v3, int v4)
        : A(v1), B(v1, v2), C(v1, v3)
    {
        d = v4;
    }
    ~D()
    {
        cout << "d = " << d << endl;
    }
};

int main()
{
    D obj(10, 20, 30, 40);
    return 0;
}
