// program to simulate a simple ATM machine
#include<iostream>
using namespace std;
class ATM
{
    private:
        int pin;
        int account;
        int amount;

    public:
        void getPin(int pin)
        {
            cout<<"Enter 4 digit pin: ";
            cin>>pin;
            if (pin==0)
            {
                cout<<"Invalid Pin"<<endl;
            }
        }
        void getAccount(int account)
        {
            cout<<"Choose Account Type"<<endl<<"1.Current Account"<<endl<<"2.Savings Account"<<endl;
            cin>>account;
            switch(account)
        }
};