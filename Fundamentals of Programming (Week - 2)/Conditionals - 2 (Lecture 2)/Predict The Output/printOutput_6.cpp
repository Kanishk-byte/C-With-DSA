#include <iostream>
using namespace std;

// Predict the Output.

int main()
{

    int x = 3, y, z;

    y = x = 10; // * Hierarchy : Right to left
    z = x < 10; // * Hierarchy : Right to left
    cout << "x = " << x << " y = " << y << " z = " << z;

    return 0;
}