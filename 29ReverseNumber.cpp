// program to reverse a number using while loop
#include <iostream>
using namespace std;
int main()
{
    int n, remainder, reverseNo = 0;
    cout << "Enter a number to reverse: ";
    cin >> n;
    while (n != 0)
    {
        remainder = n % 10;
        reverseNo = reverseNo * 10 + remainder;
        n /= 10;
    }
    cout << "Reverse Number: " << reverseNo << endl;
    return 0;
}
