//WAP to show working of parameterized constructor.
#include<iostream>
#include<string>
//using namespace std;
using std::string;
using std::cout;
using std::cin;

class students
{
public:
    string Name;
    int rollno;
    int age;

    students(string x,int y,int z);

    void displaydata()
    {
        cout<< "\n\nStudent Roll No.: "<<rollno << "\nStudent Name: "<<Name << "\nStudent Age: "<<age;
    }
};

students::students(string x,int y,int z)
{
    Name = x;
    rollno = y;
    age = z;
}

int main()
{
    students one("Sagar", 40, 20 ),two("Mohit", 27, 20 );
    one.displaydata();
    two.displaydata();

    return 0;
}
