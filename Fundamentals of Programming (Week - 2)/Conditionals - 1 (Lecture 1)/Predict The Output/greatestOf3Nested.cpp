#include <iostream>
using namespace std;

// * Important Question
// Do without using multiple conditions.

int main()
{

    int a, b, c;

    cout << "Enter first number : ";
    cin >> a;

    cout << "Enter second number : ";
    cin >> b;

    cout << "Enter third number : ";
    cin >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is greatest"; // a > b && a > c
        }
        else // c > a && c > b because of a > b
        {
            cout << c << " is greatest"; // c > a > b
        }
    }
    else
    { // b > a
        if (b > c)
        {
            cout << b << " is largest";
        } 
        else // c > b > a
        {
            cout << c << " is largest";
        }
    }

    return 0;
}