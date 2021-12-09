//WAP to overload a binary operator ‘+’ to add two values using objects.
#include<iostream>
using namespace std;

class imaginary
{
private:
    int a;
    int b;

public:
    imaginary(int v1)
    {
        b=v1;
    }
    void operator+(imaginary obj1)
    {
        a = b + obj1.b;
    }
    void printdata(int i)
    {
        cout<< "Your imaginary No." << i << " " << b << "i\n";
    }
    void printcomplexsum()
    {
        cout<< "Sum of Your Complex No. " << a << "i\n";
    }
};

int main()
{
    imaginary obj0(2),obj1(4);

    obj0.printdata(0);

    obj1.printdata(1);

    obj0+obj1;
    obj0.printcomplexsum();

    return 0;
}
