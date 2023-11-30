#include <iostream>
using namespace std;

// * Null Pointer -> Important

int main()
{

    int *ptr;            // * Random Address Allocated
    cout << ptr << endl; // * 0x401a5b

    // * Case - 1 :-
    int *ptr1 = NULL;     // * Reserved Address
    cout << ptr1 << endl; // * 0

    // * Case - 2 :-
    int *ptr2 = 0;        // * Null Value
    cout << ptr2 << endl; // * 0

    // * Case - 3 :-
    int *ptr3 = '\0';     // * Null Character -> ASCII Value (0).
    cout << ptr3 << endl; // * 0

    return 0;
}