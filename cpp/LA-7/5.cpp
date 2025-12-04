#include <iostream>
using namespace std;

class Array
{
    int arr[100];
    int size;
    public:
    Array(int s)
    {
        size = s;
    }
    void operator()()
    {
        cout << "Enter " << size << " elements: ";
        for(int i=0;i<size;i++)
        {
            cin >> arr[i];
        }
    }
    void display()
    {
        cout << "Array elements: ";
        for(int i = 0; i<size;i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Array A(5);
    A();
    A.display();
    return 0;
}