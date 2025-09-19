#include <iostream>
using namespace std;

// Base class
class employee
{
    

public:
    int id;
    float salary;
    employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    employee(){}
};

// Derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    members/methods/etc...
}

Note:
1. Default visibility mode is private
2. Public Visibility Mode : Public members of the base class become Public members of the derived class
3. Private Visibility Mode: Public members of the base class become Private members of the derived class
4. Private members are never inherited
    */

// Creating a Programmer class derived from employee base class

class Programmer : employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    employee harry(1), rohan(2);
    cout << rohan.salary << endl;
    cout << harry.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    skillF.getData();
    return 0;
}