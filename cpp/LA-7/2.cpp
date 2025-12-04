#include <iostream>
#include <string.h>
using namespace std;

class STRING
{
    char str[100];

public:
    STRING() {}
    STRING(const char s[])
    {
        strcpy(str, s);
    }

    bool operator==(const STRING &s)
    {
        return (strcmp(str, s.str) == 0);
    }

    STRING operator+(const STRING &s)
    {
        STRING temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }

    void display()
    {
        cout << str;
    }
};

int main()
{
    STRING s1("Hello ");
    STRING s2("World");
    STRING s3;

    s3 = s1 + s2;

    cout << "Concatenated string: ";
    s3.display();

    if (s1 == s2)
        cout << "\nStrings are equal";
    else
        cout << "\nStrings are not equal";
    return 0;
}
