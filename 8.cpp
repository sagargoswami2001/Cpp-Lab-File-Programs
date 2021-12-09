//WAP to show working of static variable using a function.
#include<iostream>
using namespace std;

void counter()
{
    static int count=0; //Cout is not getting initialized for each function call due to it being static.
    cout << count ++;
}

int main()
{
    for(int i=0;i<5;i++)
    {
        counter();
    }
}
