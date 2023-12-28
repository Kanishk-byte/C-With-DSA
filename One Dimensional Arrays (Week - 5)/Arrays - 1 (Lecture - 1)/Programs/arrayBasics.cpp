#include <iostream>
using namespace std;

// * Array -> Data Structure, which stores similar type of data.

int main()
{

    // * Syntax & Declaration

    /*
    * Method - 1 :- Bekar Method
    int arr[7]; // * 0  1  2  3  4  5  6

    arr[0] = 2;
    arr[1] = 4;
    arr[2] = 6;
    arr[3] = 8;
    arr[4] = 10;
    arr[5] = 12;
    arr[6] = 14;

    cout << arr[0];
    */

    // * Method - 2 :- Good Practice

    int arr[7] = {6, 5, 7, 3, 2, 1, 0};
    cout << arr[2];

    return 0;
}