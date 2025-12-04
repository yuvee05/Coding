#include <iostream>
using namespace std;

class Fruit
{
    public:
    static int fruits;
    Fruit(int c=0)
    {
        fruits+=c;
    }
};

class Apples : virtual public Fruit
{
    public:
    int apples=0;
    Apples(int c=0)
    {
        apples+=c;
    }
};

class Mangoes : virtual public Fruit
{
    public:
    int mangoes=0;
    Mangoes(int c)
    {
        mangoes+=c;
    }
};

class Result : public Mangoes, public Apples
{
    public:
        Result(int a,int m):Fruit(a+m), Mangoes(m), Apples(a){}
        void display()
        {
            cout << "No. of mangoes: " << mangoes << endl;
            cout << "No. of apples: " << apples << endl;
            cout << "Total no. of fruits: " << fruits << endl;
        }
};

int Fruit::fruits=0;
int main()
{
    Result x(10,20);
    x.display();
    return 0;
}