#include <iostream>
using namespace std;

// Predict the Output.

int main()
{

    int a = 5, b, c;

    b = a = 15; // * Hierarchy = Right -> Left 
    c = a < 15; // * Hierarchy = Right -> Left

    cout << "a = " << a << ", b = " << b << " , c = " << c;

    return 0;
}