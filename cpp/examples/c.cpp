#include<iostream>
using namespace std;
class Test {
public:
    int x;
    void show_data();
};
void Test::show_data()
{
    cout<<"\n x="<<x;
}
int main()
{
    Test t; 
    int Test::*ptr = &Test::x;   // pointer-to-member
    t.*ptr = 20;                 // access member
    t.show_data();               // prints 20
    Test *tp = new Test;         
    tp->*ptr = 80;               // pointer with object pointer
    tp->show_data();             // prints 80
    return 0;
}
