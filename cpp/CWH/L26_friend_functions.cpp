#include <iostream>
using namespace std;
class complex
{
    int a,b;
    public:
        void setData(int n1, int n2)
        {
            a=n1;
            b=n2;
        }
        void display()
        {
            cout << a << " + " << b << "i" << endl;
        }
        friend complex ComplexSum(complex o1,complex o2);

    };
complex ComplexSum(complex o1,complex o2)
{
    complex o3;
    o3.setData((o1.a+o2.a),(o1.b+o2.b));
    return o3; 
}
int main()
{
    complex c1,c2,sum;
    c1.setData(1,3);
    c1.display();

    c2.setData(4,5);
    c2.display();

    sum = ComplexSum(c1,c2);
    sum.display();

    return 0;
}

/*Properties of friend functions
1. Not in the scope of class
2. Since it is not in the scope of the class, it cannot be called from the object of that class. c1.ComplexSum() == Invalid
3. Can be invoked without the help of any object
4. Usually contains objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member
*/