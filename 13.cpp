//WAP to implementing an array of objects in a class using member functions to input & display data.
#include<iostream>
using namespace std;

class employee
{
private:
    int id;
    int age;
    float salary;

public:
    void displaydata(int i);
    void setdata(int i)
    {
        cout<< "Enter "<< i <<" Employee ID: ";
        cin>> id;
        cout<< "Enter "<< i <<" Employee Age: ";
        cin>> age;
        cout<< "Enter "<< i <<" Employee Salary: ";
        cin>> salary;
    }
};

    void employee:: displaydata(int i)
    {
        cout<< "\nEmployee " << i <<" ID: " << id <<" \nAge: " << age <<" \nSalary: " << salary <<"\n\n";
    }

    int main()
    {
        int i;
        employee one[4];

        for(i=1;i<=4;i++)
        {
            one[i].setdata(i);
            one[i].displaydata(i);
        }
        return 0;
    }
