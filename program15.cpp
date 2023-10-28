// program to reverse a string without using reverse function
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;int start,end;
    cout<<"Enter a string: ";
    cin>>str;
    start=0; end=str.length()-1;
    while (start<end)
    {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    cout<<"Reversed string: "<<str<<endl;
}