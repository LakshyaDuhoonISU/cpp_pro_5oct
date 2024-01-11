// program to calculate the area of a triangle given its base and height
#include<iostream>
using namespace std;
int main()
{
    int b,h,area;
    cout<<"Enter height of triangle: ";
    cin>>h;
    cout<<"Enter base of triangle: ";
    cin>>b;
    if (b<=0 || h<=0)
    {
        cout<<"Enter positive values"<<endl;
    }
    else
    {
        area=0.5*b*h;
        cout<<"Area of triangle: "<<area<<endl;
    }
    return 0;
}
