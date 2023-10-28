// program to find sum of all numbers between 1 and N using a loop
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter a number to find sum between 1 and n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum of all numbers between 1 and n: " << sum << endl;
    return 0;
}