#include <iostream>
using namespace std;
int val = 50;
int main()
{
    int val = 10;
    cout << "Local value: " << val << endl;
    cout << "Global value: " << ::val << endl;
    return 0;
}
