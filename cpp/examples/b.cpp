#include <iostream>
using namespace std;

class cl
{
public:
    cl(int i) { val = i; }
    int val;
    int double_val()
    {
        return val + val;
    }
};

int main()
{
    int cl::*data;     // pointer to data member
    int (cl::*func)(); // pointer to member function

    cl ob1(1), ob2(2);

    data = & cl::val;
    func = & cl::double_val;

    cout << "Here are values: ";
    cout << ob1.*data << " " << ob2.*data << "\n";

    cout << "Here they are doubled: ";
    cout << (ob1.*func)() << " ";
    cout << (ob2.*func)() << "\n";

    return 0;
}
