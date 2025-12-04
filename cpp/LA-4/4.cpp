#include <iostream>
#include <string>
using namespace std;
class Student
{
    protected:
    int RollNo;
    string Name;
    public:
    void GetDetails()
    {
        cout << "Enter student roll number: ";
        cin >> RollNo;
        cout << "Enter name of the student: ";
        cin >> Name; 
    }
    void DisplayDetails()
    {
        cout << RollNo << "      \t\t"<<  Name << "   \t"; 
    }
};
class Marks : public Student
{
    protected:
    int Subject1, Subject2;
    public:
    void GetMarks()
    {
        cout << "Enter the marks of subject 1: ";
        cin >> Subject1;
        cout << "Enter the marks of subject 2: ";
        cin >> Subject2;
        cout << endl;
    }
    void DisplayMarks()
    {
        cout << Subject1 << "       \t" << Subject2 << "       \t";
    }
};
class Result : public Marks
{
    int TotalMarks;
    public:
    void CalculateResult()
    {
        TotalMarks=Subject1+Subject2;
    }
    void DisplayResult()
    {
        if(TotalMarks>=40)
            cout << TotalMarks << "  \t PASSED" << endl;
        else
            cout << TotalMarks << "  \t FAILED" << endl;
    }
};
int main()
{
    cout << "Enter the number of students: " ;
    int n;
    cin >> n;
    Result s[n];
    for(int i=0;i<n;i++)
    {
        s[i].GetDetails();
        s[i].GetMarks();
        s[i].CalculateResult();
    }
    cout << "Roll No \t Name \t Subject 1 \t Subject 2 \t Total \t Result \n";
    for(int i=0;i<n;i++)
    {
        s[i].DisplayDetails();
        s[i].DisplayMarks();
        s[i].DisplayResult();
    }

    return 0;
}