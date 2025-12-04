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

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    void insertAtBeginning(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        cout << value << " inserted at the beginning" << endl;
    }

    void insertAtEnd(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
        }
        cout << value << " inserted at the end" << endl;
    }

    void insertAtTarget(int value, bool c, int target)
    {
        if (head == nullptr)
        {
            cout << "List is empty" << endl;
            return;
        }
        Node *current = head;
        if (c)
        {

            if (head->data == target)
            {
                insertAtBeginning(value);
                return;
            }
            while (current->next != nullptr && current->next->data != target)
            {
                current = current->next;
            }
            if (current->next == nullptr)
            {
                cout << "Target value not found" << endl;
                return;
            }
            Node *newNode = new Node(value);
            newNode->next = current->next;
            current->next = newNode;
            cout << value << " inserted before " << target << endl;
        }
        else
        {
            while (current != nullptr && current->data != target)
            {
                current = current->next;
            }
            if (current == nullptr)
            {
                cout << "Target value not found" << endl;
                return;
            }
            Node *newNode = new Node(value);
            newNode->next = current->next;
            current->next = newNode;
            cout << value << " inserted after " << target << endl;
        }
    }

    void deleteFromBeginning()
    {
        if (head == nullptr)
        {
            cout << "List is Empty " << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        cout << temp->data << " deleted from the beginning" << endl;
        delete temp;
    }

    void deleteFromEnd()
    {
        if (head == nullptr)
        {
            cout << "List is empty" << endl;
            return;
        }
        Node *current = head;
        if (head->next == nullptr)
        {
            cout << head->data << " deleted from the end" << endl;
            delete head;
            head = nullptr;
            return;
        }
        while (current->next->next != nullptr)
        {
            current = current->next;
        }
        cout << current->next->data << " deleted from the end" << endl;
        delete current->next;
        current->next = nullptr;
    }

    void deleteSpecific(int value)
    {
        if (head == nullptr)
        {
            cout << "List is empty" << endl;
            return;
        }
        if (head->next == nullptr && head->data == value)
        {
            deleteFromBeginning();
            return;
        }
        Node *current = head;
        while (current->next != nullptr && current->next->data != value)
        {
            current = current->next;
        }
        if (current->next == nullptr)
        {
            cout << value << " not found in the list " << endl;
            return;
        }
        Node *temp = current->next;
        current->next = current->next->next;
        delete temp;
        cout << value << " deleted" << endl;
    }

    void search(int value)
    {
        Node *current = head;
        int pos = 1;
        while (current != nullptr && current->data != value)
        {
            current = current->next;
            pos++;
        }
        if (current == nullptr)
        {
            cout << value << " not found in the list " << endl;
            return;
        }
        cout << value << " found at position " << pos << endl;
    }

    void display()
    {
        if (head == nullptr)
        {
            cout << "List is empty " << endl;
            return;
        }
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    LinkedList list;
    int ch, value;
    while (true)
    {
        cout << "\n1. Insert at the beginning" << endl;
        cout << "2. Insert at the end" << endl;
        cout << "3. Insert in between" << endl;
        cout << "4. Delete from the beginning" << endl;
        cout << "5. Delete from the end" << endl;
        cout << "6. Delete specific element" << endl;
        cout << "7. Search element" << endl;
        cout << "8. Display List" << endl;
        cout << "9. Exit" << endl;
        cout << "Enter your choice" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the value " << endl;
            cin >> value;
            list.insertAtBeginning(value);
            break;

        case 2:
            cout << "Enter the value " << endl;
            cin >> value;
            list.insertAtEnd(value);
            break;

        case 3:
            cout << "Enter the value to be inserted" << endl;
            cin >> value;
            cout << "Enter 1 to insert before the target or 0 to insert after the target " << endl;
            int c, target;
            cin >> c;
            cout << "Enter the target" << endl;
            cin >> target;
            list.insertAtTarget(value, c, target);
            break;

        case 4:
            list.deleteFromBeginning();
            break;

        case 5:
            list.deleteFromEnd();
            break;

        case 6:
            cout << "Enter the value to be deleted" << endl;
            cin >> value;
            list.deleteSpecific(value);
            break;

        case 7:
            cout << "Enter the value to be searched" << endl;
            cin >> value;
            list.search(value);
            break;

        case 8:
            list.display();
            break;

        case 9:
            cout << "Exiting..." << endl;
            return 0;
        default:
            cout << "Wrong input" << endl;
            break;
        }
    }
}