#include <iostream>
#include <cstdlib>
using namespace std;

class Array
{
    int *arr;
    int size;
    public:
    Array(int s)
    {
        size = s;
        arr = new int(size);
    }
    int& operator[](int index)
    {
        if(index<0 || index>=size)
        {
            cout << "Error: Array Index " << index << " Out of Bounds!" << endl;
            exit(1);
        }
        return arr[index];
    }
    void input()
    {
        cout << "Enter " << size << " elements: \n";
        for(int i=0;i<size;i++)
            cin >> arr[i];
    }

    void display()
    {
        cout << "Array elements: ";
        for(int i=0;i<size;i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Array A(5);
    A.input();
    A.display();

    cout <<"Enter index to access: ";
    int idx;
    cin >> idx;
    cout << "Value at index " << idx << " = " << A[idx] << endl;
    return 0;
}