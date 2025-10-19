#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class queue
{
    Node *start, *end;
    int size = 0;

public:
    queue()
    {
        start = end = nullptr;
    }

    void push(int val)
    {
        Node *newNode = new Node(val);
        if (start == nullptr)
        {
            start = end = newNode;
        }
        else
        {
            end->next = newNode;
            end = newNode;
        }
        size++;
    }

    int top()
    {
        return start->data;
    }

    bool isEmpty()
    {
        if(start=nullptr)
            return true;
        else
            return false;
    }

    int pop()
    {
        Node *temp = start;
        start = start->next;
        delete temp;
        size--;
        return top();
    }
};

int main()
{
    queue a;
    a.push(1);
    a.push(2);
    a.push(3);
    
    cout << a.pop() << endl;
    cout << a.pop() << endl;
    a.push(4);
    cout << a.top() << endl;
    cout << a.pop() << endl;
}