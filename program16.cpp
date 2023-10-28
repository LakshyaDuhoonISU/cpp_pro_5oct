// program to find the length of the string without using the length function
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;int start=0,length=0;
    cout<<"Enter a string: ";
    cin>>str;
    while(str[start]!='\0')
    {
        length++;
        start++;
    }
    cout<<"Length of the string is: "<<length<<endl;
    return 0;
}