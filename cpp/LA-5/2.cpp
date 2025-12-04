#include <iostream>
#include <cstring>
using namespace std;
class X
{
    char str1[50];
public:
    X(char s1[])
    {
        strcpy(str1, s1);
    }

    ~X()
    {
        cout << "String from class X: " << str1 << endl;
    }
};


class Y
{
    char str2[50];
public:
    Y(char s2[])
    {
        strcpy(str2, s2);
    }

    ~Y()
    {
        cout << "String from class Y: " << str2 << endl;
    }
};


class Z : protected X, protected Y
{
    char str3[100];
public:
    Z(char s1[], char s2[]) : X(s1), Y(s2)
    {
        strcpy(str3, s1);
        strcat(str3, s2);
    }

    ~Z()
    {
        cout << "Concatenated string from class Z: " << str3 << endl;
    }
};


int main()
{
    char s1[50], s2[50];
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    Z obj(s1, s2);
    return 0;
}
