//WAP to print sum of elements above the diagonal elements in a matrix of 3*3 elements.
#include<iostream>
using namespace std;

int main()
{
    int i,j,sumofdiagonal;

    int a[3][3]={1,2,3,
                 4,5,6,
                 7,8,9};

    sumofdiagonal=0;

    for(i=0;i<3;i++)
    {
        cout<< '\n';
        for(j=0;j<3;j++)
        {
            if(i==0&&j==0)
            {
                sumofdiagonal=a[0][0];
            }
            else if(j >= i)
            {
                sumofdiagonal=sumofdiagonal+a[i][j];
                a[i][j]=a[i][j+1];
            }
        }
    }
    cout<< "Sum of Upper Diagonal Elements Are: ";
    cout<< sumofdiagonal;
}
