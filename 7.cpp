//WAP to find largest no. of 5 nos. from an array.
#include<iostream>
using namespace std;

int main()
{
    int l,arr[50];

    cout<< "Enter the Size of Array: ";
    cin>> l;

    cout<< "\nEnter Array Values:\n";
    for(int i=0;i<l;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<l;i++)
        if(arr[0]<arr[i])
        {
            arr[0]=arr[i];
        }
        cout<< "\nLargest Element: " <<arr[0];
        return 0;
}
