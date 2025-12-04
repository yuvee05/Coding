#include <iostream>
#include <string>
using namespace std;

#define MAX 100

class Stack
{
    char arr[MAX];
    int top = -1;

public:
    bool isEmpty()
    {
        return (top == -1);
    }

    bool isFull()
    {
        return (top == MAX - 1);
    }

    void push(char c)
    {
        if (!isFull())
        {
            arr[++top] = c;
        }
    }

    char pop()
    {
        if (!isEmpty())
        {
            return arr[top--];
        }
        return '\0';
    }
};

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    Stack s;
    string rev = "";

    for (int i = 0; i < str.length(); i++)
    {
        s.push(str[i]);
    }

    while (!s.isEmpty())
    {
        rev += s.pop();
    }

    cout << "Reversed string: " << rev << endl;

    if (str == rev)
        cout << "The string is a Palindrome." << endl;
    else
        cout << "The string is not a Palindrome." << endl;

    return 0;
}
