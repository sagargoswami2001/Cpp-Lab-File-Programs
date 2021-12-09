//WAP for implementing multiple inheritance concept using classes.
#include<iostream>
#include<string>
using namespace std;

class teacher
{
public:
    char sagar(char mohit)
    {
        cout << "\n\nEnter Teacher's Initials: ";
        cin >> mohit;
        cout << "Teacher's Initials: ";
        cout << mohit;
    }
};

class chor
{
public:
    void prince()
    {
        cout<< "\n\nSagar is a Bad Boy";
    }
};

class students: teacher,chor
{
public:
    string name;
    int roll_no;
    int age;

    void displaydata(char mohit)
    {
        cout << "\nStudent Roll No.: "<< roll_no << "\nStudent Name: "<< name << "\nStudent Age: "<< age;
        sagar(mohit);
        prince();
    }
};

int main()
{
    char mohit;

    students one;
    cout<< "Enter Student Roll No.: ";
    cin>> one.roll_no;
    cout<< "Enter Student Name: ";
    cin>> one.name;
    cout<< "Enter Student Age: ";
    cin>> one.age;

    one.displaydata(mohit);

    return 0;
}

