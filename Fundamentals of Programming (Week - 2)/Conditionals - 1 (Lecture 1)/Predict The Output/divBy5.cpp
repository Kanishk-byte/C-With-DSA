#include <iostream>
using namespace std;

// Take positive integer input check if it is divisible by 5 or not.

int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;

    if (n % 5 == 0)
    {
        cout << "Yes, it is divisible by 5.";
    }
    else
    {
        cout << "No, it is not divisible by 5";
    }

    return 0;
}