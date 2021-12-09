//WAP to show swapping of 2 nos. using reference method.
#include<iostream>
using namespace std;

int swap(int *x,int *y);

int main()
{
    int x,y;

    cout<< "Enter the Value of X and Y:\n";
    cin>> x>>y;

    cout<< "Values Before Swapping:\nX = "<< x <<"\nY = "<<y;
    swap(&x,&y);

    cout<< "\nValues After Swapping:\nX = "<< x <<"\nY = "<<y;
}

int swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return 0;
};
