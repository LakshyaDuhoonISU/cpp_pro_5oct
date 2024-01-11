// program to calculate factorial of a number using recursion
#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    int n;
    cout << "Enter number to calculate its factorial: ";
    cin >> n;
    cout << "Factorial: " << fact(n) << endl;
    return 0;
}
