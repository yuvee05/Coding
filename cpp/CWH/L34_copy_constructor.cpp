#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number(){a=0;}
    Number(int num)
    {
        a = num;
    }
    //Whrn no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout << "Copy Constructor called!!!" << endl;
        a=obj.a;
    }
    void display()
    {
        cout << "The number for this object is " << a <<endl;
    }
};

int main()
{
    Number x,y,z(45),z2;
    z.display();
    y.display();
    x.display();

    Number z1(z);//Copy contructor invoked
    z1.display();

    z2=z; // Copy constructor not called

    Number z3 = z; // Copy constructor invoked
    return 0;
}