#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=nullptr;
    }
};

class stack
{
    Node *TOP;
    int SIZE = 0;
    public:
    stack()
    {
        TOP=nullptr;
    }
    void push(int value)
    {
        Node *newNode = new Node(value);
        newNode->next= TOP;
        TOP=newNode;
        SIZE++;
    }
    int top()
    {
        return TOP->data;
    }
    bool isEmpty()
    {
        if(TOP==nullptr)
            return true;
        else
            return false;
    }
    int pop()
    {
        Node *temp = TOP;
        TOP=TOP->next;
        delete temp;
        SIZE--;
        return top();
    }
    int size()
    {
        return SIZE;
    }
};

int main()
{
    stack a;
    a.push(1);
    a.push(2);
    a.push(3);
    
    cout << a.pop() << endl;
    cout << a.size() << endl;
    a.push(4);
    cout << a.top() << endl;
    cout << a.size() << endl;
}