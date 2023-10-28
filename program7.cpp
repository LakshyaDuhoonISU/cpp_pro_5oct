// program to check whether a number is a perfect number
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter a number to check whether it is a perfect number: ";
    cin>>n;
    for (int i=1;i<n;i++)
    {
        if (n%i==0)
        {
            sum+=i;
        }   
    }
    if (sum==n)
    {
        cout<<n<<" is a perfect number"<<endl;
    }
    else
    {
        cout<<n<<" is not a perfect number"<<endl;
    }
    return 0;
}