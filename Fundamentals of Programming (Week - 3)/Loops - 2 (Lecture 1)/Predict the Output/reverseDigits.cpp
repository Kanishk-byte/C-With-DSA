#include <iostream>
using namespace std;

// WAP to print the Reverse of the given number.

int main()
{

    int num;
    cout << "Enter the number : ";
    cin >> num;

    int lastDigit = 0;
    int reverse = 0;

    while (num > 0)
    {
        reverse *= 10;
        lastDigit = num % 10;
        reverse += lastDigit;
        num /= 10;
    }

    cout << "Reverse is : " << reverse;

    return 0;
}