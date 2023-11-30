#include <iostream>
using namespace std;

// * Derefrence Operator ->

int main()
{

    int x = 10;
    int *p = &x;

    // * Here, *p = x

    *p = 7; // * It can Update the value of x.

    cout << "Address of x : " << p << endl; // * Gives the Address of the x.
    cout << "Value of x : " << *p << endl;  // * Gives the Value of x.

    return 0;
}