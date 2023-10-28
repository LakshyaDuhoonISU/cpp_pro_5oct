// program to display fibonacci sequence upto N numbers
#include<iostream>
using namespace std;
int main()
{
    int t1=0,t2=1,nextTerm=0,n;
    cout<<"Enter number of terms: ";
    cin>>n;
    cout<<"Fibonacci sequence:"<<endl;
    for (int i=0;i<=n;i++)
    {
        if (i==0)
        {
            cout<<t1<<", ";
            continue;
        }
        if (i==1)
        {
            cout<<t2<<", ";
            continue;
        }
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
        cout<<nextTerm<<", ";
    }
    return 0;
}