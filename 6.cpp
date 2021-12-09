//WAP to show overloading of area function.
#include<iostream>
using namespace std;

int area(int s)
{
    return(s*s);
};

int area(int l,int b)
{
    return(l*b);
}

int main()
{
    int l,s,b;

    cout<< "Enter the Value of L,S and B:\n";
    cin>> l>>s>>b;

    cout<< "Area of Square is "<<area(s);
    cout<< "\nArea of Rectangle is "<<area(l,b);
    return 0;
}
