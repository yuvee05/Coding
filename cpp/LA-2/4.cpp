#include <iostream>
using namespace std;
class calculate
{
    int a;
public:
    void val(void)
    {
        cout << "Enter the number" << endl;
        cin >> a;
    }
    void cube(void)
    {
        cout << "Cube of "<< a <<": " << a*a*a;
    }
};
int main()
{
    calculate c;
    c.val();
    c.cube();
    return 0;
}