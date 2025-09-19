#include <iostream>
using namespace std;

class Demo
{
    int x;
public:
    void setData(int a) 
    { 
        x = a; 
    }
    int getData() const
    {          
        x = x + 1; //Compile-time error(cannot modify x)
        return x;
    }
};

int main()
{
    Demo d;
    d.setData(10);
    cout << d.getData(); 
    return 0;
}
