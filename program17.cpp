// program to calculate square and cube of a number using functions
#include<iostream>
using namespace std;
int square(int x)
{
    return x*x;
}
int cube(int x)
{
    return x*x*x;
}
int main()
{
    int a,b;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"1.Square of the number"<<endl<<"2.Cube of the number"<<endl<<"Enter your choice: ";
    cin>>b;
    switch(b)
    {
        case 1:
        cout<<"Square of the number: "<<square(a)<<endl;
        break;

        case 2:
        cout<<"Cube of the number: "<<cube(a)<<endl;
        break;

        default:
        cout<<"Invalid choice"<<endl;
    }
    return 0;
}