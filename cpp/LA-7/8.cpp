#include <iostream>
using namespace std;

class Test
{
    float value;
    public:
    Test(float v = 0.0)
    {
        value = v;
    }
    operator float()
    {
        return value;
    }
};
int main()
{
    Test obj(81.81);
    float x = obj;
    cout << "Float value = " << x << endl;
    return 0;
}