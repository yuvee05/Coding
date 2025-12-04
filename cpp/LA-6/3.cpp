#include <iostream>
#include <cmath>
using namespace std;

float area(float base, float height)
{
    return 0.5 * base * height;
}

float area(float side)
{
    return (sqrt(3) / 4) * side * side;
}

float area(float equal_side, float base, bool)
{
    float height = sqrt((equal_side * equal_side) - ((base * base) / 4));
    return 0.5 * base * height;
}

int main()
{
    float base, height, side, equal_side;
    cout << "Enter base and height of right-angled triangle: ";
    cin >> base >> height;
    cout << "Area of Right-Angled Triangle = " << area(base, height) << endl;

    cout << "Enter side of equilateral triangle: ";
    cin >> side;
    cout << "Area of Equilateral Triangle = " << area(side) << endl;

    cout << "Enter equal side and base of isosceles triangle: ";
    cin >> equal_side >> base;
    cout << "Area of Isosceles Triangle = " << area(equal_side, base, true) << endl;

    return 0;
}
