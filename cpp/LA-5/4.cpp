#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int rollNo;
public:
    Student(string n, int r)
    {
        name = n;
        rollNo = r;
    }

    virtual void display() = 0; 

    virtual ~Student() 
    {
        cout << "Destroying Student: " << name << endl;
    }
};

class Science : public Student
{
    string subject;
public:
    Science(string n, int r, string s) : Student(n, r)
    {
        subject = s;
    }
    void display()
    {
        cout << "Science Student -> Name: " << name 
             << ", Roll No: " << rollNo 
             << ", Subject: " << subject << endl;
    }
    ~Science()
    {
        cout << "Destroying Science Student: " << name << endl;
    }
};


class Art : public Student
{
    string subject;
public:
    Art(string n, int r, string s) : Student(n, r)
    {
        subject = s;
    }
    void display()
    {
        cout << "Art Student -> Name: " << name 
             << ", Roll No: " << rollNo 
             << ", Subject: " << subject << endl;
    }
    ~Art()
    {
        cout << "Destroying Art Student: " << name << endl;
    }
};

class Commerce : public Student
{
    string subject;
public:
    Commerce(string n, int r, string s) : Student(n, r)
    {
        subject = s;
    }
    void display()
    {
        cout << "Commerce Student -> Name: " << name 
             << ", Roll No: " << rollNo 
             << ", Subject: " << subject << endl;
    }
    ~Commerce()
    {
        cout << "Destroying Commerce Student: " << name << endl;
    }
};

int main()
{
    Student* s[3];

    s[0] = new Science("Rahul", 101, "Physics");
    s[1] = new Art("Aditi", 102, "History");
    s[2] = new Commerce("Neha", 103, "Accounting");

    for(int i = 0; i < 3; i++)
        s[i]->display();

    for(int i = 0; i < 3; i++)
        delete s[i];

    return 0;
}
