// program to check whether the given number is odd or even
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if (a%2==0)
    {
        cout<<a<<" is even"<<endl;
    }
    else
    {
        cout<<a<<" is odd"<<endl;
    }
    return 0;
}