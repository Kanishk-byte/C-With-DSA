#include <iostream>
using namespace std;

// Take input and check print it is even or odd.

/*
 * Even -> If n is divisible by 2.
 * Odd -> If n is not divisible by 2.
*/

int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }

    return 0;
}