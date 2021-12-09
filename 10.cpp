//WAP create a class student take public data members roll no, name & age and enter these data from main function.
#include<iostream>
#include<string>
using namespace std;

class students
{
public:
    string Name;
    int rollno;
    int age;

    void displaydata()
    {
        cout<< "\nStudent Roll No.: "<<rollno << "\nStudent Name: "<<Name << "\nStudent Age: "<<age;
    }
};

int main()
{
    students one;
    cout<< "Enter Student Roll No.: ";
    cin>> one.rollno;
    cout<< "Enter Student Name: ";
    cin>> one.Name;
    cout<< "Enter Student Age: ";
    cin>> one.age;

    one.displaydata();

    return 0;
}
