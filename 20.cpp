//WAP to implement template class using function.
#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

template<class No>

void swap(No &x, No &y)
{
    No temp = x;
    x = y;
    y = temp;
}

void fun(int a, int b, float c, float d)
{
    cout << "\nA and B Before Swapping: " << a << "\t" << b;
    swap(a,b);
    cout << "\nA and B After Swapping:  " << a << "\t" << b;
    cout << "\n\nC and D Before Swapping: " << c << "\t" << d;
    swap(c,d);
    cout << "\nC and D After Swapping:  " << c << "\t" << d;
}

int main()
{
    int a,b;
    float c,d;

    cout << "Enter A,B Values(integer):\n";
    cin >> a>>b;

    cout << "\nEnter C,D Values(float):\n";
    cin >> c>>d;

    fun(a,b,c,d);

    return 0;
}
