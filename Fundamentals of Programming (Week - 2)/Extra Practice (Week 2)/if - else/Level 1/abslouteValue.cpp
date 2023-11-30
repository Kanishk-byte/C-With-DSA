#include <iostream>
using namespace std;

// Write a program to print absolute vlaue of a number entered by user.

int main()
{

    int a;
    cout << "Enter the value : ";
    cin >> a;

    if (a < 0)
    {
        a = -(a);
    }

    cout << "The Absloute Value of number is : " << a;

    return 0;
}