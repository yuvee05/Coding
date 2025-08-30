#include <iostream>
#include <string>
using namespace std;
class student
{
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

public:
    void addDetails(string n, int r, string d, string h, float cgpa)
    {
        name = n;
        rollNo = r;
        degree = d;
        hostel = h;
        currentCGPA = cgpa;
    }
    void updateDetails(string n, int r, string d, string h, float cgpa)
    {
        name = n;
        rollNo = r;
        degree = d;
        hostel = h;
        currentCGPA = cgpa;
    }
    void updateCGPA(float cgpa)
    {
        currentCGPA = cgpa;
    }
    void updateHostel(string h)
    {
        hostel = h;
    }
    void displayDetails();
};

void student :: displayDetails()
{
    cout << "\n--- Student Details ---\n";
        cout << "Name       : " << name << endl;
        cout << "Roll No    : " << rollNo << endl;
        cout << "Degree     : " << degree << endl;
        cout << "Hostel     : " << hostel << endl;
        cout << "Current CGPA: " << currentCGPA << endl;
}

int main()
{
    student s1;

    s1.addDetails("Rahul", 101, "B.Tech CSE", "Hostel-D", 8.5);
    s1.displayDetails();

    
    cout << "\nUpdating CGPA...\n";
    s1.updateCGPA(9.1);
    s1.displayDetails();


    cout << "\nUpdating Hostel...\n";
    s1.updateHostel("Hostel-B");
    s1.displayDetails();

   
    cout << "\nUpdating All Details...\n";
    s1.updateDetails("Neha", 102, "B.Tech ECE", "Hostel-Q", 8.9);
    s1.displayDetails();

    return 0;
}