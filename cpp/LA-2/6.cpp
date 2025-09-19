#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;
public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};

int employee ::count;

int main()
{
    employee harry, rohan, lovish;

    harry.setData();
    harry.getData();
    employee::getCount();

    rohan.setData();
    rohan.getData();
    employee::getCount();

    lovish.setData();
    lovish.getData();
    employee::getCount();

    return 0;
}