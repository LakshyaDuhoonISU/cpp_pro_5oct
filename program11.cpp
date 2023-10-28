// program to convert temperature from Celsius to Fahrenheit and vice versa
#include<iostream>
using namespace std;
int main()
{
    char choice;double fahrenheit,celsius;
    cout<<"Temperature Conversion"<<endl<<"Fahrenheit to Celsius(f)"<<endl<<"Celsius to Fahrenheit(c)"<<endl;
    cin>>choice;
    switch(tolower(choice))
    {
        case 'f':
            cout<<"Enter Fahrenheit value: ";
            cin>>fahrenheit;
            celsius=(fahrenheit-32)*5/9;
            cout<<"Celsius value: "<<celsius<<endl;
            break;
        case 'c':
            cout<<"Enter Celsius value: ";
            cin>>celsius;
            fahrenheit=(celsius+32)*9/5;
            cout<<"Fahrenheit value: "<<fahrenheit<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
    return 0;
}