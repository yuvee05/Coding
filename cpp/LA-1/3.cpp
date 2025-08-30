#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << i << " ";
    }
    cout << endl;


    int i = 0;
    for (; i < 5; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    
    i = 0;
    for (; i < 5;)
    {
        cout << i << " ";
        i++;
    }
    cout << endl;


    i = 0;
    for (;;)
    {
        if (i >= 5)
            break;
        cout << i << " ";
        i++;
    }
    cout << endl;


    i = 0;
    while (i < 5)
    {
        cout << i << " ";
        i++;
    }
    cout << endl;


    i = 0;
    while (true)
    {
        if (i >= 5)
            break;
        cout << i << " ";
        i++;
    }
    cout << endl;


    i = 0;
    do
    {
        cout << i << " ";
        i++;
    } while (i < 5);
    cout << endl;

    return 0;
}
