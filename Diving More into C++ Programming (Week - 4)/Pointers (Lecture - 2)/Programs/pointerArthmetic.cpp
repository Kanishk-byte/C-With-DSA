#include <iostream>
using namespace std;

// * Pointer Arthmetic :- Address always stores in Hexa - Decimal numbers.
// * 0  1  2  3  4  5  6  7  8  9  10  11  12  13  14  15 --> Normal
// * 0  1  2  3  4  5  6  7  8  9  A   B   C   D   E   F --> Hexa - Decimal

int main()
{
    /*
    * Case 1 :-
    int x = 7;
    int* ptr = &x;

    * (The Address have diffrence according to their respective data - types.)
    * (Both Addresses hve thediffrence of 4 bytes.)

    cout << ptr << endl; // * Orignal Address -> 0x61ff08

    ptr = ptr + 1;

    cout << ptr << endl; // * Modified Address -> 0x61ff0c
    */

    /*
    * Case 2 :-
    int x = 4;
    int* ptr = &x; // * a600

    cout << *ptr << endl; // * Value of x -> 4

    ptr++; // * a600 + 4 = a604

    cout << *ptr << endl; // * 6422284

    return 0;
    */

    //* Case 3 :-
    int x = 4;
    int* ptr = &x; // * a600

    cout << *ptr << endl; // * Value of x -> 4

    *ptr = *ptr + 1; // * 4 + 1 = 5
    // * (*ptr)++;

    cout << *ptr << endl; // * 5

    return 0;

}