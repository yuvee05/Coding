#include <iostream>
using namespace std;

// OOPs - Classes and objects
// C++ -> initially called --> C with classes 
// class --> extension of structures (in C)
// Structures had limitations 
//                --> members are public
//                --> No methods
// classes --> structures + more
// classes --> can have method and properties
// classes --> can make few members as private & few as public
// structures in c++ are typedefed
// you can declare objects along with the class declaration like this:
    /* class Employee{
         //Class definition
       } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

class Employee
{
    private:
        int a,b,c;
        //Actually no need to write private as by default the members of a class are private
    public:
        int d,e;
        void setData(int a1,int b1,int c1);//Declaration
        void getData()
        {
            cout << "The value of a is "<< a << endl;
            cout << "The value of b is "<< b << endl;
            cout << "The value of c is "<< c << endl;
            cout << "The value of d is "<< d << endl;
            cout << "The value of e is "<< e << endl;
        }
};

void Employee :: setData(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    Employee harry;
    //harry.a = 134; -> This will throw an error as a is private
    harry.d = 34;
    harry.e = 89;
    harry.setData(1,2,4);
    harry.getData();
    return 0;
}