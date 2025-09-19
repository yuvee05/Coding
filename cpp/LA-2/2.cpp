#include <iostream>
using namespace std;
class rectangle
{
    int length , breadth;
    public:
        void setData(void)
        {
            cout << "Enter length of rectangle: "<< endl;
            cin >> length;
            cout << "Enter breadth of rectangle: "<< endl;
            cin >> breadth;
        }
        void getArea(void)
        {
            cout << "Area of this rectangle: " << length*breadth << endl;
        }
};
int main()
{
    rectangle r[4];
    for(int i=0;i<4;i++)
    {
        r[i].setData();
        r[i].getArea();
    }
    return 0;
}