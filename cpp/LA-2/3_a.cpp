#include <iostream>
using namespace std;

class scope
{
public:
    void display();
};

void scope::display()
{
    cout << "Member function defined outside class" << endl;
}

int main()
{
    scope obj;
    obj.display();
    return 0;
}
