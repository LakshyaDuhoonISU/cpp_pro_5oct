// program to check if a number is prime or not
#include <iostream>
using namespace std;
int main()
{
    int n;
    bool check = false;
    cout << "Enter a number to check whether it is prime or not: ";
    cin >> n;
    if (n == 0 || n == 1)
    {
        cout << "It is neither prime nor not prime." << endl;
    }
    else if (n < 0)
    {
        cout << "Invalid number." << endl;
    }
    else if (n==2)
    {
        cout<<"2 is only even prime number." << endl;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                check = true;
                cout << n << " is not prime." << endl;
                break;
            }
            if (check == false)
            {
                cout << n << " is prime." << endl;
                break;
            }
        }
    }
    return 0;
}