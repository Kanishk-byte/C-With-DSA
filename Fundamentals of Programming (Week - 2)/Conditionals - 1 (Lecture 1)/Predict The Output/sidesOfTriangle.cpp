#include <iostream>
using namespace std;

// * Sides of Triangle

int main()
{

    int a, b, c;

    cout << "Enter first side : ";
    cin >> a;

    cout << "Enter second side : ";
    cin >> b;

    cout << "Enter Third side : ";
    cin >> c;

    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        cout << a << ", " << b << ", " << c
            << " can be sides of triangle";
    }
    else
    {
        cout << "Invalid Triangle";
    }

    return 0;
}