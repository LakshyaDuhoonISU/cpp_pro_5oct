// program to print multiplication table of a given number
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number to print multiplication table of: ";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    return 0;
}
