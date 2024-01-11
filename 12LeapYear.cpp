// program to check if a year is a leap year or not
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    if (year%100==0)
    {
        if (year%400==0)
        {
            cout<<year<<" is a leap year"<<endl;
        }
        else
        {
            cout<<year<<" is not a leap year"<<endl;
        }
    }
    else if (year%4==0)
    {
        cout<<year<<" is a leap year"<<endl;
    }
    else
    {
        cout<<year<<" is not a leap year"<<endl;
    }
    return 0;
}
