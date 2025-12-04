#include <iostream>
using namespace std;

class calculate
{
protected:
    int a;

public:
    void input()
    {
        cout << "Enter the number" << endl;
        cin >> a;
    }
};

class square : virtual public calculate
{
protected:
    int sq()
    {
        return a * a;
    }
};

class cube : virtual public calculate
{
protected:
    int cu()
    {
        return a * a * a;
    }
};

class result : public square, public cube
{
public:
    void display()
    {
        cout << "Cube of " << a << ": " << cu() << endl;
        cout << "Square of " << a << ": " << sq() << endl;
    }
};

int main()
{
    result x;
    x.input();
    x.display();
    return 0;
}