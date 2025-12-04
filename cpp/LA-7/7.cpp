#include <iostream>
using namespace std;

class Test
{
    float value;
    public:
    Test(float v)
    {
        value = v;
    }

    void show()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    float x = 81.81;
    Test obj = x;
    obj.show();
    return 0;
}