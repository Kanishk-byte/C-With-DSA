#include <iostream>
using namespace std;

// * Value of p and q.

int main()
{

    int num1;
    int p = 5, q = 10;

    // * Operation perform from Right to Left.
    p += q -= p;
    cout << p << " " << q << endl;

    return 0;
}