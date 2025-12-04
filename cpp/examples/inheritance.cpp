#include <iostream>
using namespace std;
class A
{
    int x;

protected:
    int y;

public:
    int z;
};

class B : protected A
{
public:
    void display()
    {
        y = 30;
        z = 40;
        cout << y << " " << z;
    }
};
int main()
{
    B ob;
    B ob1;
    //ob1.z = 20;
    ob.display();
}