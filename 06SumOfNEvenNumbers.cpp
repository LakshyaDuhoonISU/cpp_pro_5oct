// program to calculate the sum of all even numbers between 1 and N
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter a number to calculate the sum of all even numbers between 1 and N: ";
    cin >> n;
    if (n <= 1)
    {
        cout << "Invalid number" << endl;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                sum += i;
            }
        }
        cout << "Sum of all even numbers between 1 and " << n << " is: " << sum << endl;
    }
    return 0;
}
