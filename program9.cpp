// program to calculate power of a number using a loop
#include<iostream>
using namespace std;
int main()
{
    int b,e;
    cout<<"Enter a number to calculate its power: ";
    cin>>b;
    int a=b;
    cout<<"Enter it's exponent: ";
    cin>>e;
    int i=e;
    if (e==0)
    {
        cout<<1<<endl;
    }
    else if (e==1)
    {
        cout<<b<<endl;
    }
    else if (e>=2)
    {
        while (i>=2)
        {
            b*=a;
            i--;
        }
        cout<<a<<"^"<<e<<" = "<<b<<endl;
    }
    else if (e==-1)
    {
        cout<<"1/"<<b<<endl;
    }
    else if (e<=-2)
    {
        while (i<=-2)
        {
            b*=a;
            i++;
        }
        cout<<"1/"<<b<<endl;
    }
    return 0;
}