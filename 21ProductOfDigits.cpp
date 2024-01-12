// program to calculate product of digits of a number using while loop
#include <iostream>
using namespace std;
int main()
{
    int n, remainder, product = 1;
    cout << "Enter a number to find product of digits: ";
    cin >> n;
    while (n != 0)
    {
        remainder = n % 10;
        product *= remainder;
        n /= 10;
    }
    cout << "Product of digits: " << product << endl;
    return 0;
}
