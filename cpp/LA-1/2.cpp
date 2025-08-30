#include <iostream>
using namespace std;
int main()
{
    cout << "Enter temperature in degree Celsius" << endl;
    double c;
    cin >> c;
    double f = 9*c/5 + 32;
    cout << "Temperature in degree Fahrenheit: " << f;
    return 0;
}