#include <iostream>
using namespace std;

// * Based on Boolean Expressions.  Let input:- 3 2

int main()
{

    int x;
    cout << "Enter first number : ";
    cin >> x; // user will give 'x' a value.

    int y;
    cout << "Enter second number : ";
    cin >> y; // user will give 'y' a value.

    cout << (x != y) << " " << (x >= y);

    return 0;
}