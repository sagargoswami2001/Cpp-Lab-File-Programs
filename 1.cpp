//WAP to find factorial of a given number using recursion.
#include<iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n;
    cout<< "Enter an Positive Number: ";
    cin>> n;

    cout<< "Factorial of " << n << " = " << factorial(n);
    return 0;
}

int factorial(int n)
{
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}
