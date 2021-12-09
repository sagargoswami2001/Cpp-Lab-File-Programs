//WAP to input name, roll no. & age of 3 students using a structure & displays them.
#include<iostream>
using namespace std;

struct student
{
    char student_name[50];
    int rollno;
    int age;
};

int main()
{
    int i;
    struct student S[3];

    for(i=0; i<3; i++)
    {
        cout << "\nEnter the Student Name: ";
        cin >> S[i].student_name;

        cout << "Enter Roll No.: ";
        cin >> S[i].rollno;

        cout << "Enter Age: ";
        cin >> S[i].age;
    }

    cout << "\nStudent Details:-\n ";
    for(i=0; i<3; i++)
    {
        cout << "\nStudent Name: " << S[i].student_name;
        cout << "\nRoll No.: " << S[i].rollno;
        cout << "\nAge: " << S[i].age;
        cout << "\n\n";
    }
    return 0;
}
