#include <iostream>
using namespace std;

// * Double Pointer -> Used to store address of a Single Pointer.
// * There can also Triple Pointer.

int main()
{
    /*
    * Case - 1 :-
    int x = 5;           // * Value of x
    cout << x << endl;   // * 5

    int *ptr = &x;       // * Address of x
    cout << ptr << endl; // * 0x61ff08

    int **p = &ptr;      // * Address of ptr
    cout << p << endl;   // * 0x61ff04
    */

    /*
    * Case - 2 :-
    int x = 5;           // * Value of x
    cout << x << endl;   // * 5

    int *ptr = &x;       // * Address of x
    cout << *ptr << endl; // * 5

    int **p = &ptr;      // * Address of ptr
    cout << **p << endl;   // * 5
    */

    // * Case - 3 :-
    int x = 5;           // * Value of x
    cout << &x << endl;   // * 0x61ff08

    int *ptr = &x;       // * Address of x
    cout << ptr << endl; // * 0x61ff08

    int **p = &ptr;      // * Address of ptr
    cout << *p << endl;   // * 0x61ff08

    return 0;
}