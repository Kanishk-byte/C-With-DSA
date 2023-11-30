#include <iostream>
using namespace std;

// * Find Output of the Code. Let input:- 2 3 6

int main()
{

    int x;
    cout << "Enter first number : ";
    cin >> x; // user will give ‘x’ a value.

    int y, m;
    cout << "Enter second number and value for taking modulus : ";
    cin >> y >> m; // user will give ‘y’ a value.

    int Z = (x * y) % m;
    cout << "Output is: " << Z;

    return 0;
}