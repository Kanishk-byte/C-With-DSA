#include <iostream>
using namespace std;

// * Pointer Basics -> Used to store the address of Variable.
// * Operator -> Derefrence Operator

int main()
{

    int x = 7;
    int *p = &x; // * Implemented on all the Variables.

    cout << &x << endl; // * Address of x
    cout << p << endl; // * Pointer 
    cout << &p << endl; // * Address of Pointer

    return 0;
}