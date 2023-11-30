#include <iostream>
using namespace std;

// WAP to print the sum of the given number.

int main()
{

    int num;
    cout << "Enter the number : ";
    cin >> num;

    int sum = 0;
    int lastDigit = 0;

    while (num > 0)
    {
        lastDigit = num % 10;
        sum += lastDigit;
        num /= 10;
    }

    cout << "Sum is : " << sum;

    return 0;
}