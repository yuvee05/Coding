#include <iostream>
using namespace std;
class Time
{
    int h,m,s;
    public:
    Time(){};
    Time(int a, int b, int c)
    {
        h=a;
        m=b;
        s=c;
    }
    Time operator+(const Time &t)
    {
        Time temp;
        temp.h=(h+t.h)+((m+t.m)+(s+t.s)/60)/60;
        temp.m=((m+t.m)+(s+t.s)/60)%60;
        temp.s=(s+t.s)%60;
        return temp;
    }
    void show()
    {
        cout << h << ":" << m << ":" << s << endl;
    }
};
int main()
{
    Time t1(5,15,34),t2(9,53,58),t3;
    t3 = t1 + t2;
    t3.show();
    return 0;
}