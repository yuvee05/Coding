#include <iostream>
using namespace std;

class Simple
{
    int data1, data2, data3;

public:
    Simple(int a, int b=9 , int c=8)
    {
        data1=a;
        data2=b;
        data3=c;
    }

    void printData();
};

void Simple :: printData()
{
    cout << "The value of data1, data2 and data3 is " << data1 << ", " << data2 << " and " << data3 << endl;
}

int main()
{
    Simple s1(12, 13, 14);
    s1.printData();

    Simple s2(12, 13);
    s2.printData();

    Simple s3(12);
    s3.printData();

    return 0;
}