//WAP to copy value of 2 parameters from one constructor to another using copy constructor.
#include<iostream>
#include<string>
using namespace std;

class students
{
public:
    int a,b;
    students() //Default Constructor
    {
        a=0;
        b=0;
    }
    students(int x,int y) //1st Constructor
    {
        a=x;
        b=y;
    }
    students(students & object) //Copy Constructor
    {
        cout<< "\nCopy Constructor Called";
        a=object.a;
        b=object.b;
    }
    void displaydata()
    {
        cout<< "\nA: "<< a <<"\nB: "<< b <<"\n";
    }
};

int main()
{
    students one;
    students two(2,3);

    //one.displaydata();
    two.displaydata();

    students s1(two);
    s1.displaydata();
    return 0;
}
