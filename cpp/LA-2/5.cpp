#include <iostream>
using namespace std;

int num = 100;

class var
{
public:
    static int num;
};

int var::num = 200;

int main()
{
    int num = 300;

    cout << "Local variable: " << num << endl;
    cout << "Static class member: " << var::num << endl;
    cout << "Global variable: " << ::num << endl;
    return 0;
}
