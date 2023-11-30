#include <iostream>
using namespace std;

// * Most Important.

int main()
{

    // cout << (1 != 2 < 5); // * Right to left [Hierarchy]

    int x;

    x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20 : 30;
    cout << "Value of x : " << x;

    return 0;
}