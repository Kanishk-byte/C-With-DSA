#include <iostream>
using namespace std;

// * Sum of 2 numbers using pointers.

int main()
{

    /*
    int x = 6;
    int y = 7;

    int *p1 = &x;
    int *p2 = &y;

    cout << (*p1 + *p2); // * Sum using pointers.
    */

    // * By taking pointer input.

    int x;
    int y;

    int *p1 = &x;
    int *p2 = &y;

    cout << "Enter *p1 : ";
    cin >> *p1;

    cout << "Enter *p2 : ";
    cin >> *p2;

    cout << (*p1 + *p2);

    return 0;
}