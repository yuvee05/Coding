#include <iostream>
using namespace std;

class base
{
    int a=1, b=2;

protected:
    int c=3, d=4;

public:
    int e=5, f=6;

};
class derived1 : public base
{
    void display()
    {
        // cout << a << " " << b << endl;
        // private members can never be inherited
        cout << c << " " << d << endl; // inherited as protected
        cout << e << " " << f << endl;// inherited as public
    }
};

class derived2 : private base
{
    void display()
    {
        // cout << a << " " << b << endl;
        // private members can never be inherited
        cout << c << " " << d << endl; // inherited as private
        cout << e << " " << f << endl;// inherited as private
    }
};

class derived3 : protected base
{
    void display()
    {
        // cout << a << " " << b << endl;
        // private members can never be inherited
        cout << c << " " << d << endl; // inherited as protected
        cout << e << " " << f << endl;// inherited as protected
    }
};
int main()
{
    return 0;
}