/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +,-,*,/ and displays the results using another function
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operation of your choice and displays the results using another function

    Create another class HybridCalculator and inherit it using these 2 classes..*/

#include <iostream>
#include <math.h>
using namespace std;

class SimpleCalculator
{
protected:
    int num1, num2;

public:
    void get_numSimple()
    {
        cout << "Enter num1: ";
        cin >> num1;
        cout << "Enter num2: ";
        cin >> num2;
    }
    int add()
    {
        return num1 + num2;
    }
    int subtract()
    {
        return num1 - num2;
    }
    int multiply()
    {
        return num1 * num2;
    }
    float divide()
    {
        return num1 * 1.0 / num2;
    }
    void displayresultsSimple()
    {
        cout << " num1 + num2 = " << add() << endl;
        cout << " num1 - num2 = " << subtract() << endl;
        cout << " num1 * num2 = " << multiply() << endl;
        cout << " num1 / num2 = " << divide() << endl;
    }
};

class ScientificCalculator
{
protected:
    int num3, num4;

public:
    void get_numScientific()
    {
        cout << "Enter num3: ";
        cin >> num3;
        cout << "Enter num4: ";
        cin >> num4;
    }
    void displayresultsScientific()
    {
        cout << "sin(num3) = " << sin(num3) << endl;
        cout << "cos(num3) = " << cos(num3) << endl;
        cout << "exp(num4) = " << exp(num4) << endl;
        cout << "tan(num4) = " << tan(num4) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
    public:
    void displayresults()
    {
        displayresultsSimple();
        displayresultsScientific();
    }
};

int main()
{
    HybridCalculator a;
    a.get_numSimple();
    a.get_numScientific();
    a.displayresults();
    return 0;
}