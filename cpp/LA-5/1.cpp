#include <iostream>
using namespace std;
class Alpha
{
    int a1,a2;
    public:
    Alpha(int v1,int v2)
    {
        a1=v1;
        a2=v2;
    }
    ~Alpha()
    {
        cout << "a1 = " << a1 << endl << "a2 = " << a2 << endl;
    }
};

class Beta
{
    int b1,b2;
    public:
    Beta(int v1,int v2)
    {
        b1=v1;
        b2=v2;
    }
    ~Beta()
    {
        cout << "b1 = " << b1 << endl << "b2 = " << b2 << endl;
    }
};

class Gamma : protected Alpha, protected Beta
{
    int c1,c2;
    public:
    Gamma(int v1,int v2,int v3,int v4,int v5,int v6):Alpha(v1,v2),Beta(v3,v4)
    {
        c1=v5;
        c2=v6;
    }
    ~Gamma()
    {
        cout << "c1 = " << c1 << endl << "c2 = " << c2 << endl;
    }
};