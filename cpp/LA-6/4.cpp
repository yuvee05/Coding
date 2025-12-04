#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int roll;

public:
    virtual void getdata() = 0;
    virtual void display() = 0;
    virtual ~Student() {}
};

class Engineering : public Student
{
    string branch;

public:
    void getdata()
    {
        cout << "Enter name, roll, and branch (Engineering): ";
        cin >> name >> roll >> branch;
    }
    void display()
    {
        cout << "Engineering Student: " << name << " " << roll << " " << branch << endl;
    }
};

class Medicine : public Student
{
    string specialization;

public:
    void getdata()
    {
        cout << "Enter name, roll, and specialization (Medicine): ";
        cin >> name >> roll >> specialization;
    }
    void display()
    {
        cout << "Medicine Student: " << name << " " << roll << " " << specialization << endl;
    }
};

class Science : public Student
{
    string subject;

public:
    void getdata()
    {
        cout << "Enter name, roll, and subject (Science): ";
        cin >> name >> roll >> subject;
    }
    void display()
    {
        cout << "Science Student: " << name << " " << roll << " " << subject << endl;
    }
};

int main()
{
    Student *s[3];
    Engineering e;
    Medicine m;
    Science sc;

    s[0] = &e;
    s[1] = &m;
    s[2] = &sc;

    for (int i = 0; i < 3; i++)
        s[i]->getdata();

    for (int i = 0; i < 3; i++)
        s[i]->display();

    return 0;
}
