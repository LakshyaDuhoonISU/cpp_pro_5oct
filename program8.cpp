// program to find the roots of a quadratic equation
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,d1,d2,x;
    cout<<"Enter coefficients(a,b,c): ";
    cin>>a>>b>>c;
    if (a==0 || b==0 || c==0)
    {
        cout<<"Invalid coefficients"<<endl;
    }
    else
    {
        x=b*b-4*a*c;
        if (x>0)
        {
            cout<<"Roots of quadratic equation are real and distinct"<<endl;
            d1=-b+sqrt(x)/2*a;
            d2=-b-sqrt(x)/2*a;
            cout<<"Root 1: "<<d1<<endl<<"Root 2: "<<d2<<endl;
        }
        else if (x==0)
        {
            d1=-b/2*a;
            cout<<"Root of quadratic equation is real and equal"<<endl<<"Root: "<<d1<<endl;
        }
        else
        {
            d1=-b/2*a;
            d2=sqrt(-x)/2*a;
            cout<<"Roots of quadratic equation are imaginary and unequal"<<endl;
            cout<<"Real Part: "<<d1<<"i"<<endl<<"Imaginary Part: "<<d2<<"j"<<endl;
        }
    }
}