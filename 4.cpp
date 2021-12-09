//WAP to show swapping of 2 nos. using call by value method.
#include<iostream>
using namespace std;

int swap(int x,int y);

int main()
{
    int x,y,temp;

    cout<< "Enter the Value of X and Y:\n";
    cin>> x>>y;

    cout<< "Values Before Swapping:\nX = "<< x <<"\nY = "<<y;
    swap(x,y);
}

int swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;

    cout<< "\nValues After Swapping:\nX = "<< x <<"\nY = "<<y;
    return 0;
};
